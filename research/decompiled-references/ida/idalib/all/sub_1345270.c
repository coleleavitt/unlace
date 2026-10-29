void __fastcall sub_1345270(_QWORD *a1, void (__fastcall *a2)(__int64, __m128i *), __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i *v7; // rsi
  void *v8; // rdx
  char *v9; // r15
  char v10; // al
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r14
  _BYTE *v14; // r14
  char v15; // al
  char v16; // al
  char v17; // al
  char *v18; // r15
  unsigned __int64 v19; // r14
  char v20; // al
  char v21; // al
  char v22; // al
  __int64 v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  size_t v26; // rax
  size_t v27; // rax
  __int64 v28; // [rsp+8h] [rbp-F0h]
  void *v29; // [rsp+10h] [rbp-E8h] BYREF
  void *v30; // [rsp+18h] [rbp-E0h]
  __m128i v31; // [rsp+20h] [rbp-D8h] BYREF
  void *v32[2]; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v33; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v34; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v35[16]; // [rsp+60h] [rbp-98h] BYREF
  __int16 v36; // [rsp+70h] [rbp-88h]
  void *v37[2]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v38; // [rsp+90h] [rbp-68h] BYREF

  v5 = a1[2];
  v34.m128i_i64[0] = (__int64)v35;
  sub_12FAA20(&v34, *(_BYTE **)v5, *(_QWORD *)v5 + *(_QWORD *)(v5 + 8));
  sub_22B9ED0(v37, &v34);
  if ( (_BYTE *)v34.m128i_i64[0] != v35 )
    operator delete((void *)v34.m128i_i64[0]);
  v6 = a1[18];
  v29 = &v31;
  sub_12FAA20(&v29, *(_BYTE **)v6, *(_QWORD *)v6 + *(_QWORD *)(v6 + 8));
  v7 = (__m128i *)v29;
  v32[0] = &v33;
  if ( v29 == &v31 )
  {
    v7 = &v33;
    v33 = _mm_load_si128(&v31);
  }
  else
  {
    v32[0] = v29;
    v33.m128i_i64[0] = v31.m128i_i64[0];
  }
  v8 = v30;
  v30 = nullptr;
  v29 = &v31;
  v32[1] = v8;
  v31.m128i_i8[0] = 0;
  v34.m128i_i64[0] = (__int64)v35;
  v34.m128i_i64[1] = 0;
  v35[0] = 0;
  if ( v8 )
  {
    sub_12FAA20(&v34, v7, (__int64)v8 + (_QWORD)v7);
    sub_12FD520((void (__fastcall *)(__int64, _QWORD *))a2, a3, 61429, (__int64)&v34);
    if ( (_BYTE *)v34.m128i_i64[0] != v35 )
      operator delete((void *)v34.m128i_i64[0]);
    v7 = (__m128i *)v32[0];
  }
  if ( v7 != &v33 )
    operator delete(v7);
  if ( v29 != &v31 )
    operator delete(v29);
  v9 = (char *)a1[12];
  v10 = *v9;
  if ( (*v9 & 1) != 0 )
  {
    v34.m128i_i64[0] = (__int64)"-no-ns-alloc-error";
    v36 = 261;
    v34.m128i_i64[1] = 18;
    a2(a3, &v34);
    v10 = *v9;
  }
  if ( (v10 & 2) != 0 )
  {
    v34.m128i_i64[1] = 20;
    v36 = 261;
    v34.m128i_i64[0] = (__int64)"-no-finalize-removal";
    a2(a3, &v34);
  }
  sub_1343F40(a1[10], a2, a3);
  sub_131B260((char *)a1[4], (void (__fastcall *)(__int64, _QWORD *))a2, a3);
  sub_130D0B0(a1[20], (void (__fastcall *)(__int64, _QWORD *))a2, a3, *(unsigned __int8 *)(*a1 + 744LL));
  sub_131A020(a1[2], (void (__fastcall *)(__int64, _QWORD *))a2, a3);
  sub_131D370(a1[6], (void (__fastcall *)(__int64, _QWORD *))a2, a3);
  v11 = a1[14];
  if ( *(_DWORD *)v11
    || (*(_DWORD *)(v11 + 4) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(v11 + 8) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(v11 + 12) & 0x7FFFFFFF) != 0 )
  {
    sub_2257830(v32, a1[14]);
    v34.m128i_i64[0] = (__int64)v32;
    v36 = 260;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x1AAu, &v34);
    if ( v32[0] != &v33 )
      operator delete(v32[0]);
  }
  v12 = *(_QWORD *)(v11 + 24);
  v13 = *(_QWORD *)(v11 + 16);
  if ( v13 != v12 )
  {
    do
    {
      v28 = v12;
      v36 = 260;
      v34.m128i_i64[0] = v13;
      v13 += 32;
      sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x851u, &v34);
      v12 = v28;
    }
    while ( v28 != v13 );
  }
  v14 = (_BYTE *)*a1;
  if ( *(char *)(*a1 + 15LL) < 0 )
    sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x680u);
  v15 = v14[16];
  if ( (v15 & 1) != 0 )
  {
    sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x67Au);
    v15 = v14[16];
  }
  if ( (v15 & 2) != 0 )
  {
    sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x684u);
    v15 = v14[16];
    if ( (v15 & 4) == 0 )
    {
LABEL_28:
      if ( (v15 & 8) == 0 )
        goto LABEL_29;
      goto LABEL_71;
    }
  }
  else if ( (v15 & 4) == 0 )
  {
    goto LABEL_28;
  }
  sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x67Du);
  v15 = v14[16];
  if ( (v15 & 8) == 0 )
  {
LABEL_29:
    if ( (v15 & 0x10) == 0 )
      goto LABEL_30;
    goto LABEL_72;
  }
