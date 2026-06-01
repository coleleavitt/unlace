unsigned __int64 __fastcall sub_C98D20(
        _QWORD *a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        const __m128i *a7,
        __int64 a8)
{
  _QWORD *v9; // r10
  int v10; // r12d
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rax
  const __m128i *v15; // rdx
  const __m128i *v16; // rbp
  unsigned __int64 v17; // rax
  __m128i v18; // xmm0
  unsigned __int8 v19; // al
  __int64 v21; // rax
  int v24; // [rsp+Ch] [rbp-4Ch]
  __int64 v25; // [rsp+18h] [rbp-40h]

  v9 = a1;
  v10 = a6;
  v11 = a1[294];
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v24 = a5;
  v13 = 24 * a8 + 40;
  a1[304] += v13;
  if ( a1[295] >= v13 + v12 && v11 )
  {
    a1[294] = v13 + v12;
  }
  else
  {
    v21 = sub_986170((__int64)(a1 + 294), v13, v13, 3, a5, a6);
    v9 = a1;
    v12 = v21;
  }
  v14 = sub_A63CE0(v9);
  v15 = a7;
  *(_WORD *)v12 = *(_WORD *)v12 & 0xFE00 | 0xC;
  if ( unk_2CD7484 )
  {
    v25 = v14;
    sub_EE9B50(12);
    v14 = v25;
    v15 = a7;
  }
  *(_QWORD *)(v12 + 8) = v14;
  v16 = (const __m128i *)((char *)a7 + 24 * a8);
  *(_WORD *)(v12 + 1) &= 0xF801u;
  *(_DWORD *)(v12 + 20) = a4;
  *(_DWORD *)(v12 + 16) = a2;
  *(_DWORD *)(v12 + 24) = v24;
  v17 = v12 + 40;
  if ( v10 )
  {
    *(_DWORD *)(v12 + 28) = v10 - 1;
    *(_QWORD *)(v12 + 32) = a3;
    if ( v16 == a7 )
      goto LABEL_12;
    goto LABEL_8;
  }
  *(_DWORD *)(v12 + 28) = a8;
  *(_QWORD *)(v12 + 32) = a3;
  if ( v16 != a7 )
  {
    do
    {
LABEL_8:
      v18 = _mm_loadu_si128(v15);
      v15 = (const __m128i *)((char *)v15 + 24);
      v17 += 24LL;
      *(__m128i *)(v17 - 24) = v18;
      *(_QWORD *)(v17 - 8) = v15[-1].m128i_i64[1];
    }
    while ( v16 != v15 );
    if ( !v10 )
      goto LABEL_10;
LABEL_12:
    v19 = 0;
    goto LABEL_11;
  }
LABEL_10:
  v19 = 10;
LABEL_11:
  *(_BYTE *)(v12 + 1) = ((v19 & 2) << 6) | *(_BYTE *)(v12 + 1) & 0x3F;
  *(_BYTE *)(v12 + 2) = (v19 >> 2) | *(_BYTE *)(v12 + 2) & 0xF8;
  return v12;
}
