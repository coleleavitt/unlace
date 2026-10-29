void __fastcall sub_11D1500(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // r15
  size_t v13; // rbx
  const void *v14; // rax
  __int64 v15; // rax
  void **v16; // r14
  void **v17; // rbx
  void **v18; // rbp
  __int64 v19; // rax
  char *v20; // rax
  void **v21; // r15
  void **v22; // rax
  void *v23; // rdi
  char *v24; // rdi
  char *v25; // [rsp+0h] [rbp-1A8h]
  void **v26; // [rsp+0h] [rbp-1A8h]
  const void *v27; // [rsp+8h] [rbp-1A0h]
  char *v28; // [rsp+10h] [rbp-198h] BYREF
  __int16 v29; // [rsp+30h] [rbp-178h]
  char v30[32]; // [rsp+40h] [rbp-168h] BYREF
  __int16 v31; // [rsp+60h] [rbp-148h]
  void *v32[2]; // [rsp+70h] [rbp-138h] BYREF
  _WORD v33[16]; // [rsp+80h] [rbp-128h] BYREF
  void *v34; // [rsp+A0h] [rbp-108h] BYREF
  void *v35; // [rsp+A8h] [rbp-100h]
  _BYTE v36[16]; // [rsp+B0h] [rbp-F8h] BYREF
  __int16 v37; // [rsp+C0h] [rbp-E8h]
  void *ptr; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-D0h]
  __int64 v40; // [rsp+E8h] [rbp-C0h] BYREF
  __int16 v41; // [rsp+F0h] [rbp-B8h]

  v4 = *(_QWORD *)(a1 + 8);
  LODWORD(ptr) = 3053;
  v5 = sub_21B6DA0(a2, &ptr, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 == v8 )
    goto LABEL_5;
  while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3053) )
  {
    if ( v8 == ++v7 )
      goto LABEL_5;
  }
  if ( v8 == v7 )
  {
LABEL_5:
    v32[0] = v33;
    sub_11D1030(v32, *(_BYTE **)(v4 + 488), *(_QWORD *)(v4 + 488) + *(_QWORD *)(v4 + 496));
    if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v32[1] <= 0x11 )
      goto LABEL_61;
    sub_9EE560(v32, "/usr/local/include", 0x12u);
    ptr = v32;
    v41 = 260;
    sub_112FA80(a2, a3, (__int64)&ptr);
    if ( v32[0] != v33 )
      operator delete(v32[0]);
    LODWORD(ptr) = 3033;
    v9 = sub_21B6DA0(a2, &ptr, 1);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = (_QWORD *)(v10 + 8LL * (unsigned int)v9);
    v12 = (_QWORD *)(v10 + 8 * HIDWORD(v9));
    if ( v11 != v12 )
    {
      while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 3033) )
      {
        if ( v12 == ++v11 )
          goto LABEL_12;
      }
      if ( v11 != v12 )
      {
        do
        {
          v19 = *v11;
          if ( *(_QWORD *)(*v11 + 16LL) )
            v19 = *(_QWORD *)(*v11 + 16LL);
          ++v11;
          *(_BYTE *)(v19 + 44) |= 1u;
          if ( v11 == v12 )
            break;
          while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 3033) )
          {
            if ( v12 == ++v11 )
              goto LABEL_43;
          }
        }
        while ( v12 != v11 );
LABEL_43:
        sub_21B7150(&v34, a2, 2169);
        v20 = (char *)v34;
        v21 = (void **)v35;
        if ( v34 != v35 )
        {
          do
          {
            v25 = v20;
            v41 = 260;
            ptr = v20;
            sub_112FA80(a2, a3, (__int64)&ptr);
            v20 = v25 + 32;
          }
          while ( v21 != (void **)(v25 + 32) );
          v22 = (void **)v35;
          v21 = (void **)v34;
          if ( v35 != v34 )
          {
            do
            {
              while ( 1 )
              {
                v23 = *v21;
                if ( *v21 == v21 + 2 )
                  break;
                v26 = v22;
                v21 += 4;
                operator delete(v23);
                v22 = v26;
                if ( v21 == v26 )
                  goto LABEL_48;
              }
              v21 += 4;
            }
            while ( v22 != v21 );
LABEL_48:
            v21 = (void **)v34;
          }
        }
        if ( v21 )
          operator delete(v21);
        v34 = v36;
        sub_11D1030(&v34, *(_BYTE **)(v4 + 488), *(_QWORD *)(v4 + 488) + *(_QWORD *)(v4 + 496));
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - (_QWORD)v35) > 0xB )
        {
          sub_9EE560(&v34, "/usr/include", 0xCu);
          v41 = 260;
          ptr = &v34;
          sub_112FAC0(a2, a3, (__int64)&ptr);
          if ( v34 != v36 )
            operator delete(v34);
          return;
        }
LABEL_61:
        std::__throw_length_error("basic_string::append");
      }
    }
LABEL_12:
    v13 = *(_QWORD *)(v4 + 256);
    v14 = *(const void **)(v4 + 248);
    ptr = &v40;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v13 > 0x80 )
    {
      v27 = v14;
      sub_2236E10(&ptr, &v40, v13, 1);
      v14 = v27;
      v24 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v13 )
        goto LABEL_14;
      v24 = (char *)&v40;
    }
    memcpy(v24, v14, v13);
    v13 += si128.m128i_i64[0];
LABEL_14:
    si128.m128i_i64[0] = v13;
    v37 = 257;
    v31 = 257;
    v33[8] = 257;
    v29 = 259;
    v28 = "include";
    sub_228A3B0(&ptr, &v28, v30, v32, &v34);
    v37 = 261;
    v34 = ptr;
    v35 = (void *)si128.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)&v34);
    if ( ptr != &v40 )
      free(ptr);
    goto LABEL_43;
  }
  do
  {
    v15 = *v7;
    if ( *(_QWORD *)(*v7 + 16LL) )
      v15 = *(_QWORD *)(*v7 + 16LL);
    ++v7;
    *(_BYTE *)(v15 + 44) |= 1u;
    if ( v7 == v8 )
      break;
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3053) )
    {
      if ( v8 == ++v7 )
        goto LABEL_23;
    }
  }
  while ( v7 != v8 );
LABEL_23:
  sub_21B7150(&v34, a2, 2169);
  v16 = (void **)v34;
  v17 = (void **)v35;
  if ( v34 != v35 )
  {
    do
    {
      ptr = v16;
      v16 += 4;
      v41 = 260;
      sub_112FA80(a2, a3, (__int64)&ptr);
    }
    while ( v17 != v16 );
    v18 = (void **)v35;
    v17 = (void **)v34;
    if ( v35 != v34 )
    {
      do
      {
        while ( *v17 != v17 + 2 )
        {
          operator delete(*v17);
          v17 += 4;
          if ( v17 == v18 )
          {
            v17 = (void **)v34;
            goto LABEL_29;
          }
        }
        v17 += 4;
      }
      while ( v18 != v17 );
      v17 = (void **)v34;
    }
  }
LABEL_29:
  if ( v17 )
    operator delete(v17);
}
