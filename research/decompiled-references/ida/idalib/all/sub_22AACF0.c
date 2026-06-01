__int64 __fastcall sub_22AACF0(__int64 a1, _BYTE *a2, size_t a3)
{
  _BYTE *v4; // rax
  _BYTE *v5; // r8
  const char *v6; // rax
  __int64 v7; // rax
  int v9; // r12d
  size_t v10; // rax
  _QWORD *v11; // rax
  size_t v12; // r14
  _QWORD *v13; // rbp
  __int8 *v14; // r12
  _BYTE *v15; // rax
  unsigned __int64 v16; // rdx
  size_t v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  size_t v20; // r12
  unsigned __int64 v21; // rax
  __int8 *v22; // r14
  unsigned __int64 v23; // r12
  const char *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r12
  void *v27; // rdi
  __int64 v28; // r13
  size_t v29; // rax
  unsigned __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r9
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char v38; // dl
  char v39; // r15
  __int8 v40; // al
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // [rsp+18h] [rbp-170h]
  __int64 v47; // [rsp+28h] [rbp-160h]
  void *s; // [rsp+30h] [rbp-158h] BYREF
  size_t n; // [rsp+38h] [rbp-150h]
  __int64 v50; // [rsp+48h] [rbp-140h] BYREF
  __int8 *v51; // [rsp+50h] [rbp-138h] BYREF
  size_t v52; // [rsp+58h] [rbp-130h]
  __m128i v53[2]; // [rsp+60h] [rbp-128h] BYREF
  __int16 v54; // [rsp+80h] [rbp-108h]
  __m128i v55[2]; // [rsp+90h] [rbp-F8h] BYREF
  __int16 v56; // [rsp+B0h] [rbp-D8h]
  __m128i v57; // [rsp+C0h] [rbp-C8h] BYREF
  __int8 *v58; // [rsp+D0h] [rbp-B8h]
  unsigned __int64 v59; // [rsp+D8h] [rbp-B0h]
  __int16 v60; // [rsp+E0h] [rbp-A8h]
  __m128i v61[2]; // [rsp+F0h] [rbp-98h] BYREF
  __int16 v62; // [rsp+110h] [rbp-78h]
  __m128i v63; // [rsp+120h] [rbp-68h] BYREF
  _BYTE v64[16]; // [rsp+130h] [rbp-58h] BYREF
  __int16 v65; // [rsp+140h] [rbp-48h]

  s = a2;
  n = a3;
  v4 = sub_22A8490(a2, &a2[a3]);
  if ( v4 != v5 )
  {
    v6 = "string may only contain [a-z0-9_]";
LABEL_3:
    v63.m128i_i64[0] = (__int64)v6;
    v65 = 259;
    sub_22A8430((std::_V2 *)v61, &v63);
    v7 = v61[0].m128i_i64[0];
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v7;
    return a1;
  }
  v9 = 32;
  v10 = j__strlen("rv32");
  if ( !(unsigned __int8)sub_11899B0((const void **)&s, "rv32", v10) )
  {
    v29 = j__strlen("rv64");
    if ( !(unsigned __int8)sub_11899B0((const void **)&s, "rv64", v29) )
    {
LABEL_37:
      v6 = "arch string must begin with valid base ISA";
      goto LABEL_3;
    }
    v9 = 64;
  }
  if ( !n || ((*(_BYTE *)s - 101) & 0xFB) != 0 )
    goto LABEL_37;
  v11 = (_QWORD *)operator new(0x48u);
  v12 = n;
  v13 = v11;
  *(_DWORD *)v11 = v9;
  v11 += 4;
  *(_QWORD *)((char *)v11 - 28) = 0;
  *(_QWORD *)((char *)v11 - 20) = 0;
  *(_DWORD *)v11 = 0;
  v11[1] = 0;
  v13[6] = v11;
  v13[7] = v11;
  v13[8] = 0;
  if ( !v12 )
  {
LABEL_61:
    sub_22A9910((__int64)v13);
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = v13;
    return a1;
  }
  v46 = v13 + 3;
  while ( 1 )
  {
    v14 = (__int8 *)s;
    if ( *(_BYTE *)s == 95 )
    {
      if ( v12 == 1 || *((_BYTE *)s + 1) == 95 )
      {
        v24 = "extension name missing after separator '_'";
        goto LABEL_31;
      }
      --v12;
      s = (char *)s + 1;
      v14 = (__int8 *)s;
      n = v12;
      v15 = memchr(s, 95, v12);
      if ( !v15 )
      {
LABEL_42:
        v16 = v12;
        v52 = v12;
        v17 = 0;
        v51 = v14;
        goto LABEL_15;
      }
    }
    else
    {
      v15 = memchr(s, 95, v12);
      v16 = -1;
      if ( !v15 )
        goto LABEL_13;
    }
    v16 = v15 - v14;
LABEL_13:
    if ( v16 > v12 )
      goto LABEL_42;
    v51 = v14;
    v17 = v12 - v16;
    v52 = v16;
LABEL_15:
    s = &v14[v16];
    n = v17;
    v63.m128i_i8[0] = 112;
    v18 = sub_2246E40((__int64 *)&v51, &v63, 1u);
    v19 = v18;
    if ( v18 == -1 )
      goto LABEL_64;
    v20 = v52;
    v21 = v18 + 1;
    if ( v21 > v52 )
      goto LABEL_64;
    v22 = v51;
    if ( v52 == v21 )
      goto LABEL_64;
    if ( sub_2247970(&v51[v21], v52 - v21, 0xAu, &v63) || v63.m128i_i64[0] != v63.m128i_u32[0] )
    {
      v24 = "failed to parse minor version number";
      goto LABEL_31;
    }
    if ( v19 > v20 )
      v19 = v20;
    if ( !v19 || (unsigned __int8)(v22[v19 - 1] - 48) > 9u )
    {
LABEL_64:
      v24 = "extension lacks version in expected format";
      goto LABEL_31;
    }
    if ( v19 == 1 )
      goto LABEL_30;
    v23 = v19 - 2;
    if ( (unsigned __int8)(v22[v19 - 2] - 48) <= 9u )
    {
      while ( v23 )
      {
        if ( (unsigned __int8)(v22[v23 - 1] - 48) > 9u )
        {
          if ( v23 == v19 )
            goto LABEL_64;
          if ( v23 > v19 )
          {
            v30 = v19;
            v31 = 0;
            goto LABEL_49;
          }
          goto LABEL_48;
        }
        --v23;
      }
LABEL_30:
      v24 = "missing extension name";
LABEL_31:
      v63.m128i_i64[0] = (__int64)v24;
      v65 = 259;
      sub_22A8430((std::_V2 *)v61, &v63);
      v25 = v61[0].m128i_i64[0];
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v25;
      goto LABEL_32;
    }
    v23 = v19 - 1;
LABEL_48:
    v30 = v23;
    v31 = v19 - v23;
LABEL_49:
    v47 = v63.m128i_i64[0];
    if ( sub_2247970(&v22[v30], v31, 0xAu, &v63) || v63.m128i_i64[0] != v63.m128i_u32[0] )
    {
      v24 = "failed to parse major version number";
      goto LABEL_31;
    }
    v33 = (unsigned __int8)*v22;
    if ( v23 > v19 )
      v23 = v19;
    v34 = v33 & 0xFFFFFFFD;
    if ( (v33 & 0xFD) == 0x78 || (_BYTE)v33 == 115 )
    {
      if ( v23 == 1 || (v34 = (unsigned __int8)v22[1], (unsigned __int8)(v34 - 48) <= 9u) )
      {
        v62 = 259;
        v61[0].m128i_i64[0] = (__int64)"' must be followed by a letter";
        v40 = *v22;
        v54 = 264;
        v53[0].m128i_i8[0] = v40;
        v55[0].m128i_i64[0] = (__int64)"'";
        v56 = 259;
        sub_A41580(&v57, v55, v53, v34, v47, v32);
        sub_A41580(&v63, &v57, v61, v41, v42, v43);
        sub_22A8430((std::_V2 *)&v50, &v63);
        v44 = v50;
        *(_BYTE *)(a1 + 8) |= 1u;
        *(_QWORD *)a1 = v44;
        goto LABEL_32;
      }
    }
    v61[0].m128i_i64[0] = __PAIR64__(v47, v63.m128i_u32[0]);
    v63.m128i_i64[0] = (__int64)v64;
    sub_22A8AD0(&v63, v22, (__int64)&v22[v23]);
    sub_22AAB40(v46, &v63, v61[0].m128i_i64);
    v39 = v38;
    if ( (_BYTE *)v63.m128i_i64[0] != v64 )
      operator delete((void *)v63.m128i_i64[0]);
    if ( !v39 )
      break;
    v12 = n;
    if ( !n )
      goto LABEL_61;
  }
  v61[0].m128i_i64[0] = (__int64)"'";
  v57.m128i_i64[0] = (__int64)"duplicate extension '";
  v62 = 259;
  v60 = 1283;
  v58 = v22;
  v59 = v23;
  sub_A41580(&v63, &v57, v61, v35, v36, v37);
  sub_22A8430((std::_V2 *)v55, &v63);
  v45 = v55[0].m128i_i64[0];
  *(_BYTE *)(a1 + 8) |= 1u;
  *(_QWORD *)a1 = v45;
LABEL_32:
  v26 = v13[5];
  if ( v26 )
  {
    while ( 1 )
    {
      sub_1050CC0((__int64)v46, *(_QWORD **)(v26 + 24));
      v27 = *(void **)(v26 + 32);
      v28 = *(_QWORD *)(v26 + 16);
      if ( v27 == (void *)(v26 + 48) )
      {
        operator delete((void *)v26);
        if ( !v28 )
          break;
      }
      else
      {
        operator delete(v27);
        operator delete((void *)v26);
        if ( !v28 )
          break;
      }
      v26 = v28;
    }
  }
  operator delete(v13, 0x48u);
  return a1;
}
