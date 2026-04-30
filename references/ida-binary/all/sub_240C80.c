const char *__fastcall sub_240C80(int a1, const char *a2, const char *a3, int a4, double a5)
{
  const char *v5; // rbx
  int v7; // eax
  _DWORD *v8; // rdi
  __int64 v9; // rdx
  char *v10; // rcx

  v5 = sub_22D500(a1, a2, a3, a4);
  if ( v5 )
    return v5;
  v7 = xmmword_8CC2F8;
  v8 = qword_8CC600;
  v9 = qword_8CC2F0;
  v10 = (char *)(unsigned int)xmmword_8CC2F8;
  if ( !qword_8CC600 )
  {
    sub_20CEA0(dbg, 13, qword_8CC2F0, (unsigned int)xmmword_8CC2F8);
    return v5;
  }
  *(_QWORD *)qword_8CC600 = qword_8CC2F0;
  v8[2] = v7;
  sub_23D480((__int64)v8, 24, v9, v10, a5);
  return nullptr;
}
