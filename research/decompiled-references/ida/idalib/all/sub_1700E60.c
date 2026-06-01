__m128i *__fastcall sub_1700E60(
        const __m128i *a1,
        const __m128i *a2,
        const __m128i *a3,
        const __m128i *a4,
        __m128i *a5,
        __int64 a6,
        __int64 a7,
        unsigned int *a8,
        __int64 a9)
{
  const __m128i *v9; // r15
  const __m128i *v10; // rbp
  __m128i *v11; // rbx
  _QWORD *v12; // r12
  _QWORD *v13; // r13
  _QWORD *v14; // r14
  __m128i v15; // xmm3
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  char *v20; // rdi
  __int32 v21; // eax
  _QWORD *v22; // r14
  _QWORD *v23; // r12
  _QWORD *v24; // r13
  __m128i v25; // xmm1
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  char *v30; // rdi
  __int32 v31; // eax
  unsigned __int64 v32; // rbp
  _QWORD *v33; // r13
  _QWORD *v34; // r14
  _QWORD *v35; // r12
  __m128i v36; // xmm6
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  char *v41; // rdi
  __int32 v42; // eax
  _QWORD *v44; // r12
  _QWORD *v45; // r14
  _QWORD *v46; // r13
  __m128i v47; // xmm2
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  char *v52; // rdi
  __int32 v53; // eax
  unsigned __int64 v54; // [rsp+8h] [rbp-60h]

  v9 = a3;
  v10 = a1;
  if ( a3 == a4 || a1 == a2 )
  {
    v11 = a5;
  }
  else
  {
    v11 = a5;
    do
    {
      if ( (unsigned __int8)sub_1BD5DB0(a7, v9, v10, *a8, *(unsigned int *)(a9 + 2972), 1) )
      {
        v12 = (_QWORD *)v11[4].m128i_i64[0];
        v13 = (_QWORD *)v11[4].m128i_i64[1];
        v11->m128i_i64[0] = v9->m128i_i64[0];
        v14 = v12;
        v11->m128i_i64[1] = v9->m128i_i64[1];
        v11[1] = _mm_loadu_si128(v9 + 1);
        v11[2].m128i_i64[0] = v9[2].m128i_i64[0];
        v11[2].m128i_i64[1] = v9[2].m128i_i64[1];
        v15 = _mm_loadu_si128(v9 + 3);
        v11[4].m128i_i64[1] = 0;
        v11[5].m128i_i64[0] = 0;
        v11[4].m128i_i64[0] = 0;
        v11[3] = v15;
        v11[4].m128i_i64[0] = v9[4].m128i_i64[0];
        v16 = v9[4].m128i_i64[1];
        v9[4].m128i_i64[0] = 0;
        v17 = v11[4].m128i_i64[1];
        v11[4].m128i_i64[1] = v16;
        v18 = v9[5].m128i_i64[0];
        v9[4].m128i_i64[1] = v17;
        v19 = v11[5].m128i_i64[0];
        v11[5].m128i_i64[0] = v18;
        for ( v9[5].m128i_i64[0] = v19; v13 != v14; v14 += 8 )
        {
          while ( 1 )
          {
            v20 = (char *)v14[3];
            if ( v20 == (char *)(v14 + 5) )
              break;
            operator delete(v20);
            v14 += 8;
            if ( v13 == v14 )
              goto LABEL_8;
          }
        }
LABEL_8:
        if ( v12 )
          operator delete(v12);
        v21 = v9[5].m128i_i32[2];
        v9 = (const __m128i *)((char *)v9 + 168);
        v11[5].m128i_i32[2] = v21;
        v11[5].m128i_i32[3] = v9[-5].m128i_i32[1];
        v11[6].m128i_i64[0] = v9[-5].m128i_i64[1];
        LOBYTE(v21) = v9[-4].m128i_i8[0] & 1 | v11[6].m128i_i8[8] & 0xFE;
        v11[6].m128i_i8[8] = v21;
        LOBYTE(v21) = v9[-4].m128i_i8[0] & 2 | v21 & 0xFD;
        v11[6].m128i_i8[8] = v21;
        LOBYTE(v21) = v9[-4].m128i_i8[0] & 4 | v21 & 0xFB;
        v11[6].m128i_i8[8] = v21;
        LOBYTE(v21) = v9[-4].m128i_i8[0] & 8 | v21 & 0xF7;
        v11[6].m128i_i8[8] = v21;
        LOBYTE(v21) = v9[-4].m128i_i8[0] & 0x10 | v21 & 0xEF;
        v11[6].m128i_i8[8] = v21;
        LOBYTE(v21) = v9[-4].m128i_i8[0] & 0x20 | v21 & 0xDF;
        v11[6].m128i_i8[8] = v21;
        LOBYTE(v21) = v9[-4].m128i_i8[0] & 0x40 | v21 & 0xBF;
        v11[6].m128i_i8[8] = v21;
        v11[6].m128i_i8[8] = v9[-4].m128i_i8[0] & 0x80 | v21 & 0x7F;
        v11[6].m128i_i8[9] = v9[-4].m128i_i8[1] & 3 | v11[6].m128i_i8[9] & 0xFC;
        v11[6].m128i_i32[2] = v9[-4].m128i_i32[0] & 0x3FC00 | v11[6].m128i_i32[2] & 0xFFFC03FF;
        v11[6].m128i_i32[3] = v9[-4].m128i_i32[1];
        v11[7] = _mm_loadu_si128((const __m128i *)((char *)v9 - 56));
        v11[8] = _mm_loadu_si128((const __m128i *)((char *)v9 - 40));
        v11[9] = _mm_loadu_si128((const __m128i *)((char *)v9 - 24));
        v11[10].m128i_i64[0] = v9[-1].m128i_i64[1];
      }
      else
      {
        v44 = (_QWORD *)v11[4].m128i_i64[0];
        v45 = (_QWORD *)v11[4].m128i_i64[1];
        v11->m128i_i64[0] = v10->m128i_i64[0];
        v46 = v44;
        v11->m128i_i64[1] = v10->m128i_i64[1];
        v11[1] = _mm_loadu_si128(v10 + 1);
        v11[2].m128i_i64[0] = v10[2].m128i_i64[0];
        v11[2].m128i_i64[1] = v10[2].m128i_i64[1];
        v47 = _mm_loadu_si128(v10 + 3);
        v11[4].m128i_i64[1] = 0;
        v11[5].m128i_i64[0] = 0;
        v11[4].m128i_i64[0] = 0;
        v11[3] = v47;
        v11[4].m128i_i64[0] = v10[4].m128i_i64[0];
        v48 = v10[4].m128i_i64[1];
        v10[4].m128i_i64[0] = 0;
        v49 = v11[4].m128i_i64[1];
        v11[4].m128i_i64[1] = v48;
        v50 = v10[5].m128i_i64[0];
        v10[4].m128i_i64[1] = v49;
        v51 = v11[5].m128i_i64[0];
        v11[5].m128i_i64[0] = v50;
        for ( v10[5].m128i_i64[0] = v51; v45 != v46; v46 += 8 )
        {
          while ( 1 )
          {
            v52 = (char *)v46[3];
            if ( v52 == (char *)(v46 + 5) )
              break;
            operator delete(v52);
            v46 += 8;
            if ( v46 == v45 )
              goto LABEL_37;
          }
        }
LABEL_37:
        if ( v44 )
          operator delete(v44);
        v53 = v10[5].m128i_i32[2];
        v10 = (const __m128i *)((char *)v10 + 168);
        v11[5].m128i_i32[2] = v53;
        v11[5].m128i_i32[3] = v10[-5].m128i_i32[1];
        v11[6].m128i_i64[0] = v10[-5].m128i_i64[1];
        LOBYTE(v53) = v10[-4].m128i_i8[0] & 1 | v11[6].m128i_i8[8] & 0xFE;
        v11[6].m128i_i8[8] = v53;
        LOBYTE(v53) = v10[-4].m128i_i8[0] & 2 | v53 & 0xFD;
        v11[6].m128i_i8[8] = v53;
        LOBYTE(v53) = v10[-4].m128i_i8[0] & 4 | v53 & 0xFB;
        v11[6].m128i_i8[8] = v53;
        LOBYTE(v53) = v10[-4].m128i_i8[0] & 8 | v53 & 0xF7;
        v11[6].m128i_i8[8] = v53;
        LOBYTE(v53) = v10[-4].m128i_i8[0] & 0x10 | v53 & 0xEF;
        v11[6].m128i_i8[8] = v53;
        LOBYTE(v53) = v10[-4].m128i_i8[0] & 0x20 | v53 & 0xDF;
        v11[6].m128i_i8[8] = v53;
        LOBYTE(v53) = v10[-4].m128i_i8[0] & 0x40 | v53 & 0xBF;
        v11[6].m128i_i8[8] = v53;
        v11[6].m128i_i8[8] = v10[-4].m128i_i8[0] & 0x80 | v53 & 0x7F;
        v11[6].m128i_i8[9] = v10[-4].m128i_i8[1] & 3 | v11[6].m128i_i8[9] & 0xFC;
        v11[6].m128i_i32[2] = v10[-4].m128i_i32[0] & 0x3FC00 | v11[6].m128i_i32[2] & 0xFFFC03FF;
        v11[6].m128i_i32[3] = v10[-4].m128i_i32[1];
        v11[7] = _mm_loadu_si128((const __m128i *)((char *)v10 - 56));
        v11[8] = _mm_loadu_si128((const __m128i *)((char *)v10 - 40));
        v11[9] = _mm_loadu_si128((const __m128i *)((char *)v10 - 24));
        v11[10].m128i_i64[0] = v10[-1].m128i_i64[1];
      }
      v11 = (__m128i *)((char *)v11 + 168);
    }
    while ( v10 != a2 && v9 != a4 );
  }
  v54 = 0xCF3CF3CF3CF3CF3DLL * (((char *)a2 - (char *)v10) >> 3);
  if ( (char *)a2 - (char *)v10 > 0 )
  {
    do
    {
      v22 = (_QWORD *)v11[4].m128i_i64[0];
      v23 = (_QWORD *)v11[4].m128i_i64[1];
      v11->m128i_i64[0] = v10->m128i_i64[0];
      v24 = v22;
      v11->m128i_i64[1] = v10->m128i_i64[1];
      v11[1] = _mm_loadu_si128(v10 + 1);
      v11[2].m128i_i64[0] = v10[2].m128i_i64[0];
      v11[2].m128i_i64[1] = v10[2].m128i_i64[1];
      v25 = _mm_loadu_si128(v10 + 3);
      v11[4].m128i_i64[1] = 0;
      v11[5].m128i_i64[0] = 0;
      v11[4].m128i_i64[0] = 0;
      v11[3] = v25;
      v11[4].m128i_i64[0] = v10[4].m128i_i64[0];
      v26 = v10[4].m128i_i64[1];
      v10[4].m128i_i64[0] = 0;
      v27 = v11[4].m128i_i64[1];
      v11[4].m128i_i64[1] = v26;
      v28 = v10[5].m128i_i64[0];
      v10[4].m128i_i64[1] = v27;
      v29 = v11[5].m128i_i64[0];
      v11[5].m128i_i64[0] = v28;
      for ( v10[5].m128i_i64[0] = v29; v23 != v24; v24 += 8 )
      {
        while ( 1 )
        {
          v30 = (char *)v24[3];
          if ( v30 == (char *)(v24 + 5) )
            break;
          operator delete(v30);
          v24 += 8;
          if ( v23 == v24 )
            goto LABEL_17;
        }
      }
LABEL_17:
      if ( v22 )
        operator delete(v22);
      v31 = v10[5].m128i_i32[2];
      v11 = (__m128i *)((char *)v11 + 168);
      v10 = (const __m128i *)((char *)v10 + 168);
      v11[-5].m128i_i32[0] = v31;
      v11[-5].m128i_i32[1] = v10[-5].m128i_i32[1];
      v11[-5].m128i_i64[1] = v10[-5].m128i_i64[1];
      LOBYTE(v31) = v10[-4].m128i_i8[0] & 1 | v11[-4].m128i_i8[0] & 0xFE;
      v11[-4].m128i_i8[0] = v31;
      LOBYTE(v31) = v10[-4].m128i_i8[0] & 2 | v31 & 0xFD;
      v11[-4].m128i_i8[0] = v31;
      LOBYTE(v31) = v10[-4].m128i_i8[0] & 4 | v31 & 0xFB;
      v11[-4].m128i_i8[0] = v31;
      LOBYTE(v31) = v10[-4].m128i_i8[0] & 8 | v31 & 0xF7;
      v11[-4].m128i_i8[0] = v31;
      LOBYTE(v31) = v10[-4].m128i_i8[0] & 0x10 | v31 & 0xEF;
      v11[-4].m128i_i8[0] = v31;
      LOBYTE(v31) = v10[-4].m128i_i8[0] & 0x20 | v31 & 0xDF;
      v11[-4].m128i_i8[0] = v31;
      LOBYTE(v31) = v10[-4].m128i_i8[0] & 0x40 | v31 & 0xBF;
      v11[-4].m128i_i8[0] = v31;
      v11[-4].m128i_i8[0] = v10[-4].m128i_i8[0] & 0x80 | v31 & 0x7F;
      v11[-4].m128i_i8[1] = v10[-4].m128i_i8[1] & 3 | v11[-4].m128i_i8[1] & 0xFC;
      v11[-4].m128i_i32[0] = v10[-4].m128i_i32[0] & 0x3FC00 | v11[-4].m128i_i32[0] & 0xFFFC03FF;
      v11[-4].m128i_i32[1] = v10[-4].m128i_i32[1];
      *(__m128i *)((char *)v11 - 56) = _mm_loadu_si128((const __m128i *)((char *)v10 - 56));
      *(__m128i *)((char *)v11 - 40) = _mm_loadu_si128((const __m128i *)((char *)v10 - 40));
      *(__m128i *)((char *)v11 - 24) = _mm_loadu_si128((const __m128i *)((char *)v10 - 24));
      v11[-1].m128i_i64[1] = v10[-1].m128i_i64[1];
      --v54;
    }
    while ( v54 );
  }
  v32 = 0xCF3CF3CF3CF3CF3DLL * (((char *)a4 - (char *)v9) >> 3);
  if ( (char *)a4 - (char *)v9 > 0 )
  {
    do
    {
      v33 = (_QWORD *)v11[4].m128i_i64[0];
      v34 = (_QWORD *)v11[4].m128i_i64[1];
      v11->m128i_i64[0] = v9->m128i_i64[0];
      v35 = v33;
      v11->m128i_i64[1] = v9->m128i_i64[1];
      v11[1] = _mm_loadu_si128(v9 + 1);
      v11[2].m128i_i64[0] = v9[2].m128i_i64[0];
      v11[2].m128i_i64[1] = v9[2].m128i_i64[1];
      v36 = _mm_loadu_si128(v9 + 3);
      v11[4].m128i_i64[1] = 0;
      v11[5].m128i_i64[0] = 0;
      v11[4].m128i_i64[0] = 0;
      v11[3] = v36;
      v11[4].m128i_i64[0] = v9[4].m128i_i64[0];
      v37 = v9[4].m128i_i64[1];
      v9[4].m128i_i64[0] = 0;
      v38 = v11[4].m128i_i64[1];
      v11[4].m128i_i64[1] = v37;
      v39 = v9[5].m128i_i64[0];
      v9[4].m128i_i64[1] = v38;
      v40 = v11[5].m128i_i64[0];
      v11[5].m128i_i64[0] = v39;
      for ( v9[5].m128i_i64[0] = v40; v34 != v35; v35 += 8 )
      {
        while ( 1 )
        {
          v41 = (char *)v35[3];
          if ( v41 == (char *)(v35 + 5) )
            break;
          operator delete(v41);
          v35 += 8;
          if ( v35 == v34 )
            goto LABEL_24;
        }
      }
LABEL_24:
      if ( v33 )
        operator delete(v33);
      v42 = v9[5].m128i_i32[2];
      v11 = (__m128i *)((char *)v11 + 168);
      v9 = (const __m128i *)((char *)v9 + 168);
      v11[-5].m128i_i32[0] = v42;
      v11[-5].m128i_i32[1] = v9[-5].m128i_i32[1];
      v11[-5].m128i_i64[1] = v9[-5].m128i_i64[1];
      LOBYTE(v42) = v9[-4].m128i_i8[0] & 1 | v11[-4].m128i_i8[0] & 0xFE;
      v11[-4].m128i_i8[0] = v42;
      LOBYTE(v42) = v9[-4].m128i_i8[0] & 2 | v42 & 0xFD;
      v11[-4].m128i_i8[0] = v42;
      LOBYTE(v42) = v9[-4].m128i_i8[0] & 4 | v42 & 0xFB;
      v11[-4].m128i_i8[0] = v42;
      LOBYTE(v42) = v9[-4].m128i_i8[0] & 8 | v42 & 0xF7;
      v11[-4].m128i_i8[0] = v42;
      LOBYTE(v42) = v9[-4].m128i_i8[0] & 0x10 | v42 & 0xEF;
      v11[-4].m128i_i8[0] = v42;
      LOBYTE(v42) = v9[-4].m128i_i8[0] & 0x20 | v42 & 0xDF;
      v11[-4].m128i_i8[0] = v42;
      LOBYTE(v42) = v9[-4].m128i_i8[0] & 0x40 | v42 & 0xBF;
      v11[-4].m128i_i8[0] = v42;
      v11[-4].m128i_i8[0] = v9[-4].m128i_i8[0] & 0x80 | v42 & 0x7F;
      v11[-4].m128i_i8[1] = v9[-4].m128i_i8[1] & 3 | v11[-4].m128i_i8[1] & 0xFC;
      v11[-4].m128i_i32[0] = v9[-4].m128i_i32[0] & 0x3FC00 | v11[-4].m128i_i32[0] & 0xFFFC03FF;
      v11[-4].m128i_i32[1] = v9[-4].m128i_i32[1];
      *(__m128i *)((char *)v11 - 56) = _mm_loadu_si128((const __m128i *)((char *)v9 - 56));
      *(__m128i *)((char *)v11 - 40) = _mm_loadu_si128((const __m128i *)((char *)v9 - 40));
      *(__m128i *)((char *)v11 - 24) = _mm_loadu_si128((const __m128i *)((char *)v9 - 24));
      v11[-1].m128i_i64[1] = v9[-1].m128i_i64[1];
      --v32;
    }
    while ( v32 );
  }
  return v11;
}
