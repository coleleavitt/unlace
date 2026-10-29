unsigned __int64 __fastcall sub_B9E270(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        const __m128i *a10,
        __int64 a11)
{
  const __m128i *v13; // r12
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r10d
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // rsi
  _DWORD *v22; // rax
  const __m128i *v23; // r13
  _DWORD *v24; // rdx
  __m128i v25; // xmm0

  v13 = a10;
  v14 = sub_B6C590(160, a1, a2, 0);
  v15 = *(_QWORD *)(a6 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a6 + 40) & 7) != 0 )
    v15 = 0;
  sub_B4F3E0(v14, 0x2Au, (__int64)a1, a2, a3, a4, v15, a7, a8, a9);
  v18 = a11;
  *(_QWORD *)(v14 + 112) = a6 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v14 + 104) = 0;
  v19 = a5;
  *(_QWORD *)(v14 + 120) = 0;
  *(_QWORD *)v14 = &off_2BDA900;
  v20 = a1[294];
  v21 = 24 * a11 + 8;
  a1[304] += v21;
  v22 = (_DWORD *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= (unsigned __int64)v22 + v21 && v20 )
  {
    a1[294] = (char *)v22 + v21;
  }
  else
  {
    v22 = (_DWORD *)sub_962430((__int64)(a1 + 294), v21, 24 * a11 + 8, 3, v16, v17);
    v18 = a11;
    v19 = a5;
  }
  v23 = (const __m128i *)((char *)a10 + 24 * a11);
  *v22 = v18;
  v24 = v22 + 2;
  if ( v23 != a10 )
  {
    do
    {
      v25 = _mm_loadu_si128(v13);
      v13 = (const __m128i *)((char *)v13 + 24);
      v24 += 6;
      *(__m128i *)(v24 - 6) = v25;
      *((_QWORD *)v24 - 1) = v13[-1].m128i_i64[1];
    }
    while ( v23 != v13 );
  }
  *(_QWORD *)(v14 + 128) = v22;
  *(_BYTE *)(v14 + 140) &= 0xF0u;
  *(_DWORD *)(v14 + 136) = 0;
  *(_QWORD *)v14 = &off_2BDA978;
  *(_QWORD *)(v14 + 144) = v19;
  *(_QWORD *)(v14 + 152) = 0;
  if ( (unsigned __int8)sub_B98120(v19, a2) )
    sub_B64910(v14, 1);
  *(_BYTE *)(v14 + 140) = *(_BYTE *)(v14 + 140) & 0xF8 | 2;
  return v14;
}