LABEL_71:
  sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x678u);
  v15 = v14[16];
  if ( (v15 & 0x10) == 0 )
  {
LABEL_30:
    if ( (v15 & 0x20) == 0 )
      goto LABEL_31;
    goto LABEL_73;
  }
LABEL_72:
  sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x686u);
  v15 = v14[16];
  if ( (v15 & 0x20) == 0 )
  {
LABEL_31:
    if ( (v15 & 0x40) == 0 )
      goto LABEL_32;
    goto LABEL_74;
  }
LABEL_73:
  sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x687u);
  v15 = v14[16];
  if ( (v15 & 0x40) == 0 )
  {
LABEL_32:
    if ( v15 >= 0 )
      goto LABEL_33;
    goto LABEL_75;
  }
LABEL_74:
  sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x685u);
  if ( (char)v14[16] >= 0 )
  {
LABEL_33:
    v16 = v14[17];
    if ( (v16 & 1) == 0 )
      goto LABEL_34;
    goto LABEL_76;
  }
LABEL_75:
  sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x67Cu);
  v16 = v14[17];
  if ( (v16 & 1) == 0 )
  {
LABEL_34:
    if ( (v16 & 2) == 0 )
      goto LABEL_35;
    goto LABEL_77;
  }
LABEL_76:
  sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x67Fu);
  v16 = v14[17];
  if ( (v16 & 2) == 0 )
  {
LABEL_35:
    if ( (v16 & 4) == 0 )
      goto LABEL_36;
    goto LABEL_78;
  }
LABEL_77:
  sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x67Eu);
  v16 = v14[17];
  if ( (v16 & 4) == 0 )
  {
LABEL_36:
    if ( (v16 & 8) == 0 )
      goto LABEL_37;
    goto LABEL_79;
  }
LABEL_78:
  sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x67Bu);
  v16 = v14[17];
  if ( (v16 & 8) == 0 )
  {
LABEL_37:
    if ( (v16 & 0x10) == 0 )
      goto LABEL_38;
    goto LABEL_80;
  }
LABEL_79:
  sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x18Au);
  v16 = v14[17];
  if ( (v16 & 0x10) == 0 )
  {
LABEL_38:
    if ( (v16 & 0x20) == 0 )
      goto LABEL_39;
    goto LABEL_81;
  }
LABEL_80:
  sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x683u);
  if ( (v14[17] & 0x20) == 0 )
  {
LABEL_39:
    v17 = v14[19];
    if ( (v17 & 0x40) == 0 )
      goto LABEL_40;
LABEL_82:
    sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x681u);
    if ( (char)v14[19] >= 0 )
      goto LABEL_41;
    goto LABEL_83;
  }
LABEL_81:
  sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x682u);
  v17 = v14[19];
  if ( (v17 & 0x40) != 0 )
    goto LABEL_82;
LABEL_40:
  if ( v17 >= 0 )
    goto LABEL_41;
LABEL_83:
  sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x679u);
