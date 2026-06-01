unsigned __int64 __fastcall sub_ECB500(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx

  v7 = 8 * a2 + 40;
  if ( a2 )
    v7 = (unsigned int)v7 + 16 * a2;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v9 + v7 && v8 )
    a1[294] = v9 + v7;
  else
    v9 = sub_962430((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  sub_EC5910((_WORD *)v9, 250);
  *(_DWORD *)(v9 + 8) = a2;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 8LL * a2 + 32) = 0;
  v10 = v9 + (unsigned int)(8 * *(_DWORD *)(v9 + 8) + 40);
  if ( a2 )
  {
    v11 = v10 + 16 * (a2 - 1 + 1LL);
    do
    {
      *(_OWORD *)v10 = 0;
      *(_DWORD *)(v10 + 8) = 0;
      v10 += 16LL;
    }
    while ( v11 != v10 );
  }
  return v9;
}

