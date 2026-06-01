__int64 *__fastcall sub_10F97E0(__int64 *a1, __int64 a2, __int64 a3)
{
  _BYTE *v5; // rsi
  __int64 v6; // rdx
  _BYTE *v7; // rsi
  __int64 v8; // rdx
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __m128i v17; // xmm0
  _BYTE *v18; // rax
  _BYTE *v19; // r13
  signed __int64 v20; // rbp
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r15
  __int64 v28; // r13
  __int64 v29; // rbp
  __int64 v30; // rax
  _QWORD *v31; // rbx
  __m128i v32; // xmm0
  _BYTE *v33; // rax
  _BYTE *v34; // r14
  signed __int64 v35; // rbp
  char **v36; // rbp
  __int64 *v37; // r14
  void **v38; // rdi
  void **v39; // r13
  void **v40; // rbx
  char **v41; // rdi
  char **v42; // rdi
  __m128i v44; // [rsp+8h] [rbp-140h] BYREF
  __int64 *v45; // [rsp+18h] [rbp-130h]
  char *v46[2]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v47; // [rsp+30h] [rbp-118h] BYREF
  __int64 *v48; // [rsp+40h] [rbp-108h] BYREF
  __int64 v49; // [rsp+50h] [rbp-F8h] BYREF
  __int64 *v50; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+70h] [rbp-D8h] BYREF
  __m128i v52; // [rsp+80h] [rbp-C8h]
  char *v53; // [rsp+90h] [rbp-B8h]
  __int64 *v54; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 *v56; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-80h] BYREF
  __int64 *v58; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-60h] BYREF
  __m128i v60; // [rsp+F8h] [rbp-50h]
  char *v61; // [rsp+108h] [rbp-40h]
  char v62; // [rsp+110h] [rbp-38h] BYREF

  v5 = *(_BYTE **)a2;
  v6 = *(_QWORD *)(a2 + 8);
  v45 = a1;
  v46[0] = (char *)&v47;
  sub_10F3E40(v46, v5, (__int64)&v5[v6]);
  v7 = *(_BYTE **)(a2 + 32);
  v8 = *(_QWORD *)(a2 + 40);
  v48 = &v49;
  sub_10F3E40(&v48, v7, (__int64)&v7[v8]);
  v9 = *(_BYTE **)(a2 + 64);
  v10 = *(_QWORD *)(a2 + 72);
  v50 = &v51;
  sub_10F3E40(&v50, v9, (__int64)&v9[v10]);
  v11 = *(_QWORD *)(a2 + 104);
  v12 = *(_QWORD *)(a2 + 96);
  v52 = 0;
  v44.m128i_i64[0] = v11;
  v53 = nullptr;
  v13 = v11 - v12;
  v14 = (v11 - v12) >> 5;
  if ( v14 )
  {
    if ( v14 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_55;
    v15 = operator new(v13);
    v12 = *(_QWORD *)(a2 + 96);
    v16 = (_QWORD *)v15;
    v44.m128i_i64[0] = *(_QWORD *)(a2 + 104);
  }
  else
  {
    v16 = nullptr;
  }
  v44.m128i_i64[1] = (__int64)v16;
  v17 = _mm_loadl_epi64((const __m128i *)&v44.m128i_u64[1]);
  v53 = (char *)v16 + v13;
  v52 = _mm_unpacklo_epi64(v17, v17);
  if ( v12 != v44.m128i_i64[0] )
  {
    while ( 1 )
    {
      *v16 = v16 + 2;
      v19 = *(_BYTE **)v12;
      v20 = *(_QWORD *)(v12 + 8);
      if ( v20 + *(_QWORD *)v12 && !v19 )
LABEL_54:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v20 > 0xF )
        break;
      v18 = (_BYTE *)*v16;
      if ( v20 == 1 )
      {
        *v18 = *v19;
        v18 = (_BYTE *)*v16;
      }
      else if ( v20 )
      {
        goto LABEL_16;
      }
LABEL_7:
      v16[1] = v20;
      v12 += 32;
      v16 += 4;
      v18[v20] = 0;
      if ( v44.m128i_i64[0] == v12 )
        goto LABEL_17;
    }
    if ( v20 < 0 )
LABEL_53:
      std::__throw_length_error("basic_string::_M_create");
    v18 = (_BYTE *)operator new(v20 + 1);
    v16[2] = v20;
    *v16 = v18;
LABEL_16:
    memcpy(v18, v19, v20);
    v18 = (_BYTE *)*v16;
    goto LABEL_7;
  }
