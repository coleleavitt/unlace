const char *__fastcall sub_D16F0(int a1, const char *a2, const char *a3, int a4)
{
  const char *v4; // rbx
  int v6; // eax
  _DWORD *v7; // rdi

  v4 = sub_BF2D0(a1, a2, a3, a4);
  if ( v4 )
    return v4;
  v6 = xmmword_252458;
  v7 = qword_252758;
  if ( !qword_252758 )
  {
    sub_9E1E0();
    return v4;
  }
  *(_QWORD *)qword_252758 = qword_252450;
  v7[2] = v6;
  sub_CDCF0((__int64)v7, 24);
  return nullptr;
}

