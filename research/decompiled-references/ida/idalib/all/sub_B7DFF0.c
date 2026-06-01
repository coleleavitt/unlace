unsigned __int64 __fastcall sub_B7DFF0(_QWORD *a1, const void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v7; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx

  v7 = a4 != 0;
  v10 = a1[294];
  v11 = 8 * (a3 + (a4 != 0) + 1);
  a1[304] += v11;
  v12 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v12 && v10 )
    a1[294] = v11 + v12;
  else
    v12 = sub_986170((__int64)(a1 + 294), v11, v11, 3, a5, a6);
  *(_DWORD *)v12 = a3;
  *(_BYTE *)(v12 + 4) = v7;
  if ( 8 * a3 )
    memmove((void *)(v12 + 8), a2, 8 * a3);
  if ( a4 )
    *(_QWORD *)(v12 + 8LL * (unsigned int)a3 + 8) = a4;
  return v12;
}
