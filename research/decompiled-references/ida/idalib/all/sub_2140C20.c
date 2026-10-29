__int64 __fastcall sub_2140C20(__int64 a1, __m128 *a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  unsigned int v4; // ebp
  bool v5; // zf
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  size_t v13; // rbp
  const void *v15; // r9
  _DWORD *v16; // rax
  __int64 v17; // rax
  bool v18; // cc
  _QWORD *v19; // rax
  __int64 v20; // rcx
  char v21; // r15
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rdi
  void (__fastcall *v25)(__int64, void *, __int64, void *, __int64, _QWORD, __int64, __int64, char, _QWORD, _QWORD, __int64); // r10
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  void (__fastcall *v30)(__int64 *, __int64, _QWORD, void *, __int64, _QWORD, void *, __int64, __int64, __int64, char, _QWORD, _QWORD, __int64); // r10
  __int64 v31; // rax
  __int64 v32; // r15
  void **v33; // rdx
  void **v34; // r12
  void **v35; // rbx
  __int64 v36; // rax
  void **v37; // rdx
  void **v38; // r12
  __int64 v39; // r14
  void **v40; // rbx
  _BYTE *v41; // rax
  _QWORD *v42; // rax
  size_t v43; // rdx
  __int64 v44; // r10
  __int64 v45; // rsi
  char *v46; // rcx
  __int64 v47; // rax
  __m128i v48; // [rsp+0h] [rbp-1E8h]
  __m128i si128; // [rsp+0h] [rbp-1E8h]
  void *v50; // [rsp+30h] [rbp-1B8h]
  __int64 v51; // [rsp+38h] [rbp-1B0h]
  char v53; // [rsp+5Fh] [rbp-189h]
  char s1; // [rsp+60h] [rbp-188h]
  void *s1a; // [rsp+60h] [rbp-188h]
  void *s1b; // [rsp+60h] [rbp-188h]
  void *v57; // [rsp+68h] [rbp-180h]
  __int64 v58; // [rsp+70h] [rbp-178h]
  __m128 v59; // [rsp+88h] [rbp-160h] BYREF
  __int64 v60; // [rsp+98h] [rbp-150h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-148h] BYREF
  char v62; // [rsp+A8h] [rbp-140h]
  size_t n[2]; // [rsp+B0h] [rbp-138h] BYREF
  char v64; // [rsp+C0h] [rbp-128h]
  __int128 v65; // [rsp+D0h] [rbp-118h]
  __int64 v66; // [rsp+E0h] [rbp-108h]
  void *v67; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v68; // [rsp+F8h] [rbp-F0h]
  _BYTE v69[16]; // [rsp+100h] [rbp-E8h] BYREF
  void *v70; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v71; // [rsp+118h] [rbp-D0h]
  _BYTE v72[16]; // [rsp+120h] [rbp-C8h] BYREF
  void *src; // [rsp+130h] [rbp-B8h] BYREF
  size_t v74; // [rsp+138h] [rbp-B0h]
  _BYTE v75[16]; // [rsp+140h] [rbp-A8h] BYREF
  void *v76[2]; // [rsp+150h] [rbp-98h] BYREF
  _WORD v77[16]; // [rsp+160h] [rbp-88h] BYREF
  _DWORD *v78[4]; // [rsp+180h] [rbp-68h] BYREF
  __int16 v79; // [rsp+1A0h] [rbp-48h]

  v2 = -1;
  v3 = a1;
  if ( **(_DWORD **)(a1 + 48) == 4 )
  {
    v17 = sub_2153C00(a1);
    v18 = *(_DWORD *)(v17 + 32) <= 0x40u;
    v19 = *(_QWORD **)(v17 + 24);
    if ( !v18 )
      v19 = (_QWORD *)*v19;
    v2 = (__int64)v19;
    sub_2132C70(a1, a2);
    if ( v2 < 0 )
    {
      v78[0] = "negative file number";
      v79 = 259;
      return (unsigned int)sub_21543E0(a1, v78, 0, 0);
    }
  }
  v68 = 0;
  v69[0] = 0;
  v67 = v69;
  v4 = sub_2135140(a1, &v67);
  if ( (_BYTE)v4 )
    goto LABEL_17;
  v72[0] = 0;
  v70 = v72;
  v57 = nullptr;
  v5 = **(_DWORD **)(a1 + 48) == 3;
  v58 = 0;
  v71 = 0;
  if ( v5 )
  {
    v78[0] = "explicit path specified, but no file number";
    v79 = 259;
    if ( (unsigned __int8)sub_2154470(a1, v2 == -1, v78) || (unsigned __int8)sub_2135140(a1, &v70) )
    {
      v4 = 1;
      goto LABEL_15;
    }
    v50 = v70;
    v51 = v71;
    v57 = v67;
    v58 = v68;
  }
  else
  {
    v50 = v67;
    v51 = v68;
  }
  v75[0] = 0;
  v66 = 0;
  src = v75;
  v74 = 0;
  s1 = 0;
  v53 = 0;
  v65 = 0;
  while ( !(unsigned __int8)sub_2154640(a1, 9) )
  {
    n[0] = 0;
    n[1] = 0;
    v78[0] = "unexpected token in '.file' directive";
    v79 = 259;
    v8 = (_DWORD *)sub_2153C00(a1);
    if ( (unsigned __int8)sub_2154470(a1, *v8 != 2, v78)
      || (unsigned __int8)sub_213B1B0(a1, (__m128 *)n, v9, v10, v11, v12) )
    {
LABEL_40:
      v4 = 1;
      goto LABEL_13;
    }
    v13 = n[1];
    if ( n[1] == 3 )
    {
      if ( *(_WORD *)n[0] != 25709 || *(_BYTE *)(n[0] + 2) != 53 )
      {
        s1a = (void *)n[0];
        if ( j__strlen("source") != 3 )
          goto LABEL_12;
        v15 = s1a;
LABEL_22:
        if ( memcmp(v15, "source", v13) )
        {
LABEL_12:
          v78[0] = "unexpected token in '.file' directive";
          v79 = 259;
          v4 = sub_21543E0(a1, v78, 0, 0);
          goto LABEL_13;
        }
        goto LABEL_23;
      }
      v78[0] = "MD5 checksum specified, but no file number";
      v79 = 259;
      if ( (unsigned __int8)sub_2154470(a1, v2 == -1, v78)
        || (unsigned __int8)sub_2138EC0(a1, &v59, (void **)&v59.m128_u64[1]) )
      {
        goto LABEL_40;
      }
      v53 = 1;
    }
    else
    {
      s1b = (void *)n[0];
      if ( v13 != j__strlen("source") )
        goto LABEL_12;
      v15 = s1b;
      if ( v13 )
        goto LABEL_22;
LABEL_23:
      v76[0] = "source specified, but no file number";
      v77[8] = 259;
      if ( (unsigned __int8)sub_2154470(a1, v2 == -1, v76) )
        goto LABEL_40;
      v78[0] = "unexpected token in '.file' directive";
      v79 = 259;
      v16 = (_DWORD *)sub_2153C00(a1);
      if ( (unsigned __int8)sub_2154470(a1, *v16 != 3, v78) || (unsigned __int8)sub_2135140(a1, &src) )
        goto LABEL_40;
      s1 = 1;
    }
  }
  v4 = 0;
  v20 = *(_QWORD *)(a1 + 16);
  if ( v2 == -1 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v20 + 152) + 266LL) )
      (*(void (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 24) + 632LL))(*(_QWORD *)(a1 + 24), v50, v51);
    else
      v4 = 0;
  }
  else
  {
    if ( !*(_BYTE *)(v20 + 1777) )
      goto LABEL_43;
    v32 = *(_QWORD *)(v20 + 1728);
    v6 = (__int64)v50;
    LODWORD(v76[0]) = 0;
    if ( !v32 )
    {
      v32 = v20 + 1720;
      goto LABEL_75;
    }
    while ( *(_QWORD *)(v32 + 16) )
      v32 = *(_QWORD *)(v32 + 16);
    if ( v32 == v20 + 1720 || *(_DWORD *)(v32 + 32) )
    {
LABEL_75:
      v78[0] = v76;
      v32 = sub_2130A30((_QWORD *)(v20 + 1712), v32, v78);
    }
    v33 = *(void ***)(v32 + 48);
    v34 = &v33[4 * *(unsigned int *)(v32 + 56)];
    if ( v33 != v34 )
    {
      v35 = *(void ***)(v32 + 48);
      do
      {
        while ( 1 )
        {
          v34 -= 4;
          if ( *v34 == v34 + 2 )
            break;
          operator delete(*v34);
          if ( v35 == v34 )
            goto LABEL_80;
        }
      }
      while ( v35 != v34 );
LABEL_80:
      v3 = a1;
    }
    v36 = *(unsigned int *)(v32 + 168);
    v37 = *(void ***)(v32 + 160);
    *(_DWORD *)(v32 + 56) = 0;
    v38 = &v37[10 * v36];
    if ( v37 != v38 )
    {
      v39 = v3;
      v40 = v37;
      do
      {
        while ( 1 )
        {
          v38 -= 10;
          if ( *v38 == v38 + 2 )
            break;
          operator delete(*v38);
          if ( v40 == v38 )
            goto LABEL_85;
        }
      }
      while ( v40 != v38 );
LABEL_85:
      v3 = v39;
    }
    v41 = *(_BYTE **)(v32 + 472);
    v7 = 256;
    *(_DWORD *)(v32 + 168) = 0;
    *(_QWORD *)(v32 + 480) = 0;
    *v41 = 0;
    *(_WORD *)(v32 + 552) = 256;
    *(_BYTE *)(v32 + 554) = 0;
    *(_BYTE *)(*(_QWORD *)(v3 + 16) + 1777LL) = 0;
LABEL_43:
    v21 = 0;
    v64 = 0;
    *(_OWORD *)n = 0;
    if ( v53 )
    {
      v21 = 1;
      n[0] = _byteswap_uint64(v59.m128_u64[0]);
      n[1] = _byteswap_uint64(v59.m128_u64[1]);
    }
    v22 = 0;
    if ( s1 )
    {
      v42 = *(_QWORD **)(v3 + 16);
      v43 = v74;
      v44 = v42[24];
      v45 = (unsigned int)v74;
      v42[34] += (unsigned int)v74;
      v46 = (char *)((v44 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v42[25] >= (unsigned __int64)&v46[v45] && v44 )
      {
        v42[24] = &v46[v45];
      }
      else
      {
        v47 = sub_986170((__int64)(v42 + 24), v45, v45, 3, v6, v7);
        v43 = v74;
        v46 = (char *)v47;
      }
      *(_QWORD *)&v65 = memcpy(v46, src, v43);
      *((_QWORD *)&v65 + 1) = v74;
      v22 = 1;
    }
    if ( v2 )
    {
      v29 = *(_QWORD *)(v3 + 24);
      LOBYTE(v66) = v22;
      v30 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, void *, __int64, _QWORD, void *, __int64, __int64, __int64, char, _QWORD, _QWORD, __int64))(*(_QWORD *)v29 + 656LL);
      v64 = v21;
      si128 = _mm_load_si128((const __m128i *)n);
      v30(
        &v61,
        v29,
        (unsigned int)v2,
        v57,
        v58,
        0,
        v50,
        v51,
        si128.m128i_i64[0],
        si128.m128i_i64[1],
        v21,
        v65,
        *((_QWORD *)&v65 + 1),
        v66);
      if ( (v62 & 1) == 0 )
      {
        sub_A0AE90(&v61);
        goto LABEL_50;
      }
      v31 = v61;
      v61 = 0;
      v60 = v31;
      sub_2221210(v76, &v60);
      v79 = 260;
      v78[0] = v76;
      v4 = sub_2153E90(v3, a2, v78, 0, 0);
      if ( v76[0] != v77 )
        operator delete(v76[0]);
      if ( v60 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
      sub_A0AE90(&v61);
    }
    else
    {
      v23 = *(_QWORD *)(v3 + 16);
      if ( *(_WORD *)(v23 + 1880) <= 4u )
        *(_WORD *)(v23 + 1880) = 5;
      v24 = *(_QWORD *)(v3 + 24);
      LOBYTE(v66) = v22;
      v25 = *(void (__fastcall **)(__int64, void *, __int64, void *, __int64, _QWORD, __int64, __int64, char, _QWORD, _QWORD, __int64))(*(_QWORD *)v24 + 664LL);
      v64 = v21;
      v48 = _mm_load_si128((const __m128i *)n);
      v25(v24, v57, v58, v50, v51, 0, v48.m128i_i64[0], v48.m128i_i64[1], v21, v65, *((_QWORD *)&v65 + 1), v66);
LABEL_50:
      if ( !*(_BYTE *)(v3 + 862) )
      {
        v26 = *(_QWORD *)(v3 + 16);
        v27 = *(_QWORD *)(v26 + 1728);
        v28 = v26 + 1720;
        if ( v27 )
        {
          while ( *(_QWORD *)(v27 + 16) )
            v27 = *(_QWORD *)(v27 + 16);
          if ( v27 != v28 && !*(_DWORD *)(v27 + 32) )
            v28 = v27;
        }
        if ( *(_DWORD *)(v28 + 168) && *(_BYTE *)(v28 + 553) != *(_BYTE *)(v28 + 554) )
        {
          *(_BYTE *)(v3 + 862) = 1;
          v78[0] = "inconsistent use of MD5 checksums";
          v79 = 259;
          v4 = sub_212CE20(v3, (__int64)a2, (__int64)v78, nullptr, 0);
        }
      }
    }
  }
LABEL_13:
  if ( src != v75 )
    operator delete(src);
LABEL_15:
  if ( v70 != v72 )
    operator delete(v70);
LABEL_17:
  if ( v67 != v69 )
    operator delete(v67);
  return v4;
}
