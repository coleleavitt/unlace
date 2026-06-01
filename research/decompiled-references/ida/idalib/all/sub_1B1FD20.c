void __fastcall sub_1B1FD20(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const void *a5,
        __int64 a6,
        void *a7,
        __int64 a8,
        void *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        unsigned int a13,
        unsigned int a14,
        __int64 a15)
{
  size_t v16; // rbp
  unsigned __int64 v17; // rbx
  char *v18; // rdi
  int v19; // eax
  __int64 v20; // rax
  size_t v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // rax
  size_t v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _BYTE *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _DWORD *v37; // rcx
  __int64 v38; // rax
  char *v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rax
  char *v42; // rdx
  char *v43; // rax
  _QWORD *v44; // rbp
  _BYTE *v45; // r14
  unsigned __int64 *v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned __int64 v50; // r14
  __int64 v51; // r15
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned int v55; // eax
  __int64 v56; // rdi
  char v57; // dl
  char *v58; // rcx
  __int64 v59; // r8
  __int64 *v60; // rdi
  char *v61; // rax
  char *v62; // rcx
  void *v63; // rdi
  unsigned int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbp
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  _QWORD *v71; // rax
  unsigned int v72; // r9d
  unsigned int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r14
  __int64 v79; // rax
  _QWORD *v80; // rax
  unsigned __int64 *v83; // [rsp+40h] [rbp-2E8h]
  unsigned int v86; // [rsp+68h] [rbp-2C0h]
  unsigned int v87; // [rsp+7Ch] [rbp-2ACh]
  __m128i v88; // [rsp+80h] [rbp-2A8h] BYREF
  _BYTE v89[16]; // [rsp+90h] [rbp-298h] BYREF
  void *ptr; // [rsp+A0h] [rbp-288h] BYREF
  __int64 v91; // [rsp+A8h] [rbp-280h]
  _BYTE v92[64]; // [rsp+B0h] [rbp-278h] BYREF
  void *v93; // [rsp+F0h] [rbp-238h] BYREF
  __int64 v94; // [rsp+F8h] [rbp-230h]
  int v95; // [rsp+100h] [rbp-228h]
  char v96; // [rsp+104h] [rbp-224h]
  _BYTE v97[120]; // [rsp+108h] [rbp-220h] BYREF
  void *v98[2]; // [rsp+180h] [rbp-1A8h] BYREF
  __int128 v99; // [rsp+190h] [rbp-198h] BYREF
  unsigned __int8 *v100[4]; // [rsp+1A0h] [rbp-188h] BYREF
  int v101; // [rsp+1C0h] [rbp-168h]
  void *v102; // [rsp+1C8h] [rbp-160h]
  __int64 v103; // [rsp+1D0h] [rbp-158h]
  _BYTE v104[32]; // [rsp+1D8h] [rbp-150h] BYREF
  char v105; // [rsp+1F8h] [rbp-130h]
  unsigned int v106; // [rsp+200h] [rbp-128h]
  char v107; // [rsp+204h] [rbp-124h]
  void *v108; // [rsp+258h] [rbp-D0h]
  __int64 v109; // [rsp+260h] [rbp-C8h]
  _BYTE v110[32]; // [rsp+268h] [rbp-C0h] BYREF
  __int64 v111; // [rsp+288h] [rbp-A0h]
  _QWORD *v112; // [rsp+290h] [rbp-98h] BYREF
  unsigned int v113; // [rsp+298h] [rbp-90h]
  _BYTE v114[56]; // [rsp+2F0h] [rbp-38h] BYREF

  v16 = 8 * a6;
  v17 = (8 * a6) >> 3;
  v18 = v92;
  v86 = a6;
  ptr = v92;
  v91 = 0x800000000LL;
  v19 = 0;
  if ( v17 > 8 )
  {
    sub_2237220(&ptr, v92, (8 * a6) >> 3, 8);
    v19 = v91;
    v18 = (char *)ptr + 8 * (unsigned int)v91;
  }
  if ( v16 )
  {
    memcpy(v18, a5, v16);
    v19 = v91;
  }
  LODWORD(v91) = v17 + v19;
  v20 = (unsigned int)(v17 + v19);
  v21 = 8 * a8;
  v22 = (8 * a8) >> 3;
  if ( v20 + v22 > (unsigned __int64)HIDWORD(v91) )
  {
    sub_2237220(&ptr, v92, v20 + v22, 8);
    v20 = (unsigned int)v91;
  }
  if ( v21 )
  {
    memcpy((char *)ptr + 8 * v20, a7, v21);
    LODWORD(v20) = v91;
  }
  LODWORD(v91) = v22 + v20;
  v23 = (unsigned int)(v22 + v20);
  v24 = 8 * a10;
  v25 = (8 * a10) >> 3;
  if ( v23 + v25 > (unsigned __int64)HIDWORD(v91) )
  {
    sub_2237220(&ptr, v92, v23 + v25, 8);
    v23 = (unsigned int)v91;
  }
  if ( v24 )
  {
    memcpy((char *)ptr + 8 * v23, a9, v24);
    LODWORD(v23) = v91;
  }
  LODWORD(v91) = v25 + v23;
  if ( !((_DWORD)v25 + (_DWORD)v23) && !a12 )
  {
    v96 = 1;
    v93 = v97;
    v94 = 4;
    v95 = 0;
    goto LABEL_16;
  }
  v101 = 80;
  v111 = 1;
  v98[0] = &v99;
  v98[1] = (void *)0x600000002LL;
  v102 = v104;
  v103 = 0x800000000LL;
  v108 = v110;
  v109 = 0x800000000LL;
  v32 = &v112;
  v99 = 0;
  do
  {
    *(_DWORD *)v32 = -1;
    v32 += 24;
  }
  while ( v32 != v114 );
  v33 = sub_168B6C0((__int64)a1);
  sub_EBB620(a4, v33, (__int64)v98, v34, v35, v36);
  v37 = v108;
  v38 = 4LL * (unsigned int)v109;
  v39 = (char *)v108 + v38;
  v40 = v38 >> 2;
  v41 = v38 >> 4;
  if ( !v41 )
  {
    v42 = (char *)v108;
LABEL_33:
    if ( v40 != 2 )
    {
      if ( v40 != 3 )
      {
        if ( v40 != 1 )
          goto LABEL_36;
        goto LABEL_109;
      }
      if ( *(_DWORD *)v42 == 72 )
        goto LABEL_43;
      v42 += 4;
    }
    if ( *(_DWORD *)v42 == 72 )
      goto LABEL_43;
    v42 += 4;
LABEL_109:
    if ( *(_DWORD *)v42 != 72 )
      goto LABEL_36;
    goto LABEL_43;
  }
  if ( *(_DWORD *)v108 == 72 )
  {
    v42 = (char *)v108;
    goto LABEL_43;
  }
  v42 = (char *)v108 + 4;
  if ( *((_DWORD *)v108 + 1) == 72
    || (v42 = (char *)v108 + 8, *((_DWORD *)v108 + 2) == 72)
    || (v42 = (char *)v108 + 12, v43 = (char *)v108 + 16 * v41, *((_DWORD *)v108 + 3) == 72) )
  {
LABEL_43:
    if ( v39 != v42 )
      goto LABEL_44;
LABEL_36:
    if ( (_DWORD)v91 )
    {
      sub_168B9F0((__int64)&v93, a1, a13, 0x1160u, 0);
      sub_1AF81E0(&v88, 3u);
      sub_1682AF0((__int64)&v93, (__int64)&v88);
      if ( (_BYTE *)v88.m128i_i64[0] != v89 )
        operator delete((void *)v88.m128i_i64[0]);
      sub_15F7200(&v93);
    }
    if ( a12 )
    {
      sub_168B9F0((__int64)&v93, a1, a14, 0x1160u, 0);
      sub_1AF81E0(&v88, 9u);
      sub_1682AF0((__int64)&v93, (__int64)&v88);
      if ( (_BYTE *)v88.m128i_i64[0] != v89 )
        operator delete((void *)v88.m128i_i64[0]);
      sub_15F7200(&v93);
    }
    sub_1505E60((__int64)v98);
    goto LABEL_39;
  }
  while ( 1 )
  {
    v42 = (char *)(v37 + 4);
    if ( v43 == (char *)(v37 + 4) )
    {
      v40 = (v39 - v42) >> 2;
      goto LABEL_33;
    }
    if ( v37[4] == 72 )
      goto LABEL_43;
    if ( v37[5] == 72 )
    {
      v42 = (char *)(v37 + 5);
      goto LABEL_43;
    }
    if ( v37[6] == 72 )
      break;
    if ( v37[7] == 72 )
    {
      if ( v39 == (char *)(v37 + 7) )
        goto LABEL_36;
      goto LABEL_44;
    }
    v37 += 4;
  }
  if ( v39 == (char *)(v37 + 6) )
    goto LABEL_36;
LABEL_44:
  if ( (v111 & 1) != 0 )
  {
    v45 = v114;
    v44 = &v112;
    goto LABEL_81;
  }
  v44 = v112;
  v40 = 24LL * v113;
  if ( v113 && (v45 = (char *)v112 + v40, v112 != (_QWORD *)((char *)v112 + v40)) )
  {
    do
    {
LABEL_81:
      while ( (unsigned int)(*(_DWORD *)v44 + 2) <= 1 )
      {
        v44 += 3;
        if ( v45 == (_BYTE *)v44 )
          goto LABEL_83;
      }
      if ( *((_DWORD *)v44 + 4) > 0x40u )
      {
        v63 = (void *)v44[1];
        if ( v63 )
          operator delete[](v63);
      }
      v44 += 3;
    }
    while ( v45 != (_BYTE *)v44 );
LABEL_83:
    if ( (v111 & 1) == 0 )
    {
      v44 = v112;
      v40 = 24LL * v113;
      goto LABEL_47;
    }
  }
  else
  {
LABEL_47:
    operator delete(v44, v40, 8);
  }
  if ( v108 != v110 )
    free(v108);
  if ( v102 != v104 )
    free(v102);
  if ( v98[0] != &v99 )
    free(v98[0]);
  v46 = (unsigned __int64 *)ptr;
  v94 = 4;
  v93 = v97;
  v95 = 0;
  v96 = 1;
  v83 = (unsigned __int64 *)((char *)ptr + 8 * (unsigned int)v91);
  if ( ptr == v83 )
  {
LABEL_16:
    v26 = sub_168B6C0((__int64)a1);
    v27 = sub_B30960(v26, a3, a4, a5, v86, a7, a8, a9, a10, a11, a12, a15);
    sub_B8CC60(a2, v27, v28, v29, v30, v31);
    if ( !v96 )
      goto LABEL_89;
    goto LABEL_39;
  }
  while ( 2 )
  {
    v50 = sub_BFBAE0(*v46);
    if ( (*(_WORD *)v50 & 0x1FF) == 0x47 )
    {
      v51 = *(_QWORD *)(v50 + 16);
      if ( (*(_BYTE *)(v51 + 28) & 0x7F) == 0x2B )
      {
        v52 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v51 + 32LL))(*(_QWORD *)(v50 + 16));
        v47 = (unsigned int)sub_B76070(a2, v40, v53, v54);
        v55 = (unsigned __int8)(*(_WORD *)(v51 + 98) >> 4);
        if ( v55 == 255 )
        {
          v87 = v47;
          v73 = sub_B74880(v51);
          v47 = v87;
          if ( v87 <= v73 )
            break;
          v55 = (unsigned __int8)(*(_WORD *)(v51 + 98) >> 4);
          if ( v55 == 255 )
            v55 = sub_B74880(v51);
        }
        else if ( (unsigned int)v47 <= v55 )
        {
          break;
        }
        v56 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL * v55);
        if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 32LL))(v56) != v52 )
          break;
        v57 = v96;
        if ( v96 )
        {
          v58 = (char *)v93;
          v59 = 8LL * HIDWORD(v94);
          v60 = (__int64 *)((char *)v93 + v59);
          if ( v93 != (char *)v93 + v59 )
          {
            v61 = (char *)v93;
            if ( v52 == *(_QWORD *)v93 )
            {
LABEL_90:
              v57 = 0;
LABEL_91:
              v40 = HIDWORD(v94);
              v62 = &v58[8 * HIDWORD(v94)];
              goto LABEL_69;
            }
            while ( 1 )
            {
              v61 += 8;
              if ( v60 == (__int64 *)v61 )
                break;
              if ( v52 == *(_QWORD *)v61 )
                goto LABEL_90;
            }
          }
          if ( HIDWORD(v94) < (unsigned int)v94 )
          {
            v72 = HIDWORD(v94) + 1;
            HIDWORD(v94) = v72;
            v40 = v72;
            *v60 = v52;
            v61 = (char *)v93 + v59;
            v62 = (char *)v93 + 8 * v72;
            goto LABEL_69;
          }
        }
        v61 = (char *)sub_2236760(&v93, v52);
        v58 = (char *)v93;
        if ( v96 )
          goto LABEL_91;
        v40 = (unsigned int)v94;
        v62 = (char *)v93 + 8 * (unsigned int)v94;
