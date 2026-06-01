void __fastcall sub_11DB4B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char **a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rcx
  bool v10; // cc
  char *v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64, const char *, size_t); // rbx
  size_t v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  const char *v20; // rsi
  size_t v21; // rdx
  __int64 v22; // rax
  __int64 (__fastcall *v23)(__int64, const char *, size_t); // rbx
  __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  const __m128i *v27; // r14
  size_t v28; // rax
  int v29; // eax
  bool v30; // zf
  const char *v31; // rdx
  char v32; // al
  _QWORD *v33; // r15
  __int64 v34; // rax
  __int64 (__fastcall *v35)(_QWORD *, _QWORD, _QWORD); // rbp
  __int64 v36; // rbp
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  char *v40; // r12
  int v41; // eax
  _QWORD *v42; // rbx
  char v43; // al
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  const __m128i *v46; // rbx
  const __m128i *v47; // rbp
  __int64 v48; // r13
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rax
  const char **v52; // rax
  const char *v53; // r13
  size_t v54; // r15
  const __m128i *v55; // rbx
  __int64 v56; // r13
  void **v57; // r12
  _QWORD *v58; // rbx
  _QWORD *v59; // r13
  void **v60; // rbp
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  void **v64; // rbx
  __int64 v65; // rbx
  const __m128i *v66; // r13
  __int64 v67; // r14
  __int64 v68; // rbp
  __int64 v69; // rcx
  __int64 v70; // rsi
  int v71; // edx
  __int64 v72; // rsi
  _BYTE *v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rax
  _QWORD *v76; // rbp
  void (__fastcall *v77)(_QWORD *); // rax
  __int64 v78; // r12
  __int64 v79; // rbx
  void *v80; // rdi
  _QWORD *v81; // rdi
  _QWORD *v82; // rdi
  void **v83; // r12
  void **v84; // rbx
  void *v85; // rdi
  _QWORD *v86; // rdi
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  __int64 v89; // r15
  unsigned __int64 v90; // rbx
  __int64 v91; // rdi
  size_t v92; // [rsp+0h] [rbp-338h]
  __int64 v93; // [rsp+0h] [rbp-338h]
  __int64 v94; // [rsp+0h] [rbp-338h]
  __int64 v95; // [rsp+0h] [rbp-338h]
  const __m128i *v96; // [rsp+28h] [rbp-310h] BYREF
  _QWORD *v97; // [rsp+30h] [rbp-308h]
  __int64 v98; // [rsp+38h] [rbp-300h]
  char v99; // [rsp+43h] [rbp-2F5h]
  int v100; // [rsp+44h] [rbp-2F4h]
  __int64 v101; // [rsp+48h] [rbp-2F0h]
  __m128i si128; // [rsp+50h] [rbp-2E8h] BYREF
  __int64 v103; // [rsp+60h] [rbp-2D8h]
  char *v104; // [rsp+68h] [rbp-2D0h]
  void **v105; // [rsp+70h] [rbp-2C8h]
  __int64 v106; // [rsp+78h] [rbp-2C0h]
  __int64 v107; // [rsp+80h] [rbp-2B8h]
  const char **v108; // [rsp+88h] [rbp-2B0h]
  __int64 v109; // [rsp+90h] [rbp-2A8h]
  __int64 v110; // [rsp+98h] [rbp-2A0h]
  void *v111[2]; // [rsp+A0h] [rbp-298h] BYREF
  char v112; // [rsp+B0h] [rbp-288h] BYREF
  _QWORD v113[4]; // [rsp+C0h] [rbp-278h] BYREF
  __int16 v114; // [rsp+E0h] [rbp-258h]
  _QWORD v115[4]; // [rsp+F0h] [rbp-248h] BYREF
  char v116; // [rsp+110h] [rbp-228h]
  char v117; // [rsp+111h] [rbp-227h]
  _QWORD v118[4]; // [rsp+120h] [rbp-218h] BYREF
  __int16 v119; // [rsp+140h] [rbp-1F8h]
  void *v120; // [rsp+150h] [rbp-1E8h] BYREF
  __int64 v121; // [rsp+158h] [rbp-1E0h]
  const char *v122; // [rsp+160h] [rbp-1D8h] BYREF
  _BYTE ptr[24]; // [rsp+1E0h] [rbp-158h] BYREF
  _BYTE v124[320]; // [rsp+1F8h] [rbp-140h] BYREF

  v108 = a4;
  v9 = *(_QWORD *)(a1 + 24);
  v105 = &v120;
  v120 = &v122;
  v10 = *(_DWORD *)(v9 + 2396) <= 7;
  v101 = a1;
  v106 = a2;
  v110 = a3;
  v109 = a5;
  v107 = v9;
  v121 = 0x1000000000LL;
  if ( v10 )
  {
    LODWORD(v121) = 1;
    v122 = "--cuda";
  }
  v11 = "-64";
  if ( !(unsigned __int8)sub_22B7EA0(v107 + 16) )
    v11 = "-32";
  v12 = (unsigned int)v121;
  v13 = (unsigned int)v121 + 1LL;
  if ( v13 > HIDWORD(v121) )
  {
    sub_2237220(v105, v105 + 2, v13, 8);
    v12 = (unsigned int)v121;
  }
  *((_QWORD *)v120 + v12) = v11;
  v14 = *(_QWORD *)a6;
  LODWORD(v121) = v121 + 1;
  v15 = *(__int64 (__fastcall **)(__int64, const char *, size_t))(v14 + 16);
  v16 = j__strlen("--create");
  v17 = v15(a6, "--create", v16);
  v18 = (unsigned int)v121;
  v19 = (unsigned int)v121 + 1LL;
  if ( v19 > HIDWORD(v121) )
  {
    v95 = v17;
    sub_2237220(v105, v105 + 2, v19, 8);
    v18 = (unsigned int)v121;
    v17 = v95;
  }
  *((_QWORD *)v120 + v18) = v17;
  LODWORD(v121) = v121 + 1;
  v20 = *v108;
  v119 = 257;
  if ( *v20 )
  {
    v21 = 0;
    v118[0] = v20;
    *(_QWORD *)ptr = v124;
    v49 = *(_QWORD *)a6;
    LOBYTE(v119) = 3;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v23 = *(__int64 (__fastcall **)(__int64, const char *, size_t))(v49 + 16);
    *(__m128i *)&ptr[8] = si128;
    if ( v20 )
      v21 = j__strlen(v20);
  }
  else
  {
    v21 = 0;
    v20 = nullptr;
    *(_QWORD *)ptr = v124;
    v22 = *(_QWORD *)a6;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v23 = *(__int64 (__fastcall **)(__int64, const char *, size_t))(v22 + 16);
    *(__m128i *)&ptr[8] = si128;
  }
  v24 = v23(a6, v20, v21);
  if ( *(_BYTE **)ptr != v124 )
    free(*(void **)ptr);
  v25 = (unsigned int)v121;
  v26 = (unsigned int)v121 + 1LL;
  if ( v26 > HIDWORD(v121) )
  {
    sub_2237220(v105, v105 + 2, v26, 8);
    v25 = (unsigned int)v121;
  }
  *((_QWORD *)v120 + v25) = v24;
  LODWORD(v121) = v121 + 1;
  if ( (unsigned int)sub_11D8180(a6) == 2 )
  {
    v87 = (unsigned int)v121;
    v88 = (unsigned int)v121 + 1LL;
    if ( v88 > HIDWORD(v121) )
    {
      sub_2237220(v105, v105 + 2, v88, 8);
      v87 = (unsigned int)v121;
    }
    *((_QWORD *)v120 + v87) = "-g";
    LODWORD(v121) = v121 + 1;
  }
  v27 = *(const __m128i **)v109;
  v103 = *(_QWORD *)v109 + 40LL * *(unsigned int *)(v109 + 8);
  if ( (const __m128i *)v103 != v27 )
  {
    v97 = (_QWORD *)a6;
    v104 = &v112;
    while ( 1 )
    {
      v39 = v27[1].m128i_i64[0];
      v40 = *(char **)(v39 + 72);
      if ( v40 )
      {
        v28 = strlen(*(const char **)(v39 + 72));
        v29 = sub_FF7C60(v40, v28);
        v30 = v27[1].m128i_i32[2] == 38;
        v100 = v29;
        if ( !v30 )
          goto LABEL_19;
        v92 = strlen(v40);
      }
      else
      {
        v41 = sub_FF7C60(nullptr, 0);
        v30 = v27[1].m128i_i32[2] == 38;
        v100 = v41;
        if ( !v30 )
          goto LABEL_19;
        v92 = 0;
      }
      v42 = v97;
      v43 = sub_21B7850(v97, 3088, 3017, 1);
      *(_QWORD *)ptr = 0xBB6000000F0LL;
      v99 = v43 ^ 1;
      v44 = sub_21B6DA0(v42, ptr, 2);
      v45 = v42[1];
      *(_QWORD *)&ptr[16] = 0xBB6000000F0LL;
      v46 = (const __m128i *)(v45 + 8LL * (unsigned int)v44);
      v47 = (const __m128i *)(v45 + 8 * HIDWORD(v44));
      v96 = v47;
      a7 = _mm_loadh_ps((const double *)&v96);
      *(__m128 *)ptr = a7;
      if ( v46 == v47 )
        goto LABEL_36;
      while ( 1 )
      {
        v48 = v46->m128i_i64[0];
        if ( v46->m128i_i64[0] )
        {
          if ( (unsigned __int8)sub_21B9810(v46->m128i_i64[0], 240) || (unsigned __int8)sub_21B9810(v48, 2998) )
            break;
        }
        v46 = (const __m128i *)((char *)v46 + 8);
        *(_QWORD *)ptr = v46;
        if ( v47 == v46 )
          goto LABEL_36;
      }
      v96 = v47;
      *(_QWORD *)&ptr[16] = 0xBB6000000F0LL;
      a7 = _mm_loadh_ps((const double *)&v96);
      *(__m128 *)ptr = a7;
      if ( v46 != v47 )
      {
        v96 = v27;
        while ( 1 )
        {
          v50 = v46->m128i_i64[0];
          v51 = *(_QWORD *)(v46->m128i_i64[0] + 16);
          if ( !v51 )
            v51 = v46->m128i_i64[0];
          *(_BYTE *)(v51 + 44) |= 1u;
          v52 = *(const char ***)(v50 + 48);
          v53 = *v52;
          if ( *v52 )
            break;
          if ( (unsigned __int8)sub_21B9810(v50, 240) )
          {
            if ( v92 )
            {
              if ( !(unsigned __int8)sub_21B9810(v50, 2998) )
                goto LABEL_52;
              v54 = 0;
LABEL_64:
              if ( v92 != v54 )
                goto LABEL_52;
              if ( v92 )
              {
LABEL_66:
                if ( memcmp(v53, v40, v54) )
                  goto LABEL_52;
              }
LABEL_67:
              v99 = 0;
              goto LABEL_52;
            }
LABEL_73:
            v99 = 1;
            goto LABEL_52;
          }
          if ( (unsigned __int8)sub_21B9810(v50, 2998) && !v92 )
            goto LABEL_67;
LABEL_52:
          v55 = (const __m128i *)&v46->m128i_u64[1];
          *(_QWORD *)ptr = v55;
          if ( v55 != v47 )
          {
            while ( 1 )
            {
              v56 = v55->m128i_i64[0];
              if ( v55->m128i_i64[0] )
              {
                if ( *(_DWORD *)&ptr[16]
                  && ((unsigned __int8)sub_21B9810(v55->m128i_i64[0], *(unsigned int *)&ptr[16])
                   || *(_DWORD *)&ptr[20] && (unsigned __int8)sub_21B9810(v56, *(unsigned int *)&ptr[20])) )
                {
                  break;
                }
              }
              v55 = (const __m128i *)((char *)v55 + 8);
              *(_QWORD *)ptr = v55;
              if ( v47 == v55 )
                goto LABEL_59;
            }
            v46 = *(const __m128i **)ptr;
            if ( v47 != *(const __m128i **)ptr )
              continue;
          }
LABEL_59:
          v27 = v96;
          goto LABEL_36;
        }
        v54 = strlen(*v52);
        if ( (unsigned __int8)sub_21B9810(v50, 240) )
        {
          if ( v54 == 3 )
          {
            if ( *(_WORD *)v53 == 27745 && v53[2] == 108 )
            {
              v99 = 1;
              goto LABEL_52;
            }
            v54 = 3;
            if ( v92 != 3 )
            {
              if ( (unsigned __int8)sub_21B9810(v50, 2998) && *(_WORD *)v53 == 27745 && v53[2] == 108 )
                goto LABEL_67;
              goto LABEL_52;
            }
LABEL_72:
            if ( !memcmp(v53, v40, v54) )
              goto LABEL_73;
          }
          else if ( v92 == v54 )
          {
            if ( !v92 )
              goto LABEL_73;
            goto LABEL_72;
          }
        }
        if ( (unsigned __int8)sub_21B9810(v50, 2998) )
        {
          if ( v54 != 3 )
            goto LABEL_64;
          if ( *(_WORD *)v53 == 27745 && v53[2] == 108 )
            goto LABEL_67;
          v54 = 3;
          if ( v92 == 3 )
            goto LABEL_66;
        }
        goto LABEL_52;
      }
LABEL_36:
      if ( !v99 )
        goto LABEL_27;
      if ( v27[1].m128i_i32[2] == 38 )
        v40 = sub_FF7BF0(v100);
LABEL_19:
      (*(void (__fastcall **)(void **, _QWORD, const __m128i *))(**(_QWORD **)(v101 + 24) + 64LL))(
        v111,
        *(_QWORD *)(v101 + 24),
        v27);
      v30 = *v40 == 0;
      v113[0] = "--image=profile=";
      if ( v30 )
      {
        v114 = 259;
        v31 = "--image=profile=";
        v98 = v113[1];
        v32 = 3;
      }
      else
      {
        v113[2] = v40;
        v32 = 2;
        v31 = (const char *)v113;
        v114 = 771;
      }
      v116 = v32;
      v33 = v97;
      v118[0] = v115;
      v115[0] = v31;
      v118[2] = v111;
      a8 = (__m128)_mm_load_si128(&si128);
      v119 = 1026;
      v34 = *v97;
      v115[1] = v98;
      v115[2] = ",file=";
      *(_QWORD *)ptr = v124;
      v35 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v34 + 16);
      *(__m128 *)&ptr[8] = a8;
      v117 = 3;
      v118[1] = 0;
      sub_22538C0(v118, ptr);
      v36 = v35(v33, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
      if ( *(_BYTE **)ptr != v124 )
        free(*(void **)ptr);
      v37 = (unsigned int)v121;
      v38 = (unsigned int)v121 + 1LL;
      if ( v38 > HIDWORD(v121) )
      {
        sub_2237220(v105, v105 + 2, v38, 8);
        v37 = (unsigned int)v121;
      }
      *((_QWORD *)v120 + v37) = v36;
      LODWORD(v121) = v121 + 1;
      if ( v111[0] != v104 )
        operator delete(v111[0]);
LABEL_27:
      v27 = (const __m128i *)((char *)v27 + 40);
      if ( (const __m128i *)v103 == v27 )
      {
        a6 = (__int64)v97;
        break;
      }
    }
  }
  sub_21B7150(ptr, a6, 3493);
  v57 = *(void ***)ptr;
  v58 = *(_QWORD **)&ptr[8];
  v59 = *(_QWORD **)ptr;
  v60 = v105 + 2;
  if ( *(_QWORD *)&ptr[8] != *(_QWORD *)ptr )
  {
    do
    {
      v61 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a6 + 16LL))(a6, *v59, v59[1]);
      v62 = (unsigned int)v121;
      v63 = (unsigned int)v121 + 1LL;
      if ( v63 > HIDWORD(v121) )
      {
        v94 = v61;
        sub_2237220(v105, v60, v63, 8);
        v62 = (unsigned int)v121;
        v61 = v94;
      }
      v59 += 4;
      *((_QWORD *)v120 + v62) = v61;
      LODWORD(v121) = v121 + 1;
    }
    while ( v58 != v59 );
    v64 = *(void ***)&ptr[8];
    v57 = *(void ***)ptr;
    if ( *(_QWORD *)&ptr[8] != *(_QWORD *)ptr )
    {
      do
      {
        while ( *v57 != v57 + 2 )
        {
          operator delete(*v57);
          v57 += 4;
          if ( v64 == v57 )
            goto LABEL_93;
        }
        v57 += 4;
      }
      while ( v64 != v57 );
LABEL_93:
      v57 = *(void ***)ptr;
    }
  }
  if ( v57 )
    operator delete(v57);
  sub_112D530(ptr, v107, "fatbinary");
  v65 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a6 + 16LL))(
          a6,
          *(_QWORD *)ptr,
          *(_QWORD *)&ptr[8]);
  if ( *(_BYTE **)ptr != &ptr[16] )
    operator delete(*(void **)ptr);
  v66 = *(const __m128i **)v109;
  v67 = *(unsigned int *)(v109 + 8);
  v93 = (__int64)v108;
  v68 = operator new(0x208u);
  sub_1106AE0(v68, v110, v101, 0, (__int64)"--options-file", v65, (__int64)v105, v66, v67, v93, 1, 0);
  *(_QWORD *)ptr = v68;
  v69 = *(unsigned int *)(v106 + 160);
  v70 = v69 + 1;
  v71 = *(_DWORD *)(v106 + 160);
  if ( v69 + 1 > (unsigned __int64)*(unsigned int *)(v106 + 164) )
  {
    v89 = v106;
    v90 = *(_QWORD *)(v106 + 152);
    v91 = v106 + 152;
    if ( v90 > (unsigned __int64)ptr || (unsigned __int64)ptr >= v90 + 8 * v69 )
    {
      sub_11673D0(v91, v70, a7, *(double *)a8.m128_u64);
      v69 = *(unsigned int *)(v106 + 160);
      v72 = *(_QWORD *)(v106 + 152);
      v73 = ptr;
      v71 = *(_DWORD *)(v106 + 160);
    }
    else
    {
      sub_11673D0(v91, v70, a7, *(double *)a8.m128_u64);
      v72 = *(_QWORD *)(v89 + 152);
      v69 = *(unsigned int *)(v89 + 160);
      v73 = &ptr[v72 - v90];
      v71 = *(_DWORD *)(v89 + 160);
    }
  }
  else
  {
    v72 = *(_QWORD *)(v106 + 152);
    v73 = ptr;
  }
  v74 = *(_QWORD *)v73;
  *(_QWORD *)v73 = 0;
  v75 = v106;
  *(_QWORD *)(v72 + 8 * v69) = v74;
  v76 = *(_QWORD **)ptr;
  *(_DWORD *)(v75 + 160) = v71 + 1;
  if ( v76 )
  {
    v77 = *(void (__fastcall **)(_QWORD *))(*v76 + 8LL);
    if ( v77 == sub_10D4290 )
    {
      v78 = v76[58];
      v79 = v76[57];
      *v76 = &off_2BA8F30;
      if ( v78 != v79 )
      {
        do
        {
          if ( *(_BYTE *)(v79 + 32) && *(_QWORD *)v79 != v79 + 16 )
            operator delete(*(void **)v79);
          v79 += 40;
        }
        while ( v78 != v79 );
        v79 = v76[57];
      }
      if ( v79 )
        operator delete((void *)v79);
      v80 = (void *)v76[54];
      if ( v80 )
        operator delete(v80);
      v81 = (_QWORD *)v76[50];
      if ( v81 != v76 + 52 )
        operator delete(v81);
      v82 = (_QWORD *)v76[32];
      if ( v82 != v76 + 34 )
        free(v82);
      v83 = (void **)v76[29];
      v84 = (void **)v76[28];
      if ( v83 != v84 )
      {
        do
        {
          while ( *v84 != v84 + 2 )
          {
            operator delete(*v84);
            v84 += 4;
            if ( v84 == v83 )
              goto LABEL_119;
          }
          v84 += 4;
        }
        while ( v83 != v84 );
LABEL_119:
        v84 = (void **)v76[28];
      }
      if ( v84 )
        operator delete(v84);
      v85 = (void *)v76[25];
      if ( v85 )
        operator delete(v85);
      v86 = (_QWORD *)v76[7];
      if ( v86 != v76 + 9 )
        free(v86);
      operator delete(v76, 0x208u);
    }
    else
    {
      v77(v76);
    }
  }
  if ( v120 != v105 + 2 )
    free(v120);
}
