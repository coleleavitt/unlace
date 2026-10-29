unsigned __int64 __fastcall sub_B9E0F0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        const __m128i *a9,
        __int64 a10)
{
  const __m128i *v11; // r12
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rdx
  _DWORD *v18; // rax
  const __m128i *v19; // r13
  _DWORD *v20; // rdx
  __m128i v21; // xmm0

  v11 = a9;
  v12 = sub_B6C590(144, a1, a2, 0);
  v13 = *(_QWORD *)(a5 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a5 + 40) & 7) != 0 )
    v13 = 0;
  sub_B4F3E0(v12, 0x29u, (__int64)a1, a2, a3, a4, v13, a6, a7, a8);
  *(_QWORD *)(v12 + 112) = a5 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v12 + 104) = 0;
  *(_QWORD *)(v12 + 120) = 0;
  v16 = 24 * a10 + 8;
  *(_QWORD *)v12 = &off_2BDA900;
  v17 = a1[294];
  a1[304] += v16;
  v18 = (_DWORD *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= (unsigned __int64)v18 + v16 && v17 )
    a1[294] = (char *)v18 + v16;
  else
    v18 = (_DWORD *)sub_962430((__int64)(a1 + 294), v16, 24 * a10 + 8, 3, v14, v15);
  v19 = (const __m128i *)((char *)a9 + 24 * a10);
  *v18 = a10;
  v20 = v18 + 2;
  if ( v19 != a9 )
  {
    do
    {
      v21 = _mm_loadu_si128(v11);
      v11 = (const __m128i *)((char *)v11 + 24);
      v20 += 6;
      *(__m128i *)(v20 - 6) = v21;
      *((_QWORD *)v20 - 1) = v11[-1].m128i_i64[1];
    }
    while ( v19 != v11 );
  }
  *(_QWORD *)(v12 + 128) = v18;
  *(_DWORD *)(v12 + 136) = 0;
  *(_BYTE *)(v12 + 140) &= 0xF0u;
  return v12;
}

