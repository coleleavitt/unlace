_QWORD *__fastcall sub_115A360(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)operator new(0x20u);
  sub_1107510(v1, (__int64)"baremetal::StaticLibTool", (__int64)"llvm-ar", a1);
  *v1 = &off_2C0DC20;
  return v1;
}

