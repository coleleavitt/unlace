__int64 *__fastcall sub_111D970(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r15
  _QWORD *i; // rbx
  _BYTE *v5; // rsi
  __int64 v6; // rdx
  _BYTE *v7; // rsi
  __int64 v8; // rdx
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  __m128i v19; // xmm0
  _BYTE *v20; // rax
  _BYTE *v21; // r14
  signed __int64 v22; // rbp
  _QWORD *v23; // r15
  signed __int64 v24; // rbp
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  __m128i v27; // xmm0
  _BYTE *v28; // rax
  _BYTE *v29; // r14
  signed __int64 v30; // rbp
  char **v31; // rbp
  __int64 *v32; // r14
  void **v33; // rdi
  void **v34; // r15
  void **v35; // rbx
  char **v36; // rdi
  char **v37; // rdi
  void **v38; // rbp
  void **v39; // rbx
  __int64 v41; // [rsp+8h] [rbp-1C0h]
  _QWORD *v42; // [rsp+8h] [rbp-1C0h]
  __m128i v43; // [rsp+10h] [rbp-1B8h] BYREF
  void *v44[2]; // [rsp+20h] [rbp-1A8h] BYREF
  _BYTE v45[16]; // [rsp+30h] [rbp-198h] BYREF
  void *v46[2]; // [rsp+40h] [rbp-188h] BYREF
  _BYTE v47[16]; // [rsp+50h] [rbp-178h] BYREF
  void *v48[2]; // [rsp+60h] [rbp-168h] BYREF
  _BYTE v49[16]; // [rsp+70h] [rbp-158h] BYREF
  void *v50[2]; // [rsp+80h] [rbp-148h] BYREF
  __int64 v51; // [rsp+90h] [rbp-138h]
  char *v52[2]; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-118h] BYREF
  __int64 *v54; // [rsp+C0h] [rbp-108h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 *v56; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-D8h] BYREF
  __m128i v58; // [rsp+100h] [rbp-C8h]
  char *v59; // [rsp+110h] [rbp-B8h]
  __int64 *v60; // [rsp+118h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+128h] [rbp-A0h] BYREF
  __int64 *v62; // [rsp+138h] [rbp-90h] BYREF
  __int64 v63; // [rsp+148h] [rbp-80h] BYREF
  __int64 *v64; // [rsp+158h] [rbp-70h] BYREF
  __int64 v65; // [rsp+168h] [rbp-60h] BYREF
  __m128i v66; // [rsp+178h] [rbp-50h]
  char *v67; // [rsp+188h] [rbp-40h]
  char v68; // [rsp+190h] [rbp-38h] BYREF

  v43.m128i_i64[1] = a1;
  v44[0] = v45;
  sub_1117C40(v44, nullptr, 0);
  v46[0] = v47;
  sub_1117C40(v46, nullptr, 0);
  v48[0] = v49;
  sub_1117C40(v48, nullptr, 0);
  v51 = 0;
  *(_OWORD *)v50 = 0;
  sub_1119A00((__int64)v44);
  sub_1119A00((__int64)v46);
  sub_1119A00((__int64)v48);
  v3 = *(_QWORD **)(a2 + 104);
  for ( i = *(_QWORD **)(a2 + 96); v3 != i; i += 4 )
  {
    while ( 1 )
    {
      v5 = (_BYTE *)*i;
      if ( *(_BYTE *)*i == 45 )
        break;
      i += 4;
      if ( v3 == i )
        goto LABEL_6;
    }
    v6 = i[1];
    sub_11C67F0(0, v5, v6, v50);
  }
LABEL_6:
  v7 = *(_BYTE **)a2;
  v8 = *(_QWORD *)a2 + *(_QWORD *)(a2 + 8);
  v52[0] = (char *)&v53;
  sub_1117B80(v52, v7, v8);
  v9 = *(_BYTE **)(a2 + 32);
  v10 = *(_QWORD *)(a2 + 40);
  v54 = &v55;
  sub_1117B80(&v54, v9, (__int64)&v9[v10]);
  v11 = *(_BYTE **)(a2 + 64);
  v12 = *(_QWORD *)(a2 + 72);
  v56 = &v57;
  sub_1117B80(&v56, v11, (__int64)&v11[v12]);
  v13 = *(_QWORD *)(a2 + 104);
  v14 = *(_QWORD *)(a2 + 96);
  v58 = 0;
  v41 = v13;
  v59 = nullptr;
  v15 = v13 - v14;
  v16 = (v13 - v14) >> 5;
  if ( v16 )
  {
    if ( v16 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_74;
    v17 = (_QWORD *)operator new(v15);
    v14 = *(_QWORD *)(a2 + 96);
    v18 = v17;
    v41 = *(_QWORD *)(a2 + 104);
  }
  else
  {
    v18 = nullptr;
  }
  v43.m128i_i64[0] = (__int64)v18;
  v19 = _mm_loadl_epi64(&v43);
  v59 = (char *)v18 + v15;
  v58 = _mm_unpacklo_epi64(v19, v19);
  if ( v14 != v41 )
  {
    while ( 1 )
    {
      *v18 = v18 + 2;
      v21 = *(_BYTE **)v14;
      v22 = *(_QWORD *)(v14 + 8);
      if ( v22 + *(_QWORD *)v14 && !v21 )
LABEL_73:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v22 > 0xF )
        break;
      v20 = (_BYTE *)*v18;
      if ( v22 == 1 )
      {
        *v20 = *v21;
        v20 = (_BYTE *)*v18;
      }
      else if ( v22 )
      {
        goto LABEL_21;
      }
LABEL_12:
      v18[1] = v22;
      v14 += 32;
      v18 += 4;
      v20[v22] = 0;
      if ( v14 == v41 )
        goto LABEL_22;
    }
    if ( v22 < 0 )
LABEL_72:
      std::__throw_length_error("basic_string::_M_create");
    v20 = (_BYTE *)operator new(v22 + 1);
    v18[2] = v22;
    *v18 = v20;
LABEL_21:
    memcpy(v20, v21, v22);
    v20 = (_BYTE *)*v18;
    goto LABEL_12;
  }
