void __fastcall sub_22ABE30(__int64 a1)
{
  __int64 v1; // rbp
  bool v2; // bl
  __m128i *p_ptr; // rsi
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r14
  _QWORD *v10; // rdx
  __int64 v11; // rax
  void *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 i; // rbp
  char *v17; // rbx
  __int64 v18; // rdx
  _QWORD *v19; // r14
  _QWORD *v20; // r15
  bool v21; // bp
  size_t v22; // rax
  char *v23; // rax
  int v24; // edx
  __m128i *v25; // rax
  void *v26; // rdi
  __m128i *v27; // r15
  size_t v28; // rax
  __int32 v29; // edx
  size_t v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  char **v33; // rcx
  __int32 v34; // edx
  void *v35; // rdi
  bool v36; // bp
  size_t v37; // rax
  char *v38; // rax
  int v39; // edx
  __m128i *v40; // rax
  void *v41; // rdi
  bool v42; // bp
  size_t v43; // rax
  char *v44; // rax
  int v45; // edx
  __m128i *v46; // rax
  void *v47; // rdi
  size_t v48; // rax
  const char *v49; // rax
  __int32 v50; // edx
  _QWORD *v51; // [rsp+0h] [rbp-1E8h]
  __int64 v52; // [rsp+8h] [rbp-1E0h]
  __int64 v53; // [rsp+8h] [rbp-1E0h]
  _QWORD *v55; // [rsp+18h] [rbp-1D0h]
  size_t v56; // [rsp+38h] [rbp-1B0h]
  void *v57[2]; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE v58[16]; // [rsp+50h] [rbp-198h] BYREF
  void *v59; // [rsp+60h] [rbp-188h] BYREF
  __int64 v60; // [rsp+68h] [rbp-180h]
  _BYTE v61[16]; // [rsp+70h] [rbp-178h] BYREF
  __m128i v62; // [rsp+80h] [rbp-168h] BYREF
  _BYTE v63[16]; // [rsp+90h] [rbp-158h] BYREF
  __m128i ptr; // [rsp+A0h] [rbp-148h] BYREF
  char v65[312]; // [rsp+B0h] [rbp-138h] BYREF

  sub_22A8B90(&ptr, "e");
  v55 = (_QWORD *)(a1 + 24);
  v51 = (_QWORD *)(a1 + 32);
  v1 = sub_22A98A0(a1 + 24, (__int64)&ptr);
  v2 = v1 != a1 + 32;
  if ( (char *)ptr.m128i_i64[0] != v65 )
    operator delete((void *)ptr.m128i_i64[0]);
  sub_22A8B90(&ptr, "i");
  p_ptr = &ptr;
  if ( v51 != (_QWORD *)sub_22A98A0((__int64)v55, (__int64)&ptr) )
  {
    if ( (char *)ptr.m128i_i64[0] != v65 )
    {
      operator delete((void *)ptr.m128i_i64[0]);
      v2 = v1 != a1 + 32;
    }
LABEL_6:
    if ( v2 )
    {
      sub_22A8B90(&ptr, "i");
      p_ptr = &ptr;
      sub_22AB990(v55, (__int64)&ptr);
      v35 = (void *)ptr.m128i_i64[0];
      if ( (char *)ptr.m128i_i64[0] != v65 )
        goto LABEL_52;
    }
    goto LABEL_7;
  }
  if ( (char *)ptr.m128i_i64[0] != v65 )
    operator delete((void *)ptr.m128i_i64[0]);
  if ( (_QWORD *)v1 != v51 )
  {
    v2 = 0;
    goto LABEL_6;
  }
  v48 = j__strlen("i");
  v49 = sub_22A8BD0("i", v48);
  v62.m128i_i32[2] = v50;
  v62.m128i_i64[0] = (__int64)v49;
  sub_22A8B90(&ptr, "i");
  p_ptr = &ptr;
  sub_22ABDA0(v55, &ptr)->m128i_i64[0] = v62.m128i_i64[0];
  v35 = (void *)ptr.m128i_i64[0];
  if ( (char *)ptr.m128i_i64[0] != v65 )
LABEL_52:
    operator delete(v35);
LABEL_7:
  v4 = 16;
  v5 = 0;
  ptr.m128i_i64[1] = 0x1000000000LL;
  ptr.m128i_i64[0] = (__int64)v65;
  v6 = *(_QWORD *)(a1 + 48);
  if ( (_QWORD *)v6 == v51 )
    goto LABEL_28;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v6 + 40);
    v9 = *(_QWORD *)(v6 + 32);
    if ( v5 + 1 > v4 )
      break;
    v7 = (_QWORD *)(ptr.m128i_i64[0] + 16 * v5);
    *v7 = v9;
    v7[1] = v8;
    v5 = (unsigned int)++ptr.m128i_i32[2];
    v6 = std::_Rb_tree_increment(v6, p_ptr->m128i_i8);
    if ( (_QWORD *)v6 == v51 )
      goto LABEL_13;