LABEL_17:
  v21 = *(_BYTE **)a3;
  v22 = *(_QWORD *)(a3 + 8);
  v54 = &v55;
  v52.m128i_i64[1] = (__int64)v16;
  sub_10F3E40(&v54, v21, (__int64)&v21[v22]);
  v23 = *(_BYTE **)(a3 + 32);
  v24 = *(_QWORD *)(a3 + 40);
  v56 = &v57;
  sub_10F3E40(&v56, v23, (__int64)&v23[v24]);
  v25 = *(_BYTE **)(a3 + 64);
  v26 = *(_QWORD *)(a3 + 72);
  v58 = &v59;
  sub_10F3E40(&v58, v25, (__int64)&v25[v26]);
  v27 = *(_QWORD *)(a3 + 104);
  v28 = *(_QWORD *)(a3 + 96);
  v60 = 0;
  v61 = nullptr;
  v29 = v27 - v28;
  if ( (v27 - v28) >> 5 )
  {
    if ( (unsigned __int64)((v27 - v28) >> 5) <= 0x7FFFFFFFFFFFFFFLL )
    {
      v30 = operator new(v27 - v28);
      v27 = *(_QWORD *)(a3 + 104);
      v28 = *(_QWORD *)(a3 + 96);
      v31 = (_QWORD *)v30;
      goto LABEL_20;
    }
LABEL_55:
    std::__throw_bad_alloc();
  }
  v31 = nullptr;
LABEL_20:
  v44.m128i_i64[0] = (__int64)v31;
  v32 = _mm_loadl_epi64(&v44);
  v61 = (char *)v31 + v29;
  v60 = _mm_unpacklo_epi64(v32, v32);
  if ( v28 != v27 )
  {
    while ( 1 )
    {
      *v31 = v31 + 2;
      v34 = *(_BYTE **)v28;
      v35 = *(_QWORD *)(v28 + 8);
      if ( v35 + *(_QWORD *)v28 && !v34 )
        goto LABEL_54;
      if ( (unsigned __int64)v35 > 0xF )
        break;
      v33 = (_BYTE *)*v31;
      if ( v35 == 1 )
      {
        *v33 = *v34;
        v33 = (_BYTE *)*v31;
      }
      else if ( v35 )
      {
        goto LABEL_32;
      }
LABEL_23:
      v28 += 32;
      v31[1] = v35;
      v31 += 4;
      v33[v35] = 0;
      if ( v28 == v27 )
        goto LABEL_33;
    }
    if ( v35 < 0 )
      goto LABEL_53;
    v33 = (_BYTE *)operator new(v35 + 1);
    v31[2] = v35;
    *v31 = v33;
LABEL_32:
    memcpy(v33, v34, v35);
    v33 = (_BYTE *)*v31;
    goto LABEL_23;
  }
LABEL_33:
  v60.m128i_i64[1] = (__int64)v31;
  v36 = (char **)&v62;
  v37 = sub_10F6910(v45, v46, 2);
  do
  {
    while ( 1 )
    {
      v36 -= 15;
      v38 = (void **)v36[12];
      v39 = (void **)v36[13];
      v40 = v38;
      if ( v39 != v38 )
      {
        do
        {
          while ( *v40 != v40 + 2 )
          {
            operator delete(*v40);
            v40 += 4;
            if ( v40 == v39 )
              goto LABEL_37;
          }
          v40 += 4;
        }
        while ( v39 != v40 );
LABEL_37:
        v38 = (void **)v36[12];
      }
      if ( v38 )
        operator delete(v38);
      v41 = (char **)v36[8];
      if ( v41 != v36 + 10 )
        operator delete(v41);
      v42 = (char **)v36[4];
      if ( v42 != v36 + 6 )
        operator delete(v42);
      if ( *v36 == (char *)(v36 + 2) )
        break;
      operator delete(*v36);
      if ( v36 == v46 )
        return v37;
    }
  }
  while ( v36 != v46 );
  return v37;
}

