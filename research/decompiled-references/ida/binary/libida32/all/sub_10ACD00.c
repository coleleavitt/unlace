void __fastcall sub_10ACD00(
        __int64 a1,
        signed __int64 *a2,
        __int64 a3,
        size_t *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  signed __int64 v8; // rdx
  signed __int64 *v9; // r10
  signed __int64 *v10; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // r15
  _BYTE *v16; // rsi
  signed __int64 v17; // r8
  _BYTE *v18; // rax
  void **v19; // r15
  void **v20; // r14
  size_t *v21; // r14
  void *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // r15
  _BYTE *v26; // rsi
  size_t v27; // rbx
  _BYTE *v28; // rax
  void **v29; // r14
  void **v30; // rbx
  __int64 v31; // r14
  void *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r15
  __int64 v35; // rax
  _QWORD *v36; // rbx
  _BYTE *v37; // rsi
  size_t v38; // rbp
  _BYTE *v39; // rax
  void **v40; // rbp
  void **v41; // rbx
  signed __int64 *v42; // [rsp+0h] [rbp-C8h]
  size_t *v43; // [rsp+0h] [rbp-C8h]
  void *v44; // [rsp+8h] [rbp-C0h]
  void *v45; // [rsp+8h] [rbp-C0h]
  void *v46; // [rsp+8h] [rbp-C0h]
  void *v47; // [rsp+8h] [rbp-C0h]
  void *src; // [rsp+10h] [rbp-B8h]
  __int64 v49; // [rsp+18h] [rbp-B0h]
  void *v51[2]; // [rsp+30h] [rbp-98h] BYREF
  char *v52; // [rsp+40h] [rbp-88h]
  void *v53[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v54; // [rsp+60h] [rbp-68h]
  void *v55[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD *v56; // [rsp+80h] [rbp-48h]

  v8 = 32 * a3;
  v9 = a2;
  v10 = a2;
  v13 = *(_QWORD *)(*(_QWORD *)(a6 + 16) + 8LL);
  *(_OWORD *)v51 = 0;
  v52 = nullptr;
  v49 = v13;
  v42 = (signed __int64 *)((char *)a2 + v8);
  if ( v8 >> 5 )
  {
    if ( (unsigned __int64)(v8 >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_81;
    v44 = (void *)v8;
    v14 = operator new(v8);
    v8 = (signed __int64)v44;
    v9 = a2;
    v15 = (_QWORD *)v14;
  }
  else
  {
    v15 = nullptr;
  }
  v51[0] = v15;
  v52 = (char *)v15 + v8;
  if ( v9 != v42 )
  {
    v16 = (_BYTE *)*v9;
    v17 = v9[1];
    *v15 = v15 + 2;
    if ( &v16[v17] )
      goto LABEL_11;
    while ( (unsigned __int64)v17 <= 0xF )
    {
      v18 = (_BYTE *)*v15;
      if ( v17 == 1 )
      {
        *v18 = *v16;
        v18 = (_BYTE *)*v15;
        goto LABEL_9;
      }
      if ( v17 )
        goto LABEL_17;
LABEL_9:
      v15[1] = v17;
      v10 += 4;
      v15 += 4;
      v18[v17] = 0;
      if ( v42 == v10 )
        goto LABEL_18;
      v16 = (_BYTE *)*v10;
      v17 = v10[1];
      *v15 = v15 + 2;
      if ( &v16[v17] )
      {
LABEL_11:
        if ( !v16 )
LABEL_12:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
      }
    }
    if ( v17 < 0 )
LABEL_80:
      std::__throw_length_error("basic_string::_M_create");
    v45 = (void *)v17;
    v18 = (_BYTE *)operator new(v17 + 1);
    v17 = (signed __int64)v45;
    *v15 = v18;
    v15[2] = v45;
LABEL_17:
    v46 = (void *)v17;
    memcpy(v18, v16, v17);
    v18 = (_BYTE *)*v15;
    v17 = (signed __int64)v46;
    goto LABEL_9;
  }
LABEL_18:
  v51[1] = v15;
  sub_221C010(a1, v51, v49);
  v19 = (void **)v51[1];
  v20 = (void **)v51[0];
  if ( v51[1] != v51[0] )
  {
    do
    {
      while ( *v20 != v20 + 2 )
      {
        operator delete(*v20);
        v20 += 4;
        if ( v19 == v20 )
          goto LABEL_21;
      }
      v20 += 4;
    }
    while ( v19 != v20 );
LABEL_21:
    v20 = (void **)v51[0];
  }
  if ( v20 )
    operator delete(v20);
  v21 = a4;
  v22 = *(void **)(*(_QWORD *)(a6 + 16) + 8LL);
  v23 = 4 * a5;
  *(_OWORD *)v53 = 0;
  v54 = nullptr;
  src = v22;
  v43 = &a4[4 * a5];
  if ( (32 * a5) >> 5 )
  {
    if ( (unsigned __int64)((32 * a5) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_81;
    v24 = operator new(32 * a5);
    v23 = 4 * a5;
    v25 = (_QWORD *)v24;
  }
  else
  {
    v25 = nullptr;
  }
  v53[0] = v25;
  v54 = &v25[v23];
  if ( a4 != v43 )
  {
    v26 = (_BYTE *)*a4;
    v27 = a4[1];
    *v25 = v25 + 2;
    if ( &v26[v27] )
      goto LABEL_34;
LABEL_29:
    if ( v27 > 0xF )
      goto LABEL_36;
    do
    {
      v28 = (_BYTE *)*v25;
      if ( v27 == 1 )
      {
        *v28 = *v26;
        v28 = (_BYTE *)*v25;
        goto LABEL_32;
      }
      if ( v27 )
        goto LABEL_38;
LABEL_32:
      v25[1] = v27;
      v21 += 4;
      v25 += 4;
      v28[v27] = 0;
      if ( v43 == v21 )
        goto LABEL_43;
      v26 = (_BYTE *)*v21;
      v27 = v21[1];
      *v25 = v25 + 2;
      if ( !&v26[v27] )
        goto LABEL_29;
LABEL_34:
      if ( !v26 )
        goto LABEL_12;
    }
    while ( v27 <= 0xF );
LABEL_36:
    if ( (v27 & 0x8000000000000000LL) != 0LL )
      goto LABEL_80;
    v28 = (_BYTE *)operator new(v27 + 1);
    v25[2] = v27;
    *v25 = v28;
LABEL_38:
    memcpy(v28, v26, v27);
    v28 = (_BYTE *)*v25;
    goto LABEL_32;
  }
LABEL_43:
  v53[1] = v25;
  sub_221C010(a1 + 8, v53, src);
  v29 = (void **)v53[1];
  v30 = (void **)v53[0];
  if ( v53[1] != v53[0] )
  {
    do
    {
      while ( *v30 != v30 + 2 )
      {
        operator delete(*v30);
        v30 += 4;
        if ( v29 == v30 )
          goto LABEL_46;
      }
      v30 += 4;
    }
    while ( v29 != v30 );
LABEL_46:
    v30 = (void **)v53[0];
  }
  if ( v30 )
    operator delete(v30);
  v31 = a7;
  v32 = *(void **)(*(_QWORD *)(a6 + 16) + 8LL);
  v33 = 4 * a8;
  *(_OWORD *)v55 = 0;
  v34 = a7 + 32 * a8;
  v56 = nullptr;
  v47 = v32;
  if ( (32 * a8) >> 5 )
  {
    if ( (unsigned __int64)((32 * a8) >> 5) <= 0x7FFFFFFFFFFFFFFLL )
    {
      v35 = operator new(32 * a8);
      v33 = 4 * a8;
      v36 = (_QWORD *)v35;
      goto LABEL_52;
    }
LABEL_81:
    std::__throw_bad_alloc();
  }
  v36 = nullptr;
LABEL_52:
  v55[0] = v36;
  v56 = &v36[v33];
  if ( v34 != a7 )
  {
    v37 = *(_BYTE **)a7;
    v38 = *(_QWORD *)(a7 + 8);
    *v36 = v36 + 2;
    if ( &v37[v38] )
      goto LABEL_59;
LABEL_54:
    if ( v38 > 0xF )
      goto LABEL_61;
    do
    {
      v39 = (_BYTE *)*v36;
      if ( v38 == 1 )
      {
        *v39 = *v37;
        v39 = (_BYTE *)*v36;
        goto LABEL_57;
      }
      if ( v38 )
        goto LABEL_63;
LABEL_57:
      v31 += 32;
      v36[1] = v38;
      v36 += 4;
      v39[v38] = 0;
      if ( v34 == v31 )
        goto LABEL_68;
      v37 = *(_BYTE **)v31;
      v38 = *(_QWORD *)(v31 + 8);
      *v36 = v36 + 2;
      if ( !&v37[v38] )
        goto LABEL_54;
LABEL_59:
      if ( !v37 )
        goto LABEL_12;
    }
    while ( v38 <= 0xF );
LABEL_61:
    if ( (v38 & 0x8000000000000000LL) != 0LL )
      goto LABEL_80;
    v39 = (_BYTE *)operator new(v38 + 1);
    v36[2] = v38;
    *v36 = v39;
LABEL_63:
    memcpy(v39, v37, v38);
    v39 = (_BYTE *)*v36;
    goto LABEL_57;
  }
LABEL_68:
  v55[1] = v36;
  sub_221C010(a1 + 16, v55, v47);
  v40 = (void **)v55[1];
  v41 = (void **)v55[0];
  if ( v55[1] != v55[0] )
  {
    do
    {
      while ( *v41 != v41 + 2 )
      {
        operator delete(*v41);
        v41 += 4;
        if ( v40 == v41 )
          goto LABEL_71;
      }
      v41 += 4;
    }
    while ( v40 != v41 );
LABEL_71:
    v41 = (void **)v55[0];
  }
  if ( v41 )
    operator delete(v41);
  *(_QWORD *)(a1 + 24) = a6;
}

