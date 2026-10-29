void __fastcall sub_154E5D0(const __m128i *a1, __int64 a2, int a3, unsigned __int8 a4)
{
  const __m128i *v5; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rdi
  char v11; // dl

  v5 = a1 + 1;
  v8 = sub_1565590(a1, &a1[1]);
  if ( *(_DWORD *)(v8 + 32) && !*(_BYTE *)(v8 + 48) )
  {
    v9 = sub_1CE0AE0(
           a1[6].m128i_i64[0],
           *(_QWORD *)(a1[6].m128i_i64[0] + 608),
           *(_DWORD *)(v8 + 4),
           *(_DWORD *)(v8 + 36),
           v8 + 56,
           *(unsigned int *)(v8 + 44),
           *(_DWORD *)(v8 + 40),
           0,
           a4,
           a3);
    a1[2].m128i_i16[0] = 417;
    if ( v11 )
      v9 = 0;
  }
  else
  {
    a1[2].m128i_i16[0] = 417;
    v9 = 0;
  }
  a1[1].m128i_i64[1] = v9;
  if ( *(_DWORD *)a2 && *(_DWORD *)(a2 + 4) || *(_QWORD *)(a2 + 8) )
  {
    v10 = (_QWORD *)a1->m128i_i64[1];
    a1[1].m128i_i32[0] = *(_DWORD *)a2;
    if ( !v10[368] )
      return;
  }
  else
  {
    v10 = (_QWORD *)a1->m128i_i64[1];
    if ( !v10[368] )
      return;
  }
  if ( v10[370] != v10[369] )
    sub_1417320((__int64)v10, v5);
}
