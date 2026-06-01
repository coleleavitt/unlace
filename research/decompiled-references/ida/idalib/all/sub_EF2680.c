unsigned __int64 __fastcall sub_EF2680(_QWORD *a1, int a2, __int64 a3, const void *a4, __int64 a5, __int64 a6)
{
  int v6; // r15d
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int16 v14; // ax

  v6 = a5;
  v10 = 8 * a5 + 8;
  v11 = 8 * a5 + 24;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v13 && v12 )
    a1[294] = v11 + v13;
  else
    v13 = sub_986170((__int64)(a1 + 294), v11, 8 * a5 + 24, 3, a5, a6);
  v14 = *(_WORD *)v13 & 0xFE00;
  LOBYTE(v14) = -5;
  *(_WORD *)v13 = v14;
  if ( unk_2CD7484 )
    sub_EE9B50(251);
  *(_DWORD *)(v13 + 8) = a2;
  *(_DWORD *)(v13 + 12) = v6;
  *(_QWORD *)(v13 + 16) = a3;
  if ( v10 != 8 )
    memmove((void *)(v13 + 24), a4, v10 - 8);
  return v13;
}
