unsigned __int64 __fastcall sub_EEEA30(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbx

  v7 = a1[294];
  a1[304] += 24LL;
  v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + 24 && v7 )
    a1[294] = v8 + 24;
  else
    v8 = sub_986170((__int64)(a1 + 294), 24, 24, 3, a5, a6);
  sub_EE9650((_WORD *)v8, 137);
  *(_DWORD *)(v8 + 8) = a2;
  *(_QWORD *)(v8 + 16) = a3;
  return v8;
}
