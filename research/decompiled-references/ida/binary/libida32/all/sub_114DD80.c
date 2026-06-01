void __fastcall sub_114DD80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8)
{
  __int64 v10; // rsi
  void **v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __m128 si128; // xmm0
  char *v17; // r13
  size_t v18; // rax
  char *v19; // rcx
  size_t v20; // r14
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  __m128i v23; // xmm0
  char *v24; // rdx
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  char *v27; // rax
  unsigned __int64 v28; // rsi
  size_t v29; // rdx
  _BYTE *v30; // rsi
  const char *v31; // r13
  size_t v32; // rsi
  _BYTE *v33; // rdi
  _BYTE *v34; // rdi
  __int64 v35; // rax
  size_t v36; // r8
  _BYTE *v37; // rcx
  _BYTE *v38; // rdi
  size_t v39; // rbx
  unsigned __int64 v40; // rax
  _BYTE *v41; // rdi
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // rax
  size_t v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rax
  void **v49; // r13
  size_t v50; // rax
  __m128i *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rbp
  const __m128i *v57; // r14
  __int64 v58; // r15
  __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  __int64 v61; // rsi
  int v62; // eax
  __int64 v63; // rcx
  void *v64; // rsi
  _QWORD *v65; // r12
  void (__fastcall *v66)(_QWORD *); // rax
  __int64 v67; // r13
  __int64 v68; // rbp
  void *v69; // rdi
  _QWORD *v70; // rdi
  _QWORD *v71; // rdi
  void **v72; // r13
  void **v73; // rbp
  void *v74; // rdi
  _QWORD *v75; // rdi
  size_t v76; // rax
  unsigned __int64 v77; // rbp
  __int64 v78; // rdi
  void *v81; // [rsp+10h] [rbp-2D8h]
  const char *v83; // [rsp+28h] [rbp-2C0h] BYREF
  __int64 v84; // [rsp+30h] [rbp-2B8h]
  __m128i *v85; // [rsp+38h] [rbp-2B0h]
  __int64 v86; // [rsp+40h] [rbp-2A8h]
  void **v87; // [rsp+48h] [rbp-2A0h]
  void *v88[2]; // [rsp+50h] [rbp-298h] BYREF
  __int64 v89; // [rsp+60h] [rbp-288h]
  __m128i v90[2]; // [rsp+70h] [rbp-278h] BYREF
  void *v91[2]; // [rsp+90h] [rbp-258h] BYREF
  _BYTE v92[16]; // [rsp+A0h] [rbp-248h] BYREF
  char v93; // [rsp+B0h] [rbp-238h]
  char *v94; // [rsp+C0h] [rbp-228h] BYREF
  __int16 v95; // [rsp+E0h] [rbp-208h]
  char v96[32]; // [rsp+F0h] [rbp-1F8h] BYREF
  __int16 v97; // [rsp+110h] [rbp-1D8h]
  void *v98; // [rsp+120h] [rbp-1C8h] BYREF
  size_t v99; // [rsp+128h] [rbp-1C0h]
  _QWORD v100[2]; // [rsp+130h] [rbp-1B8h] BYREF
  __int16 v101; // [rsp+140h] [rbp-1A8h]
  void *v102; // [rsp+150h] [rbp-198h] BYREF
  __int64 v103; // [rsp+158h] [rbp-190h]
  __m128i v104; // [rsp+160h] [rbp-188h] BYREF
  __int16 v105; // [rsp+170h] [rbp-178h]
  void *v106; // [rsp+180h] [rbp-168h] BYREF
  __int64 v107; // [rsp+188h] [rbp-160h]
  __int64 v108; // [rsp+190h] [rbp-158h] BYREF
  void *ptr; // [rsp+210h] [rbp-D8h] BYREF
  __m128 v110; // [rsp+218h] [rbp-D0h]
  __int64 v111; // [rsp+228h] [rbp-C0h] BYREF
  __int16 v112; // [rsp+230h] [rbp-B8h]

  v10 = *(_QWORD *)(a1 + 24);
  v11 = &v106;
  v84 = a3;
  v85 = v90;
  sub_110F110(v90, v10, nullptr);
  v106 = &v108;
  v107 = 0x1000000000LL;
  if ( !sub_10B8FF0(a6, 0xCA4u) )
  {
    sub_10B8890((__int64)&v106, (__int64)"--no-undefined");
    sub_10B8890((__int64)&v106, (__int64)"-shared");
  }
  v12 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
  if ( v12 )
  {
    sub_11A4D50(*(_QWORD *)(a1 + 24), a6, &v106, a4, a5, v12 == 2);
  }
  else if ( sub_10B8FF0(a6, 0x913u) )
  {
    v44 = j__strlen(&byte_22CD811);
    v45 = sub_2193E80(a6, 2323, &byte_22CD811, v44);
    v110.m128_u64[1] = sub_1005B00(*(_QWORD *)(a1 + 24) + 16LL, v45, v46);
    v112 = 1283;
    ptr = "-plugin-opt=mcpu=";
    v111 = v47;
    v48 = sub_10B6980(a6, (__int64)&ptr);
    sub_10B8890((__int64)&v106, v48);
  }
  sub_11996A0(*(_QWORD *)(a1 + 24), a6, &v106);
  sub_1109C00(*(_QWORD *)(a1 + 24), a6, (__int64)&v106, v13, v14);
  sub_2194230(a6, &v106, 2204);
  sub_119F920(*(_QWORD *)(a1 + 24), a5, a6, &v106, v84);
  v15 = *(_QWORD *)(a1 + 24);
  si128 = 0;
  *(_OWORD *)v88 = 0;
  v89 = 0;
  sub_114D250(*(_QWORD *)a2, v15 + 16, a6, (__int64)v88);
  v17 = (char *)v88[0];
  v83 = (const char *)v88[1];
  if ( v88[1] == v88[0] )
  {
    v49 = &v102;
    goto LABEL_49;
  }
  v18 = j__strlen(",");
  LOBYTE(v100[0]) = 0;
  v19 = v17;
  v99 = 0;
  v20 = v18;
  v98 = v100;
  v21 = v83 - 16 - v17;
  v22 = v18 * (((v83 - v17) >> 4) - 1);
  if ( v21 <= 0x40 )
  {
    v27 = v17;
  }
  else
  {
    v23 = 0;
    v24 = &v17[v21 & 0xFFFFFFFFFFFFFFE0LL];
    do
    {
      v25 = _mm_loadu_si128((const __m128i *)(v19 + 8));
      v26 = _mm_loadu_si128((const __m128i *)(v19 + 24));
      v19 += 32;
      v23 = _mm_add_epi64(v23, _mm_unpacklo_epi64(v25, v26));
    }
    while ( v24 != v19 );
    a8 = _mm_srli_si128(v23, 8);
    si128 = (__m128)_mm_add_epi64(v23, a8);
    v27 = &v17[16 * (((unsigned __int64)(v83 - 16 - v17) >> 4) & 0xFFFFFFFFFFFFFFFELL)];
    v22 += si128.m128_u64[0];
  }
  v28 = *((_QWORD *)v27 + 1) + v22;
  if ( v83 != v27 + 16 )
  {
    v28 += *((_QWORD *)v27 + 3);
    if ( v83 != v27 + 32 )
    {
      v28 += *((_QWORD *)v27 + 5);
      if ( v83 != v27 + 48 )
      {
        v28 += *((_QWORD *)v27 + 7);
        if ( v83 != v27 + 64 )
          v28 += *((_QWORD *)v27 + 9);
      }
    }
  }
  sub_971EF0((__int64)&v98, v28);
  v29 = *((_QWORD *)v17 + 1);
  v30 = *(_BYTE **)v17;
  if ( v29 > 0x7FFFFFFFFFFFFFFFLL - v99 )
    goto LABEL_111;
  v31 = v17 + 16;
  sub_9CA820(&v98, v30, v29);
  if ( v83 != v31 )
  {
    v32 = v99;
    if ( v20 <= 0x7FFFFFFFFFFFFFFFLL - v99 )
    {
      v86 = 0x7FFFFFFFFFFFFFFFLL;
      v87 = &v106;
      while ( 1 )
      {
        v34 = v98;
        v42 = v20 + v32;
        if ( v98 == v100 )
          v43 = 15;
        else
          v43 = v100[0];
        if ( v42 <= v43 )
        {
          if ( v20 )
          {
            v33 = (char *)v98 + v32;
            if ( v20 == 1 )
              *v33 = 44;
            else
              memcpy(v33, ",", v20);
            v34 = v98;
          }
        }
        else
        {
          sub_974DF0((__int64)&v98, v32, 0, ",", v20);
          v34 = v98;
        }
        v99 = v20 + v32;
        v35 = v86;
        v34[v42] = 0;
        v36 = *((_QWORD *)v31 + 1);
        v37 = *(_BYTE **)v31;
        if ( v36 > v35 - v99 )
          goto LABEL_111;
        v38 = v98;
        v39 = v36 + v99;
        v40 = v98 == v100 ? 15LL : v100[0];
        if ( v39 > v40 )
        {
          sub_974DF0((__int64)&v98, v99, 0, v37, v36);
          v38 = v98;
        }
        else if ( v36 )
        {
          v41 = (char *)v98 + v99;
          if ( v36 == 1 )
            *v41 = *v37;
          else
            memcpy(v41, *(const void **)v31, *((_QWORD *)v31 + 1));
          v38 = v98;
        }
        v99 = v39;
        v31 += 16;
        v38[v39] = 0;
        if ( v83 == v31 )
          break;
        v32 = v99;
        if ( v20 > v86 - v99 )
          goto LABEL_111;
      }
      v11 = v87;
      goto LABEL_43;
    }
LABEL_111:
    std::__throw_length_error("basic_string::append");
  }
LABEL_43:
  v49 = &v102;
  v50 = j__strlen("-plugin-opt=-mattr=");
  v51 = (__m128i *)sub_978080(&v98, 0, 0, "-plugin-opt=-mattr=", v50);
  v102 = &v104;
  if ( (__m128i *)v51->m128i_i64[0] == &v51[1] )
  {
    v104 = _mm_loadu_si128(v51 + 1);
  }
  else
  {
    v102 = (void *)v51->m128i_i64[0];
    v104.m128i_i64[0] = v51[1].m128i_i64[0];
  }
  v103 = v51->m128i_i64[1];
  v51->m128i_i64[0] = (__int64)v51[1].m128i_i64;
  v51->m128i_i64[1] = 0;
  v51[1].m128i_i8[0] = 0;
  v112 = 260;
  ptr = &v102;
  v52 = sub_10B6980(a6, (__int64)&ptr);
  sub_10B8890((__int64)v11, v52);
  if ( v102 != &v104 )
    operator delete(v102);
  if ( v98 != v100 )
    operator delete(v98);
LABEL_49:
  if ( sub_10B8FF0(a6, 0xCECu) )
  {
    v53 = (unsigned int)v107;
    v54 = (unsigned int)v107 + 2LL;
    if ( v54 > HIDWORD(v107) )
    {
      sub_22134E0(v11, v11 + 2, v54, 8);
      v53 = (unsigned int)v107;
    }
    v83 = "-lm";
    si128 = _mm_loadh_ps((const double *)&v83);
    *(__m128 *)((char *)v106 + 8 * v53) = si128;
    LODWORD(v107) = v107 + 2;
  }
  if ( sub_10B8FF0(a6, 0xCD8u) )
  {
    sub_110D5D0((__int64)v91, *(_QWORD *)(a1 + 24));
    if ( !v93 )
    {
      v91[0] = v92;
      v76 = j__strlen("/lib");
      sub_1148360(v91, "/lib", (__int64)&aLib_1[v76 + 3]);
      v93 = 1;
    }
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384D00);
    ptr = &v111;
    v83 = (const char *)&v111;
    v110 = si128;
    sub_9FC110(&ptr, (_BYTE *)v91[0], (_BYTE *)v91[0] + (unsigned __int64)v91[1]);
    v105 = 257;
    v101 = 257;
    v97 = 257;
    v95 = 259;
    v94 = "crt1.o";
    sub_2266670(&ptr, &v94, v96, &v98, &v102);
    v102 = ptr;
    v105 = 261;
    v103 = v110.m128_u64[0];
    v55 = sub_10B6980(a6, (__int64)&v102);
    sub_10B8890((__int64)v11, v55);
    if ( ptr != v83 )
      free(ptr);
    if ( v93 && v91[0] != v92 )
      operator delete(v91[0]);
  }
  sub_10B8890((__int64)v11, (__int64)"-o");
  sub_10B8890((__int64)v11, *a4);
  ptr = v85;
  v112 = 260;
  v56 = sub_10B6980(a6, (__int64)&ptr);
  v57 = *(const __m128i **)a5;
  v58 = *(unsigned int *)(a5 + 8);
  v81 = (void *)operator new(0x208u);
  sub_10E2DA0((__int64)v81, v84, a1, 0x100000000LL, (__int64)"@", v56, (__int64)v11, v57, v58, (__int64)a4, 1, 0);
  v59 = *(unsigned int *)(a2 + 160);
  v60 = *(unsigned int *)(a2 + 164);
  v102 = v81;
  v61 = v59 + 1;
  v62 = v59;
  if ( v59 + 1 > v60 )
  {
    v77 = *(_QWORD *)(a2 + 152);
    v78 = a2 + 152;
    if ( v77 > (unsigned __int64)&v102 )
    {
      sub_1143690(v78, v61, si128, *(double *)a8.m128i_i64);
      v59 = *(unsigned int *)(a2 + 160);
      v63 = *(_QWORD *)(a2 + 152);
      v62 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      if ( (unsigned __int64)&v102 < v77 + 8 * v59 )
      {
        sub_1143690(v78, v61, si128, *(double *)a8.m128i_i64);
        v63 = *(_QWORD *)(a2 + 152);
        v59 = *(unsigned int *)(a2 + 160);
        v49 = (void **)((char *)&v102 + v63 - v77);
      }
      else
      {
        sub_1143690(v78, v61, si128, *(double *)a8.m128i_i64);
        v59 = *(unsigned int *)(a2 + 160);
        v63 = *(_QWORD *)(a2 + 152);
      }
      v62 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v63 = *(_QWORD *)(a2 + 152);
  }
  v64 = *v49;
  *v49 = nullptr;
  *(_QWORD *)(v63 + 8 * v59) = v64;
  v65 = v102;
  *(_DWORD *)(a2 + 160) = v62 + 1;
  if ( v65 )
  {
    v66 = *(void (__fastcall **)(_QWORD *))(*v65 + 8LL);
    if ( v66 == sub_10B0550 )
    {
      v67 = v65[58];
      v68 = v65[57];
      *v65 = &off_2B7EF90;
      if ( v67 != v68 )
      {
        do
        {
          if ( *(_BYTE *)(v68 + 32) && *(_QWORD *)v68 != v68 + 16 )
            operator delete(*(void **)v68);
          v68 += 40;
        }
        while ( v67 != v68 );
        v68 = v65[57];
      }
      if ( v68 )
        operator delete((void *)v68);
      v69 = (void *)v65[54];
      if ( v69 )
        operator delete(v69);
      v70 = (_QWORD *)v65[50];
      if ( v70 != v65 + 52 )
        operator delete(v70);
      v71 = (_QWORD *)v65[32];
      if ( v71 != v65 + 34 )
        free(v71);
      v72 = (void **)v65[29];
      v73 = (void **)v65[28];
      if ( v72 != v73 )
      {
        do
        {
          while ( *v73 != v73 + 2 )
          {
            operator delete(*v73);
            v73 += 4;
            if ( v73 == v72 )
              goto LABEL_82;
          }
          v73 += 4;
        }
        while ( v72 != v73 );
LABEL_82:
        v73 = (void **)v65[28];
      }
      if ( v73 )
        operator delete(v73);
      v74 = (void *)v65[25];
      if ( v74 )
        operator delete(v74);
      v75 = (_QWORD *)v65[7];
      if ( v75 != v65 + 9 )
        free(v75);
      operator delete(v65, 0x208u);
    }
    else
    {
      v66(v65);
    }
  }
  if ( v88[0] )
    operator delete(v88[0]);
  if ( v106 != v11 + 2 )
    free(v106);
  if ( (__m128i *)v90[0].m128i_i64[0] != &v85[1] )
    operator delete((void *)v90[0].m128i_i64[0]);
}

