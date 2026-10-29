__int64 __fastcall sub_B9EF70(
        _QWORD *a1,
        char a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        const __m128i *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  const __m128i *v13; // r12
  unsigned __int64 v14; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rdx
  _DWORD *v25; // rax
  _DWORD *v26; // rcx
  const __m128i *v27; // r15
  _DWORD *v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  char v33; // al

  v13 = a8;
  v14 = sub_B6C590(200, a1, a3, 0);
  v16 = v14;
  v17 = (_QWORD *)v14;
  v18 = *(_QWORD *)(a7 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a7 + 40) & 7) != 0 )
    v18 = 0;
  v19 = a3;
  v20 = 24 * a9;
  sub_B72CC0(v17, 0x3Du, a2, (__int64)a1, v19, a4, a5, v18, a11);
  *(_QWORD *)(v16 + 144) = 0;
  *(_QWORD *)(v16 + 160) = 0;
  *(_QWORD *)v16 = &off_2BDA698;
  v23 = a6;
  *(_QWORD *)(v16 + 152) = a7 & 0xFFFFFFFFFFFFFFFBLL;
  v24 = a1[294];
  a1[304] += 24 * a9 + 8;
  v25 = (_DWORD *)((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v26 = &v25[6 * a9 + 2];
  if ( a1[295] >= (unsigned __int64)v26 && v24 )
  {
    a1[294] = v26;
  }
  else
  {
    v25 = (_DWORD *)sub_962430((__int64)(a1 + 294), 24 * a9 + 8, v20 + 8, 3, v21, v22);
    v23 = a6;
  }
  v27 = (const __m128i *)((char *)a8 + v20);
  *v25 = a9;
  v28 = v25 + 2;
  if ( v27 != a8 )
  {
    do
    {
      v29 = _mm_loadu_si128(v13);
      v13 = (const __m128i *)((char *)v13 + 24);
      v28 += 6;
      *(__m128i *)(v28 - 6) = v29;
      *((_QWORD *)v28 - 1) = v13[-1].m128i_i64[1];
    }
    while ( v27 != v13 );
  }
  *(_QWORD *)(v16 + 168) = v25;
  *(_BYTE *)(v16 + 180) &= 0xF0u;
  *(_DWORD *)(v16 + 176) = 0;
  *(_QWORD *)v16 = &off_2BDA718;
  *(_QWORD *)(v16 + 184) = v23;
  *(_QWORD *)(v16 + 192) = 0;
  if ( (unsigned __int8)sub_B98120(v23, v16 + 64) )
    sub_B64910(v16, 1);
  v33 = *(_BYTE *)(v16 + 180);
  *(_BYTE *)(v16 + 74) &= ~0x10u;
  *(_BYTE *)(v16 + 180) = v33 & 0xF8 | 2;
  sub_A567B0((__int64)a1, v16, a10, v30, v31, v32);
  return v16;
}

