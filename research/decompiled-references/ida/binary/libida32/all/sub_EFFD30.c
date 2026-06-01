unsigned __int8 **__fastcall sub_EFFD30(unsigned __int8 **a1, __int64 a2)
{
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  unsigned __int8 *v5; // r15
  _BYTE *v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  unsigned __int8 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int8 **v13; // r15
  unsigned __int8 *v14; // rdi
  __int64 v15; // rax
  void **v16; // r15
  void **v17; // r14
  void **v18; // r15
  void **v19; // r14
  char *v20; // r15
  char *v21; // rdi
  char *v22; // r14
  char *v23; // rdi
  void **v24; // r15
  void **v25; // r14
  void **v26; // r15
  void **v27; // r14
  void **v28; // r15
  void **v29; // r14
  void **v30; // r14
  void **v31; // rbx
  void **v32; // r14
  void **v33; // rbx
  void **v34; // r14
  void **v35; // rbx
  void **v36; // r14
  void **v37; // rbx
  void **v38; // r14
  void **v39; // rbx
  __int64 v41; // rdx
  unsigned __int8 *v42; // rdx
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  void *v48; // rdi
  __int64 v49; // [rsp+0h] [rbp-440h]
  __int64 v50; // [rsp+0h] [rbp-440h]
  _BYTE *v51; // [rsp+0h] [rbp-440h]
  void *src; // [rsp+8h] [rbp-438h]
  void *srca; // [rsp+8h] [rbp-438h]
  __int64 v54; // [rsp+10h] [rbp-430h]
  __int64 v55; // [rsp+18h] [rbp-428h]
  __int64 v56; // [rsp+20h] [rbp-420h] BYREF
  void *v57; // [rsp+28h] [rbp-418h] BYREF
  size_t n; // [rsp+30h] [rbp-410h]
  _BYTE v59[16]; // [rsp+38h] [rbp-408h] BYREF
  __m128i v60; // [rsp+48h] [rbp-3F8h] BYREF
  _QWORD v61[2]; // [rsp+58h] [rbp-3E8h] BYREF
  __m128i v62; // [rsp+68h] [rbp-3D8h] BYREF
  __int128 v63; // [rsp+78h] [rbp-3C8h]
  _BYTE *v64; // [rsp+88h] [rbp-3B8h]
  char v65; // [rsp+90h] [rbp-3B0h]
  int v66; // [rsp+94h] [rbp-3ACh]
  void **v67; // [rsp+98h] [rbp-3A8h]
  int v68; // [rsp+A8h] [rbp-398h] BYREF
  char v69; // [rsp+101h] [rbp-33Fh]
  void *v70; // [rsp+1A0h] [rbp-2A0h]
  void **v71; // [rsp+1A8h] [rbp-298h]
  void *v72; // [rsp+1B8h] [rbp-288h]
  void **v73; // [rsp+1C0h] [rbp-280h]
  void *v74; // [rsp+1D0h] [rbp-270h]
  void **v75; // [rsp+1D8h] [rbp-268h]
  void *v76; // [rsp+1E8h] [rbp-258h]
  void **v77; // [rsp+1F0h] [rbp-250h]
  void *v78; // [rsp+200h] [rbp-240h]
  void **v79; // [rsp+208h] [rbp-238h]
  void *v80; // [rsp+230h] [rbp-210h]
  __int64 v81; // [rsp+240h] [rbp-200h] BYREF
  void *v82; // [rsp+250h] [rbp-1F0h]
  __int64 v83; // [rsp+260h] [rbp-1E0h] BYREF
  void *v84; // [rsp+270h] [rbp-1D0h]
  __int64 v85; // [rsp+280h] [rbp-1C0h] BYREF
  void *v86; // [rsp+290h] [rbp-1B0h]
  __int64 v87; // [rsp+2A0h] [rbp-1A0h] BYREF
  void *v88; // [rsp+2B0h] [rbp-190h]
  void **v89; // [rsp+2B8h] [rbp-188h]
  void *v90; // [rsp+2C8h] [rbp-178h]
  void **v91; // [rsp+2D0h] [rbp-170h]
  void *v92; // [rsp+2E8h] [rbp-158h]
  void **v93; // [rsp+2F0h] [rbp-150h]
  __int64 v94; // [rsp+300h] [rbp-140h] BYREF
  void *v95; // [rsp+310h] [rbp-130h]
  void *v96; // [rsp+330h] [rbp-110h]
  void **v97; // [rsp+338h] [rbp-108h]
  void *v98; // [rsp+348h] [rbp-F8h]
  __int64 v99; // [rsp+358h] [rbp-E8h] BYREF
  void *v100; // [rsp+368h] [rbp-D8h]
  __int64 v101; // [rsp+378h] [rbp-C8h] BYREF
  void *v102; // [rsp+3A0h] [rbp-A0h]
  void **v103; // [rsp+3A8h] [rbp-98h]
  void *v104; // [rsp+3B8h] [rbp-88h]
  __int64 v105; // [rsp+3C8h] [rbp-78h] BYREF
  void *v106; // [rsp+3E0h] [rbp-60h]
  __int64 v107; // [rsp+3F0h] [rbp-50h] BYREF

  v56 = a2;
  v63 = 0;
  v57 = v59;
  n = 0;
  v59[0] = 0;
  v62.m128i_i64[0] = (__int64)&off_2BC1EC8;
  v62.m128i_i32[2] = 0;
  v65 = 0;
  v66 = 1;
  v64 = nullptr;
  v67 = &v57;
  sub_2257B70(&v62, 0, 0, 0);
  sub_FC64E0(&v68);
  v3 = v64;
  v68 |= 0x4000800u;
  if ( (unsigned __int64)v64 >= *((_QWORD *)&v63 + 1) )
  {
    sub_2257CD0(&v62, 39);
  }
  else
  {
    ++v64;
    *v3 = 39;
  }
  v60.m128i_i64[1] = 0;
  v60.m128i_i8[1] = (BYTE1(v68) >> 2) & 2 | v60.m128i_i8[1] & 0xFD;
  v60.m128i_i8[2] = (HIBYTE(v68) >> 2 << 7) | v60.m128i_i8[2] & 0x7F;
  v60.m128i_i8[3] = ((((BYTE1(v68) >> 4) ^ 1) & 1) << 6)
                  | (32 * (((BYTE1(v68) >> 3) ^ 1) & 1)) & 0xBF
                  | (8 * v68) & 0x10
                  | (8 * ((v68 & 0x1000) != 0)) & 0x8F
                  | (4 * (v68 & 1)) & 0x8F
                  | (BYTE1(v68) >> 2) & 2
                  | ((v68 & 0x1008) != 0)
                  | v60.m128i_i8[3] & 0x80;
  v60.m128i_i8[4] = (4 * ((v68 & 0x10000080) == 128)) | (HIBYTE(v68) >> 2) & 2 | v60.m128i_i8[4] & 0xF9;
  v60.m128i_i8[5] = (v69 << 7) | v60.m128i_i8[5] & 0x7F;
  v60.m128i_i64[0] = v60.m128i_i64[0] & 0xFFFF80067F800200LL | 0x660800442002LL;
  sub_EFF8A0(&v56, &v62, &v60, 1, 8 * (unsigned int)((v68 & 0x1000) != 0));
  v4 = v64;
  if ( (unsigned __int64)v64 >= *((_QWORD *)&v63 + 1) )
  {
    sub_2257CD0(&v62, 39);
  }
  else
  {
    ++v64;
    *v4 = 39;
  }
  v5 = *a1;
  v6 = v57;
  v7 = n;
  if ( !*a1 )
  {
    v42 = a1[1];
    v43 = *((_DWORD *)v42 + 3744);
    if ( v43 )
    {
      v44 = (unsigned int)(v43 - 1);
      *((_DWORD *)v42 + 3744) = v44;
      v5 = *(unsigned __int8 **)&v42[8 * v44 + 14848];
      v45 = *((unsigned int *)v5 + 134);
      *v5 = 0;
      v46 = *((_QWORD *)v5 + 66);
      *((_DWORD *)v5 + 106) = 0;
      v47 = v46 + (v45 << 6);
      while ( v46 != v47 )
      {
        while ( 1 )
        {
          v47 -= 64;
          v48 = *(void **)(v47 + 24);
          if ( v48 == (void *)(v47 + 40) )
            break;
          v55 = v47;
          v54 = v46;
          srca = (void *)v7;
          operator delete(v48);
          v46 = v54;
          v47 = v55;
          v7 = (__int64)srca;
          if ( v54 == v55 )
            goto LABEL_144;
        }
      }
LABEL_144:
      *((_DWORD *)v5 + 134) = 0;
    }
    else
    {
      src = (void *)n;
      v51 = v57;
      v5 = (unsigned __int8 *)operator new(0x3A0u);
      *v5 = 0;
      *((_QWORD *)v5 + 12) = v5 + 112;
      *((_QWORD *)v5 + 16) = v5 + 144;
      *((_QWORD *)v5 + 20) = v5 + 176;
      *((_QWORD *)v5 + 24) = v5 + 208;
      *((_QWORD *)v5 + 28) = v5 + 240;
      *((_QWORD *)v5 + 32) = v5 + 272;
      *((_QWORD *)v5 + 36) = v5 + 304;
      *((_QWORD *)v5 + 40) = v5 + 336;
      *((_QWORD *)v5 + 44) = v5 + 368;
      *((_QWORD *)v5 + 48) = v5 + 400;
      *((_QWORD *)v5 + 52) = v5 + 432;
      *((_QWORD *)v5 + 13) = 0;
      v5[112] = 0;
      *((_QWORD *)v5 + 17) = 0;
      v5[144] = 0;
      *((_QWORD *)v5 + 21) = 0;
      v5[176] = 0;
      *((_QWORD *)v5 + 25) = 0;
      v5[208] = 0;
      *((_QWORD *)v5 + 29) = 0;
      v5[240] = 0;
      *((_QWORD *)v5 + 33) = 0;
      v5[272] = 0;
      *((_QWORD *)v5 + 37) = 0;
      v5[304] = 0;
      *((_QWORD *)v5 + 41) = 0;
      v5[336] = 0;
      *((_QWORD *)v5 + 45) = 0;
      v5[368] = 0;
      *((_QWORD *)v5 + 49) = 0;
      v5[400] = 0;
      *((_QWORD *)v5 + 53) = 0x800000000LL;
      v6 = v51;
      *((_QWORD *)v5 + 66) = v5 + 544;
      v7 = (__int64)src;
      *((_QWORD *)v5 + 67) = 0x600000000LL;
    }
    *a1 = v5;
  }
  v5[*v5 + 1] = 0;
  v60.m128i_i64[0] = (__int64)v61;
  if ( &v6[v7] && !v6 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v7 > 0xF )
  {
    if ( v7 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v49 = v7;
    v8 = (_QWORD *)operator new(v7 + 1);
    v7 = v49;
    v60.m128i_i64[0] = (__int64)v8;
    v61[0] = v49;
LABEL_129:
    v50 = v7;
    memcpy(v8, v6, v7);
    v8 = (_QWORD *)v60.m128i_i64[0];
    v7 = v50;
    goto LABEL_11;
  }
  if ( v7 == 1 )
  {
    LOBYTE(v61[0]) = *v6;
    v8 = v61;
    goto LABEL_11;
  }
  v8 = v61;
  if ( v7 )
    goto LABEL_129;
LABEL_11:
  v60.m128i_i64[1] = v7;
  *((_BYTE *)v8 + v7) = 0;
  v9 = *a1;
  v10 = **a1;
  *v9 = v10 + 1;
  v11 = (unsigned __int8)v10;
  v12 = 32 * (v10 + 3);
  v13 = (unsigned __int8 **)&v9[v12];
  v14 = *(unsigned __int8 **)&v9[v12];
  if ( (_QWORD *)v60.m128i_i64[0] == v61 )
  {
    v41 = v60.m128i_i64[1];
    if ( v60.m128i_i64[1] )
    {
      if ( v60.m128i_i64[1] == 1 )
        *v14 = v61[0];
      else
        memcpy(v14, (const void *)v60.m128i_i64[0], v60.m128i_u64[1]);
      v41 = v60.m128i_i64[1];
      v14 = *v13;
    }
    v13[1] = (unsigned __int8 *)v41;
    v14[v41] = 0;
    v14 = (unsigned __int8 *)v60.m128i_i64[0];
  }
  else
  {
    if ( v14 == &v9[v12 + 16] )
    {
      *(__m128i *)v13 = v60;
      v13[2] = (unsigned __int8 *)v61[0];
    }
    else
    {
      v15 = *(_QWORD *)&v9[32 * v11 + 112];
      *(__m128i *)v13 = v60;
      v13[2] = (unsigned __int8 *)v61[0];
      if ( v14 )
      {
        v60.m128i_i64[0] = (__int64)v14;
        v61[0] = v15;
        goto LABEL_15;
      }
    }
    v14 = (unsigned __int8 *)v61;
    v60.m128i_i64[0] = (__int64)v61;
  }
LABEL_15:
  v60.m128i_i64[1] = 0;
  *v14 = 0;
  if ( (_QWORD *)v60.m128i_i64[0] != v61 )
    operator delete((void *)v60.m128i_i64[0]);
  if ( v106 != &v107 )
    operator delete(v106);
  if ( v104 != &v105 )
    operator delete(v104);
  v16 = v103;
  v17 = (void **)v102;
  if ( v103 != v102 )
  {
    do
    {
      while ( *v17 != v17 + 2 )
      {
        operator delete(*v17);
        v17 += 4;
        if ( v16 == v17 )
          goto LABEL_24;
      }
      v17 += 4;
    }
    while ( v16 != v17 );
LABEL_24:
    v17 = (void **)v102;
  }
  if ( v17 )
    operator delete(v17);
  if ( v100 != &v101 )
    operator delete(v100);
  if ( v98 != &v99 )
    operator delete(v98);
  v18 = v97;
  v19 = (void **)v96;
  if ( v97 != v96 )
  {
    do
    {
      while ( *v19 != v19 + 2 )
      {
        operator delete(*v19);
        v19 += 7;
        if ( v18 == v19 )
          goto LABEL_34;
      }
      v19 += 7;
    }
    while ( v18 != v19 );
LABEL_34:
    v19 = (void **)v96;
  }
  if ( v19 )
    operator delete(v19);
  v20 = (char *)v95;
  if ( v95 )
  {
    while ( 1 )
    {
      sub_974820((__int64)&v94, *((_QWORD **)v20 + 3));
      v21 = *((char **)v20 + 8);
      v22 = *((char **)v20 + 2);
      if ( v21 != v20 + 80 )
        operator delete(v21);
      v23 = *((char **)v20 + 4);
      if ( v23 == v20 + 48 )
      {
        operator delete(v20);
        if ( !v22 )
          break;
      }
      else
      {
        operator delete(v23);
        operator delete(v20);
        if ( !v22 )
          break;
      }
      v20 = v22;
    }
  }
  v24 = v93;
  v25 = (void **)v92;
  if ( v93 != v92 )
  {
    do
    {
      while ( *v25 != v25 + 2 )
      {
        operator delete(*v25);
        v25 += 4;
        if ( v24 == v25 )
          goto LABEL_53;
      }
      v25 += 4;
    }
    while ( v24 != v25 );
LABEL_53:
    v25 = (void **)v92;
  }
  if ( v25 )
    operator delete(v25);
  v26 = v91;
  v27 = (void **)v90;
  if ( v91 != v90 )
  {
    do
    {
      while ( *v27 != v27 + 2 )
      {
        operator delete(*v27);
        v27 += 4;
        if ( v26 == v27 )
          goto LABEL_59;
      }
      v27 += 4;
    }
    while ( v26 != v27 );
LABEL_59:
    v27 = (void **)v90;
  }
  if ( v27 )
    operator delete(v27);
  v28 = v89;
  v29 = (void **)v88;
  if ( v89 != v88 )
  {
    do
    {
      while ( *v29 != v29 + 2 )
      {
        operator delete(*v29);
        v29 += 4;
        if ( v28 == v29 )
          goto LABEL_65;
      }
      v29 += 4;
    }
    while ( v28 != v29 );
LABEL_65:
    v29 = (void **)v88;
  }
  if ( v29 )
    operator delete(v29);
  if ( v86 != &v87 )
    operator delete(v86);
  if ( v84 != &v85 )
    operator delete(v84);
  if ( v82 != &v83 )
    operator delete(v82);
  if ( v80 != &v81 )
    operator delete(v80);
  v30 = v79;
  v31 = (void **)v78;
  if ( v79 != v78 )
  {
    do
    {
      while ( *v31 != v31 + 2 )
      {
        operator delete(*v31);
        v31 += 4;
        if ( v31 == v30 )
          goto LABEL_79;
      }
      v31 += 4;
    }
    while ( v30 != v31 );
LABEL_79:
    v31 = (void **)v78;
  }
  if ( v31 )
    operator delete(v31);
  v32 = v77;
  v33 = (void **)v76;
  if ( v77 != v76 )
  {
    do
    {
      while ( *v33 != v33 + 2 )
      {
        operator delete(*v33);
        v33 += 4;
        if ( v33 == v32 )
          goto LABEL_85;
      }
      v33 += 4;
    }
    while ( v32 != v33 );
LABEL_85:
    v33 = (void **)v76;
  }
  if ( v33 )
    operator delete(v33);
  v34 = v75;
  v35 = (void **)v74;
  if ( v75 != v74 )
  {
    do
    {
      while ( *v35 != v35 + 2 )
      {
        operator delete(*v35);
        v35 += 4;
        if ( v35 == v34 )
          goto LABEL_91;
      }
      v35 += 4;
    }
    while ( v34 != v35 );
LABEL_91:
    v35 = (void **)v74;
  }
  if ( v35 )
    operator delete(v35);
  v36 = v73;
  v37 = (void **)v72;
  if ( v73 != v72 )
  {
    do
    {
      while ( *v37 != v37 + 2 )
      {
        operator delete(*v37);
        v37 += 4;
        if ( v36 == v37 )
          goto LABEL_97;
      }
      v37 += 4;
    }
    while ( v36 != v37 );
LABEL_97:
    v37 = (void **)v72;
  }
  if ( v37 )
    operator delete(v37);
  v38 = v71;
  v39 = (void **)v70;
  if ( v71 != v70 )
  {
    do
    {
      while ( *v39 != v39 + 2 )
      {
        operator delete(*v39);
        v39 += 4;
        if ( v39 == v38 )
          goto LABEL_103;
      }
      v39 += 4;
    }
    while ( v38 != v39 );
LABEL_103:
    v39 = (void **)v70;
  }
  if ( v39 )
    operator delete(v39);
  v62.m128i_i64[0] = (__int64)&off_2BC1EC8;
  sub_2257A60(&v62);
  if ( v57 != v59 )
    operator delete(v57);
  return a1;
}

