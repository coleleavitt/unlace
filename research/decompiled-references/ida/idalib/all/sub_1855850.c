__int64 __fastcall sub_1855850(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r12
  int v16; // r15d
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  int v22; // ecx
  unsigned __int8 v23; // dl
  unsigned __int8 v24; // al
  unsigned int v25; // edx
  unsigned int v26; // ecx
  __int64 *v27; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  char v34; // al
  __int64 v35; // r13
  __int64 *v36; // rdi
  int v37; // eax
  unsigned int v38; // r14d
  __int64 v39; // rbp
  size_t v40; // rax
  __int64 v41; // r13
  __int64 v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int8 v45; // al
  __int64 v46; // rax
  unsigned int v47; // [rsp+8h] [rbp-1D0h]
  __int64 v50; // [rsp+24h] [rbp-1B4h]
  void *v51; // [rsp+30h] [rbp-1A8h] BYREF
  char v52; // [rsp+38h] [rbp-1A0h]
  void *v53; // [rsp+40h] [rbp-198h] BYREF
  char v54; // [rsp+48h] [rbp-190h]
  void *v55[2]; // [rsp+50h] [rbp-188h] BYREF
  _BYTE v56[16]; // [rsp+60h] [rbp-178h] BYREF
  __m128i v57; // [rsp+70h] [rbp-168h] BYREF
  _BYTE v58[16]; // [rsp+80h] [rbp-158h] BYREF
  __m128i v59; // [rsp+90h] [rbp-148h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-138h] BYREF
  __int64 *v61; // [rsp+A8h] [rbp-130h]
  __int64 v62; // [rsp+B8h] [rbp-120h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-108h] BYREF
  char v64; // [rsp+D8h] [rbp-100h]
  __int64 v65; // [rsp+DCh] [rbp-FCh]
  char v66; // [rsp+E4h] [rbp-F4h]
  void *v67; // [rsp+E8h] [rbp-F0h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-E8h]
  _BYTE v69[16]; // [rsp+F8h] [rbp-E0h] BYREF
  char v70; // [rsp+108h] [rbp-D0h]
  __int64 v71; // [rsp+110h] [rbp-C8h] BYREF
  char v72; // [rsp+118h] [rbp-C0h]
  __int64 v73; // [rsp+11Ch] [rbp-BCh]
  char v74; // [rsp+124h] [rbp-B4h]
  void *v75[2]; // [rsp+128h] [rbp-B0h] BYREF
  _BYTE v76[16]; // [rsp+138h] [rbp-A0h] BYREF
  char v77; // [rsp+148h] [rbp-90h]

  v13 = a10;
  v47 = a6;
  v14 = sub_16A2930((__int64)a1, a4, 0, a4, a5, a6);
  if ( !v14 )
  {
    if ( ((*(_BYTE *)(a1[68] + 8) + 70) & 0x7Fu) > 3 && (_BYTE)a3 )
    {
      sub_168B9F0((__int64)&v71, a1 + 1, v47, 0x1512u, 0);
      v63 = *(_QWORD *)a4;
      sub_1587DB0((__int64)&v71, &v63);
      sub_15F7200(&v71);
      return 1;
    }
    return 0;
  }
  v15 = v14;
  if ( a9 )
  {
    if ( *(_DWORD *)a9 == 2 )
    {
      v13 = sub_16C47B0(**(_QWORD **)(a9 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x21 )
        goto LABEL_5;
    }
    goto LABEL_28;
  }
  v16 = 0;
  if ( a10 )
  {
    v20 = *(_QWORD *)(a10 + 48) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 72);
      if ( !v21 || (*(_BYTE *)(v21 + 28) & 0x7Fu) - 53 > 1 )
        goto LABEL_27;
      v22 = 1;
      do
      {
        v21 = *(_QWORD *)(v21 + 72);
        ++v22;
      }
      while ( v21 && (*(_BYTE *)(v21 + 28) & 0x7Fu) - 53 <= 1 );
      v13 = 0;
      v16 = 0;
      if ( v22 == 1 )
      {
LABEL_27:
        v13 = *(_QWORD *)(v20 + 64);
        if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x21 )
        {
LABEL_5:
          v16 = *(_BYTE *)(a1[29] + 1) >> 7;
          goto LABEL_6;
        }
LABEL_28:
        v13 = 0;
        v16 = 0;
        v17 = *(_BYTE *)(v15 + 8) & 0x7F;
        if ( v17 != 62 )
          goto LABEL_29;
        goto LABEL_7;
      }
    }
    else
    {
      v13 = 0;
    }
  }
