unsigned __int64 __fastcall sub_CB9610(_QWORD *a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v6; // r15d
  int v7; // r14d
  __int64 v10; // rax
  unsigned __int64 v11; // rbx

  v6 = (unsigned __int8)a6;
  v7 = (unsigned __int8)a5;
  v10 = a1[16];
  a1[26] += 88LL;
  v11 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a1[17] >= v11 + 88 && v10 )
    a1[16] = v11 + 88;
  else
    v11 = sub_986170((__int64)(a1 + 16), 88, 88, 4, a5, a6);
  sub_CEE970(v11, a2, 0, a3, a4, v7, v6, 0, 0);
  return v11;
}
