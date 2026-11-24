; llc -mtriple=amdgcn-amd-amdpal -mcpu=gfx900 -filetype=obj: VINTRP attribute interpolation, an MTBUF
; typed load and store, and an MIMG sample. gfx900_graphics.bin is its .text followed by eight
; s_endpgm words, since a pixel shader ends by falling into its epilog.
target triple = "amdgcn-amd-amdpal"
declare float @llvm.amdgcn.interp.p1(float, i32, i32, i32)
declare float @llvm.amdgcn.interp.p2(float, float, i32, i32, i32)
declare <4 x float> @llvm.amdgcn.raw.tbuffer.load.v4f32(<4 x i32>, i32, i32, i32, i32)
declare void @llvm.amdgcn.raw.tbuffer.store.v4f32(<4 x float>, <4 x i32>, i32, i32, i32, i32)
declare <4 x float> @llvm.amdgcn.image.sample.2d.v4f32.f32(i32, float, float, <8 x i32>, <4 x i32>, i1, i32, i32)

define amdgpu_ps <4 x float> @shade(<8 x i32> inreg %rs, <4 x i32> inreg %ss, <4 x i32> inreg %buf, i32 inreg %prim, float %i, float %j, i32 %off) {
  %u1 = call float @llvm.amdgcn.interp.p1(float %i, i32 0, i32 1, i32 %prim)
  %u = call float @llvm.amdgcn.interp.p2(float %u1, float %j, i32 0, i32 1, i32 %prim)
  %v1 = call float @llvm.amdgcn.interp.p1(float %i, i32 1, i32 1, i32 %prim)
  %v = call float @llvm.amdgcn.interp.p2(float %v1, float %j, i32 1, i32 1, i32 %prim)
  %t = call <4 x float> @llvm.amdgcn.image.sample.2d.v4f32.f32(i32 15, float %u, float %v, <8 x i32> %rs, <4 x i32> %ss, i1 0, i32 0, i32 0)
  %b = call <4 x float> @llvm.amdgcn.raw.tbuffer.load.v4f32(<4 x i32> %buf, i32 %off, i32 0, i32 126, i32 0)
  %c = fmul <4 x float> %t, %b
  call void @llvm.amdgcn.raw.tbuffer.store.v4f32(<4 x float> %c, <4 x i32> %buf, i32 %off, i32 16, i32 126, i32 0)
  ret <4 x float> %c
}