LABEL_22:
  v60 = &v61;
  v58.m128i_i64[1] = (__int64)v18;
  sub_1117B80(&v60, (_BYTE *)v44[0], (__int64)v44[0] + (unsigned __int64)v44[1]);
  v62 = &v63;
  sub_1117B80(&v62, (_BYTE *)v46[0], (__int64)v46[0] + (unsigned __int64)v46[1]);
  v64 = &v65;
  sub_1117B80(&v64, (_BYTE *)v48[0], (__int64)v48[0] + (unsigned __int64)v48[1]);
  v23 = v50[0];
  v66 = 0;
  v42 = v50[1];
  v67 = nullptr;
  v24 = (char *)v50[1] - (char *)v50[0];
  if ( ((char *)v50[1] - (char *)v50[0]) >> 5 )
  {
    if ( (unsigned __int64)(((char *)v50[1] - (char *)v50[0]) >> 5) <= 0x7FFFFFFFFFFFFFFLL )
    {
      v25 = (_QWORD *)operator new((char *)v50[1] - (char *)v50[0]);
      v23 = v50[0];
      v26 = v25;
      v42 = v50[1];
      goto LABEL_25;
    }
LABEL_74:
    std::__throw_bad_alloc();
  }
  v26 = nullptr;
LABEL_25:
  v43.m128i_i64[0] = (__int64)v26;
  v27 = _mm_loadl_epi64(&v43);
  v67 = (char *)v26 + v24;
  v66 = _mm_unpacklo_epi64(v27, v27);
  if ( v23 != v42 )
  {
    while ( 1 )
    {
      *v26 = v26 + 2;
      v29 = (_BYTE *)*v23;
      v30 = v23[1];
      if ( v30 + *v23 && !v29 )
        goto LABEL_73;
      if ( (unsigned __int64)v30 > 0xF )
        break;
      v28 = (_BYTE *)*v26;
      if ( v30 == 1 )
      {
        *v28 = *v29;
        v28 = (_BYTE *)*v26;
      }
      else if ( v30 )
      {
        goto LABEL_37;
      }
LABEL_28:
      v26[1] = v30;
      v23 += 4;
      v26 += 4;
      v28[v30] = 0;
      if ( v23 == v42 )
        goto LABEL_38;
    }
    if ( v30 < 0 )
      goto LABEL_72;
    v28 = (_BYTE *)operator new(v30 + 1);
    v26[2] = v30;
    *v26 = v28;
LABEL_37:
    memcpy(v28, v29, v30);
    v28 = (_BYTE *)*v26;
    goto LABEL_28;
  }
LABEL_38:
  v66.m128i_i64[1] = (__int64)v26;
  v31 = (char **)&v68;
  v32 = sub_111A650((__int64 *)v43.m128i_i64[1], v52, 2);
  do
  {
    while ( 1 )
    {
      v31 -= 15;
      v33 = (void **)v31[12];
      v34 = (void **)v31[13];
      v35 = v33;
      if ( v34 != v33 )
      {
        do
        {
          while ( *v35 != v35 + 2 )
          {
            operator delete(*v35);
            v35 += 4;
            if ( v35 == v34 )
              goto LABEL_42;
          }
          v35 += 4;
        }
        while ( v34 != v35 );
LABEL_42:
        v33 = (void **)v31[12];
      }
      if ( v33 )
        operator delete(v33);
      v36 = (char **)v31[8];
      if ( v36 != v31 + 10 )
        operator delete(v36);
      v37 = (char **)v31[4];
      if ( v37 != v31 + 6 )
        operator delete(v37);
      if ( *v31 == (char *)(v31 + 2) )
        break;
      operator delete(*v31);
      if ( v31 == v52 )
        goto LABEL_51;
    }
  }
  while ( v31 != v52 );
LABEL_51:
  v38 = (void **)v50[1];
  v39 = (void **)v50[0];
  if ( v50[1] != v50[0] )
  {
    do
    {
      while ( *v39 != v39 + 2 )
      {
        operator delete(*v39);
        v39 += 4;
        if ( v39 == v38 )
          goto LABEL_54;
      }
      v39 += 4;
    }
    while ( v38 != v39 );
LABEL_54:
    v39 = (void **)v50[0];
  }
  if ( v39 )
    operator delete(v39);
  if ( v48[0] != v49 )
    operator delete(v48[0]);
  if ( v46[0] != v47 )
    operator delete(v46[0]);
  if ( v44[0] != v45 )
    operator delete(v44[0]);
  return v32;
}
