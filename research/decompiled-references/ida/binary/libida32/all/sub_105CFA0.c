__m128i *__fastcall sub_105CFA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __m128i *result; // rax

  v2 = *(unsigned int *)(a2 + 8);
  if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v2 + 1) )
  {
    sub_22134E0(a2, a2 + 16, v2 + 1, 16);
    v2 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v2) = _mm_load_si128((const __m128i *)&off_2B311E0);
  v3 = *(unsigned int *)(a2 + 12);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v4;
  if ( v4 + 1 > v3 )
  {
    sub_22134E0(a2, a2 + 16, v4 + 1, 16);
    v4 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v4) = _mm_load_si128((const __m128i *)&off_2B31200);
  v5 = *(unsigned int *)(a2 + 12);
  v6 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v6;
  if ( v6 + 1 > v5 )
  {
    sub_22134E0(a2, a2 + 16, v6 + 1, 16);
    v6 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v6) = _mm_load_si128((const __m128i *)&off_2B31220);
  v7 = *(unsigned int *)(a2 + 12);
  v8 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v8;
  if ( v8 + 1 > v7 )
  {
    sub_22134E0(a2, a2 + 16, v8 + 1, 16);
    v8 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v8) = _mm_load_si128((const __m128i *)&off_2B31240);
  v9 = *(unsigned int *)(a2 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v10;
  if ( v10 + 1 > v9 )
  {
    sub_22134E0(a2, a2 + 16, v10 + 1, 16);
    v10 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v10) = _mm_load_si128((const __m128i *)&off_2B31260);
  v11 = *(unsigned int *)(a2 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v12;
  if ( v12 + 1 > v11 )
  {
    sub_22134E0(a2, a2 + 16, v12 + 1, 16);
    v12 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v12) = _mm_load_si128((const __m128i *)&off_2B31280);
  v13 = *(unsigned int *)(a2 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_22134E0(a2, a2 + 16, v14 + 1, 16);
    v14 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v14) = _mm_load_si128((const __m128i *)&off_2B312A0);
  v15 = *(unsigned int *)(a2 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v16;
  if ( v16 + 1 > v15 )
  {
    sub_22134E0(a2, a2 + 16, v16 + 1, 16);
    v16 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v16) = _mm_load_si128((const __m128i *)&off_2B312C0);
  v17 = *(unsigned int *)(a2 + 12);
  v18 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v18;
  if ( v18 + 1 > v17 )
  {
    sub_22134E0(a2, a2 + 16, v18 + 1, 16);
    v18 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v18) = _mm_load_si128((const __m128i *)&off_2B312E0);
  v19 = *(unsigned int *)(a2 + 12);
  v20 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v20;
  if ( v20 + 1 > v19 )
  {
    sub_22134E0(a2, a2 + 16, v20 + 1, 16);
    v20 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v20) = _mm_load_si128((const __m128i *)&off_2B31300);
  v21 = *(unsigned int *)(a2 + 12);
  v22 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v22;
  if ( v22 + 1 > v21 )
  {
    sub_22134E0(a2, a2 + 16, v22 + 1, 16);
    v22 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v22) = _mm_load_si128((const __m128i *)&off_2B31320);
  v23 = *(unsigned int *)(a2 + 12);
  v24 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v24;
  if ( v24 + 1 > v23 )
  {
    sub_22134E0(a2, a2 + 16, v24 + 1, 16);
    v24 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v24) = _mm_load_si128((const __m128i *)&off_2B31340);
  v25 = *(unsigned int *)(a2 + 12);
  v26 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v26;
  if ( v26 + 1 > v25 )
  {
    sub_22134E0(a2, a2 + 16, v26 + 1, 16);
    v26 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v26) = _mm_load_si128((const __m128i *)&off_2B31360);
  v27 = *(unsigned int *)(a2 + 12);
  v28 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v28;
  if ( v28 + 1 > v27 )
  {
    sub_22134E0(a2, a2 + 16, v28 + 1, 16);
    v28 = *(unsigned int *)(a2 + 8);
  }
  *(__m128i *)(*(_QWORD *)a2 + 16 * v28) = _mm_load_si128((const __m128i *)&off_2B31380);
  v29 = *(unsigned int *)(a2 + 12);
  v30 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v30;
  if ( v30 + 1 > v29 )
  {
    sub_22134E0(a2, a2 + 16, v30 + 1, 16);
    v30 = *(unsigned int *)(a2 + 8);
  }
  result = (__m128i *)(*(_QWORD *)a2 + 16 * v30);
  *result = _mm_load_si128((const __m128i *)&off_2B313A0);
  ++*(_DWORD *)(a2 + 8);
  return result;
}

