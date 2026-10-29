__int64 __fastcall sub_A81E80(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  __int64 *v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[4]; // [rsp+8h] [rbp-20h] BYREF

  v7 = a3 - a2;
  v9 = 8LL * (unsigned int)v7 + 8;
  v10 = a1[294];
  a1[304] += v9;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v9 + v11 && v10 )
    a1[294] = v9 + v11;
  else
    v11 = sub_986170((__int64)(a1 + 294), v9, v9, 3, a5, a6);
  *(_DWORD *)v11 &= 0xFFFE0000;
  v12 = v11 + 8;
  *(_WORD *)(v11 + 2) = 2 * v7;
  if ( a2 != a3 )
  {
    v13 = a2;
    do
    {
      v14 = *v13;
      v12 += 8LL;
      ++v13;
      *(_QWORD *)(v12 - 8) = v14 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( a3 != v13 );
  }
  sub_F22AB0(v16);
  return v16[0];
}
