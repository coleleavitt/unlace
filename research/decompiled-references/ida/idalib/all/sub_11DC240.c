void __fastcall sub_11DC240(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 si128,
        __m128i a8)
{
  void *v9; // rbp
  size_t v10; // rsi
  void *v11; // rdi
  int v12; // r13d
  const char *v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // ebp
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rcx
  char *v20; // rdx
  void **p_ptr; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  bool v25; // zf
  __int64 v26; // rax
  char *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  const __m128i *v35; // r15
  __int64 v36; // r13
  _BYTE *v37; // rsi
  __int64 v38; // rax
  size_t v39; // rdx
  __int64 (__fastcall *v40)(_QWORD, _QWORD, _QWORD); // rcx
  size_t v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  void **v45; // r13
  _QWORD *v46; // rbp
  _QWORD *v47; // r15
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  void **v51; // rbp
  int v52; // eax
  int v53; // edx
  char v54; // al
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rbx
  void *v60; // rbp
  __int64 v61; // rdx
  __int64 v62; // rsi
  int v63; // eax
  __int64 v64; // rcx
  void *v65; // rsi
  _QWORD *v66; // rbp
  void (__fastcall *v67)(_QWORD *); // rax
  __int64 v68; // r13
  __int64 v69; // rbx
  void *v70; // rdi
  _QWORD *v71; // rdi
  _QWORD *v72; // rdi
  void **v73; // r13
  void **v74; // rbx
  void *v75; // rdi
  _QWORD *v76; // rdi
  size_t v77; // rdx
  _BYTE *v78; // rax
  signed __int64 v79; // rdx
  __int64 v80; // rax
  unsigned __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rax
  char v84; // al
  const char **v85; // rax
  const char *v86; // r14
  const char *v87; // rdx
  size_t v88; // rax
  __int64 v89; // rax
  unsigned __int64 v90; // rbx
  __int64 v91; // rdi
  size_t v92; // rax
  int v93; // ecx
  __int64 v94; // [rsp+0h] [rbp-298h]
  __int64 v95; // [rsp+0h] [rbp-298h]
  char *v96; // [rsp+0h] [rbp-298h]
  __int64 v97; // [rsp+0h] [rbp-298h]
  __int64 v98; // [rsp+0h] [rbp-298h]
  __int64 v99; // [rsp+0h] [rbp-298h]
  __int64 v100; // [rsp+10h] [rbp-288h]
  const __m128i *v101; // [rsp+10h] [rbp-288h]
  __int64 v102; // [rsp+18h] [rbp-280h]
  __int64 (__fastcall *v108)(_QWORD, _QWORD, _QWORD); // [rsp+58h] [rbp-240h]
  __int64 v109; // [rsp+58h] [rbp-240h]
  void *v110[2]; // [rsp+60h] [rbp-238h] BYREF
  __int64 v111; // [rsp+70h] [rbp-228h] BYREF
  void *v112[2]; // [rsp+80h] [rbp-218h] BYREF
  __int64 v113; // [rsp+90h] [rbp-208h] BYREF
  __int16 v114; // [rsp+A0h] [rbp-1F8h]
  void *v115; // [rsp+B0h] [rbp-1E8h] BYREF
  __int64 v116; // [rsp+B8h] [rbp-1E0h]
  _BYTE v117[128]; // [rsp+C0h] [rbp-1D8h] BYREF
  void *ptr; // [rsp+140h] [rbp-158h] BYREF
  __m128 v119; // [rsp+148h] [rbp-150h]
  __int64 v120; // [rsp+158h] [rbp-140h] BYREF
  __int16 v121; // [rsp+160h] [rbp-138h]

  v100 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a3 + 64) == 2 )
  {
    v9 = *(void **)(a3 + 72);
    v10 = 0;
    if ( v9 )
      v10 = strlen(*(const char **)(a3 + 72));
    v11 = v9;
  }
  else
  {
    v11 = (void *)sub_21B7BC0(a6, 2260, &byte_22F0C30, 0);
    v10 = v77;
    if ( !v77 )
    {
      sub_FC70B0((__int64)&ptr, **(_QWORD **)a2, 0, 446);
      v78 = (_BYTE *)sub_22B7480(*(_QWORD *)(a1 + 24) + 16LL);
      sub_AEC220((unsigned __int8 **)&ptr, v78, v79);
      sub_AE9DF0((unsigned __int8 **)&ptr, *(_QWORD *)(a1 + 16), 1u);
      sub_AEA040((__int64)&ptr);
      return;
    }
  }
  v12 = sub_FF7C60(v11, v10);
  if ( !sub_10DCD30(a6, 0xBB8u) )
    sub_11D84E0(v100 + 2384, v12);
  v13 = "-m64";
  v116 = 0x1000000000LL;
  v115 = v117;
  if ( !(unsigned __int8)sub_22B7EA0(v100 + 16) )
    v13 = "-m32";
  v14 = (unsigned int)v116;
  v15 = (unsigned int)v116 + 1LL;
  if ( v15 > HIDWORD(v116) )
  {
    sub_2237220(&v115, v117, v15, 8);
    v14 = (unsigned int)v116;
  }
  *((_QWORD *)v115 + v14) = v13;
  LODWORD(v116) = v116 + 1;
  v16 = sub_11D8180(a6);
  if ( v16 != 2 )
  {
    v17 = sub_10DCD30(a6, 0xAu);
    v18 = v17;
    if ( !v17 )
    {
      p_ptr = &ptr;
      sub_10DC5D0((__int64)&v115, (__int64)"-O0");
      if ( v16 != 1 )
        goto LABEL_19;
      goto LABEL_115;
    }
    if ( (unsigned __int8)sub_21B9810(v17, 3063) || (unsigned __int8)sub_21B9810(v18, 3076) )
    {
      v19 = 1;
      v20 = "3";
      goto LABEL_16;
    }
    if ( (unsigned __int8)sub_21B9810(v18, 3060) )
    {
      v92 = j__strlen("0");
      v20 = "0";
      v19 = v92;
LABEL_16:
      p_ptr = &ptr;
      v119.m128_u64[1] = (unsigned __int64)v20;
      v120 = v19;
      ptr = "-O";
      v121 = 1283;
      v22 = sub_10DA6C0(a6, (__int64)&ptr);
      v23 = (unsigned int)v116;
      v24 = (unsigned int)v116 + 1LL;
      if ( v24 > HIDWORD(v116) )
      {
        v99 = v22;
        sub_2237220(&v115, v117, v24, 8);
        v23 = (unsigned int)v116;
        v22 = v99;
      }
      *((_QWORD *)v115 + v23) = v22;
      LODWORD(v116) = v116 + 1;
      if ( v16 != 1 )
        goto LABEL_19;
LABEL_115:
      sub_10DC5D0((__int64)&v115, (__int64)"-lineinfo");
      goto LABEL_19;
    }
    v84 = sub_21B9810(v18, 3114);
    v19 = 1;
    v20 = "3";
    if ( !v84 )
      goto LABEL_16;
    v85 = *(const char ***)(v18 + 48);
    v86 = *v85;
    if ( *v85 && j__strlen(*v85) == 1 )
    {
      v93 = *(unsigned __int8 *)v86;
      if ( v93 == 49 )
      {
        v87 = "1";
        goto LABEL_121;
      }
      v87 = "2";
      if ( v93 == 50 )
        goto LABEL_121;
      v87 = "3";
      if ( *v86 == 51 )
        goto LABEL_121;
    }
    v87 = "2";
LABEL_121:
    v96 = (char *)v87;
    v88 = j__strlen(v87);
    v20 = v96;
    v19 = v88;
    goto LABEL_16;
  }
  v80 = (unsigned int)v116;
  v81 = (unsigned int)v116 + 1LL;
  if ( v81 > HIDWORD(v116) )
  {
    sub_2237220(&v115, v117, v81, 8);
    v80 = (unsigned int)v116;
  }
  *((_QWORD *)v115 + v80) = "-g";
  LODWORD(v116) = v116 + 1;
  v82 = (unsigned int)v116;
  if ( (unsigned __int64)(unsigned int)v116 + 1 > HIDWORD(v116) )
  {
    sub_2237220(&v115, v117, (unsigned int)v116 + 1LL, 8);
    v82 = (unsigned int)v116;
  }
  *((_QWORD *)v115 + v82) = "--dont-merge-basicblocks";
  LODWORD(v116) = v116 + 1;
  v83 = (unsigned int)v116;
  if ( (unsigned __int64)(unsigned int)v116 + 1 > HIDWORD(v116) )
  {
    sub_2237220(&v115, v117, (unsigned int)v116 + 1LL, 8);
    v83 = (unsigned int)v116;
  }
  p_ptr = &ptr;
  *((_QWORD *)v115 + v83) = "--return-at-end";
  LODWORD(v116) = v116 + 1;
