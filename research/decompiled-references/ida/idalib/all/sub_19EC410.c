__int64 __fastcall sub_19EC410(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r11
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned __int8 v15; // dl
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rdx
  __m128i *v20; // rcx
  const __m128i *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  __m128i *v27; // rcx
  const __m128i *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  __m128i *v34; // rcx
  const __m128i *v35; // rax
  __int64 v36; // [rsp+0h] [rbp-98h]
  unsigned __int64 v37; // [rsp+8h] [rbp-90h]
  __int64 v38; // [rsp+8h] [rbp-90h]
  unsigned __int64 v39; // [rsp+8h] [rbp-90h]
  __int64 v40; // [rsp+8h] [rbp-90h]
  __int64 v41; // [rsp+8h] [rbp-90h]
  __int64 v42; // [rsp+8h] [rbp-90h]
  __int64 v43; // [rsp+10h] [rbp-88h]
  __int64 v44; // [rsp+10h] [rbp-88h]
  __int64 v45; // [rsp+10h] [rbp-88h]
  __int64 v46; // [rsp+10h] [rbp-88h]
  __int64 v47; // [rsp+10h] [rbp-88h]
  __int64 v48; // [rsp+10h] [rbp-88h]
  __int64 v49; // [rsp+18h] [rbp-80h]
  __int64 v50; // [rsp+18h] [rbp-80h]
  unsigned __int64 v51; // [rsp+18h] [rbp-80h]
  __int128 v52; // [rsp+20h] [rbp-78h] BYREF
  __int128 v53; // [rsp+30h] [rbp-68h]
  __int128 v54; // [rsp+40h] [rbp-58h]
  __int64 v55; // [rsp+50h] [rbp-48h]

  v5 = 0;
  v6 = 0;
  v8 = a2[1];
  v9 = a3[1];
  *(_QWORD *)a1 = a1 + 16;
  v36 = a1 + 16;
  result = 0x100000000LL;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  while ( 1 )
  {
    while ( v6 != v8 )
    {
      while ( 1 )
      {
        v11 = a2[3];
        result = *(unsigned __int8 *)(*a2 + v6);
        if ( v5 == v9 )
          break;
        v12 = 0;
        if ( v11 )
          v12 = *(_QWORD *)(a2[2] + 8 * v6);
        v13 = a3[3];
        v14 = 0;
        if ( v13 )
          v14 = *(_QWORD *)(a3[2] + 8 * v5);
        v15 = *(_BYTE *)(v5 + *a3);
        if ( v15 > (unsigned __int8)result )
          break;
        if ( v15 < (unsigned __int8)result )
          goto LABEL_16;
        if ( v14 != v12 )
        {
          v16 = *(unsigned int *)(a1 + 8);
          v17 = *(unsigned int *)(a1 + 12);
          LOBYTE(v52) = *(_BYTE *)(*a2 + v6);
          BYTE8(v52) = result;
          *(_QWORD *)&v53 = v12;
          v18 = *(_QWORD *)a1;
          LOBYTE(v54) = v15;
          v19 = v16 + 1;
          DWORD1(v52) = 2;
          v20 = (__m128i *)(v18 + 56 * v16);
          v21 = (const __m128i *)&v52;
          BYTE8(v53) = 1;
          *((_QWORD *)&v54 + 1) = v14;
          LOBYTE(v55) = 1;
          if ( v19 > v17 )
          {
            if ( v18 > (unsigned __int64)&v52 || v20 <= (__m128i *)&v52 )
            {
              v48 = v9;
              v42 = v8;
              sub_2237220(a1, v36, v19, 56);
              v8 = v42;
              v9 = v48;
              v20 = (__m128i *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
              v21 = (const __m128i *)&v52;
            }
            else
            {
              v51 = v18;
              v47 = v9;
              v41 = v8;
              sub_2237220(a1, v36, v19, 56);
              v9 = v47;
              v8 = v41;
              v21 = (const __m128i *)((char *)&v52 + *(_QWORD *)a1 - v51);
              v20 = (__m128i *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
            }
          }
          *v20 = _mm_loadu_si128(v21);
          v20[1] = _mm_loadu_si128(v21 + 1);
          v20[2] = _mm_loadu_si128(v21 + 2);
          result = v21[3].m128i_i64[0];
          v20[3].m128i_i64[0] = result;
          ++*(_DWORD *)(a1 + 8);
        }
        ++v6;
        ++v5;
        if ( v6 == v8 )
          goto LABEL_14;
      }
      v29 = 0;
      if ( v11 )
        v29 = *(_QWORD *)(a2[2] + 8 * v6);
      v30 = *(unsigned int *)(a1 + 8);
      v31 = *(_QWORD *)a1;
      v55 = 0;
      v52 = 0;
      v32 = *(unsigned int *)(a1 + 12);
      LOBYTE(v52) = result;
      BYTE8(v52) = result;
      *((_QWORD *)&v53 + 1) = 1;
      *(_QWORD *)&v53 = v29;
      v33 = v30 + 1;
      v34 = (__m128i *)(v31 + 56 * v30);
      v35 = (const __m128i *)&v52;
      v54 = 0;
      DWORD1(v52) = 1;
      if ( v33 > v32 )
      {
        v37 = v31;
        if ( v31 > (unsigned __int64)&v52 || v34 <= (__m128i *)&v52 )
        {
          v44 = v9;
          v38 = v8;
          sub_2237220(a1, v36, v33, 56);
          v9 = v44;
          v8 = v38;
          v34 = (__m128i *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
          v35 = (const __m128i *)&v52;
        }
        else
        {
          v49 = v9;
          v43 = v8;
          sub_2237220(a1, v36, v33, 56);
          v8 = v43;
          v9 = v49;
          v35 = (const __m128i *)((char *)&v52 + *(_QWORD *)a1 - v37);
          v34 = (__m128i *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
        }
      }
      ++v6;
      *v34 = _mm_loadu_si128(v35);
      v34[1] = _mm_loadu_si128(v35 + 1);
      v34[2] = _mm_loadu_si128(v35 + 2);
      result = v35[3].m128i_i64[0];
      v34[3].m128i_i64[0] = result;
      ++*(_DWORD *)(a1 + 8);
    }
LABEL_14:
    if ( v5 == v9 )
      return result;
    v13 = a3[3];
    v15 = *(_BYTE *)(*a3 + v5);
LABEL_16:
    v22 = 0;
    if ( v13 )
      v22 = *(_QWORD *)(a3[2] + 8 * v5);
    v23 = *(unsigned int *)(a1 + 8);
    v24 = *(_QWORD *)a1;
    *((_QWORD *)&v54 + 1) = v22;
    v25 = *(unsigned int *)(a1 + 12);
    v52 = 0;
    LOBYTE(v52) = v15;
    LOBYTE(v54) = v15;
    v26 = v23 + 1;
    v53 = 0;
    v27 = (__m128i *)(v24 + 56 * v23);
    v28 = (const __m128i *)&v52;
    LOBYTE(v55) = 1;
    if ( v26 > v25 )
    {
      v39 = v24;
      if ( v24 > (unsigned __int64)&v52 || v27 <= (__m128i *)&v52 )
      {
        v46 = v9;
        v40 = v8;
        sub_2237220(a1, v36, v26, 56);
        v9 = v46;
        v8 = v40;
        v27 = (__m128i *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
        v28 = (const __m128i *)&v52;
      }
      else
      {
        v50 = v9;
        v45 = v8;
        sub_2237220(a1, v36, v26, 56);
        v8 = v45;
        v9 = v50;
        v28 = (const __m128i *)((char *)&v52 + *(_QWORD *)a1 - v39);
        v27 = (__m128i *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
      }
    }
    ++v5;
    *v27 = _mm_loadu_si128(v28);
    v27[1] = _mm_loadu_si128(v28 + 1);
    v27[2] = _mm_loadu_si128(v28 + 2);
    result = v28[3].m128i_i64[0];
    v27[3].m128i_i64[0] = result;
    ++*(_DWORD *)(a1 + 8);
  }
}