LABEL_41:
  sub_13317C0(*a1, a2, a3, v37, *(unsigned int *)(a1[20] + 16LL));
  sub_1310180(a1[16], a2, a3, v37, a1[20] + 72LL, *a1);
  sub_131C2F0(a1[8], (void (__fastcall *)(__int64, void **))a2, a3, (_BYTE *)*a1, a1[20], a1[16]);
  v18 = (char *)a1[24];
  v19 = *(unsigned int *)(a1[20] + 208LL);
  v20 = *v18;
  if ( (*v18 & 0x10) != 0 )
  {
    v34.m128i_i64[1] = 3;
    v36 = 261;
    v34.m128i_i64[0] = (__int64)"-CC";
    a2(a3, &v34);
    v20 = *v18;
  }
  if ( (v20 & 2) != 0 )
  {
    v34.m128i_i64[1] = 2;
    v36 = 261;
    v34.m128i_i64[0] = (__int64)"-C";
    a2(a3, &v34);
    v20 = *v18;
  }
  if ( (v20 & 4) == 0 )
  {
    v34.m128i_i64[0] = (__int64)"-P";
    v36 = 261;
    v34.m128i_i64[1] = 2;
    a2(a3, &v34);
    v20 = *v18;
  }
  if ( (v20 & 0x40) != 0 )
  {
    v34.m128i_i64[0] = (__int64)"-dI";
    v36 = 261;
    v34.m128i_i64[1] = 3;
    a2(a3, &v34);
    v20 = *v18;
  }
  if ( v20 < 0 )
  {
    v34.m128i_i64[0] = (__int64)"-dE";
    v36 = 261;
    v34.m128i_i64[1] = 3;
    a2(a3, &v34);
    v21 = v18[1];
    if ( (v21 & 2) == 0 )
    {
LABEL_51:
      if ( (v21 & 1) == 0 )
        goto LABEL_52;
      goto LABEL_86;
    }
  }
  else
  {
    v21 = v18[1];
    if ( (v21 & 2) == 0 )
      goto LABEL_51;
  }
  v34.m128i_i64[1] = j__strlen("-frewrite-imports");
  v36 = 261;
  v34.m128i_i64[0] = (__int64)"-frewrite-imports";
  a2(a3, &v34);
  if ( (v18[1] & 1) == 0 )
  {
LABEL_52:
    if ( (*v18 & 8) == 0 )
      goto LABEL_53;
LABEL_87:
    v26 = j__strlen("-fuse-line-directives");
    v36 = 261;
    v34.m128i_i64[1] = v26;
    v34.m128i_i64[0] = (__int64)"-fuse-line-directives";
    a2(a3, &v34);
    v22 = v18[1];
    if ( (v22 & 4) == 0 )
      goto LABEL_54;
    goto LABEL_88;
  }
LABEL_86:
  v25 = j__strlen("-frewrite-includes");
  v36 = 261;
  v34.m128i_i64[0] = (__int64)"-frewrite-includes";
  v34.m128i_i64[1] = v25;
  a2(a3, &v34);
  if ( (*v18 & 8) != 0 )
    goto LABEL_87;
LABEL_53:
  v22 = v18[1];
  if ( (v22 & 4) == 0 )
    goto LABEL_54;
LABEL_88:
  v27 = j__strlen("-fminimize-whitespace");
  v36 = 261;
  v34.m128i_i64[1] = v27;
  v34.m128i_i64[0] = (__int64)"-fminimize-whitespace";
  a2(a3, &v34);
  v22 = v18[1];
LABEL_54:
  if ( (v22 & 0x10) != 0 )
  {
    v24 = j__strlen("-fkeep-system-includes");
    v36 = 261;
    v34.m128i_i64[0] = (__int64)"-fkeep-system-includes";
    v34.m128i_i64[1] = v24;
    a2(a3, &v34);
  }
  v23 = 0x78F7FFF8FLL;
  if ( _bittest64(&v23, v19) || (*v18 & 1) != 0 )
  {
    if ( (*v18 & 0x20) != 0 )
      sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x107u);
  }
  else
  {
    sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x129u);
  }
  if ( (v18[1] & 8) != 0 )
    sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x26Bu);
  sub_130B980((char *)a1[22], (void (__fastcall *)(__int64, void **))a2, a3);
  if ( v37[0] != &v38 )
    operator delete(v37[0]);
}
