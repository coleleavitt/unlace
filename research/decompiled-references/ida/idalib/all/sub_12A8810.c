void __fastcall sub_12A8810(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  _QWORD *v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *v14; // r15
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  size_t v17; // r15
  size_t v18; // r9
  unsigned __int64 v19; // rdx
  _BYTE *v20; // rsi
  __int64 v21; // rdx
  size_t v22; // r13
  unsigned __int64 v23; // rdx
  char *v24; // rax
  __m128i si128; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  size_t v28; // rbx
  void *v29; // rax
  char *v30; // rdi
  _QWORD *src; // [rsp+8h] [rbp-1A0h]
  void *srca; // [rsp+8h] [rbp-1A0h]
  void *srcb; // [rsp+8h] [rbp-1A0h]
  char *v34; // [rsp+10h] [rbp-198h] BYREF
  __int16 v35; // [rsp+30h] [rbp-178h]
  char v36[32]; // [rsp+40h] [rbp-168h] BYREF
  __int16 v37; // [rsp+60h] [rbp-148h]
  void *v38; // [rsp+70h] [rbp-138h] BYREF
  size_t v39; // [rsp+78h] [rbp-130h]
  _QWORD v40[2]; // [rsp+80h] [rbp-128h] BYREF
  __int16 v41; // [rsp+90h] [rbp-118h]
  void *v42; // [rsp+A0h] [rbp-108h] BYREF
  size_t v43; // [rsp+A8h] [rbp-100h]
  _QWORD v44[2]; // [rsp+B0h] [rbp-F8h] BYREF
  __int16 v45; // [rsp+C0h] [rbp-E8h]
  void *ptr; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i v47; // [rsp+D8h] [rbp-D0h]
  __int64 v48; // [rsp+E8h] [rbp-C0h] BYREF
  __int16 v49; // [rsp+F0h] [rbp-B8h]

  v6 = (_QWORD *)a1[1];
  LODWORD(ptr) = 3053;
  src = v6;
  v7 = sub_21B6DA0(a2, &ptr, 1);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = (_QWORD *)(v8 + 8LL * (unsigned int)v7);
  v10 = (_QWORD *)(v8 + 8 * HIDWORD(v7));
  if ( v9 == v10 )
    goto LABEL_5;
  while ( !*v9 || !(unsigned __int8)sub_21B9810(*v9, 3053) )
  {
    if ( v10 == ++v9 )
      goto LABEL_5;
  }
  if ( v10 == v9 )
  {
LABEL_5:
    if ( sub_10DCD30(a2, 0xBD9u) )
    {
LABEL_6:
      LODWORD(ptr) = 3055;
      v11 = sub_21B6DA0(a2, &ptr, 1);
      v12 = *(_QWORD *)(a2 + 8);
      v13 = (_QWORD *)(v12 + 8LL * (unsigned int)v11);
      v14 = (_QWORD *)(v12 + 8 * HIDWORD(v11));
      if ( v13 == v14 )
        goto LABEL_10;
      while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 3055) )
      {
        if ( v14 == ++v13 )
          goto LABEL_10;
      }
      if ( v13 == v14 )
      {
LABEL_10:
        v15 = (_BYTE *)a1[623];
        v16 = (__int64)&v15[a1[624]];
        v38 = v40;
        sub_12A5420(&v38, v15, v16);
        v17 = v39;
        if ( 0x7FFFFFFFFFFFFFFFLL - v39 <= 0xE )
          goto LABEL_56;
        v18 = v39 + 15;
        if ( v38 == v40 )
          v19 = 15;
        else
          v19 = v40[0];
        if ( v18 > v19 )
        {
          srcb = (void *)(v39 + 15);
          sub_998B30((__int64)&v38, v39, 0, "/target/include", 0xFu);
          v18 = (size_t)srcb;
        }
        else
        {
          qmemcpy((char *)v38 + v39, "/target/include", 15);
        }
        v39 = v18;
        *((_BYTE *)v38 + v17 + 15) = 0;
        ptr = &v38;
        v49 = 260;
        sub_112FAC0(a2, a3, (__int64)&ptr);
        if ( v38 != v40 )
          operator delete(v38);
        v20 = (_BYTE *)a1[623];
        v21 = (__int64)&v20[a1[624]];
        v42 = v44;
        sub_12A5420(&v42, v20, v21);
        v22 = v43;
        if ( 0x7FFFFFFFFFFFFFFFLL - v43 <= 0x15 )
LABEL_56:
          std::__throw_length_error("basic_string::append");
        if ( v42 == v44 )
          v23 = 15;
        else
          v23 = v44[0];
        if ( v43 + 22 > v23 )
        {
          sub_998B30((__int64)&v42, v43, 0, "/target/include_common", 0x16u);
        }
        else
        {
          v24 = (char *)v42 + v43;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A9F30);
          *((_DWORD *)v24 + 4) = 1835888483;
          *((_WORD *)v24 + 10) = 28271;
          *(__m128i *)v24 = si128;
        }
        v43 = v22 + 22;
        *((_BYTE *)v42 + v22 + 22) = 0;
        ptr = &v42;
        v49 = 260;
        sub_112FAC0(a2, a3, (__int64)&ptr);
        if ( v42 != v44 )
          operator delete(v42);
      }
      else
      {
        do
        {
          v27 = *v13;
          if ( *(_QWORD *)(*v13 + 16LL) )
            v27 = *(_QWORD *)(*v13 + 16LL);
          ++v13;
          *(_BYTE *)(v27 + 44) |= 1u;
          if ( v13 == v14 )
            break;
          while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 3055) )
          {
            if ( v14 == ++v13 )
              return;
          }
        }
        while ( v13 != v14 );
      }
      return;
    }
    v28 = src[32];
    v29 = (void *)src[31];
    ptr = &v48;
    v47 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v28 > 0x80 )
    {
      srca = v29;
      sub_2236E10(&ptr, &v48, v28, 1);
      v29 = srca;
      v30 = (char *)ptr + v47.m128i_i64[0];
    }
    else
    {
      if ( !v28 )
        goto LABEL_47;
      v30 = (char *)&v48;
    }
    memcpy(v30, v29, v28);
    v28 += v47.m128i_i64[0];
LABEL_47:
    v47.m128i_i64[0] = v28;
    v45 = 257;
    v41 = 257;
    v34 = "include";
    v37 = 257;
    v35 = 259;
    sub_228A3B0(&ptr, &v34, v36, &v38, &v42);
    v45 = 261;
    v42 = ptr;
    v43 = v47.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)&v42);
    if ( ptr != &v48 )
      free(ptr);
    goto LABEL_6;
  }
  do
  {
    v26 = *v9;
    if ( *(_QWORD *)(*v9 + 16LL) )
      v26 = *(_QWORD *)(*v9 + 16LL);
    ++v9;
    *(_BYTE *)(v26 + 44) |= 1u;
    if ( v9 == v10 )
      break;
    while ( !*v9 || !(unsigned __int8)sub_21B9810(*v9, 3053) )
    {
      if ( v10 == ++v9 )
        return;
    }
  }
  while ( v10 != v9 );
}
