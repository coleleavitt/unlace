__m128i *__fastcall sub_1273940(__m128i *a1, __int64 a2, __int64 a3)
{
  size_t v5; // r14
  const void *v6; // r15
  _BYTE **v7; // rbx
  int v8; // eax
  _BYTE *v9; // rax
  __int64 v10; // rdx
  size_t v11; // r14
  _BYTE *v12; // r15
  char *v13; // rbx
  void *v14; // rdi
  int v15; // eax
  char *v16; // rbx
  __int64 v17; // rdx
  char *v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _BYTE *v21; // r15
  size_t v22; // r14
  unsigned __int64 v23; // rcx
  char *v24; // rbx
  void *v25; // rdi
  int v26; // eax
  char *v27; // rbx
  __int64 v28; // rdx
  char *v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  _BYTE *v32; // r14
  size_t v33; // rbp
  unsigned __int64 v34; // rcx
  char *v35; // rbx
  _QWORD *v36; // rdi
  int v37; // eax
  char *v38; // rbx
  __int64 v39; // rdx
  char *v40; // rbx
  __int64 v41; // rax
  __m128i v42; // xmm0
  __m128i *v43; // rax
  __int64 v44; // rdx
  char *v45; // rax
  void **v46; // rbx
  __int64 v47; // rax
  void **v48; // r14
  __int64 v49; // rdx
  void **v50; // rbp
  __int64 v51; // rax
  _BYTE *v53; // rdi
  size_t v54; // rax
  void **v55; // rdi
  int v56; // r14d
  char *v57; // rdi
  int v58; // r14d
  __int64 v59; // rax
  _BYTE *v60; // rsi
  __int64 v61; // rdi
  _BYTE *v62; // rdx
  int v63; // r15d
  char *v64; // rdi
  int v65; // ebp
  _QWORD v66[2]; // [rsp+10h] [rbp-198h] BYREF
  __m128i v67; // [rsp+20h] [rbp-188h] BYREF
  char v68; // [rsp+30h] [rbp-178h]
  void *ptr; // [rsp+40h] [rbp-168h] BYREF
  __int64 v70; // [rsp+48h] [rbp-160h]
  _BYTE *v71; // [rsp+50h] [rbp-158h] BYREF
  __m128i si128; // [rsp+58h] [rbp-150h]
  _BYTE v73[320]; // [rsp+68h] [rbp-140h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(const void **)a2;
  v70 = 0x500000000LL;
  v7 = &v71;
  ptr = &v71;
  v71 = v73;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  if ( v5 > 0x20 )
  {
    sub_2236E10(&v71, v73, v5, 1);
    v53 = &v71[si128.m128i_i64[0]];
  }
  else
  {
    v8 = 1;
    if ( !v5 )
      goto LABEL_3;
    v53 = v73;
  }
  memcpy(v53, v6, v5);
  v5 += si128.m128i_i64[0];
  v8 = v70 + 1;
  v7 = (_BYTE **)((char *)ptr + 56 * (unsigned int)(v70 + 1) - 56);
LABEL_3:
  si128.m128i_i64[0] = v5;
  LODWORD(v70) = v8;
  v9 = v7[1];
  if ( v9 + 4 > v7[2] )
  {
    sub_2236E10(v7, v7 + 3, v9 + 4, 1);
    v9 = v7[1];
  }
  *(_DWORD *)&v9[(_QWORD)*v7] = 1667458861;
  v10 = (unsigned int)v70;
  v7[1] += 4;
  if ( HIDWORD(v70) > (unsigned int)v70 )
  {
    v11 = *(_QWORD *)(a3 + 8);
    v12 = *(_BYTE **)a3;
    v13 = (char *)ptr + 56 * v10;
    v14 = v13 + 24;
    *(__m128i *)(v13 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *(_QWORD *)v13 = v13 + 24;
    if ( v11 > 0x20 )
    {
      sub_2236E10(v13, v13 + 24, v11, 1);
      v14 = (void *)(*(_QWORD *)v13 + *((_QWORD *)v13 + 1));
    }
    else if ( !v11 )
    {
LABEL_8:
      v15 = v70;
      *((_QWORD *)v13 + 1) = v11;
      v16 = (char *)ptr;
      v17 = (unsigned int)(v15 + 1);
      LODWORD(v70) = v15 + 1;
      goto LABEL_9;
    }
    memcpy(v14, v12, v11);
    v11 += *((_QWORD *)v13 + 1);
    goto LABEL_8;
  }
  v59 = sub_2237400(&ptr, &v71, 0, 56, v66);
  v60 = *(_BYTE **)a3;
  v16 = (char *)v59;
  v61 = v59 + 56LL * (unsigned int)v70;
  v62 = (_BYTE *)(*(_QWORD *)a3 + *(_QWORD *)(a3 + 8));
  *(__m128i *)(v61 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  *(_QWORD *)v61 = v61 + 24;
  sub_A1FE50((_QWORD *)v61, v60, v62);
  sub_12737E0((__int64)&ptr, (__int64)v16);
  v63 = v66[0];
  if ( ptr != &v71 )
    free(ptr);
  ptr = v16;
  HIDWORD(v70) = v63;
  v17 = (unsigned int)(v70 + 1);
  LODWORD(v70) = v70 + 1;
LABEL_9:
  v18 = &v16[56 * v17 - 56];
  v19 = *((_QWORD *)v18 + 1);
  if ( (unsigned __int64)(v19 + 4) > *((_QWORD *)v18 + 2) )
  {
    sub_2236E10(v18, v18 + 24, v19 + 4, 1);
    v19 = *((_QWORD *)v18 + 1);
  }
  *(_DWORD *)(*(_QWORD *)v18 + v19) = 1667458861;
  *((_QWORD *)v18 + 1) += 4LL;
  v21 = (_BYTE *)sub_22B7480(a3);
  v22 = v20;
  v23 = v20;
  if ( HIDWORD(v70) > (unsigned int)v70 )
  {
    v24 = (char *)ptr + 56 * (unsigned int)v70;
    v25 = v24 + 24;
    *(__m128i *)(v24 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *(_QWORD *)v24 = v24 + 24;
    if ( v20 > 0x20 )
    {
      sub_2236E10(v24, v24 + 24, v20, 1);
      v25 = (void *)(*(_QWORD *)v24 + *((_QWORD *)v24 + 1));
    }
    else if ( !v20 )
    {
LABEL_14:
      v26 = v70;
      *((_QWORD *)v24 + 1) = v23;
      v27 = (char *)ptr;
      v28 = (unsigned int)(v26 + 1);
      LODWORD(v70) = v26 + 1;
      goto LABEL_15;
    }
    memcpy(v25, v21, v22);
    v23 = v22 + *((_QWORD *)v24 + 1);
    goto LABEL_14;
  }
  v27 = (char *)sub_2237400(&ptr, &v71, 0, 56, v66);
  v57 = &v27[56 * (unsigned int)v70];
  *(__m128i *)(v57 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  *(_QWORD *)v57 = v57 + 24;
  sub_A1FE50(v57, v21, &v21[v22]);
  sub_12737E0((__int64)&ptr, (__int64)v27);
  v58 = v66[0];
  if ( ptr != &v71 )
    free(ptr);
  ptr = v27;
  HIDWORD(v70) = v58;
  v28 = (unsigned int)(v70 + 1);
  LODWORD(v70) = v70 + 1;
LABEL_15:
  v29 = &v27[56 * v28 - 56];
  v30 = *((_QWORD *)v29 + 1);
  if ( (unsigned __int64)(v30 + 16) > *((_QWORD *)v29 + 2) )
  {
    sub_2236E10(v29, v29 + 24, v30 + 16, 1);
    v30 = *((_QWORD *)v29 + 1);
  }
  *(__m128i *)(*(_QWORD *)v29 + v30) = _mm_load_si128((const __m128i *)&xmmword_23A9E10);
  *((_QWORD *)v29 + 1) += 16LL;
  v32 = (_BYTE *)sub_22B7480(a3);
  v33 = v31;
  v34 = v31;
  if ( HIDWORD(v70) > (unsigned int)v70 )
  {
    v35 = (char *)ptr + 56 * (unsigned int)v70;
    v36 = v35 + 24;
    *(__m128i *)(v35 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *(_QWORD *)v35 = v35 + 24;
    if ( v31 > 0x20 )
    {
      sub_2236E10(v35, v35 + 24, v31, 1);
      v36 = (_QWORD *)(*(_QWORD *)v35 + *((_QWORD *)v35 + 1));
    }
    else if ( !v31 )
    {
LABEL_20:
      v37 = v70;
      *((_QWORD *)v35 + 1) = v34;
      v38 = (char *)ptr;
      v39 = (unsigned int)(v37 + 1);
      LODWORD(v70) = v37 + 1;
      goto LABEL_21;
    }
    memcpy(v36, v32, v33);
    v34 = v33 + *((_QWORD *)v35 + 1);
    goto LABEL_20;
  }
  v38 = (char *)sub_2237400(&ptr, &v71, 0, 56, v66);
  v64 = &v38[56 * (unsigned int)v70];
  *(__m128i *)(v64 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  *(_QWORD *)v64 = v64 + 24;
  sub_A1FE50(v64, v32, &v32[v33]);
  sub_12737E0((__int64)&ptr, (__int64)v38);
  v36 = ptr;
  v65 = v66[0];
  if ( ptr != &v71 )
    free(ptr);
  ptr = v38;
  HIDWORD(v70) = v65;
  v39 = (unsigned int)(v70 + 1);
  LODWORD(v70) = v70 + 1;
LABEL_21:
  v40 = &v38[56 * v39 - 56];
  v41 = *((_QWORD *)v40 + 1);
  if ( (unsigned __int64)(v41 + 20) > *((_QWORD *)v40 + 2) )
  {
    v36 = v40;
    sub_2236E10(v40, v40 + 24, v41 + 20, 1);
    v41 = *((_QWORD *)v40 + 1);
  }
  v42 = _mm_load_si128((const __m128i *)&xmmword_23A9E20);
  v43 = (__m128i *)(*(_QWORD *)v40 + v41);
  v43[1].m128i_i32[0] = 1667458861;
  *v43 = v42;
  v44 = (unsigned int)v70;
  LODWORD(v43) = v70;
  *((_QWORD *)v40 + 1) += 20LL;
  if ( HIDWORD(v70) <= (unsigned int)v43 )
  {
    v46 = (void **)sub_2237400(&ptr, &v71, 0, 56, v66);
    v54 = j__strlen("mingw32-gcc");
    v55 = &v46[7 * (unsigned int)v70];
    *(__m128i *)(v55 + 1) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *v55 = v55 + 3;
    sub_A1FE50(v55, "mingw32-gcc", &aMingw32Gcc[v54]);
    sub_12737E0((__int64)&ptr, (__int64)v46);
    v36 = ptr;
    v56 = v66[0];
    if ( ptr != &v71 )
      free(ptr);
    ptr = v46;
    HIDWORD(v70) = v56;
    v47 = (unsigned int)(v70 + 1);
    LODWORD(v70) = v70 + 1;
  }
  else
  {
    v45 = (char *)ptr + 56 * v44;
    *(__m128i *)(v45 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *(_QWORD *)v45 = v45 + 24;
    qmemcpy(v45 + 24, "mingw32-gcc", 11);
    v46 = (void **)ptr;
    *((_QWORD *)v45 + 1) = 11;
    v47 = (unsigned int)(v70 + 1);
    LODWORD(v70) = v70 + 1;
  }
  v48 = &v46[7 * v47];
  if ( v48 == v46 )
  {
    v50 = v46;
LABEL_39:
    v51 = std::_V2::generic_category((std::_V2 *)v36);
    a1[2].m128i_i8[0] |= 1u;
    a1->m128i_i32[0] = 2;
    a1->m128i_i64[1] = v51;
  }
  else
  {
    while ( 1 )
    {
      v36 = v66;
      sub_22910E0(v66, *v46, v46[1], 0, 0);
      if ( (v68 & 1) == 0 )
        break;
      v46 += 7;
      if ( v48 == v46 )
      {
        v46 = (void **)ptr;
        v50 = (void **)((char *)ptr + 56 * (unsigned int)v70);
        goto LABEL_39;
      }
    }
    a1[2].m128i_i8[0] &= ~1u;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)v66[0] == &v67 )
    {
      a1[1] = _mm_load_si128(&v67);
    }
    else
    {
      a1->m128i_i64[0] = v66[0];
      a1[1].m128i_i64[0] = v67.m128i_i64[0];
    }
    v49 = (unsigned int)v70;
    v46 = (void **)ptr;
    a1->m128i_i64[1] = v66[1];
    v50 = &v46[7 * v49];
  }
  if ( v50 != v46 )
  {
    do
    {
      while ( 1 )
      {
        v50 -= 7;
        if ( *v50 == v50 + 3 )
          break;
        free(*v50);
        if ( v46 == v50 )
          goto LABEL_43;
      }
    }
    while ( v46 != v50 );
LABEL_43:
    v46 = (void **)ptr;
  }
  if ( v46 != (void **)&v71 )
    free(v46);
  return a1;
}