LABEL_69:
        if ( v62 != v61 )
        {
          v40 = *(_QWORD *)v61 + 2LL;
          if ( *(_QWORD *)v61 == -2 || v40 == 1 )
          {
            do
              v61 += 8;
            while ( v62 != v61 && *(_QWORD *)v61 >= 0xFFFFFFFFFFFFFFFELL );
          }
        }
        if ( !v57 )
        {
          sub_168B9F0((__int64)v98, a1, *(_DWORD *)(v50 + 4), 0x1145u, 0);
          if ( v105 )
          {
            sub_AE9DF0(v100, v51, 0xAu);
          }
          else if ( v107 )
          {
            v67 = sub_168B9E0(v98);
            v70 = v99;
            if ( (_QWORD)v99 )
              v70 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v99 + 32LL))(v99);
            v88.m128i_i64[0] = v70;
            v71 = sub_1587BC0(v67, v88.m128i_i64, v65, v66, v68, v69);
            sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * v106 + 8), v51, 0xAu);
          }
          goto LABEL_88;
        }
        if ( v83 == ++v46 )
          goto LABEL_16;
        continue;
      }
    }
    break;
  }
  v64 = sub_C00A40(v50, v40, v47, v48, v49);
  sub_168B9F0((__int64)v98, a1, v64, 0x11DFu, 0);
  if ( v105 )
  {
    sub_AE9DF0(v100, a2, 0xAu);
  }
  else if ( v107 )
  {
    v78 = sub_168B9E0(v98);
    v79 = v99;
    if ( (_QWORD)v99 )
      v79 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v99 + 32LL))(v99);
    v88.m128i_i64[0] = v79;
    v80 = sub_1587BC0(v78, v88.m128i_i64, v74, v75, v76, v77);
    sub_AE9DF0((unsigned __int8 **)(*v80 + 32LL * v106 + 8), a2, 0xAu);
  }
  v88.m128i_i32[0] = 0;
  sub_1587D10((__int64)v98, v88.m128i_i32);
LABEL_88:
  sub_15F7200(v98);
  if ( !v96 )
LABEL_89:
    free(v93);
LABEL_39:
  if ( ptr != v92 )
    free(ptr);
}