LABEL_10:
    v4 = ptr.m128i_u32[3];
  }
  p_ptr = (__m128i *)v65;
  v52 = v6;
  sub_2237220((__int64)&ptr, v65, v5 + 1, 16);
  v10 = (_QWORD *)(ptr.m128i_i64[0] + 16LL * ptr.m128i_u32[2]);
  *v10 = v9;
  v10[1] = v8;
  v5 = (unsigned int)++ptr.m128i_i32[2];
  v6 = std::_Rb_tree_increment(v52, v65);
  if ( v51 != (_QWORD *)v6 )
    goto LABEL_10;
LABEL_13:
  if ( (_DWORD)v5 )
  {
    do
    {
      v11 = ptr.m128i_i64[0] + 16LL * (unsigned int)v5 - 16;
      v12 = *(void **)v11;
      v13 = *(_QWORD *)(v11 + 8);
      ptr.m128i_i32[2] = v5 - 1;
      v59 = v12;
      v60 = v13;
      v14 = sub_22A8730((__int64)&v59);
      v53 = v15;
      for ( i = v14; i != v53; i += 24 )
      {
        v17 = *(char **)(i + 16);
        v18 = -1;
        v62.m128i_i64[0] = (__int64)v63;
        if ( v17 )
          v18 = (__int64)&v17[strlen(v17)];
        sub_22A8AD0(&v62, v17, v18);
        v19 = v51;
        v20 = *(_QWORD **)(a1 + 40);
        if ( !v20 )
          goto LABEL_43;
        do
        {
          while ( !sub_2234B00((__int64)(v20 + 4), (__int64)&v62) )
          {
            v19 = v20;
            v20 = (_QWORD *)v20[2];
            if ( !v20 )
              goto LABEL_22;
          }
          v20 = (_QWORD *)v20[3];
        }
        while ( v20 );
LABEL_22:
        if ( v51 == v19 || sub_2234B00((__int64)&v62, (__int64)(v19 + 4)) )
        {
LABEL_43:
          v57[0] = &v62;
          v27 = sub_22ABC80(v55, v19, (__m128i **)v57);
          if ( (_BYTE *)v62.m128i_i64[0] != v63 )
            operator delete((void *)v62.m128i_i64[0]);
          if ( v17 )
          {
            v28 = strlen(v17);
            v62.m128i_i64[0] = (__int64)sub_22A8BD0(v17, v28);
            v62.m128i_i32[2] = v29;
            v27[4].m128i_i64[0] = v62.m128i_i64[0];
            v30 = strlen(v17);
          }
          else
          {
            v62.m128i_i64[0] = (__int64)sub_22A8BD0(nullptr, 0);
            v62.m128i_i32[2] = v34;
            v27[4].m128i_i64[0] = v62.m128i_i64[0];
            v30 = 0;
          }
          v31 = ptr.m128i_u32[2];
          v32 = ptr.m128i_u32[2] + 1LL;
          if ( v32 > ptr.m128i_u32[3] )
          {
            v56 = v30;
            sub_2237220((__int64)&ptr, v65, v32, 16);
            v31 = ptr.m128i_u32[2];
            v30 = v56;
          }
          v33 = (char **)(ptr.m128i_i64[0] + 16 * v31);
          *v33 = v17;
          v33[1] = (char *)v30;
          ++ptr.m128i_i32[2];
        }
        else if ( (_BYTE *)v62.m128i_i64[0] != v63 )
        {
          operator delete((void *)v62.m128i_i64[0]);
        }
      }
      LODWORD(v5) = ptr.m128i_i32[2];
    }
    while ( ptr.m128i_i32[2] );
  }