LABEL_19:
  v25 = sub_10DCD30(a6, 0xD45u) == 0;
  v26 = (unsigned int)v116;
  if ( !v25 )
  {
    if ( (unsigned __int64)(unsigned int)v116 + 1 > HIDWORD(v116) )
    {
      sub_2237220(&v115, v117, (unsigned int)v116 + 1LL, 8);
      v26 = (unsigned int)v116;
    }
    *((_QWORD *)v115 + v26) = "-v";
    v26 = (unsigned int)(v116 + 1);
    LODWORD(v116) = v116 + 1;
  }
  if ( v26 + 1 > (unsigned __int64)HIDWORD(v116) )
  {
    sub_2237220(&v115, v117, v26 + 1, 8);
    v26 = (unsigned int)v116;
  }
  *((_QWORD *)v115 + v26) = "--gpu-name";
  LODWORD(v116) = v116 + 1;
  v27 = sub_FF7B80(v12);
  v121 = 257;
  if ( *v27 )
  {
    ptr = v27;
    LOBYTE(v121) = 3;
  }
  v28 = sub_10DA6C0(a6, (__int64)&ptr);
  v29 = (unsigned int)v116;
  v30 = (unsigned int)v116 + 1LL;
  if ( v30 > HIDWORD(v116) )
  {
    v98 = v28;
    sub_2237220(&v115, v117, v30, 8);
    v29 = (unsigned int)v116;
    v28 = v98;
  }
  *((_QWORD *)v115 + v29) = v28;
  LODWORD(v116) = v116 + 1;
  v31 = (unsigned int)v116;
  if ( (unsigned __int64)(unsigned int)v116 + 1 > HIDWORD(v116) )
  {
    sub_2237220(&v115, v117, (unsigned int)v116 + 1LL, 8);
    v31 = (unsigned int)v116;
  }
  *((_QWORD *)v115 + v31) = "--output-file";
  LODWORD(v116) = v116 + 1;
  (*(void (__fastcall **)(void **, __int64, __int64))(*(_QWORD *)v100 + 64LL))(v110, v100, a4);
  if ( *(_DWORD *)(a4 + 8) == 1 && sub_9B4AA0((__int64)v110, *(const char **)a4) )
  {
    v121 = 260;
    ptr = v110;
    v89 = sub_10DA6C0(a6, (__int64)&ptr);
    sub_10DC5D0(a2 + 248, v89);
  }
  v121 = 260;
  ptr = v110;
  v32 = sub_10DA6C0(a6, (__int64)&ptr);
  v33 = (unsigned int)v116;
  v34 = (unsigned int)v116 + 1LL;
  if ( v34 > HIDWORD(v116) )
  {
    v97 = v32;
    sub_2237220(&v115, v117, v34, 8);
    v33 = (unsigned int)v116;
    v32 = v97;
  }
  *((_QWORD *)v115 + v33) = v32;
  LODWORD(v116) = v116 + 1;
  v35 = *(const __m128i **)a5;
  v36 = *(_QWORD *)a5 + 40LL * *(unsigned int *)(a5 + 8);
  if ( *(_QWORD *)a5 != v36 )
  {
    do
    {
      v37 = (_BYTE *)v35->m128i_i64[0];
      v114 = 257;
      if ( *v37 )
      {
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8DE0);
        v38 = *(_QWORD *)a6;
        ptr = &v120;
        v39 = 0;
        v112[0] = v37;
        LOBYTE(v114) = 3;
        v40 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v38 + 16);
        v119 = si128;
        if ( v37 )
        {
          v108 = v40;
          v41 = j__strlen(v37);
          v40 = v108;
          v39 = v41;
        }
        v42 = v40(a6, v37, v39);
      }
      else
      {
        a8 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
        v55 = *(_QWORD *)a6;
        ptr = &v120;
        v119 = (__m128)a8;
        v42 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v55 + 16))(a6, 0, 0);
      }
      if ( ptr != &v120 )
      {
        v94 = v42;
        free(ptr);
        v42 = v94;
      }
      v43 = (unsigned int)v116;
      v44 = (unsigned int)v116 + 1LL;
      if ( v44 > HIDWORD(v116) )
      {
        v95 = v42;
        sub_2237220(&v115, v117, v44, 8);
        v43 = (unsigned int)v116;
        v42 = v95;
      }
      v35 = (const __m128i *)((char *)v35 + 40);
      *((_QWORD *)v115 + v43) = v42;
      LODWORD(v116) = v116 + 1;
    }
    while ( (const __m128i *)v36 != v35 );
  }
  sub_21B7150(&ptr, a6, 3494);
  v45 = (void **)ptr;
  v46 = (_QWORD *)v119.m128_u64[0];
  v47 = ptr;
  if ( (void *)v119.m128_u64[0] != ptr )
  {
    do
    {
      v48 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a6 + 16LL))(a6, *v47, v47[1]);
      v49 = (unsigned int)v116;
      v50 = (unsigned int)v116 + 1LL;
      if ( v50 > HIDWORD(v116) )
      {
        v109 = v48;
        sub_2237220(&v115, v117, v50, 8);
        v49 = (unsigned int)v116;
        v48 = v109;
      }
      v47 += 4;
      *((_QWORD *)v115 + v49) = v48;
      LODWORD(v116) = v116 + 1;
    }
    while ( v46 != v47 );
    v51 = (void **)v119.m128_u64[0];
    v45 = (void **)ptr;
    if ( (void *)v119.m128_u64[0] != ptr )
    {
      do
      {
        while ( *v45 != v45 + 2 )
        {
          operator delete(*v45);
          v45 += 4;
          if ( v51 == v45 )
            goto LABEL_51;
        }
        v45 += 4;
      }
      while ( v51 != v45 );
LABEL_51:
      v45 = (void **)ptr;
    }
  }
  if ( v45 )
    operator delete(v45);
  v52 = *(_DWORD *)(a3 + 60);
  if ( (v52 & 4) != 0 || (v53 = *(_DWORD *)(a3 + 64), v53 == 4) )
  {
    v54 = sub_21B7850(a6, 1553, 1501, 1);
  }
  else
  {
    if ( (v52 & 2) == 0 && v53 != 2 )
      goto LABEL_64;
    v54 = sub_21B7850(a6, 825, 1164, 0);
  }
  if ( v54 )
  {
LABEL_64:
    v56 = (unsigned int)v116;
    v57 = (unsigned int)v116 + 1LL;
    if ( v57 > HIDWORD(v116) )
    {
      sub_2237220(&v115, v117, v57, 8);
      v56 = (unsigned int)v116;
    }
    *((_QWORD *)v115 + v56) = "-c";
    LODWORD(v116) = v116 + 1;
  }
  v58 = sub_10DCD30(a6, 0xC6Bu);
  if ( v58 )
  {
    v59 = **(_QWORD **)(v58 + 48);
  }
  else
  {
    sub_112D530(v112, v100, "ptxas");
    ptr = v112;
    v121 = 260;
    v59 = sub_10DA6C0(a6, (__int64)&ptr);
    if ( v112[0] != &v113 )
      operator delete(v112[0]);
  }
  v101 = *(const __m128i **)a5;
  v102 = *(unsigned int *)(a5 + 8);
  v60 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v60, a3, a1, 0, (__int64)"--options-file", v59, (__int64)&v115, v101, v102, a4, 1, 0);
  ptr = v60;
  v61 = *(unsigned int *)(a2 + 160);
  v62 = v61 + 1;
  v63 = *(_DWORD *)(a2 + 160);
  if ( v61 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v90 = *(_QWORD *)(a2 + 152);
    v91 = a2 + 152;
    if ( v90 > (unsigned __int64)&ptr || (unsigned __int64)&ptr >= v90 + 8 * v61 )
    {
      sub_11673D0(v91, v62, si128, *(double *)a8.m128i_i64);
      v61 = *(unsigned int *)(a2 + 160);
      v64 = *(_QWORD *)(a2 + 152);
      v63 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v91, v62, si128, *(double *)a8.m128i_i64);
      v64 = *(_QWORD *)(a2 + 152);
      v61 = *(unsigned int *)(a2 + 160);
      p_ptr = (void **)((char *)&ptr + v64 - v90);
      v63 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v64 = *(_QWORD *)(a2 + 152);
  }
  v65 = *p_ptr;
  *p_ptr = nullptr;
  *(_QWORD *)(v64 + 8 * v61) = v65;
  v66 = ptr;
  *(_DWORD *)(a2 + 160) = v63 + 1;
  if ( v66 )
  {
    v67 = *(void (__fastcall **)(_QWORD *))(*v66 + 8LL);
    if ( v67 == sub_10D4290 )
    {
      v68 = v66[58];
      v69 = v66[57];
      *v66 = &off_2BA8F30;
      if ( v68 != v69 )
      {
        do
        {
          if ( *(_BYTE *)(v69 + 32) && *(_QWORD *)v69 != v69 + 16 )
            operator delete(*(void **)v69);
          v69 += 40;
        }
        while ( v68 != v69 );
        v69 = v66[57];
      }
      if ( v69 )
        operator delete((void *)v69);
      v70 = (void *)v66[54];
      if ( v70 )
        operator delete(v70);
      v71 = (_QWORD *)v66[50];
      if ( v71 != v66 + 52 )
        operator delete(v71);
      v72 = (_QWORD *)v66[32];
      if ( v72 != v66 + 34 )
        free(v72);
      v73 = (void **)v66[29];
      v74 = (void **)v66[28];
      if ( v73 != v74 )
      {
        do
        {
          while ( *v74 != v74 + 2 )
          {
            operator delete(*v74);
            v74 += 4;
            if ( v74 == v73 )
              goto LABEL_90;
          }
          v74 += 4;
        }
        while ( v73 != v74 );
LABEL_90:
        v74 = (void **)v66[28];
      }
      if ( v74 )
        operator delete(v74);
      v75 = (void *)v66[25];
      if ( v75 )
        operator delete(v75);
      v76 = (_QWORD *)v66[7];
      if ( v76 != v66 + 9 )
        free(v76);
      operator delete(v66, 0x208u);
    }
    else
    {
      v67(v66);
    }
  }
  if ( v110[0] != &v111 )
    operator delete(v110[0]);
  if ( v115 != v117 )
    free(v115);
}
