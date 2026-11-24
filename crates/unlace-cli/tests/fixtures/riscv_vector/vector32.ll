target triple = "riscv32-unknown-elf"


define void @vadd4(ptr %d, ptr %a, ptr %b) {
  %x = load <4 x i32>, ptr %a
  %y = load <4 x i32>, ptr %b
  %s = add <4 x i32> %x, %y
  store <4 x i32> %s, ptr %d
  ret void
}
define i32 @vsum8(ptr %a) {
  %x = load <8 x i32>, ptr %a
  %r = call i32 @llvm.vector.reduce.add.v8i32(<8 x i32> %x)
  ret i32 %r
}
define void @vfma4(ptr %d, ptr %a, ptr %b, float %s) {
  %x = load <4 x float>, ptr %a
  %y = load <4 x float>, ptr %b
  %i = insertelement <4 x float> poison, float %s, i64 0
  %sp = shufflevector <4 x float> %i, <4 x float> poison, <4 x i32> zeroinitializer
  %m = call <4 x float> @llvm.fma.v4f32(<4 x float> %x, <4 x float> %sp, <4 x float> %y)
  store <4 x float> %m, ptr %d
  ret void
}
define void @vsel16(ptr %d, ptr %a, ptr %b) {
  %x = load <16 x i8>, ptr %a
  %y = load <16 x i8>, ptr %b
  %c = icmp ugt <16 x i8> %x, %y
  %s = select <16 x i1> %c, <16 x i8> %x, <16 x i8> %y
  store <16 x i8> %s, ptr %d
  ret void
}
declare i32 @llvm.vector.reduce.add.v8i32(<8 x i32>)
declare <4 x float> @llvm.fma.v4f32(<4 x float>, <4 x float>, <4 x float>)
