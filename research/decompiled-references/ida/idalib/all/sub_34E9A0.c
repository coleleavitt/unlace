void sub_34E9A0()
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
  _QWORD *v38; // rax
  void *v39; // rsi
  char *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r15
  bool v45; // di
  _QWORD *v46; // rdi
  size_t v47; // rdx
  size_t v48; // r15
  __int64 v49; // rax
  _BYTE *v50; // rdi
  void *v51; // rdi
  void *v52; // rdi
  int v53; // eax
  int v54; // eax
  _DWORD *v55; // rbx
  _DWORD *v56; // rdi
  __int64 v57; // rcx
  _DWORD *v58; // rax
  unsigned int v59; // edx
  __m128i v60; // [rsp+0h] [rbp-138h] BYREF
  __m128i v61; // [rsp+10h] [rbp-128h] BYREF
  void *s2; // [rsp+28h] [rbp-110h]
  int v63; // [rsp+3Ch] [rbp-FCh] BYREF
  void *v64; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v65; // [rsp+48h] [rbp-F0h]
  _BYTE v66[16]; // [rsp+50h] [rbp-E8h] BYREF
  void *src; // [rsp+60h] [rbp-D8h] BYREF
  size_t n; // [rsp+68h] [rbp-D0h]
  _BYTE v69[16]; // [rsp+70h] [rbp-C8h] BYREF
  _DWORD *v70; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+88h] [rbp-B0h]
  char v72; // [rsp+90h] [rbp-A8h]
  void *v73; // [rsp+98h] [rbp-A0h]
  size_t v74; // [rsp+A0h] [rbp-98h]
  _QWORD v75[2]; // [rsp+A8h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+B8h] [rbp-80h] BYREF
  _BYTE v77[112]; // [rsp+C8h] [rbp-70h] BYREF

  v0 = j__strlen("enable preservation of all attributes. even those that are unlikely to be useful");
  unk_2D0BB30 = 0;
  qword_2D0BB20 = &off_2C758B0;
  *(_QWORD *)&dword_2D0BB28 = dword_2D0BB28 & 0x80000000;
  qword_2D0BB60[1] = 0x100000000LL;
  unk_2D0BB38 = 0;
  unk_2D0BB40 = 0;
  unk_2D0BB48 = 0;
  unk_2D0BB50 = 0;
  unk_2D0BB58 = 0;
  qword_2D0BB60[0] = &qword_2D0BB60[2];
  qword_2D0BB60[3] = &qword_2D0BB60[6];
  qword_2D0BB60[4] = 1;
  LODWORD(qword_2D0BB60[5]) = 0;
  BYTE4(qword_2D0BB60[5]) = 1;
  v1 = sub_2210FF0("enable preservation of all attributes. even those that are unlikely to be useful");
  v2 = LODWORD(qword_2D0BB60[1]);
  if ( (unsigned __int64)LODWORD(qword_2D0BB60[1]) + 1 > HIDWORD(qword_2D0BB60[1]) )
  {
    v60.m128i_i64[0] = v1;
    sub_2237220(qword_2D0BB60, &qword_2D0BB60[2], LODWORD(qword_2D0BB60[1]) + 1LL, 8);
    v2 = LODWORD(qword_2D0BB60[1]);
    v1 = v60.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0BB60[0] + 8 * v2) = v1;
  qword_2D0BB60[8] = off_2C714E8;
  ++LODWORD(qword_2D0BB60[1]);
  qword_2D0BB20 = off_2C75848;
  LOWORD(qword_2D0BB60[9]) = 0;
  qword_2D0BB60[10] = off_2BEAB08;
  LOBYTE(qword_2D0BB60[7]) = 0;
  *(__m128 *)&qword_2D0BB60[13] = _mm_loadh_ps((const double *)off_2C78368);
  v60 = *(__m128i *)&qword_2D0BB60[13];
  sub_2217250(&qword_2D0BB20, "assume-preserve-all", 19);
  unk_2D0BB48 = v0;
  LOBYTE(qword_2D0BB60[7]) = 0;
  LOWORD(qword_2D0BB60[9]) = 256;
  BYTE2(dword_2D0BB28) = BYTE2(dword_2D0BB28) & 0x9F | 0x20;
  unk_2D0BB40 = "enable preservation of all attributes. even those that are unlikely to be useful";
  sub_2218140(&qword_2D0BB20);
  __cxa_atexit(sub_200E190, &qword_2D0BB20, &off_2B25620);
  v3 = j__strlen("enable preservation of attributes throughout code transformation");
  qword_2D0BA60 = &off_2C758B0;
  *(_QWORD *)&dword_2D0BA68 = dword_2D0BA68 & 0x80000000;
  qword_2D0BAA0[1] = 0x100000000LL;
  unk_2D0BA70 = 0;
  unk_2D0BA78 = 0;
  unk_2D0BA80 = 0;
  unk_2D0BA88 = 0;
  unk_2D0BA90 = 0;
  unk_2D0BA98 = 0;
  qword_2D0BAA0[0] = &qword_2D0BAA0[2];
  qword_2D0BAA0[3] = &qword_2D0BAA0[6];
  qword_2D0BAA0[4] = 1;
  LODWORD(qword_2D0BAA0[5]) = 0;
  BYTE4(qword_2D0BAA0[5]) = 1;
  v4 = sub_2210FF0("enable preservation of attributes throughout code transformation");
  v5 = LODWORD(qword_2D0BAA0[1]);
  v6 = _mm_load_si128(&v60);
  if ( (unsigned __int64)LODWORD(qword_2D0BAA0[1]) + 1 > HIDWORD(qword_2D0BAA0[1]) )
  {
    v60.m128i_i64[0] = v4;
    v61 = v6;
    sub_2237220(qword_2D0BAA0, &qword_2D0BAA0[2], LODWORD(qword_2D0BAA0[1]) + 1LL, 8);
    v5 = LODWORD(qword_2D0BAA0[1]);
    v6 = _mm_load_si128(&v61);
    v4 = v60.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0BAA0[0] + 8 * v5) = v4;
  LOWORD(qword_2D0BAA0[9]) = 0;
  qword_2D0BAA0[8] = off_2C714E8;
  qword_2D0BA60 = off_2C75848;
  ++LODWORD(qword_2D0BAA0[1]);
  qword_2D0BAA0[10] = off_2BEAB08;
  LOBYTE(qword_2D0BAA0[7]) = 0;
  *(__m128i *)&qword_2D0BAA0[13] = v6;
  sub_2217250(&qword_2D0BA60, "enable-knowledge-retention", 26);
  unk_2D0BA88 = v3;
  LOBYTE(qword_2D0BAA0[7]) = 0;
  LOWORD(qword_2D0BAA0[9]) = 256;
  BYTE2(dword_2D0BA68) = BYTE2(dword_2D0BA68) & 0x9F | 0x20;
  unk_2D0BA80 = "enable preservation of attributes throughout code transformation";
  sub_2218140(&qword_2D0BA60);
  __cxa_atexit(sub_200E190, &qword_2D0BA60, &off_2B25620);
  v7 = j__strlen("Controls which assumes gets created");
  v8 = j__strlen("assume-builder-counter");
  v9 = sub_221BAF0();
  src = v69;
  sub_22BF3F0(&src, "Controls which assumes gets created", &aControlsWhichA[v7]);
  v10 = &aAssumeBuilderC[v8];
  v64 = v66;
  v11 = v9 + 32;
  sub_22BF3F0(&v64, "assume-builder-counter", v10);
  v12 = *(_QWORD **)(v9 + 40);
  if ( v12 )
  {
    v13 = v65;
    v14 = (_QWORD *)(v9 + 32);
    s2 = v64;
    while ( 1 )
    {
      v15 = v12[5];
      v16 = v13;
      if ( v15 <= v13 )
        v16 = v12[5];
      if ( !v16
        || (v17 = (const void *)v12[4],
            v61.m128i_i64[0] = v13,
            v60.m128i_i64[0] = v15,
            LODWORD(v18) = memcmp(v17, s2, v16),
            v15 = v60.m128i_i64[0],
            v13 = v61.m128i_i64[0],
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
          if ( (_QWORD *)v11 != v14 && (int)sub_9C4B50(&v64, v14 + 4) >= 0 )
            goto LABEL_16;
          goto LABEL_46;
        }
      }
    }
  }
  v14 = (_QWORD *)(v9 + 32);