LABEL_28:
  sub_22A8B90(v57, "c");
  if ( v51 == (_QWORD *)sub_22A98A0((__int64)v55, (__int64)v57) )
  {
    v26 = v57[0];
    if ( v57[0] != v58 )
      goto LABEL_38;
    if ( *(_DWORD *)a1 != 32 )
      goto LABEL_40;
LABEL_55:
    sub_22A8B90(v57, "c");
    if ( v51 == (_QWORD *)sub_22A98A0((__int64)v55, (__int64)v57) )
    {
      v41 = v57[0];
      if ( v57[0] != v58 )
LABEL_65:
        operator delete(v41);
    }
    else
    {
      v36 = 0;
      sub_22A8B90(&v59, "f");
      if ( v51 != (_QWORD *)sub_22A98A0((__int64)v55, (__int64)&v59) )
      {
        sub_22A8B90(&v62, "zcf");
        v36 = v51 == (_QWORD *)sub_22A98A0((__int64)v55, (__int64)&v62);
        if ( (_BYTE *)v62.m128i_i64[0] != v63 )
          operator delete((void *)v62.m128i_i64[0]);
      }
      if ( v59 != v61 )
        operator delete(v59);
      if ( v57[0] != v58 )
        operator delete(v57[0]);
      if ( v36 )
      {
        v37 = j__strlen("zcf");
        v38 = (char *)sub_22A8BD0((void *)"zcf", v37);
        LODWORD(v60) = v39;
        v59 = v38;
        sub_22A8B90(&v62, "zcf");
        v40 = sub_22ABDA0(v55, &v62);
        v40->m128i_i64[0] = (__int64)v59;
        v41 = (void *)v62.m128i_i64[0];
        if ( (_BYTE *)v62.m128i_i64[0] != v63 )
          goto LABEL_65;
      }
    }
    if ( *(_DWORD *)a1 != 32 )
      goto LABEL_40;
    sub_22A8B90(v57, "zce");
    if ( v51 == (_QWORD *)sub_22A98A0((__int64)v55, (__int64)v57) )
    {
      v47 = v57[0];
      if ( v57[0] == v58 )
        goto LABEL_40;
    }
    else
    {
      v42 = 0;
      sub_22A8B90(&v59, "f");
      if ( v51 != (_QWORD *)sub_22A98A0((__int64)v55, (__int64)&v59) )
      {
        sub_22A8B90(&v62, "zcf");
        v42 = v51 == (_QWORD *)sub_22A98A0((__int64)v55, (__int64)&v62);
        if ( (_BYTE *)v62.m128i_i64[0] != v63 )
          operator delete((void *)v62.m128i_i64[0]);
      }
      if ( v59 != v61 )
        operator delete(v59);
      if ( v57[0] != v58 )
        operator delete(v57[0]);
      if ( !v42 )
        goto LABEL_40;
      v43 = j__strlen("zcf");
      v44 = (char *)sub_22A8BD0((void *)"zcf", v43);
      LODWORD(v60) = v45;
      v59 = v44;
      sub_22A8B90(&v62, "zcf");
      v46 = sub_22ABDA0(v55, &v62);
      v46->m128i_i64[0] = (__int64)v59;
      v47 = (void *)v62.m128i_i64[0];
      if ( (_BYTE *)v62.m128i_i64[0] == v63 )
        goto LABEL_40;
    }
    operator delete(v47);
    goto LABEL_40;
  }
  v21 = 0;
  sub_22A8B90(&v59, (char *)"d");
  if ( v51 != (_QWORD *)sub_22A98A0((__int64)v55, (__int64)&v59) )
  {
    sub_22A8B90(&v62, "zcd");
    v21 = v51 == (_QWORD *)sub_22A98A0((__int64)v55, (__int64)&v62);
    if ( (_BYTE *)v62.m128i_i64[0] != v63 )
      operator delete((void *)v62.m128i_i64[0]);
  }
  if ( v59 != v61 )
    operator delete(v59);
  if ( v57[0] != v58 )
    operator delete(v57[0]);
  if ( v21 )
  {
    v22 = j__strlen("zcd");
    v23 = (char *)sub_22A8BD0((void *)"zcd", v22);
    LODWORD(v60) = v24;
    v59 = v23;
    sub_22A8B90(&v62, "zcd");
    v25 = sub_22ABDA0(v55, &v62);
    v25->m128i_i64[0] = (__int64)v59;
    v26 = (void *)v62.m128i_i64[0];
    if ( (_BYTE *)v62.m128i_i64[0] != v63 )
LABEL_38:
      operator delete(v26);
  }
  if ( *(_DWORD *)a1 == 32 )
    goto LABEL_55;
LABEL_40:
  if ( (char *)ptr.m128i_i64[0] != v65 )
    free((void *)ptr.m128i_i64[0]);
}
