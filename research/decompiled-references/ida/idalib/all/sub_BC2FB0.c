__int64 __fastcall sub_BC2FB0(
        _QWORD *a1,
        char a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        const __m128i *a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  const __m128i *v13; // r12
  unsigned __int64 v14; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r10d
  __int64 v22; // rsi
  __int64 v23; // rdx
  _DWORD *v24; // rax
  __int64 v25; // rcx
  const __m128i *v26; // r15
  _DWORD *v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rax

  v13 = a7;
  v14 = sub_B902D0(184, a1, a3, 0);
  v16 = v14;
  v17 = (_QWORD *)v14;
  v18 = *(_QWORD *)(a6 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a6 + 40) & 7) != 0 )
    v18 = 0;
  sub_B96A00(v17, 0x3Cu, a2, (__int64)a1, a3, a4, a5, v18, a10);
  v21 = a8;
  *(_QWORD *)(v16 + 144) = 0;
  *(_QWORD *)(v16 + 160) = 0;
  *(_QWORD *)v16 = &off_2C04698;
  v22 = 24 * a8 + 8;
  *(_QWORD *)(v16 + 152) = a6 & 0xFFFFFFFFFFFFFFFBLL;
  v23 = a1[294];
  a1[304] += v22;
  v24 = (_DWORD *)((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v25 = (__int64)v24 + v22;
  if ( a1[295] >= (unsigned __int64)v24 + v22 && v23 )
  {
    a1[294] = v25;
  }
  else
  {
    v24 = (_DWORD *)sub_986170((__int64)(a1 + 294), v22, 24 * a8 + 8, 3, v19, v20);
    v21 = a8;
  }
  v26 = (const __m128i *)((char *)a7 + 24 * a8);
  *v24 = v21;
  v27 = v24 + 2;
  if ( v26 != a7 )
  {
    do
    {
      v28 = _mm_loadu_si128(v13);
      v13 = (const __m128i *)((char *)v13 + 24);
      v27 += 6;
      *(__m128i *)(v27 - 6) = v28;
      v25 = v13[-1].m128i_i64[1];
      *((_QWORD *)v27 - 1) = v25;
    }
    while ( v26 != v13 );
  }
  *(_QWORD *)(v16 + 168) = v24;
  *(_DWORD *)(v16 + 176) = 0;
  *(_BYTE *)(v16 + 74) &= ~0x10u;
  v29 = 8 * (a9 & 1u);
  *(_BYTE *)(v16 + 180) = (8 * (a9 & 1)) | *(_BYTE *)(v16 + 180) & 0xF0;
  v30 = *(_QWORD *)(*(_QWORD *)(a6 + 48) + 72LL);
  if ( (v30 & 0x10000) == 0 )
  {
    v29 = *(_BYTE *)(v16 + 72) & 0x7F;
    *(_BYTE *)(v16 + 72) = v29 | v30 & 0x80;
  }
  if ( !*(_QWORD *)(v16 + 48) )
  {
    if ( a10 )
      *(_QWORD *)(v16 + 48) = *(_QWORD *)(a10 + 48);
    else
      sub_A7AA70((__int64)a1, v16, v29, v25, v19, v20);
  }
  return v16;
}
