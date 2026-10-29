__int64 __fastcall sub_20227D0(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  void *v7; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  std::_V2 *v11; // rdi
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r9
  unsigned __int64 *v14; // r11
  unsigned int v15; // r9d
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // r13d
  __int64 v20; // r13
  void *v21; // rdi
  int v22; // r13d
  int v23; // r13d
  int v24; // ebp
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // rax
  void *v27; // r11
  unsigned int v28; // edx
  __int64 v29; // r11
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r14
  void ***v32; // r10
  int v33; // eax
  unsigned int v34; // r14d
  void *v35; // rax
  unsigned int v36; // r8d
  __int64 v37; // rax
  int v38; // eax
  __m128i si128; // xmm0
  void *v40; // r14
  void *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rbp
  __m128i *v44; // rax
  __m128i v45; // xmm0
  void *v46; // rax
  __int64 v47; // rax
  std::_V2 *v48; // [rsp+8h] [rbp-120h]
  unsigned __int64 v49; // [rsp+10h] [rbp-118h]
  __m128 *v50; // [rsp+18h] [rbp-110h] BYREF
  const char *v51; // [rsp+20h] [rbp-108h] BYREF
  __int64 (__fastcall **v52)(); // [rsp+28h] [rbp-100h]
  char *v53; // [rsp+30h] [rbp-F8h] BYREF
  __int64 (__fastcall **v54)(); // [rsp+38h] [rbp-F0h]
  __int64 v55; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v56; // [rsp+48h] [rbp-E0h]
  __m128 v57; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-C8h] BYREF
  char v59; // [rsp+68h] [rbp-C0h]
  __m128 v60; // [rsp+70h] [rbp-B8h] BYREF
  unsigned int v61; // [rsp+80h] [rbp-A8h] BYREF
  int v62; // [rsp+84h] [rbp-A4h]
  void *v63[2]; // [rsp+90h] [rbp-98h] BYREF
  unsigned __int64 v64; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-80h]
  void *v66; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-70h]
  __int128 v68; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v69; // [rsp+D0h] [rbp-58h]
  char v70; // [rsp+D8h] [rbp-50h]
  int v71; // [rsp+DCh] [rbp-4Ch]
  void **v72; // [rsp+E0h] [rbp-48h]

  v4 = *(_DWORD *)(a2 + 32);
  if ( v4 > 5 )
  {
    v5 = *(_QWORD *)(a2 + 24);
    v59 &= ~1u;
    LOBYTE(v67) = v67 & 0xFE;
    v6 = v5;
    v7 = (void *)(v5 & 0x3F);
    *(_DWORD *)(a2 + 32) = v4 - 6;
    v66 = v7;
    *(_QWORD *)(a2 + 24) = v6 >> 6;
    goto LABEL_3;
  }
  v11 = nullptr;
  if ( v4 )
    v11 = *(std::_V2 **)(a2 + 24);
  v12 = *(_QWORD *)(a2 + 16);
  v13 = *(_QWORD *)(a2 + 8);
  if ( v12 < v13 )
  {
    v14 = (unsigned __int64 *)(v12 + *(_QWORD *)a2);
    if ( v13 >= v12 + 8 )
    {
      v17 = *v14;
      *(_QWORD *)(a2 + 16) = v12 + 8;
      v18 = 64;
      LOBYTE(v19) = 6 - v4;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = 0;
      v15 = v13 - v12;
      if ( !v15 )
      {
        *(_DWORD *)(a2 + 32) = 0;
        v19 = 6 - v4;
        goto LABEL_15;
      }
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        v17 |= (unsigned __int64)*((unsigned __int8 *)v14 + v16) << (8 * (unsigned __int8)v16);
        *(_QWORD *)(a2 + 24) = v17;
        if ( v15 - 1 == v16 )
          break;
        ++v16;
      }
      v18 = 8 * v15;
      v19 = 6 - v4;
      *(_DWORD *)(a2 + 32) = 8 * v15;
      *(_QWORD *)(a2 + 16) = v15 + v12;
      if ( 8 * v15 < 6 - v4 )
      {
LABEL_15:
        v50 = (__m128 *)std::_V2::generic_category(v11);
        v72 = v63;
        v68 = 0;
        v63[0] = &v64;
        v63[1] = nullptr;
        LOBYTE(v64) = 0;
        LODWORD(v67) = 0;
        v70 = 0;
        v71 = 1;
        v69 = 0;
        v66 = &off_2BEBE68;
        sub_227B8B0(&v66, 0, 0, 0);
        v61 = v19;
        v51 = "Unexpected end of file reading %u of %u bits";
        v62 = *(_DWORD *)(a2 + 32);
        v60 = _mm_loadh_ps((const double *)&v51);
        sub_227C560(&v66, &v60);
        v66 = &off_2BEBE68;
        sub_227B7A0(&v66);
        LOWORD(v69) = 260;
        v66 = v63;
        v20 = operator new(0x40u);
        sub_2220590(v20, &v66, 5, v50);
        v21 = v63[0];
        if ( v63[0] == &v64 )
          goto LABEL_17;
        goto LABEL_16;
      }
    }
    v59 &= ~1u;
    *(_DWORD *)(a2 + 32) = v18 + v4 - 6;
    *(_QWORD *)(a2 + 24) = v17 >> v19;
    LOBYTE(v67) = v67 & 0xFE;
    v7 = (void *)((unsigned __int64)v11 | ((v17 & (0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v4 + 58))) << v4));
    v66 = v7;
