_QWORD *__fastcall sub_117E0A0(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)operator new(0x20u);
  sub_112B250(v1, (__int64)"baremetal::StaticLibTool", (__int64)"llvm-ar", a1);
  *v1 = &off_2C37C20;
  return v1;
}
