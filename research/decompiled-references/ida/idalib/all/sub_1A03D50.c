__int64 __fastcall sub_1A03D50(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // r13
  bool v14; // zf
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  char v24; // al
  unsigned __int8 v25; // al
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned __int64 v29; // r14
  unsigned __int8 v30; // si
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  char v35; // cl
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rbp
  __int64 v38; // rsi
  unsigned __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r13
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r13
  __int64 v52; // rbp
  unsigned __int64 *v53; // rbx
  __int64 v54; // r8
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  _QWORD *v57; // rbp
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned int v61; // ebx
  __int64 v62; // rdx
  _DWORD *v63; // rcx
  unsigned int v64; // edx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r15
  void *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // r8
  __int64 v76; // r9
  void *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // [rsp+8h] [rbp-270h]
  __int64 v80; // [rsp+8h] [rbp-270h]
  __int64 v81; // [rsp+8h] [rbp-270h]
  int v82; // [rsp+8h] [rbp-270h]
  __int64 v83; // [rsp+8h] [rbp-270h]
  char v84; // [rsp+10h] [rbp-268h]
  bool v85; // [rsp+10h] [rbp-268h]
  unsigned __int64 v86; // [rsp+10h] [rbp-268h]
  unsigned int v87; // [rsp+10h] [rbp-268h]
  int v88; // [rsp+18h] [rbp-260h]
  __int64 v89; // [rsp+18h] [rbp-260h]
  unsigned __int8 v90; // [rsp+27h] [rbp-251h]
  __int64 v91; // [rsp+28h] [rbp-250h]
  _BOOL4 v93; // [rsp+44h] [rbp-234h] BYREF
  __int64 v94; // [rsp+48h] [rbp-230h] BYREF
  void *v95; // [rsp+50h] [rbp-228h] BYREF
  unsigned int v96; // [rsp+58h] [rbp-220h]
  void *v97; // [rsp+60h] [rbp-218h] BYREF
  __int64 v98; // [rsp+68h] [rbp-210h]
  _BYTE v99[128]; // [rsp+70h] [rbp-208h] BYREF
  __int64 v100; // [rsp+F0h] [rbp-188h] BYREF
  _QWORD *v101; // [rsp+F8h] [rbp-180h]
  unsigned __int64 v102; // [rsp+100h] [rbp-178h]
  __int128 v103; // [rsp+108h] [rbp-170h]
  bool v104; // [rsp+118h] [rbp-160h]
  void *v105; // [rsp+120h] [rbp-158h] BYREF
  __int64 v106; // [rsp+128h] [rbp-150h]
  _BYTE v107[128]; // [rsp+130h] [rbp-148h] BYREF
  void *ptr; // [rsp+1B0h] [rbp-C8h]
  __int64 v109; // [rsp+1B8h] [rbp-C0h]
  _BYTE v110[184]; // [rsp+1C0h] [rbp-B8h] BYREF

  v90 = sub_F61140(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
  if ( v90 )
    return v90;
  v11 = *a1;
  v12 = *(_QWORD *)(a2 + 16);
  v102 = 0;
  v103 = 0;
  v13 = *(_QWORD **)(v11 + 248);
  v100 = v11;
  v101 = v13;
  v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5;
  ptr = v110;
  v105 = v107;
  LOBYTE(v9) = v14;
  v104 = v14;
  v106 = 0x1000000000LL;
  v109 = 0x1000000000LL;
  v15 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v15 + 16) - 43 > 1 )
  {
    v44 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
    if ( (unsigned int)v44 > 1 )
      goto LABEL_8;
    v15 = sub_F63050(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL), v12, v44, v9);
    if ( !v15 )
    {
      v102 = v12;
      if ( !v104 )
        goto LABEL_9;
      goto LABEL_34;
    }
  }
  while ( 1 )
  {
    v12 = *(_QWORD *)(v15 + 32);
    if ( (*(_BYTE *)(v15 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v16 = v12 & 0xFFFFFFFFFFFFFFF0LL;
      v15 = *(_QWORD *)v16;
      v17 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v16 + 16LL) - 43;
      if ( (unsigned int)v17 <= 1 )
        break;
      v18 = sub_F63050(v15, v16, v17, v9);
      v12 = *(_QWORD *)(v18 + 32);
      if ( (*(_BYTE *)(v18 + 18) & 0x10) == 0 )
        goto LABEL_7;
    }
  }
LABEL_7:
  LOBYTE(v9) = v104;
LABEL_8:
  v102 = v12;
  if ( !(_BYTE)v9 )
    goto LABEL_9;
LABEL_34:
  v45 = sub_A72040(v101, v12);
  if ( !v45 || *(_BYTE *)(v45 + 16) != 5 )
    BUG();
  v102 = *(_QWORD *)(v45 + 32);
LABEL_9:
  v19 = 0;
  sub_19F81D0(v102, (__int64)&v105);
  v23 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)&v103 = v105;
  if ( (unsigned int)((*(_QWORD *)(a3 + 24) - v23) >> 3) )
  {
    while ( 1 )
    {
      v32 = (__int64)v13;
      v29 = *(_QWORD *)(v23 + 8LL * v19);
      if ( (unsigned __int8)sub_C01160(v29, (__int64)v13, 1, v20, v21) )
      {
        v80 = *(_QWORD *)(v29 + 8);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v80 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 48 )
        {
          v85 = ((*(_BYTE *)(v29 + 1) >> 1) & 3) == 1;
          v34 = sub_EEE9A0(24, v13, 8u);
          v35 = v85;
          v32 = v80;
          v86 = v34;
          sub_C95B50(v34, v80, v29, v35, 0);
          v29 = v86;
        }
        v88 = sub_EEB7E0(v29, v32, 0.0);
        v84 = *(_BYTE *)(v29 + 1);
        v33 = sub_EEE9A0(24, v13, 8u);
        *(_WORD *)v33 = *(_WORD *)v33 & 0xFE00 | 0x1A;
        if ( unk_2CD7484 )
        {
          v91 = v33;
          sub_EE9B50(26);
          v33 = v91;
        }
        v24 = *(_BYTE *)(v33 + 1);
        *(_QWORD *)(v33 + 16) = v29;
        *(_BYTE *)(v33 + 1) = v84 & 0x3E | v24 & 0xC1;
        *(_DWORD *)v33 &= 0xFFF03FFF;
        *(_QWORD *)(v33 + 8) = v80;
        v79 = v33;
        *(_DWORD *)(v33 + 4) = v88;
        v25 = sub_B62360(v33);
        v28 = v79;
        v29 = v79;
        *(_BYTE *)(v79 + 1) = (v25 << 6) | *(_BYTE *)(v79 + 1) & 0x3F;
        *(_BYTE *)(v79 + 2) = *(_BYTE *)(v79 + 2) & 0xF8 | (v25 >> 2) & 7;
        *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * v19) = v79;
        v30 = ((*(_DWORD *)v79 >> 14) | (*(_DWORD *)a3 >> 14)) & 0x1F;
        *(_BYTE *)(a3 + 1) = (v30 << 6) | *(_BYTE *)(a3 + 1) & 0x3F;
        v31 = *(_BYTE *)(a3 + 2) & 0xF8;
        *(_BYTE *)(a3 + 2) = *(_BYTE *)(a3 + 2) & 0xF8 | (v30 >> 2);
      }
      if ( !(unsigned __int8)sub_19F92A0((__int64)&v100, (unsigned __int64 *)v29, v28, v31, v26, v27, (__m128)0LL, a8) )
        break;
      v23 = *(_QWORD *)(a3 + 16);
      if ( ++v19 >= (unsigned int)((*(_QWORD *)(a3 + 24) - v23) >> 3) )
        goto LABEL_19;
    }
    v90 = 0;
    goto LABEL_27;
  }