LABEL_46:
  v37 = v14;
  v38 = (_QWORD *)operator new(0x48u);
  v39 = v64;
  v14 = v38;
  v40 = (char *)v64 + v65;
  v60.m128i_i64[0] = (__int64)(v38 + 4);
  v38[4] = v38 + 6;
  v61.m128i_i64[0] = (__int64)(v38 + 6);
  sub_22BF330(v38 + 4, v39, v40);
  v41 = v60.m128i_i64[0];
  *((_DWORD *)v14 + 16) = 0;
  v42 = sub_200EA40(v9 + 24, v37, v41);
  v44 = v42;
  if ( v43 )
  {
    v45 = v42 != 0 || v11 == v43;
    if ( !v45 )
    {
      v61.m128i_i64[0] = v43;
      v53 = sub_9C4B50(v60.m128i_i64[0], v43 + 32);
      v43 = v61.m128i_i64[0];
      v45 = v53 < 0;
    }
    std::_Rb_tree_insert_and_rebalance(v45, v14, v43, v9 + 32);
    ++*(_QWORD *)(v9 + 64);
  }
  else
  {
    v51 = (void *)v14[4];
    if ( (void *)v61.m128i_i64[0] != v51 )
      operator delete(v51);
    v52 = v14;
    v14 = (_QWORD *)v44;
    operator delete(v52);
  }
