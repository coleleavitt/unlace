_QWORD *__fastcall sub_1155E30(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)operator new(0x28u);
  sub_1107510(v1, (__int64)"AVR::Linker", (__int64)"avr-ld", a1);
  v1[4] = a1 + 16;
  *v1 = &off_2C0D880;
  return v1;
}

