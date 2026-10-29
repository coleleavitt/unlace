const char *__fastcall sub_D0310(int a1, const char *a2, const char *a3, int a4)
{
  const char *v4; // rbx
  int v6; // eax
  _DWORD *v7; // rdi

  v4 = sub_BEBF0(a1, a2, a3, a4);
  if ( v4 )
    return v4;
  v6 = xmmword_2512E8;
  v7 = qword_2515B0;
  if ( !qword_2515B0 )
  {
    sub_9E0A0();
    return v4;
  }
  *(_QWORD *)qword_2515B0 = qword_2512E0;
  v7[2] = v6;
  sub_CC780((__int64)v7, 24);
  return nullptr;
}

