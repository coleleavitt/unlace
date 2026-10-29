void sub_34B5E0()
{
  size_t v0; // r15
  __int64 v1; // rax
  __int64 v2; // rcx
  size_t v3; // r15
  __int64 v4; // rax
  __int64 v5; // rcx
  __m128i v6; // xmm0
  size_t v7; // r12
  size_t v8; // rbx
  __int64 v9; // r14
  const char *v10; // rdx
  __int64 v11; // rbx
  _QWORD *v12; // r15
  unsigned __int64 v13; // r9
  _QWORD *v14; // r13
  unsigned __int64 v15; // rcx
  size_t v16; // rdx
  const void *v17; // rdi
  signed __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rsi
  int v24; // r10d
  _DWORD *v25; // r9
  unsigned int i; // edx
  _DWORD *v27; // rbx
  int v28; // ecx
  _DWORD *v29; // rbx
  _BYTE *v30; // r13
  _BYTE *v31; // rdi
  __int64 v32; // rax
  size_t v33; // r14
  size_t v34; // rax
  _BYTE *v35; // rdi
  __int64 v36; // rax
  _QWORD *v37; // r15
  __int64 v38; // rax
  void *v39; // rsi
  char *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r15
  _QWORD *v45; // rdi
  size_t v46; // rdx
  size_t v47; // r15
  __int64 v48; // rax
  _BYTE *v49; // rdi
  void *v50; // rdi
  void *v51; // rdi
  int v52; // eax
  _DWORD *v53; // rbx
  _DWORD *v54; // rdi
  __int64 v55; // rcx
  _DWORD *v56; // rax
  unsigned int v57; // edx
  __m128i v58; // [rsp+0h] [rbp-138h] BYREF
  __m128i v59; // [rsp+10h] [rbp-128h] BYREF
  void *s2; // [rsp+28h] [rbp-110h]
  int v61; // [rsp+3Ch] [rbp-FCh] BYREF
  void *v62; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v63; // [rsp+48h] [rbp-F0h]
  _BYTE v64[16]; // [rsp+50h] [rbp-E8h] BYREF
  void *src; // [rsp+60h] [rbp-D8h] BYREF
  size_t n; // [rsp+68h] [rbp-D0h]
  _BYTE v67[16]; // [rsp+70h] [rbp-C8h] BYREF
  _DWORD *v68; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v69; // [rsp+88h] [rbp-B0h]
  char v70; // [rsp+90h] [rbp-A8h]
  void *v71; // [rsp+98h] [rbp-A0h]
  size_t v72; // [rsp+A0h] [rbp-98h]
  _QWORD v73[2]; // [rsp+A8h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+B8h] [rbp-80h] BYREF
  _BYTE v75[112]; // [rsp+C8h] [rbp-70h] BYREF

  v0 = j__strlen("enable preservation of all attributes. even those that are unlikely to be useful");
  unk_2CE1C10 = 0;
  qword_2CE1C00 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE1C08 = dword_2CE1C08 & 0x80000000;
  qword_2CE1C40[1] = 0x100000000LL;
  unk_2CE1C18 = 0;
  unk_2CE1C20 = 0;
  unk_2CE1C28 = 0;
  unk_2CE1C30 = 0;
  unk_2CE1C38 = 0;
  qword_2CE1C40[0] = &qword_2CE1C40[2];
  qword_2CE1C40[3] = &qword_2CE1C40[6];
  qword_2CE1C40[4] = 1;
  LODWORD(qword_2CE1C40[5]) = 0;
  BYTE4(qword_2CE1C40[5]) = 1;
  v1 = sub_21ED2B0("enable preservation of all attributes. even those that are unlikely to be useful");
  v2 = LODWORD(qword_2CE1C40[1]);
  if ( (unsigned __int64)LODWORD(qword_2CE1C40[1]) + 1 > HIDWORD(qword_2CE1C40[1]) )
  {
    v58.m128i_i64[0] = v1;
    sub_22134E0(qword_2CE1C40, &qword_2CE1C40[2], LODWORD(qword_2CE1C40[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CE1C40[1]);
    v1 = v58.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE1C40[0] + 8 * v2) = v1;
  qword_2CE1C40[8] = off_2C474E8;
  ++LODWORD(qword_2CE1C40[1]);
  qword_2CE1C00 = off_2C4B848;
  LOWORD(qword_2CE1C40[9]) = 0;
  qword_2CE1C40[10] = off_2BC0B68;
  LOBYTE(qword_2CE1C40[7]) = 0;
  *(__m128 *)&qword_2CE1C40[13] = _mm_loadh_ps((const double *)off_2C4E368);
  v58 = *(__m128i *)&qword_2CE1C40[13];
  sub_21F3510(&qword_2CE1C00, "assume-preserve-all", 19);
  unk_2CE1C28 = v0;
  LOBYTE(qword_2CE1C40[7]) = 0;
  LOWORD(qword_2CE1C40[9]) = 256;
  BYTE2(dword_2CE1C08) = BYTE2(dword_2CE1C08) & 0x9F | 0x20;
  unk_2CE1C20 = "enable preservation of all attributes. even those that are unlikely to be useful";
  sub_21F4400(&qword_2CE1C00);
  __cxa_atexit(sub_1FEA450, &qword_2CE1C00, &off_2AFC540);
  v3 = j__strlen("enable preservation of attributes throughout code transformation");
  qword_2CE1B40 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CE1B48 = dword_2CE1B48 & 0x80000000;
  qword_2CE1B80[1] = 0x100000000LL;
  unk_2CE1B50 = 0;
  unk_2CE1B58 = 0;
  unk_2CE1B60 = 0;
  unk_2CE1B68 = 0;
  unk_2CE1B70 = 0;
  unk_2CE1B78 = 0;
  qword_2CE1B80[0] = &qword_2CE1B80[2];
  qword_2CE1B80[3] = &qword_2CE1B80[6];
  qword_2CE1B80[4] = 1;
  LODWORD(qword_2CE1B80[5]) = 0;
  BYTE4(qword_2CE1B80[5]) = 1;
  v4 = sub_21ED2B0("enable preservation of attributes throughout code transformation");
  v5 = LODWORD(qword_2CE1B80[1]);
  v6 = _mm_load_si128(&v58);
  if ( (unsigned __int64)LODWORD(qword_2CE1B80[1]) + 1 > HIDWORD(qword_2CE1B80[1]) )
  {
    v58.m128i_i64[0] = v4;
    v59 = v6;
    sub_22134E0(qword_2CE1B80, &qword_2CE1B80[2], LODWORD(qword_2CE1B80[1]) + 1LL, 8);
    v5 = LODWORD(qword_2CE1B80[1]);
    v6 = _mm_load_si128(&v59);
    v4 = v58.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE1B80[0] + 8 * v5) = v4;
  LOWORD(qword_2CE1B80[9]) = 0;
  qword_2CE1B80[8] = off_2C474E8;
  qword_2CE1B40 = off_2C4B848;
  ++LODWORD(qword_2CE1B80[1]);
  qword_2CE1B80[10] = off_2BC0B68;
  LOBYTE(qword_2CE1B80[7]) = 0;
  *(__m128i *)&qword_2CE1B80[13] = v6;
  sub_21F3510(&qword_2CE1B40, "enable-knowledge-retention", 26);
  unk_2CE1B68 = v3;
  LOBYTE(qword_2CE1B80[7]) = 0;
  LOWORD(qword_2CE1B80[9]) = 256;
  BYTE2(dword_2CE1B48) = BYTE2(dword_2CE1B48) & 0x9F | 0x20;
  unk_2CE1B60 = "enable preservation of attributes throughout code transformation";
  sub_21F4400(&qword_2CE1B40);
  __cxa_atexit(sub_1FEA450, &qword_2CE1B40, &off_2AFC540);
  v7 = j__strlen("Controls which assumes gets created");
  v8 = j__strlen("assume-builder-counter");
  v9 = sub_21F7DB0();
  src = v67;
  sub_229B6B0(&src, "Controls which assumes gets created", &aControlsWhichA[v7]);
  v10 = &aAssumeBuilderC[v8];
  v62 = v64;
  v11 = v9 + 32;
  sub_229B6B0(&v62, "assume-builder-counter", v10);
  v12 = *(_QWORD **)(v9 + 40);
  if ( v12 )
  {
    v13 = v63;
    v14 = (_QWORD *)(v9 + 32);
    s2 = v62;
    while ( 1 )
    {
      v15 = v12[5];
      v16 = v13;
      if ( v15 <= v13 )
        v16 = v12[5];
      if ( !v16
        || (v17 = (const void *)v12[4],
            v59.m128i_i64[0] = v13,
            v58.m128i_i64[0] = v15,
            LODWORD(v18) = memcmp(v17, s2, v16),
            v15 = v58.m128i_i64[0],
            v13 = v59.m128i_i64[0],
            !(_DWORD)v18) )
      {
        v18 = v15 - v13;
        if ( (__int64)(v15 - v13) > 0x7FFFFFFF )
          goto LABEL_7;
        if ( v18 < (__int64)0xFFFFFFFF80000000LL )
          goto LABEL_13;
      }
      if ( (int)v18 >= 0 )
      {
LABEL_7:
        v14 = v12;
        v12 = (_QWORD *)v12[2];
        if ( !v12 )
          goto LABEL_14;
      }
      else
      {
LABEL_13:
        v12 = (_QWORD *)v12[3];
        if ( !v12 )
        {
LABEL_14:
          if ( (_QWORD *)v11 != v14 && (int)sub_9A0E10(&v62, v14 + 4) >= 0 )
            goto LABEL_16;
          goto LABEL_46;
        }
      }
    }
  }
  v14 = (_QWORD *)(v9 + 32);
LABEL_46:
  v37 = v14;
  v38 = operator new(0x48u);
  v39 = v62;
  v14 = (_QWORD *)v38;
  v40 = (char *)v62 + v63;
  v58.m128i_i64[0] = v38 + 32;
  *(_QWORD *)(v38 + 32) = v38 + 48;
  v59.m128i_i64[0] = v38 + 48;
  sub_229B5F0(v38 + 32, v39, v40);
  v41 = v58.m128i_i64[0];
  *((_DWORD *)v14 + 16) = 0;
  v42 = sub_1FEAD00(v9 + 24, v37, v41);
  v44 = v42;
  if ( v43 )
  {
    if ( v42 == 0 && v11 != v43 )
    {
      v59.m128i_i64[0] = v43;
      sub_9A0E10(v58.m128i_i64[0], v43 + 32);
    }
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(v9 + 64);
  }
  else
  {
    v50 = (void *)v14[4];
    if ( (void *)v59.m128i_i64[0] != v50 )
      operator delete(v50);
    v51 = v14;
    v14 = (_QWORD *)v44;
    operator delete(v51);
  }
LABEL_16:
  v22 = *((_DWORD *)v14 + 16);
  if ( !v22 )
  {
    v45 = *(_QWORD **)(v9 + 80);
    *((_DWORD *)v14 + 16) = (((__int64)v45 - *(_QWORD *)(v9 + 72)) >> 5) + 1;
    if ( v45 == *(_QWORD **)(v9 + 88) )
    {
      sub_1098E50(v9 + 72, v45, &v62, v19, v20, v21);
    }
    else
    {
      *v45 = v45 + 2;
      sub_229B5F0(v45, v62, (char *)v62 + v63);
      *(_QWORD *)(v9 + 80) += 32LL;
    }
    v22 = *((_DWORD *)v14 + 16);
  }
  v23 = *(unsigned int *)(v9 + 16);
  v61 = v22;
  if ( (_DWORD)v23 )
  {
    v24 = 1;
    v25 = nullptr;
    for ( i = (v23 - 1) & (37 * v22); ; i = (v23 - 1) & v57 )
    {
      v27 = (_DWORD *)(*(_QWORD *)v9 + ((unsigned __int64)i << 7));
      v28 = *v27;
      if ( v22 == *v27 )
      {
        v29 = v27 + 2;
        goto LABEL_21;
      }
      if ( v28 == -1 )
        break;
      if ( v28 != -2 || v25 )
        v27 = v25;
      v57 = v24 + i;
      v25 = v27;
      ++v24;
    }
    v52 = *(_DWORD *)(v9 + 8);
    if ( v25 )
      v27 = v25;
    v68 = v27;
    if ( 4 * (v52 + 1) < (unsigned int)(3 * v23) )
    {
      if ( (int)v23 - *(_DWORD *)(v9 + 12) - (v52 + 1) <= (unsigned int)v23 >> 3 )
      {
        sub_21C4E10(v9, v23);
        sub_21C4D70(v9, &v61, &v68);
      }
      goto LABEL_80;
    }
  }
  else
  {
    v68 = nullptr;
  }
  sub_21C4E10(v9, (unsigned int)(2 * v23));
  sub_21C4D70(v9, &v61, &v68);
LABEL_80:
  v53 = v68;
  ++*(_DWORD *)(v9 + 8);
  if ( *v53 != -1 )
    --*(_DWORD *)(v9 + 12);
  v54 = v53 + 2;
  v55 = 30;
  *v53 = v61;
  while ( v55 )
  {
    *v54++ = 0;
    --v55;
  }
  *((_QWORD *)v53 + 4) = v53 + 12;
  v56 = v53 + 20;
  v29 = v53 + 2;
  *((_QWORD *)v29 + 7) = v56;
  *((_QWORD *)v29 + 8) = 0x300000000LL;
LABEL_21:
  v69 = 0;
  v70 = 0;
  v30 = v29 + 10;
  v71 = v73;
  ptr[0] = v75;
  v68 = nullptr;
  v72 = 0;
  LOBYTE(v73[0]) = 0;
  ptr[1] = (void *)0x300000000LL;
  v31 = *((_BYTE **)v29 + 3);
  *(_QWORD *)v29 = 0;
  *((_QWORD *)v29 + 1) = v69;
  *((_BYTE *)v29 + 16) = v70;
  if ( v71 == v73 )
  {
    v46 = v72;
    if ( v72 )
    {
      if ( v72 == 1 )
        *v31 = v73[0];
      else
        memcpy(v31, v71, v72);
      v31 = *((_BYTE **)v29 + 3);
      v46 = v72;
    }
    *((_QWORD *)v29 + 4) = v46;
    v31[v46] = 0;
  }
  else
  {
    if ( v31 == v30 )
    {
      *((_QWORD *)v29 + 3) = v71;
      *((_QWORD *)v29 + 4) = v72;
      *((_QWORD *)v29 + 5) = v73[0];
    }
    else
    {
      *((_QWORD *)v29 + 3) = v71;
      v32 = *((_QWORD *)v29 + 5);
      *((_QWORD *)v29 + 4) = v72;
      *((_QWORD *)v29 + 5) = v73[0];
      if ( v31 )
      {
        v71 = v31;
        v73[0] = v32;
        goto LABEL_25;
      }
    }
    v71 = v73;
  }
LABEL_25:
  v72 = 0;
  *(_BYTE *)v71 = 0;
  sub_1FEAA60(v29 + 14, ptr);
  if ( ptr[0] != v75 )
    free(ptr[0]);
  if ( v71 != v73 )
    operator delete(v71);
  if ( v29 + 6 != (_DWORD *)&src )
  {
    v33 = n;
    if ( *((_BYTE **)v29 + 3) == v30 )
      v34 = 15;
    else
      v34 = *((_QWORD *)v29 + 5);
    if ( n > v34 )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v47 = 2 * v34;
      if ( n >= 2 * v34 )
      {
        v47 = n;
      }
      else if ( (v34 & 0x4000000000000000LL) != 0 )
      {
        v47 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v48 = operator new(v47 + 1);
      v49 = *((_BYTE **)v29 + 3);
      if ( v49 != v30 )
      {
        v58.m128i_i64[0] = v48;
        operator delete(v49);
        v48 = v58.m128i_i64[0];
      }
      *((_QWORD *)v29 + 3) = v48;
      *((_QWORD *)v29 + 5) = v47;
    }
    if ( v33 )
    {
      v35 = *((_BYTE **)v29 + 3);
      if ( v33 == 1 )
        *v35 = *(_BYTE *)src;
      else
        memcpy(v35, src, v33);
    }
    v36 = *((_QWORD *)v29 + 3);
    *((_QWORD *)v29 + 4) = v33;
    *(_BYTE *)(v36 + v33) = 0;
  }
  if ( v62 != v64 )
    operator delete(v62);
  if ( src != v67 )
    operator delete(src);
}