LABEL_6:
  v17 = *(_BYTE *)(v15 + 8) & 0x7F;
  if ( v17 != 62 )
  {
LABEL_29:
    v23 = *(_BYTE *)(a1[68] + 8) & 0x7F;
    if ( v23 > 0x39u && v23 <= 0x3Du )
      goto LABEL_17;
    goto LABEL_31;
  }
LABEL_7:
  if ( v15 == 64 )
    goto LABEL_29;
  if ( v13 && a9 && *(char *)(v15 + 12) < 0 )
  {
    sub_168B9F0((__int64)&v71, a1 + 1, *(_DWORD *)a4, ((*(char *)(a1[29] + 1) >> 31) & 0x403) + 5721, 0);
    v63 = *(_QWORD *)a4;
    sub_1587DB0((__int64)&v71, &v63);
    sub_15F7200(&v71);
  }
  v18 = *(_QWORD *)(v15 - 48);
  v15 = v18 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v18 & 4) != 0 )
    v15 = *(_QWORD *)v15;
  if ( ((*(_BYTE *)(a1[68] + 8) + 70) & 0x7Fu) > 3 )
  {
    a3 ^= 1u;
    if ( !v15 )
    {
      if ( (_BYTE)a3 )
        return 0;
      goto LABEL_32;
    }
LABEL_31:
    v24 = (*(_BYTE *)(sub_B8EAA0(v15) + 8) + 70) & 0x7F;
    LOBYTE(a3) = v24 > 3u;
    if ( v24 > 3u )
      return 0;
LABEL_32:
    if ( (_BYTE)v16 )
    {
      v25 = v47;
      v26 = 6746;
      v27 = a1 + 1;
LABEL_34:
      sub_168B9F0((__int64)&v71, v27, v25, v26, 0);
      v63 = *(_QWORD *)a4;
      sub_1587DB0((__int64)&v71, &v63);
      sub_15F7200(&v71);
      return a3;
    }
    sub_168B9F0((__int64)&v71, a1 + 1, v47, 0x1512u, 0);
    v63 = *(_QWORD *)a4;
    sub_1587DB0((__int64)&v71, &v63);
    sub_15F7200(&v71);
    if ( !v15 )
      return 1;
    v33 = sub_B8EAA0(v15);
    if ( !v33 )
      return 1;
    if ( v33 == 64 )
      return 1;
    v34 = sub_169F990((__int64)a1, a4, v33);
    if ( !a9 || v34 )
      return 1;
    if ( !sub_183EF90(a9) )
    {
      if ( *(_DWORD *)a9 == 2 )
      {
        v42 = **(_QWORD **)(a9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(sub_16C47B0(v42) + 28) & 0x7Fu) - 40 > 6 )
        {
          v45 = *(_BYTE *)(v42 + 28) & 0x7F;
          if ( (unsigned int)v45 - 53 <= 1 || ((v45 + 52) & 0x7Fu) <= 1 )
            v42 = sub_B72ED0(v42);
          if ( (*(_BYTE *)(v42 + 28) & 0x7F) != 0x21 )
            return 1;
          v63 = 0;
          v67 = v69;
          v46 = a1[29];
          v64 = 0;
          v65 = 0;
          v66 = 0;
          v68 = 0;
          v69[0] = 0;
          v70 = 0;
          if ( (*(_BYTE *)(v46 + 1) & 0x10) != 0 )
          {
            v51 = *(void **)a5;
            sub_B86A00((__int64)v55, (__int64 *)&v51);
            sub_E7ED70(&v57, "constexpr auto ", v55);
            sub_10E1980(&v59, &v57, " = ");
            v54 = 1;
            LODWORD(v53) = a2;
            HIDWORD(v53) = a2;
            sub_1839360((__int64)&v71, (__int64)v53, 1, v59.m128i_i64[0], v59.m128i_i64[1]);
            v63 = v71;
            v64 = v72;
            v65 = v73;
            v66 = v74;
            sub_A0AAD0((__int64)&v67, v75);
            v70 = v77;
            if ( v75[0] != v76 )
              operator delete(v75[0]);
            if ( (__int64 *)v59.m128i_i64[0] != &v60 )
              operator delete((void *)v59.m128i_i64[0]);
            if ( (_BYTE *)v57.m128i_i64[0] != v58 )
              operator delete((void *)v57.m128i_i64[0]);
            if ( v55[0] != v56 )
              operator delete(v55[0]);
          }
          sub_168B9F0((__int64)&v71, a1 + 1, a2, 0x1938u, 0);
          v59.m128i_i32[0] = ((*(_BYTE *)(a1[29] + 1) & 0x10) != 0) + 3;
        }
        else
        {
          v63 = 0;
          v67 = v69;
          v43 = a1[29];
          v64 = 0;
          v65 = 0;
          v66 = 0;
          v68 = 0;
          v69[0] = 0;
          v70 = 0;
          if ( (*(_BYTE *)(v43 + 1) & 0x10) != 0 )
          {
            v53 = *(void **)a5;
            sub_B86A00((__int64)v55, (__int64 *)&v53);
            sub_E7ED70(&v57, "auto &", v55);
            sub_10E1980(&v59, &v57, " = ");
            v52 = 1;
            LODWORD(v51) = a2;
            HIDWORD(v51) = a2;
            sub_1839360((__int64)&v71, (__int64)v51, 1, v59.m128i_i64[0], v59.m128i_i64[1]);
            v63 = v71;
            v64 = v72;
            v65 = v73;
            v66 = v74;
            sub_A0AAD0((__int64)&v67, v75);
            v70 = v77;
            if ( v75[0] != v76 )
              operator delete(v75[0]);
            if ( (__int64 *)v59.m128i_i64[0] != &v60 )
              operator delete((void *)v59.m128i_i64[0]);
            if ( (_BYTE *)v57.m128i_i64[0] != v58 )
              operator delete((void *)v57.m128i_i64[0]);
            if ( v55[0] != v56 )
              operator delete(v55[0]);
          }
          sub_168B9F0((__int64)&v71, a1 + 1, a2, 0x1938u, 0);
          v59.m128i_i32[0] = 2;
        }
        v44 = sub_18557A0((__int64)&v71, v59.m128i_i32);
        sub_15B11A0(v44, (char *)&v63);
        sub_15F7200(&v71);
        if ( v67 != v69 )
          operator delete(v67);
      }
      return 1;
    }
    if ( (*(_BYTE *)(a1[29] + 1) & 0x10) != 0 )
    {
      sub_168B9F0((__int64)&v71, a1 + 1, *(_DWORD *)a4, 0x1938u, 0);
      LODWORD(v53) = 0;
      v35 = sub_18557A0((__int64)&v71, (int *)&v53);
      v55[0] = *(void **)a5;
      sub_B86A00((__int64)&v57, (__int64 *)v55);
      sub_10E1980(&v59, &v57, " = ");
      sub_9EC740((__int64)&v63, *(_DWORD *)a4, v59.m128i_i64[0], v59.m128i_i64[1], 0);
      sub_1589170(v35, &v63);
      if ( v67 != v69 )
        operator delete(v67);
      if ( (__int64 *)v59.m128i_i64[0] != &v60 )
        operator delete((void *)v59.m128i_i64[0]);
      v36 = (__int64 *)v57.m128i_i64[0];
      if ( (_BYTE *)v57.m128i_i64[0] == v58 )
        goto LABEL_66;
    }
    else
    {
      v37 = sub_B85A10(a5);
      if ( !v37 )
        v37 = *(_DWORD *)(a5 + 8);
      v38 = sub_15F0EF0((__int64)a1, v37, 0, a7, a8);
      sub_168B9F0((__int64)&v71, a1 + 1, v38, 0x1938u, 0);
      LODWORD(v51) = 1;
      v39 = sub_18557A0((__int64)&v71, (int *)&v51);
      v40 = j__strlen("typedef");
      LODWORD(v50) = a2;
      HIDWORD(v50) = a2;
      sub_1839360((__int64)&v59, v50, 1, "typedef", v40);
      v41 = sub_1589170(v39, &v59);
      v53 = *(void **)a5;
      sub_B86A00((__int64)v55, (__int64 *)&v53);
      sub_E7ED70(&v57, " ", v55);
      sub_9EC740((__int64)&v63, v38, v57.m128i_i64[0], v57.m128i_i64[1], 0);
      sub_1589170(v41, &v63);
      if ( v67 != v69 )
        operator delete(v67);
      if ( (_BYTE *)v57.m128i_i64[0] != v58 )
        operator delete((void *)v57.m128i_i64[0]);
      if ( v55[0] != v56 )
        operator delete(v55[0]);
      v36 = v61;
      if ( v61 == &v62 )
        goto LABEL_66;
    }
    operator delete(v36);
