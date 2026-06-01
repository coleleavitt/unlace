_QWORD *__fastcall sub_127AC50(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)operator new(0x20u);
  sub_112B250(v1, (__int64)"MSP430::Linker", (__int64)"msp430-elf-ld", a1);
  *v1 = &off_2C3E0A0;
  return v1;
}