LABEL_19:
  v36 = (unsigned int)v106;
  v37 = (unsigned int)v109;
  v38 = *(_QWORD *)(a2 + 16);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
    v36 = ((unsigned int)v109 + (unsigned __int64)(unsigned int)v106 - 1) / (unsigned int)v106 * (unsigned int)v106;
  v39 = v38 & 0xFFFFFFFFFFFFFFF0LL;
  v40 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL);
  v41 = (unsigned int)*(unsigned __int8 *)(v40 + 16) - 43;
  if ( (unsigned int)v41 <= 1
    || (v41 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v41 <= 1)
    && (v81 = *(_QWORD *)(a2 + 16),
        v40 = sub_F63050(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL), v38, v41, v20),
        v38 = v81,
        v40) )
  {
    while ( 1 )
    {
      v38 = *(_QWORD *)(v40 + 32);
      if ( (*(_BYTE *)(v40 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v42 = v38 & 0xFFFFFFFFFFFFFFF0LL;
        v40 = *(_QWORD *)v42;
        v41 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v42 + 16LL) - 43;
        if ( (unsigned int)v41 <= 1 )
          break;
        v43 = sub_F63050(v40, v42, v41, v20);
        v38 = *(_QWORD *)(v43 + 32);
        if ( (*(_BYTE *)(v43 + 18) & 0x10) == 0 )
          goto LABEL_25;
      }
    }
LABEL_25:
    v39 = v38 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v46 = *(_QWORD *)(v39 + 8);
  v94 = v38;
  if ( (v46 & 8) != 0 && (*(__int64 *)((char *)&qword_18 + (v46 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFE00) != 0 )
    v94 = sub_A72780(*(_QWORD **)(*a1 + 248), v38, v41, v20, v21);
  if ( v37 == v36 )
  {
    *((_QWORD *)&v103 + 1) = ptr;
    if ( v104 )
    {
      v52 = -8;
      v53 = (unsigned __int64 *)v99;
      v98 = 0x600000000LL;
      v54 = 8LL * (unsigned int)v109;
      v97 = v99;
      if ( v54 )
      {
        do
        {
          v55 = sub_19F8E50((__int64)&v100, v102, v41, v20, v54, v22, 0.0);
          v20 = (unsigned int)v98;
          v38 = HIDWORD(v98);
          v56 = (unsigned int)v98 + 1LL;
          if ( v56 > HIDWORD(v98) )
          {
            v38 = (__int64)v99;
            v83 = v55;
            sub_2237220(&v97, v99, v56, 8);
            v20 = (unsigned int)v98;
            v55 = v83;
          }
          *((_QWORD *)v97 + v20) = v55;
          v41 = (unsigned int)v109;
          v54 = (unsigned int)(v98 + 1);
          LODWORD(v98) = v98 + 1;
        }
        while ( *((void **)&v103 + 1) != (char *)ptr + 8 * (unsigned int)v109 );
        v53 = (unsigned __int64 *)v97;
        v52 = 8 * v54 - 8;
      }
      v89 = v54;
      v82 = sub_EEB7E0(*v53, v38, 0.0);
      v87 = sub_EEC140(*(unsigned __int64 *)((char *)v53 + v52));
      v57 = (_QWORD *)sub_EEE9A0(64, v101, 8u);
      sub_C0B340((__int64)v57, v101, v82, (__int64)v53, v89, v87);
      v96 = 64;
      v95 = (void *)(unsigned int)v98;
      v57[1] = sub_A70F70((__int64)v101, v102, (__int64)&v95, nullptr, 0, 0);
      if ( v96 > 0x40 && v95 )
        operator delete[](v95);
      if ( v97 != v99 )
        free(v97);
    }
    else
    {
      v57 = (_QWORD *)sub_19F8E50((__int64)&v100, v102, v41, v20, v21, v22, 0.0);
    }
    v61 = 0;
    sub_C0B170((_QWORD *)a3, v13, (__int64)(v57[3] - v57[2]) >> 3, v58, v59, v60);
    v62 = v57[2];
    if ( (unsigned int)((v57[3] - v62) >> 3) )
    {
      do
      {
        v63 = *(_DWORD **)(v62 + 8LL * v61);
        v64 = v61++;
        sub_C0B210(a3, v13, v64, v63);
        v62 = v57[2];
      }
      while ( v61 < (unsigned int)((v57[3] - v62) >> 3) );
    }
    v90 = 1;
    goto LABEL_27;
  }
  v93 = v37 > v36;
  v47 = *a1;
  v48 = sub_BFB1C0(a3);
  sub_168B9F0((__int64)&v97, (__int64 *)(v47 + 8), v48, 0xF3Au, 0);
  v49 = sub_16CF4F0((__int64)&v97, (int *)&v93);
  v50 = sub_1605D30(v49, &v94);
  v51 = v50;
  if ( *(_BYTE *)(v50 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v50 + 32), v36, 3u);
LABEL_61:
    if ( *(_BYTE *)(v51 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v51 + 32), v37, 3u);
    }
    else if ( *(_BYTE *)(v51 + 132) )
    {
      v74 = sub_168B9E0((_QWORD *)v51);
      v77 = *(void **)(v51 + 16);
      if ( v77 )
        v77 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v77 + 32LL))(*(_QWORD *)(v51 + 16));
      v95 = v77;
      v78 = sub_1587BC0(v74, (__int64 *)&v95, v72, v73, v75, v76);
      sub_AE9DF0((unsigned __int8 **)(*v78 + 32LL * *(unsigned int *)(v51 + 128) + 8), v37, 3u);
    }
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v50 + 132) )
  {
    v69 = sub_168B9E0((_QWORD *)v50);
    v70 = *(void **)(v51 + 16);
    if ( v70 )
      v70 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v70 + 32LL))(*(_QWORD *)(v51 + 16));
    v95 = v70;
    v71 = sub_1587BC0(v69, (__int64 *)&v95, v65, v66, v67, v68);
    sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * *(unsigned int *)(v51 + 128) + 8), v36, 3u);
    goto LABEL_61;
  }
LABEL_43:
  sub_15F7200(&v97);
LABEL_27:
  if ( ptr != v110 )
    free(ptr);
  if ( v105 != v107 )
    free(v105);
  return v90;
}
