__m128i *__fastcall sub_173C660(
        __m128i *a1,
        __m128i *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7)
{
  const __m128i *v7; // r14
  __m128i *v8; // r13
  const __m128i *v9; // rbp
  __m128i *v10; // rbx
  const __m128i *v11; // r15
  __m128i *v12; // r12
  _QWORD *v13; // rcx
  _QWORD *v14; // rsi
  __m128i v15; // xmm1
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  _QWORD *i; // rax
  char *v21; // rdi
  __int32 v22; // eax
  _QWORD *v23; // r12
  _QWORD *v24; // rdx
  _QWORD *v25; // r15
  __m128i v26; // xmm6
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rcx
  char *v31; // rdi
  __int8 v32; // al
  __int8 v33; // al
  __int8 v34; // al
  __int8 v35; // al
  __int8 v36; // al
  __int8 v37; // al
  __int8 v38; // al
  bool v39; // zf
  _QWORD *v40; // r12
  _QWORD *v41; // r13
  _QWORD *v42; // rbp
  __m128i v43; // xmm3
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  char *v48; // rdi
  __int32 v49; // eax
  const __m128i *v51; // r15
  __m128i *v52; // r12
  _QWORD *v53; // rsi
  _QWORD *v54; // rcx
  __m128i v55; // xmm7
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rax
  _QWORD *j; // rax
  char *v61; // rdi
  __int32 v62; // eax
  _QWORD *v63; // r15
  _QWORD *v64; // r14
  __m128i v65; // xmm4
  _QWORD *v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rsi
  char *v71; // rdi
  __int32 v72; // eax
  signed __int64 v73; // rbx
  _QWORD *v74; // [rsp+0h] [rbp-68h]
  _QWORD *v75; // [rsp+0h] [rbp-68h]
  _QWORD *v76; // [rsp+0h] [rbp-68h]
  _QWORD *v77; // [rsp+8h] [rbp-60h]
  unsigned __int64 v78; // [rsp+8h] [rbp-60h]
  _QWORD *v79; // [rsp+8h] [rbp-60h]
  unsigned __int64 v80; // [rsp+8h] [rbp-60h]
  __int64 v81; // [rsp+10h] [rbp-58h]
  _QWORD *v82; // [rsp+10h] [rbp-58h]
  __int64 v83; // [rsp+10h] [rbp-58h]
  unsigned __int64 v84; // [rsp+18h] [rbp-50h]
  unsigned __int64 v85; // [rsp+18h] [rbp-50h]
  unsigned __int64 v86; // [rsp+20h] [rbp-48h]
  unsigned __int64 v87; // [rsp+20h] [rbp-48h]
  __int64 v88; // [rsp+28h] [rbp-40h]
  __int64 v89; // [rsp+28h] [rbp-40h]

  v7 = a6;
  v8 = a1;
  v9 = a2;
  v10 = a3;
  if ( a4 > a5 && a5 <= a7 )
  {
    if ( !a5 )
      return v8;
    v88 = (char *)a2 - (char *)a1;
    v86 = 0xCF3CF3CF3CF3CF3DLL * (((char *)a3 - (char *)a2) >> 3);
    v84 = 0xCF3CF3CF3CF3CF3DLL * (((char *)a2 - (char *)a1) >> 3);
    if ( (char *)a3 - (char *)a2 <= 0 )
    {
      if ( v88 <= 0 )
        return v8;
      v78 = 0;
      v81 = 0;
    }
    else
    {
      v11 = a2;
      v12 = (__m128i *)a6;
      do
      {
        v13 = (_QWORD *)v12[4].m128i_i64[0];
        v14 = (_QWORD *)v12[4].m128i_i64[1];
        v12->m128i_i64[0] = v11->m128i_i64[0];
        v12->m128i_i64[1] = v11->m128i_i64[1];
        v12[1] = _mm_loadu_si128(v11 + 1);
        v12[2].m128i_i64[0] = v11[2].m128i_i64[0];
        v12[2].m128i_i64[1] = v11[2].m128i_i64[1];
        v15 = _mm_loadu_si128(v11 + 3);
        v12[4].m128i_i64[1] = 0;
        v12[5].m128i_i64[0] = 0;
        v12[4].m128i_i64[0] = 0;
        v12[3] = v15;
        v12[4].m128i_i64[0] = v11[4].m128i_i64[0];
        v16 = v11[4].m128i_i64[1];
        v11[4].m128i_i64[0] = 0;
        v17 = v12[4].m128i_i64[1];
        v12[4].m128i_i64[1] = v16;
        v18 = v11[5].m128i_i64[0];
        v11[4].m128i_i64[1] = v17;
        v19 = v12[5].m128i_i64[0];
        v12[5].m128i_i64[0] = v18;
        v11[5].m128i_i64[0] = v19;
        for ( i = v13; v14 != i; i += 8 )
        {
          while ( 1 )
          {
            v21 = (char *)i[3];
            if ( v21 == (char *)(i + 5) )
              break;
            v77 = v13;
            v74 = i;
            operator delete(v21);
            v13 = v77;
            i = v74 + 8;
            if ( v74 + 8 == v14 )
              goto LABEL_9;
          }
        }
LABEL_9:
        if ( v13 )
          operator delete(v13);
        v22 = v11[5].m128i_i32[2];
        v12 = (__m128i *)((char *)v12 + 168);
        v11 = (const __m128i *)((char *)v11 + 168);
        v12[-5].m128i_i32[0] = v22;
        v12[-5].m128i_i32[1] = v11[-5].m128i_i32[1];
        v12[-5].m128i_i64[1] = v11[-5].m128i_i64[1];
        LOBYTE(v22) = v11[-4].m128i_i8[0] & 1 | v12[-4].m128i_i8[0] & 0xFE;
        v12[-4].m128i_i8[0] = v22;
        LOBYTE(v22) = v11[-4].m128i_i8[0] & 2 | v22 & 0xFD;
        v12[-4].m128i_i8[0] = v22;
        LOBYTE(v22) = v11[-4].m128i_i8[0] & 4 | v22 & 0xFB;
        v12[-4].m128i_i8[0] = v22;
        LOBYTE(v22) = v11[-4].m128i_i8[0] & 8 | v22 & 0xF7;
        v12[-4].m128i_i8[0] = v22;
        LOBYTE(v22) = v11[-4].m128i_i8[0] & 0x10 | v22 & 0xEF;
        v12[-4].m128i_i8[0] = v22;
        LOBYTE(v22) = v11[-4].m128i_i8[0] & 0x20 | v22 & 0xDF;
        v12[-4].m128i_i8[0] = v22;
        LOBYTE(v22) = v11[-4].m128i_i8[0] & 0x40 | v22 & 0xBF;
        v12[-4].m128i_i8[0] = v22;
        v12[-4].m128i_i8[0] = v11[-4].m128i_i8[0] & 0x80 | v22 & 0x7F;
        v12[-4].m128i_i8[1] = v11[-4].m128i_i8[1] & 3 | v12[-4].m128i_i8[1] & 0xFC;
        v12[-4].m128i_i32[0] = v11[-4].m128i_i32[0] & 0x3FC00 | v12[-4].m128i_i32[0] & 0xFFFC03FF;
        v12[-4].m128i_i32[1] = v11[-4].m128i_i32[1];
        *(__m128i *)((char *)v12 - 56) = _mm_loadu_si128((const __m128i *)((char *)v11 - 56));
        *(__m128i *)((char *)v12 - 40) = _mm_loadu_si128((const __m128i *)((char *)v11 - 40));
        *(__m128i *)((char *)v12 - 24) = _mm_loadu_si128((const __m128i *)((char *)v11 - 24));
        v12[-1].m128i_i64[1] = v11[-1].m128i_i64[1];
        --v86;
      }
      while ( v86 );
      v81 = (char *)v12 - (char *)v7;
      v78 = 0xCF3CF3CF3CF3CF3DLL * (((char *)v12 - (char *)v7) >> 3);
      if ( v88 <= 0 )
      {
LABEL_19:
        if ( v81 > 0 )
        {
          v10 = v8;
          do
          {
            v40 = (_QWORD *)v10[4].m128i_i64[0];
            v41 = (_QWORD *)v10[4].m128i_i64[1];
            v10->m128i_i64[0] = v7->m128i_i64[0];
            v42 = v40;
            v10->m128i_i64[1] = v7->m128i_i64[1];
            v10[1] = _mm_loadu_si128(v7 + 1);
            v10[2].m128i_i64[0] = v7[2].m128i_i64[0];
            v10[2].m128i_i64[1] = v7[2].m128i_i64[1];
            v43 = _mm_loadu_si128(v7 + 3);
            v10[4].m128i_i64[1] = 0;
            v10[5].m128i_i64[0] = 0;
            v10[4].m128i_i64[0] = 0;
            v10[3] = v43;
            v10[4].m128i_i64[0] = v7[4].m128i_i64[0];
            v44 = v7[4].m128i_i64[1];
            v7[4].m128i_i64[0] = 0;
            v45 = v10[4].m128i_i64[1];
            v10[4].m128i_i64[1] = v44;
            v46 = v7[5].m128i_i64[0];
            v7[4].m128i_i64[1] = v45;
            v47 = v10[5].m128i_i64[0];
            v10[5].m128i_i64[0] = v46;
            for ( v7[5].m128i_i64[0] = v47; v41 != v42; v42 += 8 )
            {
              while ( 1 )
              {
                v48 = (char *)v42[3];
                if ( v48 == (char *)(v42 + 5) )
                  break;
                operator delete(v48);
                v42 += 8;
                if ( v42 == v41 )
                  goto LABEL_24;
              }
            }
LABEL_24:
            if ( v40 )
              operator delete(v40);
            v49 = v7[5].m128i_i32[2];
            v10 = (__m128i *)((char *)v10 + 168);
            v7 = (const __m128i *)((char *)v7 + 168);
            v10[-5].m128i_i32[0] = v49;
            v10[-5].m128i_i32[1] = v7[-5].m128i_i32[1];
            v10[-5].m128i_i64[1] = v7[-5].m128i_i64[1];
            LOBYTE(v49) = v7[-4].m128i_i8[0] & 1 | v10[-4].m128i_i8[0] & 0xFE;
            v10[-4].m128i_i8[0] = v49;
            LOBYTE(v49) = v7[-4].m128i_i8[0] & 2 | v49 & 0xFD;
            v10[-4].m128i_i8[0] = v49;
            LOBYTE(v49) = v7[-4].m128i_i8[0] & 4 | v49 & 0xFB;
            v10[-4].m128i_i8[0] = v49;
            LOBYTE(v49) = v7[-4].m128i_i8[0] & 8 | v49 & 0xF7;
            v10[-4].m128i_i8[0] = v49;
            LOBYTE(v49) = v7[-4].m128i_i8[0] & 0x10 | v49 & 0xEF;
            v10[-4].m128i_i8[0] = v49;
            LOBYTE(v49) = v7[-4].m128i_i8[0] & 0x20 | v49 & 0xDF;
            v10[-4].m128i_i8[0] = v49;
            LOBYTE(v49) = v7[-4].m128i_i8[0] & 0x40 | v49 & 0xBF;
            v10[-4].m128i_i8[0] = v49;
            v10[-4].m128i_i8[0] = v7[-4].m128i_i8[0] & 0x80 | v49 & 0x7F;
            v10[-4].m128i_i8[1] = v7[-4].m128i_i8[1] & 3 | v10[-4].m128i_i8[1] & 0xFC;
            v10[-4].m128i_i32[0] = v7[-4].m128i_i32[0] & 0x3FC00 | v10[-4].m128i_i32[0] & 0xFFFC03FF;
            v10[-4].m128i_i32[1] = v7[-4].m128i_i32[1];
            *(__m128i *)((char *)v10 - 56) = _mm_loadu_si128((const __m128i *)((char *)v7 - 56));
            *(__m128i *)((char *)v10 - 40) = _mm_loadu_si128((const __m128i *)((char *)v7 - 40));
            *(__m128i *)((char *)v10 - 24) = _mm_loadu_si128((const __m128i *)((char *)v7 - 24));
            v10[-1].m128i_i64[1] = v7[-1].m128i_i64[1];
            --v78;
          }
          while ( v78 );
          return v10;
        }
        return v8;
      }
    }
    do
    {
      v9 = (const __m128i *)((char *)v9 - 168);
      v10 = (__m128i *)((char *)v10 - 168);
      v23 = (_QWORD *)v10[4].m128i_i64[0];
      v24 = (_QWORD *)v10[4].m128i_i64[1];
      v10->m128i_i64[0] = v9->m128i_i64[0];
      v25 = v23;
      v10->m128i_i64[1] = v9->m128i_i64[1];
      v10[1] = _mm_loadu_si128(v9 + 1);
      v10[2].m128i_i64[0] = v9[2].m128i_i64[0];
      v10[2].m128i_i64[1] = v9[2].m128i_i64[1];
      v26 = _mm_loadu_si128(v9 + 3);
      v10[4].m128i_i64[1] = 0;
      v10[5].m128i_i64[0] = 0;
      v10[4].m128i_i64[0] = 0;
      v10[3] = v26;
      v10[4].m128i_i64[0] = v9[4].m128i_i64[0];
      v27 = v9[4].m128i_i64[1];
      v9[4].m128i_i64[0] = 0;
      v28 = v10[4].m128i_i64[1];
      v10[4].m128i_i64[1] = v27;
      v29 = v9[5].m128i_i64[0];
      v9[4].m128i_i64[1] = v28;
      v30 = v10[5].m128i_i64[0];
      v10[5].m128i_i64[0] = v29;
      for ( v9[5].m128i_i64[0] = v30; v24 != v25; v25 += 8 )
      {
        while ( 1 )
        {
          v31 = (char *)v25[3];
          if ( v31 == (char *)(v25 + 5) )
            break;
          v75 = v24;
          v25 += 8;
          operator delete(v31);
          v24 = v75;
          if ( v25 == v75 )
            goto LABEL_16;
        }
      }
LABEL_16:
      if ( v23 )
        operator delete(v23);
      v10[5].m128i_i32[2] = v9[5].m128i_i32[2];
      v10[5].m128i_i32[3] = v9[5].m128i_i32[3];
      v10[6].m128i_i64[0] = v9[6].m128i_i64[0];
      v32 = v9[6].m128i_i8[8] & 1 | v10[6].m128i_i8[8] & 0xFE;
      v10[6].m128i_i8[8] = v32;
      v33 = v9[6].m128i_i8[8] & 2 | v32 & 0xFD;
      v10[6].m128i_i8[8] = v33;
      v34 = v9[6].m128i_i8[8] & 4 | v33 & 0xFB;
      v10[6].m128i_i8[8] = v34;
      v35 = v9[6].m128i_i8[8] & 8 | v34 & 0xF7;
      v10[6].m128i_i8[8] = v35;
      v36 = v9[6].m128i_i8[8] & 0x10 | v35 & 0xEF;
      v10[6].m128i_i8[8] = v36;
      v37 = v9[6].m128i_i8[8] & 0x20 | v36 & 0xDF;
      v10[6].m128i_i8[8] = v37;
      v38 = v9[6].m128i_i8[8] & 0x40 | v37 & 0xBF;
      v10[6].m128i_i8[8] = v38;
      v10[6].m128i_i8[8] = v9[6].m128i_i8[8] & 0x80 | v38 & 0x7F;
      v10[6].m128i_i8[9] = v9[6].m128i_i8[9] & 3 | v10[6].m128i_i8[9] & 0xFC;
      v10[6].m128i_i32[2] = v9[6].m128i_i32[2] & 0x3FC00 | v10[6].m128i_i32[2] & 0xFFFC03FF;
      v10[6].m128i_i32[3] = v9[6].m128i_i32[3];
      v10[7] = _mm_loadu_si128(v9 + 7);
      v39 = v84-- == 1;
      v10[8] = _mm_loadu_si128(v9 + 8);
      v10[9] = _mm_loadu_si128(v9 + 9);
      v10[10].m128i_i64[0] = v9[10].m128i_i64[0];
    }
    while ( !v39 );
    goto LABEL_19;
  }
  if ( a4 > a7 )
  {
    v73 = (char *)a3 - (char *)a2;
    sub_172F6D0(a1, a2, a3);
    return (__m128i *)((char *)a1 + v73);
  }
  if ( a4 )
  {
    v89 = (char *)a3 - (char *)a2;
    v87 = 0xCF3CF3CF3CF3CF3DLL * (((char *)a2 - (char *)a1) >> 3);
    v85 = 0xCF3CF3CF3CF3CF3DLL * (((char *)a3 - (char *)a2) >> 3);
    if ( (char *)a2 - (char *)a1 <= 0 )
    {
      if ( v89 <= 0 )
        return v10;
      v80 = 0;
      v52 = (__m128i *)a6;
      v83 = 0;
    }
    else
    {
      v51 = a1;
      v52 = (__m128i *)a6;
      do
      {
        v53 = (_QWORD *)v52[4].m128i_i64[0];
        v54 = (_QWORD *)v52[4].m128i_i64[1];
        v52->m128i_i64[0] = v51->m128i_i64[0];
        v52->m128i_i64[1] = v51->m128i_i64[1];
        v52[1] = _mm_loadu_si128(v51 + 1);
        v52[2].m128i_i64[0] = v51[2].m128i_i64[0];
        v52[2].m128i_i64[1] = v51[2].m128i_i64[1];
        v55 = _mm_loadu_si128(v51 + 3);
        v52[4].m128i_i64[1] = 0;
        v52[5].m128i_i64[0] = 0;
        v52[4].m128i_i64[0] = 0;
        v52[3] = v55;
        v52[4].m128i_i64[0] = v51[4].m128i_i64[0];
        v56 = v51[4].m128i_i64[1];
        v51[4].m128i_i64[0] = 0;
        v57 = v52[4].m128i_i64[1];
        v52[4].m128i_i64[1] = v56;
        v58 = v51[5].m128i_i64[0];
        v51[4].m128i_i64[1] = v57;
        v59 = v52[5].m128i_i64[0];
        v52[5].m128i_i64[0] = v58;
        v51[5].m128i_i64[0] = v59;
        for ( j = v53; v54 != j; j += 8 )
        {
          while ( 1 )
          {
            v61 = (char *)j[3];
            if ( v61 == (char *)(j + 5) )
              break;
            v82 = j;
            v79 = v54;
            operator delete(v61);
            v54 = v79;
            j = v82 + 8;
            if ( v82 + 8 == v79 )
              goto LABEL_35;
          }
        }
LABEL_35:
        if ( v53 )
          operator delete(v53);
        v62 = v51[5].m128i_i32[2];
        v52 = (__m128i *)((char *)v52 + 168);
        v51 = (const __m128i *)((char *)v51 + 168);
        v52[-5].m128i_i32[0] = v62;
        v52[-5].m128i_i32[1] = v51[-5].m128i_i32[1];
        v52[-5].m128i_i64[1] = v51[-5].m128i_i64[1];
        LOBYTE(v62) = v51[-4].m128i_i8[0] & 1 | v52[-4].m128i_i8[0] & 0xFE;
        v52[-4].m128i_i8[0] = v62;
        LOBYTE(v62) = v51[-4].m128i_i8[0] & 2 | v62 & 0xFD;
        v52[-4].m128i_i8[0] = v62;
        LOBYTE(v62) = v51[-4].m128i_i8[0] & 4 | v62 & 0xFB;
        v52[-4].m128i_i8[0] = v62;
        LOBYTE(v62) = v51[-4].m128i_i8[0] & 8 | v62 & 0xF7;
        v52[-4].m128i_i8[0] = v62;
        LOBYTE(v62) = v51[-4].m128i_i8[0] & 0x10 | v62 & 0xEF;
        v52[-4].m128i_i8[0] = v62;
        LOBYTE(v62) = v51[-4].m128i_i8[0] & 0x20 | v62 & 0xDF;
        v52[-4].m128i_i8[0] = v62;
        LOBYTE(v62) = v51[-4].m128i_i8[0] & 0x40 | v62 & 0xBF;
        v52[-4].m128i_i8[0] = v62;
        v52[-4].m128i_i8[0] = v51[-4].m128i_i8[0] & 0x80 | v62 & 0x7F;
        v52[-4].m128i_i8[1] = v51[-4].m128i_i8[1] & 3 | v52[-4].m128i_i8[1] & 0xFC;
        v52[-4].m128i_i32[0] = v51[-4].m128i_i32[0] & 0x3FC00 | v52[-4].m128i_i32[0] & 0xFFFC03FF;
        v52[-4].m128i_i32[1] = v51[-4].m128i_i32[1];
        *(__m128i *)((char *)v52 - 56) = _mm_loadu_si128((const __m128i *)((char *)v51 - 56));
        *(__m128i *)((char *)v52 - 40) = _mm_loadu_si128((const __m128i *)((char *)v51 - 40));
        *(__m128i *)((char *)v52 - 24) = _mm_loadu_si128((const __m128i *)((char *)v51 - 24));
        v52[-1].m128i_i64[1] = v51[-1].m128i_i64[1];
        --v87;
      }
      while ( v87 );
      v83 = (char *)v52 - (char *)v7;
      v80 = 0xCF3CF3CF3CF3CF3DLL * (((char *)v52 - (char *)v7) >> 3);
      if ( v89 <= 0 )
        goto LABEL_45;
    }
    do
    {
      v63 = (_QWORD *)v8[4].m128i_i64[0];
      v8->m128i_i64[0] = v9->m128i_i64[0];
      v64 = v63;
      v8->m128i_i64[1] = v9->m128i_i64[1];
      v8[1] = _mm_loadu_si128(v9 + 1);
      v8[2].m128i_i64[0] = v9[2].m128i_i64[0];
      v8[2].m128i_i64[1] = v9[2].m128i_i64[1];
      v65 = _mm_loadu_si128(v9 + 3);
      v66 = (_QWORD *)v8[4].m128i_i64[1];
      v8[5].m128i_i64[0] = 0;
      v8[4].m128i_i64[1] = 0;
      v8[4].m128i_i64[0] = 0;
      v8[3] = v65;
      v8[4].m128i_i64[0] = v9[4].m128i_i64[0];
      v67 = v9[4].m128i_i64[1];
      v9[4].m128i_i64[0] = 0;
      v68 = v8[4].m128i_i64[1];
      v8[4].m128i_i64[1] = v67;
      v69 = v9[5].m128i_i64[0];
      v9[4].m128i_i64[1] = v68;
      v70 = v8[5].m128i_i64[0];
      v8[5].m128i_i64[0] = v69;
      v9[5].m128i_i64[0] = v70;
      if ( v63 != v66 )
      {
        do
        {
          while ( 1 )
          {
            v71 = (char *)v64[3];
            if ( v71 == (char *)(v64 + 5) )
              break;
            v76 = v66;
            v64 += 8;
            operator delete(v71);
            v66 = v76;
            if ( v64 == v76 )
              goto LABEL_42;
          }
          v64 += 8;
        }
        while ( v66 != v64 );
      }
LABEL_42:
      if ( v63 )
        operator delete(v63);
      v72 = v9[5].m128i_i32[2];
      v8 = (__m128i *)((char *)v8 + 168);
      v9 = (const __m128i *)((char *)v9 + 168);
      v8[-5].m128i_i32[0] = v72;
      v8[-5].m128i_i32[1] = v9[-5].m128i_i32[1];
      v8[-5].m128i_i64[1] = v9[-5].m128i_i64[1];
      LOBYTE(v72) = v9[-4].m128i_i8[0] & 1 | v8[-4].m128i_i8[0] & 0xFE;
      v8[-4].m128i_i8[0] = v72;
      LOBYTE(v72) = v9[-4].m128i_i8[0] & 2 | v72 & 0xFD;
      v8[-4].m128i_i8[0] = v72;
      LOBYTE(v72) = v9[-4].m128i_i8[0] & 4 | v72 & 0xFB;
      v8[-4].m128i_i8[0] = v72;
      LOBYTE(v72) = v9[-4].m128i_i8[0] & 8 | v72 & 0xF7;
      v8[-4].m128i_i8[0] = v72;
      LOBYTE(v72) = v9[-4].m128i_i8[0] & 0x10 | v72 & 0xEF;
      v8[-4].m128i_i8[0] = v72;
      LOBYTE(v72) = v9[-4].m128i_i8[0] & 0x20 | v72 & 0xDF;
      v8[-4].m128i_i8[0] = v72;
      LOBYTE(v72) = v9[-4].m128i_i8[0] & 0x40 | v72 & 0xBF;
      v8[-4].m128i_i8[0] = v72;
      v8[-4].m128i_i8[0] = v9[-4].m128i_i8[0] & 0x80 | v72 & 0x7F;
      v8[-4].m128i_i8[1] = v9[-4].m128i_i8[1] & 3 | v8[-4].m128i_i8[1] & 0xFC;
      v8[-4].m128i_i32[0] = v9[-4].m128i_i32[0] & 0x3FC00 | v8[-4].m128i_i32[0] & 0xFFFC03FF;
      v8[-4].m128i_i32[1] = v9[-4].m128i_i32[1];
      *(__m128i *)((char *)v8 - 56) = _mm_loadu_si128((const __m128i *)((char *)v9 - 56));
      *(__m128i *)((char *)v8 - 40) = _mm_loadu_si128((const __m128i *)((char *)v9 - 40));
      *(__m128i *)((char *)v8 - 24) = _mm_loadu_si128((const __m128i *)((char *)v9 - 24));
      v8[-1].m128i_i64[1] = v9[-1].m128i_i64[1];
      --v85;
    }
    while ( v85 );
LABEL_45:
    if ( v83 > 0 )
    {
      do
      {
        v52 = (__m128i *)((char *)v52 - 168);
        v10 = (__m128i *)((char *)v10 - 168);
        sub_172F0A0(v10, v52);
        --v80;
      }
      while ( v80 );
    }
  }
  return v10;
}
