; llc -mtriple=amdgcn-amd-amdpal -mcpu=gfx1100 -filetype=obj: image load, sample, NSA sample_d,
; store and atomic. gfx1100_image.bin is its .text with the s_code_end padding after the
; return replaced by s_endpgm, since a pixel shader ends by falling into its epilog.
target triple = "amdgcn-amd-amdpal"
declare <4 x float> @llvm.amdgcn.image.load.2d.v4f32.i32(i32, i32, i32, <8 x i32>, i32, i32)
declare <4 x float> @llvm.amdgcn.image.sample.2d.v4f32.f32(i32, float, float, <8 x i32>, <4 x i32>, i1, i32, i32)
declare <4 x float> @llvm.amdgcn.image.sample.d.2d.v4f32.f32.f32(i32, float, float, float, float, float, float, <8 x i32>, <4 x i32>, i1, i32, i32)
declare void @llvm.amdgcn.image.store.2d.v4f32.i32(<4 x float>, i32, i32, i32, <8 x i32>, i32, i32)
declare i32 @llvm.amdgcn.image.atomic.add.2d.i32.i32(i32, i32, i32, <8 x i32>, i32, i32)
declare i32 @llvm.amdgcn.workitem.id.x()
declare i32 @llvm.amdgcn.workitem.id.y()

define amdgpu_ps <4 x float> @img(<8 x i32> inreg %rs, <4 x i32> inreg %ss, float %u, float %v) {
  %x = call i32 @llvm.amdgcn.workitem.id.x()
  %y = call i32 @llvm.amdgcn.workitem.id.y()
  %a = call <4 x float> @llvm.amdgcn.image.load.2d.v4f32.i32(i32 15, i32 %x, i32 %y, <8 x i32> %rs, i32 0, i32 0)
  %b = call <4 x float> @llvm.amdgcn.image.sample.2d.v4f32.f32(i32 15, float %u, float %v, <8 x i32> %rs, <4 x i32> %ss, i1 0, i32 0, i32 0)
  %d = call <4 x float> @llvm.amdgcn.image.sample.d.2d.v4f32.f32.f32(i32 15, float %u, float %v, float %u, float %v, float %v, float %u, <8 x i32> %rs, <4 x i32> %ss, i1 0, i32 0, i32 0)
  %c = fadd <4 x float> %a, %b
  %e = fadd <4 x float> %c, %d
  call void @llvm.amdgcn.image.store.2d.v4f32.i32(<4 x float> %e, i32 15, i32 %y, i32 %x, <8 x i32> %rs, i32 0, i32 0)
  %n = call i32 @llvm.amdgcn.image.atomic.add.2d.i32.i32(i32 1, i32 %x, i32 %y, <8 x i32> %rs, i32 0, i32 0)
  %nf = bitcast i32 %n to float
  %r = insertelement <4 x float> %e, float %nf, i32 0
  ret <4 x float> %r
}