LABEL_3:
    LODWORD(v58) = (_DWORD)v7;
    v8 = (unsigned __int64)&v66;
    sub_A0AE70((__int64 *)&v66);
    if ( (v59 & 1) != 0 )
    {
LABEL_4:
      v9 = v58;
      *(_BYTE *)(a1 + 8) |= 1u;
      v58 = 0;
      *(_QWORD *)a1 = v9;
      goto LABEL_5;
    }
    goto LABEL_18;
  }
  v51 = *(const char **)(a2 + 8);
  v48 = (std::_V2 *)std::_V2::generic_category(v11);
  v68 = 0;
  v60 = (__m128)(unsigned __int64)&v61;
  v72 = (void **)&v60;
  LOBYTE(v61) = 0;
  LODWORD(v67) = 0;
  v70 = 0;
  v71 = 1;
  v69 = 0;
  v66 = &off_2BEBE68;
  sub_227B8B0(&v66, 0, 0, 0);
  v64 = (unsigned __int64)v51;
  v50 = (__m128 *)"Unexpected end of file reading %u of %u bytes";
  v65 = *(_QWORD *)(a2 + 16);
  *(__m128 *)v63 = _mm_loadh_ps((const double *)&v50);
  sub_227C560(&v66, v63);
  v66 = &off_2BEBE68;
  sub_227B7A0(&v66);
  v66 = &v60;
  LOWORD(v69) = 260;
  v20 = operator new(0x40u);
  sub_2220590(v20, &v66, 5, v48);
  v21 = (void *)v60.m128_u64[0];
  if ( (unsigned int *)v60.m128_u64[0] != &v61 )
LABEL_16:
    operator delete(v21);
LABEL_17:
  v8 = (unsigned __int64)&v66;
  LOBYTE(v67) = v67 | 1;
  v59 |= 1u;
  v66 = nullptr;
  v58 = v20;
  sub_A0AE70((__int64 *)&v66);
  if ( (v59 & 1) != 0 )
    goto LABEL_4;
