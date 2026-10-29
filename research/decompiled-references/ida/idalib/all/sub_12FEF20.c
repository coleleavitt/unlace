__int64 __fastcall sub_12FEF20(
        unsigned int (__fastcall *a1)(__int64, __int64, const char **, __int64, __int64, __int64),
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, void **, __int64 (__fastcall *)(_QWORD *a1), void ****),
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const char **src,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11,
        char a12)
{
  const char **v12; // rbx
  const char **v13; // r12
  char v14; // bp
  const char *v15; // r13
  size_t v16; // rax
  _DWORD *v17; // rbp
  void *v18; // r12
  _QWORD *v20; // rax
  int v21; // r13d
  unsigned int v22; // r12d
  void **v23; // r13
  void **v24; // rbp
  void **v25; // r13
  void **v26; // rbp
  void **v27; // r13
  void **v28; // rbp
  void **v29; // r13
  void **v30; // rbp
  void **v31; // r13
  void **v32; // rbp
  char *v34; // rdi
  __int64 v35; // rax
  const char **v36; // r15
  __int64 v37; // r13
  const char **v38; // r14
  const char **v39; // r13
  const char *v40; // rbp
  const char *v41; // r12
  size_t v42; // rax
  size_t v43; // rbx
  char *v44; // r15
  char *v45; // r13
  _BYTE *i; // rax
  __int64 v47; // rsi
  unsigned int v48; // ecx
  __int64 v49; // rdi
  __m128i *v50; // r13
  __m128i *v51; // r14
  __int64 v52; // rsi
  __int64 v53; // rdi
  size_t v54; // r8
  unsigned __int64 v55; // r13
  int v56; // eax
  unsigned int v57; // r13d
  unsigned __int8 v59; // [rsp+18h] [rbp-3E70h]
  void **v63; // [rsp+50h] [rbp-3E38h] BYREF
  void ***v64; // [rsp+58h] [rbp-3E30h] BYREF
  void *v65; // [rsp+60h] [rbp-3E28h] BYREF
  signed __int64 v66; // [rsp+68h] [rbp-3E20h]
  _BYTE v67[16]; // [rsp+70h] [rbp-3E18h] BYREF
  void *v68; // [rsp+80h] [rbp-3E08h] BYREF
  __int64 v69; // [rsp+88h] [rbp-3E00h]
  _BYTE v70[48]; // [rsp+90h] [rbp-3DF8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-3DC8h] BYREF
  signed __int64 v72; // [rsp+C8h] [rbp-3DC0h]
  _BYTE dest[48]; // [rsp+D0h] [rbp-3DB8h] BYREF
  void *v74[2]; // [rsp+100h] [rbp-3D88h] BYREF
  __int64 v75; // [rsp+110h] [rbp-3D78h] BYREF
  void *v76[2]; // [rsp+150h] [rbp-3D38h] BYREF
  void *v77; // [rsp+160h] [rbp-3D28h]
  __int64 v78; // [rsp+168h] [rbp-3D20h]
  _BYTE v79[32]; // [rsp+170h] [rbp-3D18h] BYREF
  __m128i *v80; // [rsp+190h] [rbp-3CF8h]
  __int64 v81; // [rsp+198h] [rbp-3CF0h]
  __m128i si128; // [rsp+1A0h] [rbp-3CE8h] BYREF
  _QWORD v83[3]; // [rsp+1B0h] [rbp-3CD8h] BYREF
  unsigned __int64 v84; // [rsp+1C8h] [rbp-3CC0h]
  __int64 v85; // [rsp+1D0h] [rbp-3CB8h]
  char v86; // [rsp+1D8h] [rbp-3CB0h]
  void *v87; // [rsp+1E0h] [rbp-3CA8h]
  __int64 v88; // [rsp+1E8h] [rbp-3CA0h]
  _BYTE v89[16]; // [rsp+1F0h] [rbp-3C98h] BYREF
  void *v90; // [rsp+200h] [rbp-3C88h]
  __int64 v91; // [rsp+208h] [rbp-3C80h]
  _BYTE v92[16]; // [rsp+210h] [rbp-3C78h] BYREF
  void *v93; // [rsp+220h] [rbp-3C68h]
  __int64 v94; // [rsp+228h] [rbp-3C60h]
  _BYTE v95[16]; // [rsp+230h] [rbp-3C58h] BYREF
  void *v96; // [rsp+240h] [rbp-3C48h]
  void **v97; // [rsp+248h] [rbp-3C40h]
  __int64 v98; // [rsp+250h] [rbp-3C38h]
  void *v99; // [rsp+258h] [rbp-3C30h]
  void **v100; // [rsp+260h] [rbp-3C28h]
  __int64 v101; // [rsp+268h] [rbp-3C20h]
  void *v102; // [rsp+270h] [rbp-3C18h]
  void **v103; // [rsp+278h] [rbp-3C10h]
  __int64 v104; // [rsp+280h] [rbp-3C08h]
  void *v105; // [rsp+288h] [rbp-3C00h]
  void **v106; // [rsp+290h] [rbp-3BF8h]
  __int64 v107; // [rsp+298h] [rbp-3BF0h]
  void *v108; // [rsp+2A0h] [rbp-3BE8h]
  void **v109; // [rsp+2A8h] [rbp-3BE0h]
  __int64 v110; // [rsp+2B0h] [rbp-3BD8h]
  _QWORD v111[26]; // [rsp+2C0h] [rbp-3BC8h] BYREF
  int v112; // [rsp+390h] [rbp-3AF8h]

  if ( !a12 )
  {
    v12 = &src[a8];
    if ( v12 == src )
      return a1(a2, a5, src, a8, a9, a10);
    v13 = src;
    v14 = 0;
    while ( 1 )
    {
      v15 = *v13;
      if ( !*v13 )
        goto LABEL_6;
      v16 = strlen(*v13);
      if ( v16 == 16 )
      {
        if ( !(*(_QWORD *)v15 ^ 0x742D646E756F722DLL | *((_QWORD *)v15 + 1) ^ 0x736772612D706972LL) )
          v14 = 1;
        goto LABEL_6;
      }
      if ( v16 == 19
        && !(*(_QWORD *)v15 ^ 0x6E756F722D6F6E2DLL | *((_QWORD *)v15 + 1) ^ 0x612D706972742D64LL)
        && *((_WORD *)v15 + 8) == 26482 )
      {
        if ( v15[18] == 115 )
          v14 = a12;
        if ( v12 == ++v13 )
        {
LABEL_15:
          if ( v14 )
            break;
          return a1(a2, a5, src, a8, a9, a10);
        }
      }
      else
      {
LABEL_6:
        if ( v12 == ++v13 )
          goto LABEL_15;
      }
    }
  }
  v88 = 0;
  v89[0] = 0;
  v87 = v89;
  v90 = v92;
  v93 = v95;
  v91 = 0;
  v92[0] = 0;
  v94 = 0;
  v83[0] = v83[0] & 0xFF800000 | 0x6F0LL;
  v83[1] = 0xA00000006LL;
  v83[2] = 0x320000000ALL;
  v95[0] = 0;
  v96 = nullptr;
  v97 = nullptr;
  v98 = 0;
  v99 = nullptr;
  v100 = nullptr;
  v101 = 0;
  v102 = nullptr;
  v103 = nullptr;
  v104 = 0;
  v105 = nullptr;
  v106 = nullptr;
  v107 = 0;
  v108 = nullptr;
  v109 = nullptr;
  v110 = 0;
  v84 = v84 & 0xFFFFFFFE00000000LL | 0x100000010LL;
  v85 = 8;
  v86 = 0;
  v17 = (_DWORD *)operator new(0x18u);
  sub_FD3570((__int64)v17);
  ++*v17;
  v76[0] = v17;
  sub_FCA6E0((__int64)v111, (__int64 *)v76, (__int64)v83, 0, 1);
  v18 = v76[0];
  if ( v76[0] )
  {
    if ( (*(_DWORD *)v76[0])-- == 1 )
    {
      sub_FD5580((__int64)v18);
      operator delete(v18, 0x18u);
    }
  }
  v20 = (_QWORD *)operator new(0x88u);
  v20[1] = 0;
  v20[2] = 0;
  *v20 = &off_2C44388;
  v20[3] = 0;
  v20[4] = 0;
  v20[5] = 0;
  v20[6] = 0;
  v20[7] = 0;
  v20[8] = 0;
  v20[9] = 0;
  v20[10] = 0;
  v20[11] = 0;
  v20[12] = 0;
  v20[13] = 0;
  v20[14] = 0;
  v20[15] = 0;
  v20[16] = 0;
  sub_FC6FE0((__int64)v111, (__int64)v20, 1);
  if ( !(unsigned __int8)a1(a2, a6, src, a8, (__int64)v111, a10) || v112 )
  {
    v21 = *(_DWORD *)(a9 + 208);
    v22 = a1(a2, a5, src, a8, a9, a10);
    if ( (_BYTE)v22 && v21 == *(_DWORD *)(a9 + 208) )
    {
      sub_FC70B0((__int64)v76, a9, 0, 312);
      sub_AEA040((__int64)v76);
      sub_FC70B0((__int64)v76, a9, 0, 519);
      sub_12FAE00((__int64)v74, src, a8);
      sub_AEC220((unsigned __int8 **)v76, (_BYTE *)v74[0], (signed __int64)v74[1]);
      if ( v74[0] != &v75 )
        operator delete(v74[0]);
      v22 = 0;
      sub_AEA040((__int64)v76);
    }
    goto LABEL_22;
  }
  *(_OWORD *)v76 = 0;
  v77 = v79;
  v78 = 0x400000000LL;
  v80 = &si128;
  v64 = &v63;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  v63 = v76;
  v68 = v70;
  v81 = 0;
  v69 = 0x600000000LL;
  a3(a4, a6, &v68, sub_12F9EE0, &v64);
  v22 = a1(a2, a5, (const char **)v68, (unsigned int)v69, a9, a10);
  if ( !(_BYTE)v22 )
  {
    sub_FC70B0((__int64)v74, a9, 0, 314);
    sub_AEA040((__int64)v74);
    sub_FC70B0((__int64)v74, a9, 0, 518);
    sub_AE9DF0((unsigned __int8 **)v74, 1, 2u);
    sub_12FAE00((__int64)&ptr, (const char **)v68, (unsigned int)v69);
    sub_AEC220((unsigned __int8 **)v74, ptr, v72);
    if ( ptr != dest )
      operator delete(ptr);
    sub_AEA040((__int64)v74);
    goto LABEL_102;
  }
  v34 = dest;
  v72 = 0x600000000LL;
  ptr = dest;
  if ( a11 )
  {
    v54 = 8 * a8;
    v55 = (8 * a8) >> 3;
    if ( v55 > 6 )
    {
      sub_2237220(&ptr, dest, (8 * a8) >> 3, 8);
      v36 = (const char **)ptr;
      v54 = 8 * a8;
      v56 = v72;
      v34 = (char *)ptr + 8 * (unsigned int)v72;
    }
    else
    {
      v56 = 0;
      v36 = (const char **)dest;
    }
    if ( v54 )
    {
      memcpy(v34, src, v54);
      v56 = v72;
      v36 = (const char **)ptr;
    }
    v57 = v56 + v55;
    v35 = v57;
    LODWORD(v72) = v57;
  }
  else
  {
    a3(a4, a5, &ptr, sub_12F9EE0, &v64);
    v35 = (unsigned int)v72;
    v36 = (const char **)ptr;
  }
  v37 = 8 * v35;
  if ( v35 != (unsigned int)v69 )
  {
LABEL_64:
    sub_FC70B0((__int64)v74, a9, 0, 313);
    sub_AEA040((__int64)v74);
    sub_FC70B0((__int64)v74, a9, 0, 518);
    sub_AE9DF0((unsigned __int8 **)v74, 1, 2u);
    sub_12FAE00((__int64)&v65, (const char **)v68, (unsigned int)v69);
    sub_AEC220((unsigned __int8 **)v74, v65, v66);
    if ( v65 != v67 )
      operator delete(v65);
    sub_AEA040((__int64)v74);
    sub_FC70B0((__int64)v74, a9, 0, 518);
    sub_AE9DF0((unsigned __int8 **)v74, 2, 2u);
    sub_12FAE00((__int64)&v65, (const char **)ptr, (unsigned int)v72);
    sub_AEC220((unsigned __int8 **)v74, v65, v66);
    if ( v65 != v67 )
      operator delete(v65);
    v22 = 0;
    sub_AEA040((__int64)v74);
    goto LABEL_100;
  }
  v38 = (const char **)v68;
  if ( (char *)v68 + v37 == v68 )
    goto LABEL_95;
  v59 = v22;
  v39 = (const char **)((char *)v68 + v37);
  do
  {
    v40 = *v36;
    v41 = *v38;
    if ( *v36 )
    {
      v42 = j__strlen(*v36);
      v43 = v42;
      if ( !v41 )
      {
        if ( v42 )
          goto LABEL_64;
        goto LABEL_93;
      }
    }
    else
    {
      v43 = 0;
      if ( !v41 )
        goto LABEL_93;
    }
    if ( j__strlen(v41) != v43 || v43 && memcmp(v41, v40, v43) )
      goto LABEL_64;
LABEL_93:
    ++v38;
    ++v36;
  }
  while ( v39 != v38 );
  v22 = v59;
LABEL_95:
  sub_FC70B0((__int64)v74, a9, 0, 529);
  sub_AE9DF0((unsigned __int8 **)v74, 1, 2u);
  sub_12FAE00((__int64)&v65, (const char **)v68, (unsigned int)v69);
  sub_AEC220((unsigned __int8 **)v74, v65, v66);
  if ( v65 != v67 )
    operator delete(v65);
  sub_AEA040((__int64)v74);
  sub_FC70B0((__int64)v74, a9, 0, 529);
  sub_AE9DF0((unsigned __int8 **)v74, 2, 2u);
  sub_12FAE00((__int64)&v65, (const char **)ptr, (unsigned int)v72);
  sub_AEC220((unsigned __int8 **)v74, v65, v66);
  if ( v65 != v67 )
    operator delete(v65);
  sub_AEA040((__int64)v74);
LABEL_100:
  if ( ptr != dest )
    free(ptr);
LABEL_102:
  if ( v68 != v70 )
    free(v68);
  v44 = (char *)v77;
  v45 = (char *)v77 + 8 * (unsigned int)v78;
  if ( v77 != v45 )
  {
    for ( i = v77; ; i = v77 )
    {
      v47 = 0x40000000000LL;
      v48 = (unsigned int)((v44 - i) >> 3) >> 7;
      if ( v48 <= 0x1D )
        v47 = 4096LL << v48;
      v49 = *(_QWORD *)v44;
      v44 += 8;
      operator delete(v49, v47, 16);
      if ( v45 == v44 )
        break;
    }
  }
  v50 = v80;
  v51 = &v80[(unsigned int)v81];
  if ( v80 != v51 )
  {
    do
    {
      v52 = v50->m128i_i64[1];
      v53 = v50->m128i_i64[0];
      ++v50;
      operator delete(v53, v52, 16);
    }
    while ( v51 != v50 );
    v51 = v80;
  }
  if ( v51 != &si128 )
    free(v51);
  if ( v77 != v79 )
    free(v77);
LABEL_22:
  sub_FCAA60(v111);
  v23 = v109;
  v24 = (void **)v108;
  if ( v109 != v108 )
  {
    do
    {
      while ( *v24 != v24 + 2 )
      {
        operator delete(*v24);
        v24 += 4;
        if ( v23 == v24 )
          goto LABEL_25;
      }
      v24 += 4;
    }
    while ( v23 != v24 );
LABEL_25:
    v24 = (void **)v108;
  }
  if ( v24 )
    operator delete(v24);
  v25 = v106;
  v26 = (void **)v105;
  if ( v106 != v105 )
  {
    do
    {
      while ( *v26 != v26 + 2 )
      {
        operator delete(*v26);
        v26 += 4;
        if ( v25 == v26 )
          goto LABEL_31;
      }
      v26 += 4;
    }
    while ( v25 != v26 );
LABEL_31:
    v26 = (void **)v105;
  }
  if ( v26 )
    operator delete(v26);
  v27 = v103;
  v28 = (void **)v102;
  if ( v103 != v102 )
  {
    do
    {
      while ( *v28 != v28 + 2 )
      {
        operator delete(*v28);
        v28 += 4;
        if ( v28 == v27 )
          goto LABEL_37;
      }
      v28 += 4;
    }
    while ( v27 != v28 );
LABEL_37:
    v28 = (void **)v102;
  }
  if ( v28 )
    operator delete(v28);
  v29 = v100;
  v30 = (void **)v99;
  if ( v100 != v99 )
  {
    do
    {
      while ( *v30 != v30 + 2 )
      {
        operator delete(*v30);
        v30 += 4;
        if ( v29 == v30 )
          goto LABEL_43;
      }
      v30 += 4;
    }
    while ( v29 != v30 );
LABEL_43:
    v30 = (void **)v99;
  }
  if ( v30 )
    operator delete(v30);
  v31 = v97;
  v32 = (void **)v96;
  if ( v97 != v96 )
  {
    do
    {
      while ( *v32 != v32 + 2 )
      {
        operator delete(*v32);
        v32 += 4;
        if ( v32 == v31 )
          goto LABEL_49;
      }
      v32 += 4;
    }
    while ( v31 != v32 );
LABEL_49:
    v32 = (void **)v96;
  }
  if ( v32 )
    operator delete(v32);
  if ( v93 != v95 )
    operator delete(v93);
  if ( v90 != v92 )
    operator delete(v90);
  if ( v87 != v89 )
    operator delete(v87);
  return v22;
}
