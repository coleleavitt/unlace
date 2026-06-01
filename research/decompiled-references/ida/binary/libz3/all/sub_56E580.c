_QWORD *__fastcall sub_56E580(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rax
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 i; // rdx
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r13
  __m128i *v17; // rax
  _BYTE *v18; // rsi
  signed __int64 v19; // rdx
  bool v20; // zf
  int v21; // edx
  unsigned int v22; // eax
  int v23; // esi
  __int64 v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rcx
  int v28; // edx
  int v29; // eax
  unsigned __int64 v30; // r12
  unsigned int v31; // r13d
  int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // r13
  unsigned int v35; // edx
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r11
  __int64 v39; // rax
  unsigned __int64 v40; // rbp
  __int64 v41; // rbx
  int v42; // r12d
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // r15
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rbx
  int v49; // eax
  __int64 v50; // rax
  _QWORD *result; // rax
  __int64 v52; // rax
  __m128i *v53; // rax
  __int64 v54; // r10
  __m128i *v55; // r14
  __m128i *v56; // rdx
  const __m128i *v57; // rbx
  __int64 v58; // rax
  __m128i *v59; // r15
  __int64 v60; // rdx
  __m128i *v61; // rsi
  __m128i *v62; // rdx
  __m128i v63; // xmm0
  unsigned int v64; // [rsp+0h] [rbp-58h]
  __int64 v65; // [rsp+0h] [rbp-58h]
  __int64 v66; // [rsp+8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+10h] [rbp-48h]

  v3 = a1;
  v4 = *(_QWORD *)(a2 + 8);
  v20 = *(_QWORD *)(a2 + 16) == 0;
  *(_QWORD *)a1 = qword_1C67518;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = v4;
  if ( !v20 )
    sub_577180(a1 + 16, a2 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  v5 = *(_DWORD *)(v4 + 8);
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 32) = v5;
  *(_QWORD *)a1 = &off_1C67AE0;
  v6 = *(_QWORD *)(a2 + 40);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 - 4);
    v64 = *(_DWORD *)(v6 - 8);
    v8 = (_QWORD *)sub_186B270(32LL * v64 + 8);
    v9 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 40) = v8 + 1;
    *v8 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v64), _mm_cvtsi32_si128(v7)).m128i_u64[0];
    if ( v9 )
    {
      v10 = 32LL * *(unsigned int *)(v9 - 4);
      if ( v10 )
      {
        for ( i = 0; i != v10; i += 32LL )
        {
          *(__m128i *)&v8[i / 8 + 1] = _mm_loadu_si128((const __m128i *)(v9 + i));
          *(__m128i *)&v8[i / 8 + 3] = _mm_loadu_si128((const __m128i *)(v9 + i + 16));
        }
      }
    }
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  v12 = *(_QWORD *)(a2 + 80);
  v13 = _mm_loadl_epi64((const __m128i *)(a2 + 72));
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 80) = v12;
  v14 = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 72) = v13.m128i_i64[0];
  if ( v14 )
  {
    v15 = *(_QWORD *)(v14 - 16);
    v16 = *(_QWORD *)(v14 - 8);
    v17 = (__m128i *)sub_186B270(v15 + 16);
    v18 = *(_BYTE **)(a2 + 88);
    *(_QWORD *)(a1 + 88) = v17 + 1;
    *v17 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v16);
    if ( v18 )
    {
      v19 = *((_QWORD *)v18 - 1);
      v20 = v19 == 1;
      if ( v19 <= 1 )
      {
        v21 = *(_DWORD *)(a1 + 76);
        if ( v20 )
          v17[1].m128i_i8[0] = *v18;
      }
      else
      {
        memmove(&v17[1], v18, v19);
        v21 = *(_DWORD *)(a1 + 76);
      }
    }
    else
    {
      v21 = *(_DWORD *)(a1 + 76);
    }
  }
  else
  {
    v21 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v13, 229));
  }
  v22 = *(_DWORD *)(a2 + 140);
  v23 = 8;
  *(_DWORD *)(a1 + 104) = v21;
  *(_QWORD *)(a1 + 96) = a1 + 88;
  *(_QWORD *)(a1 + 112) = a1 + 88;
  if ( v22 >= 8 )
    v23 = v22;
  *(_DWORD *)(a1 + 120) = v21;
  v24 = (((((((((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2) | ((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 4)
           | ((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
           | ((unsigned int)(v23 - 1) >> 1)
           | (v23 - 1)) >> 8)
         | ((((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2) | ((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 4)
         | ((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
         | ((unsigned int)(v23 - 1) >> 1)
         | (v23 - 1)) >> 16)
       | ((((((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2) | ((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 4)
         | ((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
         | ((unsigned int)(v23 - 1) >> 1)
         | (v23 - 1)) >> 8)
       | ((((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2) | ((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 4)
       | ((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
       | ((unsigned int)(v23 - 1) >> 1)
       | (v23 - 1))
      + 1;
  v25 = sub_186B270(16 * v24);
  if ( (((((((((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2) | ((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 4)
          | ((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
          | ((unsigned int)(v23 - 1) >> 1)
          | (v23 - 1)) >> 8)
        | ((((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2) | ((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 4)
        | ((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
        | ((unsigned int)(v23 - 1) >> 1)
        | (v23 - 1)) >> 16)
      | ((((((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2) | ((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 4)
        | ((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
        | ((unsigned int)(v23 - 1) >> 1)
        | (v23 - 1)) >> 8)
      | ((((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2) | ((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 4)
      | ((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
      | ((unsigned int)(v23 - 1) >> 1)
      | (v23 - 1)) != 0xFFFFFFFF )
  {
    v26 = (_QWORD *)v25;
    do
    {
      *v26 = 0;
      v26 += 4;
      *(v26 - 2) = 0;
    }
    while ( (_QWORD *)(v25 + 32LL * ((unsigned int)v24 >> 1)) != v26 );
    if ( ((((unsigned __int8)((((((((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
                                 | ((unsigned int)(v23 - 1) >> 1)
                                 | (v23 - 1)) >> 4)
                               | ((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
                               | ((unsigned int)(v23 - 1) >> 1)
                               | (v23 - 1)) >> 8)
                             | ((((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
                               | ((unsigned int)(v23 - 1) >> 1)
                               | (v23 - 1)) >> 4)
                             | ((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
                             | ((unsigned int)(v23 - 1) >> 1)
                             | (v23 - 1)) >> 16)
          | (unsigned __int8)(((unsigned __int16)(((((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
                                                  | ((unsigned int)(v23 - 1) >> 1)
                                                  | (v23 - 1)) >> 4)
                                                | ((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
                                                | ((unsigned int)(v23 - 1) >> 1)
                                                | (v23 - 1)) >> 8)
                            | ((((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
                              | ((unsigned int)(v23 - 1) >> 1)
                              | (v23 - 1)) >> 4)
                            | ((((unsigned int)(v23 - 1) >> 1) | (v23 - 1)) >> 2)
                            | ((unsigned int)(v23 - 1) >> 1)
                            | (v23 - 1)))
         + 1)
        & 1) != 0 )
      *(_QWORD *)(v25 + 16LL * ((unsigned int)v24 & 0xFFFFFFFE)) = 0;
  }
  v27 = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 128) = v25;
  *(_DWORD *)(a1 + 136) = v24;
  *(_QWORD *)(a1 + 140) = 0;
  v67 = v27;
  *(_QWORD *)(a1 + 152) = v27;
  if ( v27 == 0xFFFFFFFF )
    v67 = *(_QWORD *)(a1 + 80);
  if ( !v67 )
    goto LABEL_45;
  v28 = 0;
  v29 = 0;
  v30 = 0;
LABEL_23:
  v31 = 2 * v24;
  if ( 3 * (int)v24 < (unsigned int)(4 * (v28 + v29)) )
  {
    v53 = (__m128i *)sub_186B270(16LL * v31);
    v54 = 16LL * v31;
    v55 = v53;
    if ( v31 )
    {
      v56 = &v53[2 * (v24 & 0x7FFFFFFF)];
      do
      {
        v53->m128i_i64[0] = 0;
        v53 += 2;
        v53[-1].m128i_i64[0] = 0;
      }
      while ( v56 != v53 );
    }
    v57 = *(const __m128i **)(v3 + 128);
    v58 = *(unsigned int *)(v3 + 136);
    v59 = (__m128i *)&v57[v58];
    if ( v57 != &v57[v58] )
    {
      do
      {
        while ( v57->m128i_i32[1] != 2 )
        {
          if ( v59 == ++v57 )
            goto LABEL_61;
        }
        v60 = 16LL * (v57->m128i_i32[0] & (v31 - 1));
        v61 = &v55[(unsigned __int64)v60 / 0x10];
        if ( v54 == v60 )
        {
LABEL_66:
          if ( v55 == v61 )
          {
LABEL_73:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v62 = v55;
          while ( v62->m128i_i32[1] )
          {
            if ( v61 == ++v62 )
              goto LABEL_73;
          }
        }
        else
        {
          v62 = &v55[(unsigned __int64)v60 / 0x10];
          while ( v62->m128i_i32[1] )
          {
            if ( &v55[(unsigned __int64)v54 / 0x10] == ++v62 )
              goto LABEL_66;
          }
        }
        v63 = _mm_loadu_si128(v57++);
        *v62 = v63;
      }
      while ( v59 != v57 );
LABEL_61:
      v59 = *(__m128i **)(v3 + 128);
    }
    if ( v59 )
      sub_186B220(v59);
    *(_QWORD *)(v3 + 128) = v55;
    *(_DWORD *)(v3 + 136) = v31;
    *(_DWORD *)(v3 + 144) = 0;
  }
  v32 = sub_17E8B20(v30 + **(_QWORD **)(v3 + 96), *(unsigned int *)(v3 + 104), 0);
  v33 = *(unsigned int *)(v3 + 136);
  v34 = *(_QWORD *)(v3 + 128);
  v35 = v33 - 1;
  v33 *= 16;
  v36 = v34 + v33;
  v37 = 16LL * (v32 & v35);
  v38 = v34 + v37;
  if ( v37 == v33 )
  {
    v43 = 0;
    goto LABEL_36;
  }
  v39 = v3;
  v66 = *(_QWORD *)(v3 + 128);
  v40 = v30;
  v41 = v34 + v37;
  v42 = v32;
  v65 = v34 + v37;
  v43 = 0;
  v44 = v36;
  v45 = v39;
  while ( 1 )
  {
    v46 = *(_DWORD *)(v41 + 4);
    if ( v46 != 2 )
    {
      if ( !v46 )
      {
        v52 = v45;
        v32 = v42;
        v30 = v40;
        v3 = v52;
        if ( !v43 )
        {
          v43 = v41;
          goto LABEL_48;
        }
        goto LABEL_47;
      }
      v43 = v41;
      goto LABEL_28;
    }
    if ( v42 == *(_DWORD *)v41
      && !memcmp(
            (const void *)(*(_QWORD *)(v41 + 8) + **(_QWORD **)(v45 + 112)),
            (const void *)(**(_QWORD **)(v45 + 112) + v40),
            *(unsigned int *)(v45 + 120)) )
    {
      break;
    }
LABEL_28:
    v41 += 16;
    if ( v44 == v41 )
    {
      v47 = v45;
      v38 = v65;
      v34 = v66;
      v32 = v42;
      v30 = v40;
      v3 = v47;
LABEL_36:
      if ( v34 == v38 )
      {
LABEL_65:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v48 = v38;
      while ( 1 )
      {
        v49 = *(_DWORD *)(v34 + 4);
        if ( v49 == 2 )
        {
          if ( v32 == *(_DWORD *)v34
            && !memcmp(
                  (const void *)(*(_QWORD *)(v34 + 8) + **(_QWORD **)(v3 + 112)),
                  (const void *)(**(_QWORD **)(v3 + 112) + v30),
                  *(unsigned int *)(v3 + 120)) )
          {
            v50 = *(unsigned int *)(v3 + 72);
            *(_QWORD *)(v34 + 8) = v30;
            *(_DWORD *)(v34 + 4) = 2;
            v30 += v50;
            if ( v30 >= v67 )
              goto LABEL_45;
LABEL_34:
            v29 = *(_DWORD *)(v3 + 140);
            v28 = *(_DWORD *)(v3 + 144);
            LODWORD(v24) = *(_DWORD *)(v3 + 136);
            goto LABEL_23;
          }
        }
        else
        {
          if ( !v49 )
          {
            if ( !v43 )
            {
              v43 = v34;
              goto LABEL_48;
            }
LABEL_47:
            --*(_DWORD *)(v3 + 144);
LABEL_48:
            *(_QWORD *)(v43 + 8) = v30;
            *(_DWORD *)(v43 + 4) = 2;
            *(_DWORD *)v43 = v32;
            ++*(_DWORD *)(v3 + 140);
            goto LABEL_33;
          }
          v43 = v34;
        }
        v34 += 16;
        if ( v48 == v34 )
          goto LABEL_65;
      }
    }
  }
  v30 = v40;
  *(_DWORD *)(v41 + 4) = 2;
  v3 = v45;
  *(_QWORD *)(v41 + 8) = v30;
LABEL_33:
  v30 += *(unsigned int *)(v3 + 72);
  if ( v30 < v67 )
    goto LABEL_34;
LABEL_45:
  result = (_QWORD *)sub_186B270(0xC0u);
  *result = 0;
  result[1] = 0;
  result[3] = 0;
  result[4] = 0;
  result[6] = 0;
  result[7] = 0;
  result[9] = 0;
  result[10] = 0;
  result[12] = 0;
  result[13] = 0;
  result[15] = 0;
  result[16] = 0;
  result[18] = 0;
  result[19] = 0;
  result[21] = 0;
  result[22] = 0;
  *(_QWORD *)(v3 + 160) = result;
  *(_QWORD *)(v3 + 168) = 8;
  *(_DWORD *)(v3 + 176) = 0;
  return result;
}

