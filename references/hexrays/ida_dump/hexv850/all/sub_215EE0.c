unsigned __int64 __fastcall sub_215EE0(__int64 a1)
{
  __int64 v1; // r14
  unsigned int *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  char merge_state; // al
  unsigned __int64 v9; // rcx
  __int64 v10; // r12
  unsigned int *v11; // rbp
  unsigned __int64 v12; // rdx
  int *v13; // rdi
  __int64 *v14; // rdx
  int *v15; // r15
  __int64 v16; // r12
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // r14
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rax
  size_t v27; // r15
  size_t v28; // r15
  __int64 v29; // rdi
  __int64 v30; // rsi
  __m128i *v31; // rax
  __m128i *v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  unsigned __int64 v37; // rdi
  __int64 v38; // r13
  __int64 v39; // r12
  __int64 v40; // rbp
  _QWORD *v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rdi
  unsigned __int64 v44; // rdx
  int *v45; // rdi
  int *v46; // r14
  int v47; // r12d
  int *i; // r15
  int *v49; // r13
  unsigned __int64 v51; // r12
  _QWORD *v52; // r15
  __int64 v53; // rdi
  __int64 v54; // rdi
  unsigned int *v55; // [rsp+0h] [rbp-208h]
  int *v56; // [rsp+0h] [rbp-208h]
  int *v57; // [rsp+0h] [rbp-208h]
  unsigned int *v58; // [rsp+0h] [rbp-208h]
  unsigned int *v59; // [rsp+0h] [rbp-208h]
  int v60; // [rsp+Ch] [rbp-1FCh]
  int v61; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v62; // [rsp+18h] [rbp-1F0h]
  unsigned int *v63; // [rsp+20h] [rbp-1E8h] BYREF
  __int128 v64; // [rsp+28h] [rbp-1E0h]
  unsigned __int64 v65; // [rsp+40h] [rbp-1C8h] BYREF
  __m128i v66; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v67; // [rsp+60h] [rbp-1A8h] BYREF
  __int128 v68; // [rsp+68h] [rbp-1A0h]
  __int64 v69; // [rsp+80h] [rbp-188h] BYREF
  __m128i si128; // [rsp+88h] [rbp-180h]
  __int64 v71; // [rsp+98h] [rbp-170h]
  void *src; // [rsp+A0h] [rbp-168h]
  size_t n[2]; // [rsp+A8h] [rbp-160h]
  void *v74; // [rsp+B8h] [rbp-150h]
  size_t v75[2]; // [rsp+C0h] [rbp-148h]
  __int64 v76; // [rsp+D0h] [rbp-138h] BYREF
  unsigned __int64 v77; // [rsp+D8h] [rbp-130h]
  __int64 v78; // [rsp+E0h] [rbp-128h]
  _DWORD v79[4]; // [rsp+F0h] [rbp-118h] BYREF
  __int64 v80; // [rsp+100h] [rbp-108h]
  int v81; // [rsp+108h] [rbp-100h]
  void *v82; // [rsp+110h] [rbp-F8h]
  __int128 v83; // [rsp+118h] [rbp-F0h]
  void *v84; // [rsp+128h] [rbp-E0h]
  __int128 v85; // [rsp+130h] [rbp-D8h]
  _QWORD v86[4]; // [rsp+140h] [rbp-C8h] BYREF
  __m128i v87; // [rsp+160h] [rbp-A8h] BYREF
  __m128i v88; // [rsp+170h] [rbp-98h] BYREF
  __m128i v89; // [rsp+180h] [rbp-88h] BYREF
  __m128i v90; // [rsp+190h] [rbp-78h] BYREF
  __m128i v91; // [rsp+1A0h] [rbp-68h] BYREF
  __m128i v92; // [rsp+1B0h] [rbp-58h] BYREF
  __int64 v93; // [rsp+1C0h] [rbp-48h]
  unsigned __int64 v94; // [rsp+1C8h] [rbp-40h]

  v94 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 440);
  v61 = v1;
  if ( !(_DWORD)v1 )
    return v94 - __readfsqword(0x28u);
  v62 = (int)v1;
  v63 = nullptr;
  v64 = 0;
  v63 = (unsigned int *)qvector_reserve(&v63, 0, (int)v1, 4);
  v4 = &v63[v64];
  memset(v4, 0, 4 * ((int)v1 - (_QWORD)v64));
  *(_QWORD *)&v64 = (int)v1;
  v6 = (unsigned int)(v1 - 1);
  v7 = 0;
  if ( (int)v1 > 0 )
  {
    do
    {
      v63[v7] = v7;
      v5 = v7++;
    }
    while ( v6 != v5 );
  }
  merge_state = get_merge_state(v4, 0, v5, v6);
  v9 = v64;
  v10 = 4 * v64;
  v11 = &v63[v64];
  if ( (merge_state & 3) == 0 )
  {
    if ( !v10 )
    {
      v11 = v63;
      goto LABEL_20;
    }
    if ( v10 >> 2 )
    {
      _BitScanReverse64(&v44, v10 >> 2);
      v57 = (int *)v63;
      sub_215CB0((__int64)v63, (int *)&v63[v64], 2LL * (int)v44, (_QWORD *)a1);
      v45 = v57;
      if ( v10 > 64 )
      {
        v46 = v57 + 16;
        sub_213A80(v57, v57 + 16, (_QWORD *)a1);
        do
        {
          v47 = *v46;
          for ( i = v46; ; i[1] = *i )
          {
            v49 = i;
            if ( !sub_210700((_QWORD *)a1, v47, *--i) )
              break;
          }
          ++v46;
          *v49 = v47;
        }
        while ( v11 != (unsigned int *)v46 );
        goto LABEL_19;
      }
    }
    else
    {
      v58 = v63;
      sub_215CB0((__int64)v63, (int *)&v63[v64], -2, (_QWORD *)a1);
      v45 = (int *)v58;
    }
    sub_213A80(v45, (int *)v11, (_QWORD *)a1);
LABEL_19:
    v9 = v64;
    v11 = v63;
    goto LABEL_20;
  }
  if ( v63 != v11 )
  {
    if ( v10 >> 2 )
    {
      _BitScanReverse64(&v12, v10 >> 2);
      v55 = v63;
      sub_2154E0(v63, (int *)&v63[v64], 2LL * (int)v12, (__int64 *)(a1 + 432));
      v13 = (int *)v55;
      v14 = (__int64 *)(a1 + 432);
      if ( v10 > 64 )
      {
        v56 = (int *)(v55 + 16);
        sub_2138A0(v13, v56, v14);
        while ( 1 )
        {
          v15 = v56;
          v60 = *v56;
          v16 = 104LL * *v56;
          while ( 1 )
          {
            v19 = *(_QWORD *)(a1 + 432);
            v18 = *(v15 - 1);
            v20 = v19 + v16;
            v21 = v19 + 104LL * v18;
            v22 = *(_DWORD *)(v21 + 24) & 0x100;
            if ( (*(_BYTE *)(v19 + v16 + 25) & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_15;
            }
            else if ( v22 )
            {
              break;
            }
            v17 = sub_1BDD50((int *)v20, (int *)v21);
            if ( !v17 )
            {
              if ( *(_QWORD *)(v20 + 16) >= *(_QWORD *)(v21 + 16) )
                break;
              goto LABEL_14;
            }
            if ( v17 >= 0 )
              break;
LABEL_14:
            v18 = *(v15 - 1);
LABEL_15:
            *v15-- = v18;
          }
          ++v56;
          *v15 = v60;
          if ( v11 == (unsigned int *)v56 )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v59 = v63;
      sub_2154E0(v63, (int *)&v63[v64], -2, (__int64 *)(a1 + 432));
      v13 = (int *)v59;
      v14 = (__int64 *)(a1 + 432);
    }
    sub_2138A0(v13, (int *)v11, v14);
    goto LABEL_19;
  }
LABEL_20:
  if ( v9 )
  {
    v23 = 0;
    v24 = 0;
    while ( v11[v24] == v23 )
    {
      v24 = ++v23;
      if ( v23 >= v9 )
        goto LABEL_58;
    }
    v65 = 0;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    v67 = qvector_reserve(&v67, 0, v62, 4);
    memset((void *)(v67 + 4 * v68), 0, 4 * (v62 - v68));
    v25 = v66.m128i_i64[0];
    *(_QWORD *)&v68 = v62;
    if ( v62 != v66.m128i_i64[0] )
    {
      v69 = 0;
      v71 = 1;
      v26 = v65;
      si128 = _mm_load_si128((const __m128i *)&xmmword_400180);
      src = nullptr;
      v74 = nullptr;
      v76 = 0;
      v77 = 0xFFFFFFFF00000000LL;
      v78 = 0;
      *(_OWORD *)n = 0;
      *(_OWORD *)v75 = 0;
      if ( v62 < v66.m128i_i64[0] )
      {
        v51 = v62;
        while ( 1 )
        {
          v52 = (_QWORD *)(v26 + 104 * v51);
          clear_tinfo_t(v52 + 10);
          v53 = v52[7];
          if ( v53 )
          {
            v52[8] = 0;
            qfree(v53);
          }
          v54 = v52[4];
          if ( v54 )
          {
            v52[5] = 0;
            qfree(v54);
          }
          ++v51;
          cleanup_argloc(v52);
          if ( v51 >= v25 )
            break;
          v26 = v65;
        }
        v66.m128i_i64[0] = v62;
      }
      else if ( (unsigned __int64)&v69 < v65 || (unsigned __int64)&v69 >= v65 + 104 * v66.m128i_i64[1] )
      {
        sub_83CB0(&v65, v62, (__int64)&v69);
      }
      else
      {
        v79[0] = 0;
        copy_argloc(v79, &v69);
        v27 = n[0];
        v82 = nullptr;
        v83 = 0;
        v80 = si128.m128i_i64[1];
        v81 = v71;
        if ( n[0] )
        {
          v82 = (void *)qalloc_or_throw(n[0]);
          *((_QWORD *)&v83 + 1) = v27;
          memcpy(v82, src, v27);
          *(_QWORD *)&v83 = v27;
        }
        v28 = v75[0];
        v84 = nullptr;
        v85 = 0;
        if ( v75[0] )
        {
          v84 = (void *)qalloc_or_throw(v75[0]);
          *((_QWORD *)&v85 + 1) = v28;
          memcpy(v84, v74, v28);
          *(_QWORD *)&v85 = v28;
        }
        v86[0] = 0;
        copy_tinfo_t(v86, &v76);
        v86[1] = v77;
        v86[2] = v78;
        sub_83CB0(&v65, v62, (__int64)v79);
        clear_tinfo_t(v86);
        if ( v84 )
        {
          *(_QWORD *)&v85 = 0;
          qfree(v84);
        }
        if ( v82 )
        {
          *(_QWORD *)&v83 = 0;
          qfree(v82);
        }
        cleanup_argloc(v79);
      }
      clear_tinfo_t(&v76);
      if ( v74 )
      {
        v75[0] = 0;
        qfree(v74);
      }
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      cleanup_argloc(&v69);
    }
    if ( v61 > 0 )
    {
      v29 = 0;
      v30 = 0;
      do
      {
        v31 = (__m128i *)(*(_QWORD *)(a1 + 432) + 104LL * (int)v63[v30]);
        v32 = (__m128i *)(v29 + v65);
        v29 += 104;
        v87 = _mm_loadu_si128(v32);
        v88 = _mm_loadu_si128(v32 + 1);
        v89 = _mm_loadu_si128(v32 + 2);
        v90 = _mm_loadu_si128(v32 + 3);
        v91 = _mm_loadu_si128(v32 + 4);
        v92 = _mm_loadu_si128(v32 + 5);
        v93 = v32[6].m128i_i64[0];
        *v32 = _mm_loadu_si128(v31);
        v32[1] = _mm_loadu_si128(v31 + 1);
        v32[2] = _mm_loadu_si128(v31 + 2);
        v32[3] = _mm_loadu_si128(v31 + 3);
        v32[4] = _mm_loadu_si128(v31 + 4);
        v32[5] = _mm_loadu_si128(v31 + 5);
        v32[6].m128i_i64[0] = v31[6].m128i_i64[0];
        *v31 = _mm_load_si128(&v87);
        v31[1] = _mm_load_si128(&v88);
        v31[2] = _mm_load_si128(&v89);
        v31[3] = _mm_load_si128(&v90);
        v31[4] = _mm_load_si128(&v91);
        v31[5] = _mm_load_si128(&v92);
        v31[6].m128i_i64[0] = v93;
        *(_DWORD *)(v67 + 4LL * (int)v63[v30]) = v30;
        v33 = v30++;
      }
      while ( v61 - 1 != v33 );
    }
    v34 = *(_QWORD *)(a1 + 432);
    v35 = _mm_loadu_si128(&v66);
    v36 = _mm_loadu_si128((const __m128i *)(a1 + 440));
    *(_QWORD *)(a1 + 432) = v65;
    v65 = v34;
    *(__m128i *)(a1 + 440) = v35;
    v66 = v36;
    sub_211A40(a1, &v67, 1);
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree(v67);
    }
    v37 = v65;
    if ( v65 )
    {
      v38 = v66.m128i_i64[0];
      if ( v66.m128i_i64[0] )
      {
        v39 = 0;
        v40 = 0;
        do
        {
          v41 = (_QWORD *)(v37 + v39);
          clear_tinfo_t(v37 + v39 + 80);
          v42 = *(_QWORD *)(v37 + v39 + 56);
          if ( v42 )
          {
            v41[8] = 0;
            qfree(v42);
          }
          v43 = v41[4];
          if ( v43 )
          {
            v41[5] = 0;
            qfree(v43);
          }
          ++v40;
          v39 += 104;
          cleanup_argloc(v41);
          v37 = v65;
        }
        while ( v38 != v40 );
      }
      v66.m128i_i64[0] = 0;
      qfree(v37);
    }
    v11 = v63;
  }
LABEL_58:
  if ( v11 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v11);
  }
  return v94 - __readfsqword(0x28u);
}
