_QWORD *__fastcall sub_128EFA0(__int64 a1)
{
  _QWORD *v1; // rbx

  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    v1 = (_QWORD *)operator new(0x20u);
    sub_112B250(v1, (__int64)"GNU::Assembler", (__int64)"assembler", a1);
    *v1 = &off_2C3E480;
  }
  else
  {
    v1 = (_QWORD *)operator new(0x20u);
    sub_112B250(v1, (__int64)"GNU::Assembler", (__int64)"assembler", a1);
    *v1 = &off_2C3AFC8;
  }
  return v1;
}
