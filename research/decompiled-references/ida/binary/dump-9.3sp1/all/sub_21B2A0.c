unsigned __int64 __fastcall sub_21B2A0(__int64 a1)
{
  __int64 v1; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  char merge_state; // al
  unsigned __int64 v7; // rcx
  __int64 v8; // r12
  unsigned int *v9; // rbp
  unsigned __int64 v10; // rdx
  int *v11; // rdi
  __int64 *v12; // rdx
  int *v13; // r15
  __int64 v14; // r12
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // r14
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rax
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  size_t v28; // r15
  size_t v29; // r15
  __int64 v30; // rdi
  __int64 v31; // rsi
  __m128i *v32; // rax
  __m128i *v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __int64 v38; // rdi
  __int64 v39; // r13
  __int64 v40; // r12
  __int64 v41; // rbp
  _QWORD *v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // rdi
  unsigned __int64 v45; // rdx
  int *v46; // rdi
  int *v47; // r14
  int v48; // r12d
  int *i; // r15
  int *v50; // r13
  unsigned __int64 v52; // r12
  _QWORD *v53; // r15
  __int64 v54; // rdi
  __int64 v55; // rdi
  void *v56; // rax
  unsigned int *v57; // [rsp+0h] [rbp-208h]
  int *v58; // [rsp+0h] [rbp-208h]
  int *v59; // [rsp+0h] [rbp-208h]
  unsigned int *v60; // [rsp+0h] [rbp-208h]
  unsigned int *v61; // [rsp+0h] [rbp-208h]
  int v62; // [rsp+Ch] [rbp-1FCh]
  int v63; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v64; // [rsp+18h] [rbp-1F0h]
  unsigned int *v65; // [rsp+20h] [rbp-1E8h] BYREF
  __int128 v66; // [rsp+28h] [rbp-1E0h]
  unsigned __int64 v67; // [rsp+40h] [rbp-1C8h] BYREF
  __m128i v68; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v69; // [rsp+60h] [rbp-1A8h] BYREF
  __int128 v70; // [rsp+68h] [rbp-1A0h]
  __int64 v71; // [rsp+80h] [rbp-188h] BYREF
  __m128i si128; // [rsp+88h] [rbp-180h]
  __int64 v73; // [rsp+98h] [rbp-170h]
  void *src; // [rsp+A0h] [rbp-168h]
  size_t n[2]; // [rsp+A8h] [rbp-160h]
  void *v76; // [rsp+B8h] [rbp-150h]
  size_t v77[2]; // [rsp+C0h] [rbp-148h]
  __int64 v78; // [rsp+D0h] [rbp-138h]
  unsigned __int64 v79; // [rsp+D8h] [rbp-130h]
  __int64 v80; // [rsp+E0h] [rbp-128h]
  int v81[4]; // [rsp+F0h] [rbp-118h] BYREF
  __int64 v82; // [rsp+100h] [rbp-108h]
  int v83; // [rsp+108h] [rbp-100h]
  __int64 v84; // [rsp+110h] [rbp-F8h]
  __int128 v85; // [rsp+118h] [rbp-F0h]
  void *v86; // [rsp+128h] [rbp-E0h]
  __int128 v87; // [rsp+130h] [rbp-D8h]
  __int64 v88; // [rsp+140h] [rbp-C8h]
  unsigned __int64 v89; // [rsp+148h] [rbp-C0h]
  __int64 v90; // [rsp+150h] [rbp-B8h]
  __m128i v91; // [rsp+160h] [rbp-A8h] BYREF
  __m128i v92; // [rsp+170h] [rbp-98h] BYREF
  __m128i v93; // [rsp+180h] [rbp-88h] BYREF
  __m128i v94; // [rsp+190h] [rbp-78h] BYREF
  __m128i v95; // [rsp+1A0h] [rbp-68h] BYREF
  __m128i v96; // [rsp+1B0h] [rbp-58h] BYREF
  __int64 v97; // [rsp+1C0h] [rbp-48h]
  unsigned __int64 v98; // [rsp+1C8h] [rbp-40h]

  v98 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 440);
  v63 = v1;
  if ( !(_DWORD)v1 )
    return v98 - __readfsqword(0x28u);
  v64 = (int)v1;
  v65 = nullptr;
  v66 = 0;
  v65 = (unsigned int *)qvector_reserve((__int64)&v65, 0, (int)v1, 4);
  memset(&v65[v66], 0, 4 * ((int)v1 - (_QWORD)v66));
  *(_QWORD *)&v66 = (int)v1;
  v4 = 0;
  if ( (int)v1 > 0 )
  {
    do
    {
      v65[v4] = v4;
      v5 = v4++;
    }
    while ( (_DWORD)v1 - 1 != v5 );
  }
  merge_state = get_merge_state();
  v7 = v66;
  v8 = 4 * v66;
  v9 = &v65[v66];
  if ( (merge_state & 3) == 0 )
  {
    if ( !v8 )
    {
      v9 = v65;
      goto LABEL_20;
    }
    if ( v8 >> 2 )
    {
      _BitScanReverse64(&v45, v8 >> 2);
      v59 = (int *)v65;
      sub_21B070((__int64)v65, (int *)&v65[v66], 2LL * (int)v45, (_QWORD *)a1);
      v46 = v59;
      if ( v8 > 64 )
      {
        v47 = v59 + 16;
        sub_218E40(v59, v59 + 16, (_QWORD *)a1);
        do
        {
          v48 = *v47;
          for ( i = v47; ; i[1] = *i )
          {
            v50 = i;
            if ( !sub_215AC0((_QWORD *)a1, v48, *--i) )
              break;
          }
          ++v47;
          *v50 = v48;
        }
        while ( v9 != (unsigned int *)v47 );
        goto LABEL_19;
      }
    }
    else
    {
      v60 = v65;
      sub_21B070((__int64)v65, (int *)&v65[v66], -2, (_QWORD *)a1);
      v46 = (int *)v60;
    }
    sub_218E40(v46, (int *)v9, (_QWORD *)a1);
LABEL_19:
    v7 = v66;
    v9 = v65;
    goto LABEL_20;
  }
  if ( v65 != v9 )
  {
    if ( v8 >> 2 )
    {
      _BitScanReverse64(&v10, v8 >> 2);
      v57 = v65;
      sub_21A8A0(v65, (int *)&v65[v66], 2LL * (int)v10, (__int64 *)(a1 + 432));
      v11 = (int *)v57;
      v12 = (__int64 *)(a1 + 432);
      if ( v8 > 64 )
      {
        v58 = (int *)(v57 + 16);
        sub_218C60(v11, v58, v12);
        while ( 1 )
        {
          v13 = v58;
          v62 = *v58;
          v14 = 104LL * *v58;
          while ( 1 )
          {
            v17 = *(_QWORD *)(a1 + 432);
            v16 = *(v13 - 1);
            v18 = v17 + v14;
            v19 = v17 + 104LL * v16;
            v20 = *(_DWORD *)(v19 + 24) & 0x100;
            if ( (*(_BYTE *)(v17 + v14 + 25) & 1) != 0 )
            {
              if ( !v20 )
                goto LABEL_15;
            }
            else if ( v20 )
            {
              break;
            }
            v15 = sub_1C2AD0((int *)v18, (int *)v19);
            if ( !v15 )
            {
              if ( *(_QWORD *)(v18 + 16) >= *(_QWORD *)(v19 + 16) )
                break;
              goto LABEL_14;
            }
            if ( v15 >= 0 )
              break;
LABEL_14:
            v16 = *(v13 - 1);
LABEL_15:
            *v13-- = v16;
          }
          ++v58;
          *v13 = v62;
          if ( v9 == (unsigned int *)v58 )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v61 = v65;
      sub_21A8A0(v65, (int *)&v65[v66], -2, (__int64 *)(a1 + 432));
      v11 = (int *)v61;
      v12 = (__int64 *)(a1 + 432);
    }
    sub_218C60(v11, (int *)v9, v12);
    goto LABEL_19;
  }
LABEL_20:
  if ( v7 )
  {
    v21 = 0;
    v22 = 0;
    while ( v9[v22] == v21 )
    {
      v22 = ++v21;
      if ( v21 >= v7 )
        goto LABEL_58;
    }
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    v69 = qvector_reserve((__int64)&v69, 0, v64, 4);
    memset((void *)(v69 + 4 * v70), 0, 4 * (v64 - v70));
    v23 = v68.m128i_i64[0];
    *(_QWORD *)&v70 = v64;
    if ( v64 != v68.m128i_i64[0] )
    {
      v71 = 0;
      v73 = 1;
      v24 = v67;
      si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
      src = nullptr;
      v76 = nullptr;
      v78 = 0;
      v79 = 0xFFFFFFFF00000000LL;
      v80 = 0;
      *(_OWORD *)n = 0;
      *(_OWORD *)v77 = 0;
      if ( v64 < v68.m128i_i64[0] )
      {
        v52 = v64;
        while ( 1 )
        {
          v53 = (_QWORD *)(v24 + 104 * v52);
          clear_tinfo_t();
          v54 = v53[7];
          if ( v54 )
          {
            v53[8] = 0;
            qfree(v54);
          }
          v55 = v53[4];
          if ( v55 )
          {
            v53[5] = 0;
            qfree(v55);
          }
          ++v52;
          cleanup_argloc();
          if ( v52 >= v23 )
            break;
          v24 = v67;
        }
        v68.m128i_i64[0] = v64;
      }
      else if ( (unsigned __int64)&v71 < v67 || (unsigned __int64)&v71 >= v67 + 104 * v68.m128i_i64[1] )
      {
        sub_88870((__int64 *)&v67, v64, (__int64)&v71);
      }
      else
      {
        v25 = &v71;
        v81[0] = 0;
        copy_argloc();
        v28 = n[0];
        v84 = 0;
        v85 = 0;
        v82 = si128.m128i_i64[1];
        v83 = v73;
        if ( n[0] )
        {
          v56 = (void *)qalloc_or_throw(n[0], (__int64)&v71, v26, v27);
          v25 = (__int64 *)src;
          v84 = (__int64)v56;
          *((_QWORD *)&v85 + 1) = v28;
          memcpy(v56, src, v28);
          *(_QWORD *)&v85 = v28;
        }
        v29 = v77[0];
        v86 = nullptr;
        v87 = 0;
        if ( v77[0] )
        {
          v86 = (void *)qalloc_or_throw(v77[0], (__int64)v25, v26, v27);
          *((_QWORD *)&v87 + 1) = v29;
          memcpy(v86, v76, v29);
          *(_QWORD *)&v87 = v29;
        }
        v88 = 0;
        copy_tinfo_t();
        v89 = v79;
        v90 = v80;
        sub_88870((__int64 *)&v67, v64, (__int64)v81);
        clear_tinfo_t();
        if ( v86 )
        {
          *(_QWORD *)&v87 = 0;
          qfree((__int64)v86);
        }
        if ( v84 )
        {
          *(_QWORD *)&v85 = 0;
          qfree(v84);
        }
        cleanup_argloc();
      }
      clear_tinfo_t();
      if ( v76 )
      {
        v77[0] = 0;
        qfree((__int64)v76);
      }
      if ( src )
      {
        n[0] = 0;
        qfree((__int64)src);
      }
      cleanup_argloc();
    }
    if ( v63 > 0 )
    {
      v30 = 0;
      v31 = 0;
      do
      {
        v32 = (__m128i *)(*(_QWORD *)(a1 + 432) + 104LL * (int)v65[v31]);
        v33 = (__m128i *)(v30 + v67);
        v30 += 104;
        v91 = _mm_loadu_si128(v33);
        v92 = _mm_loadu_si128(v33 + 1);
        v93 = _mm_loadu_si128(v33 + 2);
        v94 = _mm_loadu_si128(v33 + 3);
        v95 = _mm_loadu_si128(v33 + 4);
        v96 = _mm_loadu_si128(v33 + 5);
        v97 = v33[6].m128i_i64[0];
        *v33 = _mm_loadu_si128(v32);
        v33[1] = _mm_loadu_si128(v32 + 1);
        v33[2] = _mm_loadu_si128(v32 + 2);
        v33[3] = _mm_loadu_si128(v32 + 3);
        v33[4] = _mm_loadu_si128(v32 + 4);
        v33[5] = _mm_loadu_si128(v32 + 5);
        v33[6].m128i_i64[0] = v32[6].m128i_i64[0];
        *v32 = _mm_load_si128(&v91);
        v32[1] = _mm_load_si128(&v92);
        v32[2] = _mm_load_si128(&v93);
        v32[3] = _mm_load_si128(&v94);
        v32[4] = _mm_load_si128(&v95);
        v32[5] = _mm_load_si128(&v96);
        v32[6].m128i_i64[0] = v97;
        *(_DWORD *)(v69 + 4LL * (int)v65[v31]) = v31;
        v34 = v31++;
      }
      while ( v63 - 1 != v34 );
    }
    v35 = *(_QWORD *)(a1 + 432);
    v36 = _mm_loadu_si128(&v68);
    v37 = _mm_loadu_si128((const __m128i *)(a1 + 440));
    *(_QWORD *)(a1 + 432) = v67;
    v67 = v35;
    *(__m128i *)(a1 + 440) = v36;
    v68 = v37;
    sub_216E00(a1, &v69, 1);
    if ( v69 )
    {
      *(_QWORD *)&v70 = 0;
      qfree(v69);
    }
    v38 = v67;
    if ( v67 )
    {
      v39 = v68.m128i_i64[0];
      if ( v68.m128i_i64[0] )
      {
        v40 = 0;
        v41 = 0;
        do
        {
          v42 = (_QWORD *)(v38 + v40);
          clear_tinfo_t();
          v43 = *(_QWORD *)(v38 + v40 + 56);
          if ( v43 )
          {
            v42[8] = 0;
            qfree(v43);
          }
          v44 = v42[4];
          if ( v44 )
          {
            v42[5] = 0;
            qfree(v44);
          }
          ++v41;
          v40 += 104;
          cleanup_argloc();
          v38 = v67;
        }
        while ( v39 != v41 );
      }
      v68.m128i_i64[0] = 0;
      qfree(v38);
    }
    v9 = v65;
  }
LABEL_58:
  if ( v9 )
  {
    *(_QWORD *)&v66 = 0;
    qfree((__int64)v9);
  }
  return v98 - __readfsqword(0x28u);
}