LABEL_18:
  v22 = v58;
  if ( (v58 & 0x20) == 0 )
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = v22;
    goto LABEL_5;
  }
  v23 = v58 & 0x1F;
  v24 = 5;
  v55 = a1;
  v50 = &v60;
  v51 = (const char *)&v61;
  do
  {
    v28 = *(_DWORD *)(a2 + 32);
    if ( v28 > 5 )
    {
      v25 = *(_QWORD *)(a2 + 24);
      LOBYTE(v63[1]) &= ~1u;
      LOBYTE(v67) = v67 & 0xFE;
      v26 = v25;
      v27 = (void *)(v25 & 0x3F);
      *(_DWORD *)(a2 + 32) = v28 - 6;
      v63[0] = v27;
      *(_QWORD *)(a2 + 24) = v26 >> 6;
      goto LABEL_22;
    }
    v29 = 0;
    if ( v28 )
      v29 = *(_QWORD *)(a2 + 24);
    v30 = *(_QWORD *)(a2 + 16);
    v31 = *(_QWORD *)(a2 + 8);
    if ( v30 >= v31 )
    {
      v52 = (__int64 (__fastcall **)())std::_V2::generic_category((std::_V2 *)v8);
      v60 = (__m128)(unsigned __int64)v51;
      v72 = (void **)v50;
      v68 = 0;
      v66 = &off_2BEBE68;
      v54 = &off_2BEBE68;
      LOBYTE(v61) = 0;
      LODWORD(v67) = 0;
      v70 = 0;
      v71 = 1;
      v69 = 0;
      sub_227B8B0(&v66, 0, 0, 0);
      v64 = v31;
      v53 = "Unexpected end of file reading %u of %u bytes";
      v65 = *(_QWORD *)(a2 + 16);
      *(__m128 *)v63 = _mm_loadh_ps((const double *)&v53);
      sub_227C560(&v66, v63);
      v66 = v54;
      sub_227B7A0(&v66);
      LOWORD(v69) = 260;
      v66 = v50;
      v49 = v49 & 0xFFFFFFFF00000000LL | 5;
      v40 = (void *)operator new(0x40u);
      sub_2220590(v40, &v66, (unsigned int)v49, v52);
      v41 = (void *)v60.m128_u64[0];
      if ( (const char *)v60.m128_u64[0] == v51 )
        goto LABEL_43;
LABEL_42:
      operator delete(v41);
      goto LABEL_43;
    }
    v32 = (void ***)(v30 + *(_QWORD *)a2);
    if ( v31 >= v30 + 8 )
    {
      v8 = (unsigned __int64)*v32;
      *(_QWORD *)(a2 + 16) = v30 + 8;
      v33 = 64;
      LOBYTE(v34) = 6 - v28;
LABEL_34:
      LOBYTE(v63[1]) &= ~1u;
      *(_DWORD *)(a2 + 32) = v28 + v33 - 6;
      *(_QWORD *)(a2 + 24) = v8 >> v34;
      LOBYTE(v67) = v67 & 0xFE;
      v27 = (void *)((((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v28 + 58)) & v8) << v28) | v29);
      v63[0] = v27;
LABEL_22:
      LODWORD(v66) = (_DWORD)v27;
      goto LABEL_23;
    }
    *(_QWORD *)(a2 + 24) = 0;
    v36 = v31 - v30;
    if ( (_DWORD)v31 == (_DWORD)v30 )
    {
      *(_DWORD *)(a2 + 32) = 0;
      v34 = 6 - v28;
    }
    else
    {
      v37 = 0;
      v8 = 0;
      while ( 1 )
      {
        v8 |= (unsigned __int64)*((unsigned __int8 *)v32 + v37) << (8 * (unsigned __int8)v37);
        *(_QWORD *)(a2 + 24) = v8;
        if ( v36 - 1 == v37 )
          break;
        ++v37;
      }
      v33 = 8 * v36;
      v34 = 6 - v28;
      *(_DWORD *)(a2 + 32) = 8 * v36;
      *(_QWORD *)(a2 + 16) = v36 + v30;
      if ( 6 - v28 <= 8 * v36 )
        goto LABEL_34;
    }
    v52 = off_2C02AD8;
    v57 = _mm_loadh_ps((const double *)off_2BE5CA8);
    v52 = (__int64 (__fastcall **)())std::_V2::generic_category((std::_V2 *)v8);
    v72 = v63;
    v63[0] = &v64;
    v54 = (__int64 (__fastcall **)())&v64;
    v68 = 0;
    v66 = &off_2BEBE68;
    v53 = (char *)&off_2BEBE68;
    v63[1] = nullptr;
    LOBYTE(v64) = 0;
    LODWORD(v67) = 0;
    v70 = 0;
    v71 = 1;
    v69 = 0;
    sub_227B8B0(&v66, 0, 0, 0);
    v38 = *(_DWORD *)(a2 + 32);
    si128 = _mm_load_si128((const __m128i *)&v57);
    v61 = v34;
    v62 = v38;
    v60 = (__m128)si128;
    sub_227C560(&v66, v50);
    v66 = v53;
    sub_227B7A0(&v66);
    LOWORD(v69) = 260;
    v66 = v63;
    v56 = v56 & 0xFFFFFFFF00000000LL | 5;
    v40 = (void *)operator new(0x40u);
    sub_2220590(v40, &v66, (unsigned int)v56, v52);
    v41 = v63[0];
    if ( v63[0] != v54 )
      goto LABEL_42;
LABEL_43:
    LOBYTE(v63[1]) |= 1u;
    LOBYTE(v67) = v67 | 1;
    v63[0] = nullptr;
    v66 = v40;
LABEL_23:
    sub_A0AE90(&v58);
    v59 = v67 & 1 | v59 & 0xFE;
    if ( (v67 & 1) != 0 )
    {
      v35 = v66;
      v66 = nullptr;
      v58 = (__int64)v35;
    }
    else
    {
      LODWORD(v58) = (_DWORD)v66;
    }
    sub_A0AE90((__int64 *)&v66);
    v8 = (unsigned __int64)v63;
    sub_A0AE70((__int64 *)v63);
    if ( (v59 & 1) != 0 )
    {
      a1 = v55;
      v47 = v58;
      v58 = 0;
      *(_BYTE *)(v55 + 8) |= 1u;
      *(_QWORD *)a1 = v47;
      goto LABEL_5;
    }
    v23 |= (v58 & 0x1F) << v24;
    if ( (v58 & 0x20) == 0 )
    {
      a1 = v55;
      *(_BYTE *)(v55 + 8) &= ~1u;
      *(_DWORD *)a1 = v23;
      goto LABEL_5;
    }
    v24 += 5;
  }
  while ( v24 != 35 );
  v42 = std::_V2::generic_category((std::_V2 *)v63);
  a1 = v55;
  v43 = v42;
  v66 = &v68;
  v44 = (__m128i *)operator new(0x11u);
  v45 = _mm_load_si128((const __m128i *)&xmmword_23AA3E0);
  v44[1].m128i_i8[0] = 0;
  v66 = v44;
  *v44 = v45;
  *(_QWORD *)&v68 = 16;
  v67 = 16;
  sub_22205D0(v63, &v66, 84, v43);
  if ( v66 != &v68 )
    operator delete(v66);
  v46 = v63[0];
  *(_BYTE *)(a1 + 8) |= 1u;
  *(_QWORD *)a1 = v46;
LABEL_5:
  sub_A0AE90(&v58);
  return a1;
}
