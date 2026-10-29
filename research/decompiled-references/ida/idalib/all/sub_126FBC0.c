void __fastcall sub_126FBC0(__m128i *a1, __int64 a2, __m128i *a3, void *a4)
{
  __m128i *v7; // r14
  void (__fastcall *v8)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v9; // rdx
  __m128i si128; // xmm0
  __m128i v11; // xmm1
  _BYTE *v12; // rcx
  __int64 v13; // rax
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __m128i v17; // xmm2
  _BYTE *v18; // rcx
  __int64 v19; // rax
  __m128i *v20; // rdi
  __int64 v21; // rdx
  void **v22; // r14
  void **v23; // r13
  __m128i *v24; // rax
  void *v25; // rcx
  __m128i *v26; // rax
  void *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __m128i *v31; // rax
  __m128i *v32; // rdx
  __m128i *v33; // rdi
  _BYTE *v34; // r14
  _BYTE *v35; // rbx
  _BYTE *v36; // rdi
  _BYTE *v37; // rdi
  void **v38; // rdi
  void **v39; // r13
  void **v40; // r12
  _BYTE *v41; // rdi
  _BYTE *v42; // rdi
  __int64 v43; // rdi
  _BYTE *v44; // r15
  char *v45; // r13
  char *v46; // rbx
  _BYTE *v47; // r13
  _BYTE *v48; // rbx
  void **v49; // rdi
  void **v50; // r14
  void **v51; // r12
  char *v52; // r13
  char *v53; // r12
  char *v54; // rdi
  char *v55; // rdi
  void **v56; // rbp
  void **v57; // rbx
  char *v58; // rdi
  char *v59; // rdi
  void **v60; // r14
  void **v61; // r12
  void **v62; // r12
  void **v63; // rbx
  size_t v64; // rdx
  unsigned __int64 v65; // r15
  __int64 m128i_i64; // rdi
  _BYTE *v67; // [rsp+8h] [rbp-390h] BYREF
  void *v68[2]; // [rsp+10h] [rbp-388h] BYREF
  __m128i v69; // [rsp+20h] [rbp-378h] BYREF
  void *v70[2]; // [rsp+30h] [rbp-368h] BYREF
  __m128i v71; // [rsp+40h] [rbp-358h] BYREF
  size_t n[2]; // [rsp+50h] [rbp-348h] BYREF
  _BYTE *v73; // [rsp+60h] [rbp-338h] BYREF
  __int64 v74; // [rsp+68h] [rbp-330h]
  void *v75[2]; // [rsp+70h] [rbp-328h] BYREF
  __int64 v76; // [rsp+80h] [rbp-318h]
  _BYTE *v77; // [rsp+88h] [rbp-310h] BYREF
  __int64 v78; // [rsp+90h] [rbp-308h]
  _BYTE v79[56]; // [rsp+98h] [rbp-300h] BYREF
  _BYTE *v80; // [rsp+D0h] [rbp-2C8h] BYREF
  __int64 v81; // [rsp+D8h] [rbp-2C0h]
  _BYTE v82[160]; // [rsp+E0h] [rbp-2B8h] BYREF
  _BYTE v83[16]; // [rsp+180h] [rbp-218h] BYREF
  void (__fastcall *v84)(_QWORD, _QWORD, _QWORD); // [rsp+190h] [rbp-208h]
  __int64 v85; // [rsp+198h] [rbp-200h]
  _BYTE v86[16]; // [rsp+1A0h] [rbp-1F8h] BYREF
  void (__fastcall *v87)(_QWORD, _QWORD, _QWORD); // [rsp+1B0h] [rbp-1E8h]
  __int64 v88; // [rsp+1B8h] [rbp-1E0h]
  _BYTE *v89; // [rsp+1C0h] [rbp-1D8h] BYREF
  __int64 v90; // [rsp+1C8h] [rbp-1D0h]
  _BYTE v91[192]; // [rsp+1D0h] [rbp-1C8h] BYREF
  void *v92; // [rsp+290h] [rbp-108h]
  __int64 v93; // [rsp+2A0h] [rbp-F8h] BYREF
  void *v94; // [rsp+2B0h] [rbp-E8h]
  __int64 v95; // [rsp+2C0h] [rbp-D8h] BYREF
  void *v96; // [rsp+2D0h] [rbp-C8h]
  __int64 v97; // [rsp+2E0h] [rbp-B8h] BYREF
  void *v98; // [rsp+2F0h] [rbp-A8h]
  void **v99; // [rsp+2F8h] [rbp-A0h]
  void *v100; // [rsp+308h] [rbp-90h]
  __int64 v101; // [rsp+318h] [rbp-80h] BYREF
  void *v102; // [rsp+328h] [rbp-70h]
  _BYTE v103[24]; // [rsp+338h] [rbp-60h] BYREF
  char v104; // [rsp+350h] [rbp-48h]

  v7 = a1 + 314;
  sub_1269780((__int64)a1, a2, a3, a4);
  a1->m128i_i64[0] = (__int64)off_2C3D650;
  a1[313].m128i_i64[0] = (__int64)a1[314].m128i_i64;
  a1[313].m128i_i64[1] = 0;
  a1[314].m128i_i8[0] = 0;
  v80 = v82;
  v77 = v79;
  v89 = v91;
  *(_OWORD *)v75 = 0;
  v76 = 0;
  v78 = 0x100000000LL;
  v81 = 0x100000000LL;
  v84 = nullptr;
  v87 = nullptr;
  v90 = 0x100000000LL;
  v104 = 0;
  sub_121D260(a2, a3, (__int64)&byte_22F0C30, 0, (__int64)a4, (__int64 *)v75);
  sub_117F8A0(a1[115].m128i_i64, (__int64 *)v75);
  sub_1180210((__int64)&a1[116].m128i_i64[1], (__int64)&v77);
  sub_1180630((__int64)a1[121].m128i_i64, (__int64)&v80);
  v8 = v84;
  v73 = nullptr;
  if ( v84 )
  {
    v84(n, v83, 2);
    v9 = v85;
    v8 = v84;
  }
  else
  {
    v9 = v74;
  }
  si128 = _mm_load_si128((const __m128i *)n);
  v11 = _mm_loadu_si128(a1 + 132);
  v12 = (_BYTE *)a1[133].m128i_i64[0];
  a1[133].m128i_i64[0] = (__int64)v8;
  v13 = a1[133].m128i_i64[1];
  *(__m128i *)n = v11;
  a1[132] = si128;
  v73 = v12;
  v74 = v13;
  a1[133].m128i_i64[1] = v9;
  if ( v12 )
    ((void (__fastcall *)(size_t *, size_t *, __int64))v12)(n, n, 3);
  v14 = v87;
  v15 = v74;
  v73 = nullptr;
  if ( v87 )
  {
    v87(n, v86, 2);
    v15 = v88;
    v14 = v87;
  }
  v16 = _mm_load_si128((const __m128i *)n);
  v17 = _mm_loadu_si128(a1 + 134);
  v18 = (_BYTE *)a1[135].m128i_i64[0];
  a1[135].m128i_i64[0] = (__int64)v14;
  v19 = a1[135].m128i_i64[1];
  *(__m128i *)n = v17;
  a1[134] = v16;
  v73 = v18;
  v74 = v19;
  a1[135].m128i_i64[1] = v15;
  if ( v18 )
    ((void (__fastcall *)(size_t *, size_t *, __int64))v18)(n, n, 3);
  sub_1183BF0((__int64)a1[136].m128i_i64, (__int64)&v89);
  sub_1153700((__m128i *)n, (__int64)a4, a3);
  v20 = (__m128i *)a1[313].m128i_i64[0];
  if ( (_BYTE **)n[0] == &v73 )
  {
    v64 = n[1];
    if ( n[1] )
    {
      if ( n[1] == 1 )
        v20->m128i_i8[0] = (char)v73;
      else
        memcpy(v20, (const void *)n[0], n[1]);
      v64 = n[1];
      v20 = (__m128i *)a1[313].m128i_i64[0];
    }
    a1[313].m128i_i64[1] = v64;
    v20->m128i_i8[v64] = 0;
    v20 = (__m128i *)n[0];
    goto LABEL_13;
  }
  if ( v7 == v20 )
  {
    v67 = v73;
    a1[313].m128i_i64[0] = n[0];
    *(__m128 *)((char *)&a1[313] + 8) = _mm_loadh_ps((const double *)&v67);
    goto LABEL_108;
  }
  v67 = v73;
  v21 = a1[314].m128i_i64[0];
  a1[313].m128i_i64[0] = n[0];
  *(__m128 *)((char *)&a1[313] + 8) = _mm_loadh_ps((const double *)&v67);
  if ( !v20 )
  {
LABEL_108:
    v20 = (__m128i *)&v73;
    n[0] = (size_t)&v73;
    goto LABEL_13;
  }
  n[0] = (size_t)v20;
  v73 = (_BYTE *)v21;
LABEL_13:
  n[1] = 0;
  v20->m128i_i8[0] = 0;
  if ( (_BYTE **)n[0] != &v73 )
    operator delete((void *)n[0]);
  v22 = (void **)a1[39].m128i_i64[0];
  v23 = &v22[4 * a1[39].m128i_u32[2]];
  while ( v22 != v23 )
  {
    while ( 1 )
    {
      v23 -= 4;
      if ( *v23 == v23 + 2 )
        break;
      operator delete(*v23);
      if ( v22 == v23 )
        goto LABEL_19;
    }
  }
LABEL_19:
  a1[39].m128i_i32[2] = 0;
  sub_126F010((__int64)n, (__int64)a1);
  if ( 0x7FFFFFFFFFFFFFFFLL - n[1] <= 7 )
    std::__throw_length_error("basic_string::append");
  v24 = (__m128i *)sub_9EE560(n, "/usr/lib", 8u);
  v70[0] = &v71;
  if ( (__m128i *)v24->m128i_i64[0] == &v24[1] )
  {
    v71 = _mm_loadu_si128(v24 + 1);
  }
  else
  {
    v70[0] = (void *)v24->m128i_i64[0];
    v71.m128i_i64[0] = v24[1].m128i_i64[0];
  }
  v25 = (void *)v24->m128i_i64[1];
  v24[1].m128i_i8[0] = 0;
  v70[1] = v25;
  v24->m128i_i64[0] = (__int64)v24[1].m128i_i64;
  v24->m128i_i64[1] = 0;
  v26 = (__m128i *)sub_9EE560(v70, (_BYTE *)a1[313].m128i_i64[0], a1[313].m128i_u64[1]);
  v68[0] = &v69;
  if ( (__m128i *)v26->m128i_i64[0] == &v26[1] )
  {
    v69 = _mm_loadu_si128(v26 + 1);
  }
  else
  {
    v68[0] = (void *)v26->m128i_i64[0];
    v69.m128i_i64[0] = v26[1].m128i_i64[0];
  }
  v27 = (void *)v26->m128i_i64[1];
  v26[1].m128i_i8[0] = 0;
  v68[1] = v27;
  v26->m128i_i64[0] = (__int64)v26[1].m128i_i64;
  v28 = a1[39].m128i_u32[2];
  v26->m128i_i64[1] = 0;
  v29 = v28 + 1;
  if ( v28 + 1 > (unsigned __int64)a1[39].m128i_u32[3] )
  {
    v65 = a1[39].m128i_u64[0];
    m128i_i64 = (__int64)a1[39].m128i_i64;
    if ( v65 > (unsigned __int64)v68 || (unsigned __int64)v68 >= v65 + 32 * v28 )
    {
      sub_A8C1F0(m128i_i64, v29);
      v30 = a1[39].m128i_i64[0];
      v28 = a1[39].m128i_u32[2];
      v31 = (__m128i *)v68;
    }
    else
    {
      sub_A8C1F0(m128i_i64, v29);
      v30 = a1[39].m128i_i64[0];
      v28 = a1[39].m128i_u32[2];
      v31 = (__m128i *)((char *)v68 + v30 - v65);
    }
  }
  else
  {
    v30 = a1[39].m128i_i64[0];
    v31 = (__m128i *)v68;
  }
  v32 = (__m128i *)(v30 + 32 * v28);
  v32->m128i_i64[0] = (__int64)v32[1].m128i_i64;
  if ( (__m128i *)v31->m128i_i64[0] == &v31[1] )
  {
    v32[1] = _mm_loadu_si128(v31 + 1);
  }
  else
  {
    v32->m128i_i64[0] = v31->m128i_i64[0];
    v32[1].m128i_i64[0] = v31[1].m128i_i64[0];
  }
  v32->m128i_i64[1] = v31->m128i_i64[1];
  v31->m128i_i64[0] = (__int64)v31[1].m128i_i64;
  v33 = (__m128i *)v68[0];
  v31->m128i_i64[1] = 0;
  v31[1].m128i_i8[0] = 0;
  ++a1[39].m128i_i32[2];
  if ( v33 != &v69 )
    operator delete(v33);
  if ( v70[0] != &v71 )
    operator delete(v70[0]);
  if ( (_BYTE **)n[0] != &v73 )
    operator delete((void *)n[0]);
  if ( v104 )
  {
    if ( v103[16] && v102 != v103 )
      operator delete(v102);
    if ( v100 != &v101 )
      operator delete(v100);
    v62 = v99;
    v63 = (void **)v98;
    if ( v99 != v98 )
    {
      do
      {
        while ( *v63 != v63 + 2 )
        {
          operator delete(*v63);
          v63 += 4;
          if ( v62 == v63 )
            goto LABEL_141;
        }
        v63 += 4;
      }
      while ( v62 != v63 );
LABEL_141:
      v63 = (void **)v98;
    }
    if ( v63 )
      operator delete(v63);
    if ( v96 != &v97 )
      operator delete(v96);
    if ( v94 != &v95 )
      operator delete(v94);
    if ( v92 != &v93 )
      operator delete(v92);
  }
  v34 = v89;
  v35 = &v89[192 * (unsigned int)v90];
  if ( v89 != v35 )
  {
    do
    {
      while ( 1 )
      {
        v35 -= 192;
        if ( v35[184] )
        {
          v36 = *((_BYTE **)v35 + 19);
          if ( v36 != v35 + 168 )
            operator delete(v36);
        }
        v37 = *((_BYTE **)v35 + 15);
        if ( v37 != v35 + 136 )
          operator delete(v37);
        v38 = *((void ***)v35 + 12);
        v39 = *((void ***)v35 + 13);
        v40 = v38;
        if ( v39 != v38 )
        {
          do
          {
            while ( *v40 != v40 + 2 )
            {
              operator delete(*v40);
              v40 += 4;
              if ( v39 == v40 )
                goto LABEL_44;
            }
            v40 += 4;
          }
          while ( v39 != v40 );
LABEL_44:
          v38 = *((void ***)v35 + 12);
        }
        if ( v38 )
          operator delete(v38);
        v41 = *((_BYTE **)v35 + 8);
        if ( v41 != v35 + 80 )
          operator delete(v41);
        v42 = *((_BYTE **)v35 + 4);
        if ( v42 != v35 + 48 )
          operator delete(v42);
        if ( *(_BYTE **)v35 == v35 + 16 )
          break;
        operator delete(*(void **)v35);
        if ( v34 == v35 )
          goto LABEL_53;
      }
    }
    while ( v34 != v35 );
LABEL_53:
    v35 = v89;
  }
  if ( v35 != v91 )
    free(v35);
  if ( v87 )
    v87(v86, v86, 3);
  if ( v84 )
    v84(v83, v83, 3);
  v67 = v80;
  v43 = 160LL * (unsigned int)v81;
  v44 = &v80[v43];
  if ( v80 != &v80[v43] )
  {
    while ( 1 )
    {
      v44 -= 160;
      v45 = *((char **)v44 + 4);
      v46 = &v45[96 * *((unsigned int *)v44 + 10)];
      if ( v45 != v46 )
        break;
LABEL_66:
      if ( v45 != v44 + 48 )
        free(v45);
      if ( *(_BYTE **)v44 == v44 + 16 )
      {
        if ( v67 == v44 )
        {
LABEL_70:
          v44 = v80;
          goto LABEL_71;
        }
      }
      else
      {
        operator delete(*(void **)v44);
        if ( v67 == v44 )
          goto LABEL_70;
      }
    }
    while ( 1 )
    {
      v46 -= 96;
      if ( v46[80] )
        goto LABEL_121;
      while ( *(char **)v46 == v46 + 16 )
      {
        if ( v45 == v46 )
        {
LABEL_65:
          v45 = *((char **)v44 + 4);
          goto LABEL_66;
        }
        v46 -= 96;
        if ( v46[80] )
        {
LABEL_121:
          v60 = *((void ***)v46 + 4);
          v61 = &v60[4 * *((unsigned int *)v46 + 10)];
          if ( v60 != v61 )
          {
            do
            {
              while ( 1 )
              {
                v61 -= 4;
                if ( *v61 == v61 + 2 )
                  break;
                operator delete(*v61);
                if ( v60 == v61 )
                  goto LABEL_124;
              }
            }
            while ( v60 != v61 );
LABEL_124:
            v60 = *((void ***)v46 + 4);
          }
          if ( v60 != (void **)(v46 + 48) )
            free(v60);
        }
      }
      operator delete(*(void **)v46);
      if ( v45 == v46 )
        goto LABEL_65;
    }
  }
LABEL_71:
  if ( v44 != v82 )
    free(v44);
  v47 = v77;
  v48 = &v77[56 * (unsigned int)v78];
  if ( v77 != v48 )
  {
    do
    {
      while ( 1 )
      {
        v48 -= 56;
        v49 = *((void ***)v48 + 4);
        v50 = *((void ***)v48 + 5);
        v51 = v49;
        if ( v50 != v49 )
        {
          do
          {
            while ( *v51 != v51 + 2 )
            {
              operator delete(*v51);
              v51 += 4;
              if ( v51 == v50 )
                goto LABEL_77;
            }
            v51 += 4;
          }
          while ( v50 != v51 );
LABEL_77:
          v49 = *((void ***)v48 + 4);
        }
        if ( v49 )
          operator delete(v49);
        if ( *(_BYTE **)v48 == v48 + 16 )
          break;
        operator delete(*(void **)v48);
        if ( v47 == v48 )
          goto LABEL_82;
      }
    }
    while ( v47 != v48 );
LABEL_82:
    v48 = v77;
  }
  if ( v48 != v79 )
    free(v48);
  v52 = (char *)v75[1];
  v53 = (char *)v75[0];
  if ( v75[1] != v75[0] )
  {
    do
    {
      while ( 1 )
      {
        if ( v53[184] )
        {
          v54 = *((char **)v53 + 19);
          if ( v54 != v53 + 168 )
            operator delete(v54);
        }
        v55 = *((char **)v53 + 15);
        if ( v55 != v53 + 136 )
          operator delete(v55);
        v56 = *((void ***)v53 + 13);
        v57 = *((void ***)v53 + 12);
        if ( v56 != v57 )
        {
          do
          {
            while ( *v57 != v57 + 2 )
            {
              operator delete(*v57);
              v57 += 4;
              if ( v57 == v56 )
                goto LABEL_94;
            }
            v57 += 4;
          }
          while ( v56 != v57 );
LABEL_94:
          v57 = *((void ***)v53 + 12);
        }
        if ( v57 )
          operator delete(v57);
        v58 = *((char **)v53 + 8);
        if ( v58 != v53 + 80 )
          operator delete(v58);
        v59 = *((char **)v53 + 4);
        if ( v59 != v53 + 48 )
          operator delete(v59);
        if ( *(char **)v53 == v53 + 16 )
          break;
        operator delete(*(void **)v53);
        v53 += 192;
        if ( v53 == v52 )
          goto LABEL_103;
      }
      v53 += 192;
    }
    while ( v52 != v53 );
LABEL_103:
    v53 = (char *)v75[0];
  }
  if ( v53 )
    operator delete(v53);
}