LABEL_16:
  v22 = *((_DWORD *)v14 + 16);
  if ( !v22 )
  {
    v46 = *(_QWORD **)(v9 + 80);
    *((_DWORD *)v14 + 16) = (((__int64)v46 - *(_QWORD *)(v9 + 72)) >> 5) + 1;
    if ( v46 == *(_QWORD **)(v9 + 88) )
    {
      sub_10BCB90(v9 + 72, v46, &v64, v19, v20, v21);
    }
    else
    {
      *v46 = v46 + 2;
      sub_22BF330(v46, v64, (char *)v64 + v65);
      *(_QWORD *)(v9 + 80) += 32LL;
    }
    v22 = *((_DWORD *)v14 + 16);
  }
  v23 = *(unsigned int *)(v9 + 16);
  v63 = v22;
  if ( (_DWORD)v23 )
  {
    v24 = 1;
    v25 = nullptr;
    for ( i = (v23 - 1) & (37 * v22); ; i = (v23 - 1) & v59 )
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
      v59 = v24 + i;
      v25 = v27;
      ++v24;
    }
    v54 = *(_DWORD *)(v9 + 8);
    if ( v25 )
      v27 = v25;
    v70 = v27;
    if ( 4 * (v54 + 1) < (unsigned int)(3 * v23) )
    {
      if ( (int)v23 - *(_DWORD *)(v9 + 12) - (v54 + 1) <= (unsigned int)v23 >> 3 )
      {
        sub_21E8B50(v9, v23);
        sub_21E8AB0(v9, &v63, &v70);
      }
      goto LABEL_80;
    }
  }
  else
  {
    v70 = nullptr;
  }
  sub_21E8B50(v9, (unsigned int)(2 * v23));
  sub_21E8AB0(v9, &v63, &v70);
LABEL_80:
  v55 = v70;
  ++*(_DWORD *)(v9 + 8);
  if ( *v55 != -1 )
    --*(_DWORD *)(v9 + 12);
  v56 = v55 + 2;
  v57 = 30;
  *v55 = v63;
  while ( v57 )
  {
    *v56++ = 0;
    --v57;
  }
  *((_QWORD *)v55 + 4) = v55 + 12;
  v58 = v55 + 20;
  v29 = v55 + 2;
  *((_QWORD *)v29 + 7) = v58;
  *((_QWORD *)v29 + 8) = 0x300000000LL;
LABEL_21:
  v71 = 0;
  v72 = 0;
  v30 = v29 + 10;
  v73 = v75;
  ptr[0] = v77;
  v70 = nullptr;
  v74 = 0;
  LOBYTE(v75[0]) = 0;
  ptr[1] = (void *)0x300000000LL;
  v31 = *((_BYTE **)v29 + 3);
  *(_QWORD *)v29 = 0;
  *((_QWORD *)v29 + 1) = v71;
  *((_BYTE *)v29 + 16) = v72;
  if ( v73 == v75 )
  {
    v47 = v74;
    if ( v74 )
    {
      if ( v74 == 1 )
        *v31 = v75[0];
      else
        memcpy(v31, v73, v74);
      v31 = *((_BYTE **)v29 + 3);
      v47 = v74;
    }
    *((_QWORD *)v29 + 4) = v47;
    v31[v47] = 0;
  }
  else
  {
    if ( v31 == v30 )
    {
      *((_QWORD *)v29 + 3) = v73;
      *((_QWORD *)v29 + 4) = v74;
      *((_QWORD *)v29 + 5) = v75[0];
    }
    else
    {
      *((_QWORD *)v29 + 3) = v73;
      v32 = *((_QWORD *)v29 + 5);
      *((_QWORD *)v29 + 4) = v74;
      *((_QWORD *)v29 + 5) = v75[0];
      if ( v31 )
      {
        v73 = v31;
        v75[0] = v32;
        goto LABEL_25;
      }
    }
    v73 = v75;
  }
LABEL_25:
  v74 = 0;
  *(_BYTE *)v73 = 0;
  sub_200E7A0(v29 + 14, ptr);
  if ( ptr[0] != v77 )
    free(ptr[0]);
  if ( v73 != v75 )
    operator delete(v73);
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
      v48 = 2 * v34;
      if ( n >= 2 * v34 )
      {
        v48 = n;
      }
      else if ( (v34 & 0x4000000000000000LL) != 0 )
      {
        v48 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v49 = operator new(v48 + 1);
      v50 = *((_BYTE **)v29 + 3);
      if ( v50 != v30 )
      {
        v60.m128i_i64[0] = v49;
        operator delete(v50);
        v49 = v60.m128i_i64[0];
      }
      *((_QWORD *)v29 + 3) = v49;
      *((_QWORD *)v29 + 5) = v48;
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
  if ( v64 != v66 )
    operator delete(v64);
  if ( src != v69 )
    operator delete(src);
}