LABEL_66:
    sub_15F7200(&v71);
    return 1;
  }
  if ( !v15 )
    return 0;
  v17 = *(_BYTE *)(v15 + 8) & 0x7F;
LABEL_17:
  if ( ((v17 + 70) & 0x7Fu) > 3 )
  {
    sub_168B9F0((__int64)&v71, a1 + 1, *(_DWORD *)a4, (_BYTE)v16 == 0 ? 5404 : 6747, 0);
    v59.m128i_i64[0] = *(_QWORD *)(a4 + 8);
    v19 = sub_17AE3B0((__int64)&v71, v59.m128i_i64);
    v63 = *(_QWORD *)a4;
    sub_1587DB0(v19, &v63);
    sub_15F7200(&v71);
    return v16 ^ 1u;
  }
  if ( !(unsigned __int8)sub_B8E180(v15) && (unsigned __int8)sub_169F990((__int64)a1, a4, v15) )
    return 1;
  v29 = a1[68];
  if ( v29 )
    v29 -= 64;
  a3 = sub_B707F0(v29, v15 - 64);
  if ( !(_BYTE)a3 )
    return 0;
  if ( (_BYTE)v16 )
  {
    sub_168B9F0((__int64)&v71, a1 + 1, v47, 0x1A5Bu, 0);
    v63 = *(_QWORD *)a4;
    sub_1587DB0((__int64)&v71, &v63);
    a3 = 0;
    sub_15F7200(&v71);
    return a3;
  }
  if ( a1[68] == v15 )
  {
    v25 = *(_DWORD *)a4;
    v27 = a1 + 1;
    v26 = 5402;
    goto LABEL_34;
  }
  if ( *(char *)(v15 - 36) < 0 )
    return 1;
  sub_168B9F0((__int64)&v71, a1 + 1, *(_DWORD *)a4, 0x151Bu, 0);
  v57.m128i_i64[0] = *(_QWORD *)(a4 + 8);
  v30 = sub_17AE3B0((__int64)&v71, v57.m128i_i64);
  v31 = a1[68];
  if ( v31 )
    v31 -= 64;
  v59.m128i_i64[0] = v31;
  v32 = sub_1852F10(v30, v59.m128i_i64);
  v63 = *(_QWORD *)a4;
  sub_1587DB0(v32, &v63);
  sub_15F7200(&v71);
  return a3;
}
