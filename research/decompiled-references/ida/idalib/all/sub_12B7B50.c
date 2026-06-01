void __fastcall sub_12B7B50(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  __int64 v9; // rax
  size_t v10; // rbx
  const void *v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  _QWORD *v15; // r15
  char *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // rdi
  __int64 v20; // rax
  size_t v21; // r14
  size_t v22; // rcx
  __int64 v23; // r15
  __m128i v24; // xmm0
  char *v25; // rax
  _BYTE *v26; // r8
  signed __int64 v27; // r15
  unsigned __int64 v28; // rdi
  _BYTE *v29; // rax
  _QWORD *v30; // r9
  _BYTE *v31; // rax
  __m128i v32; // xmm0
  __m128i *v33; // rax
  size_t v34; // [rsp+0h] [rbp-1A8h]
  _QWORD *v35; // [rsp+0h] [rbp-1A8h]
  _BYTE *v36; // [rsp+0h] [rbp-1A8h]
  size_t v37; // [rsp+8h] [rbp-1A0h]
  size_t v38; // [rsp+8h] [rbp-1A0h]
  char *v39; // [rsp+10h] [rbp-198h] BYREF
  __int16 v40; // [rsp+30h] [rbp-178h]
  char v41[32]; // [rsp+40h] [rbp-168h] BYREF
  __int16 v42; // [rsp+60h] [rbp-148h]
  _WORD v43[24]; // [rsp+70h] [rbp-138h] BYREF
  void *src; // [rsp+A0h] [rbp-108h] BYREF
  size_t n; // [rsp+A8h] [rbp-100h]
  _QWORD v46[2]; // [rsp+B0h] [rbp-F8h] BYREF
  __int16 v47; // [rsp+C0h] [rbp-E8h]
  void *ptr; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-D0h] BYREF
  _WORD v50[96]; // [rsp+E8h] [rbp-C0h] BYREF

  LODWORD(ptr) = 3033;
  v5 = sub_21B6DA0(a2, &ptr, 1);
  v6 = a2[1];
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 == v8 )
    goto LABEL_5;
  while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3033) )
  {
    if ( v8 == ++v7 )
      goto LABEL_5;
  }
  if ( v7 == v8 )
  {
LABEL_5:
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(v9 + 256);
    v11 = *(const void **)(v9 + 248);
    ptr = v50;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v10 > 0x80 )
    {
      sub_2236E10(&ptr, v50, v10, 1);
      v19 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v10 )
        goto LABEL_7;
      v19 = (char *)v50;
    }
    memcpy(v19, v11, v10);
    v10 += si128.m128i_i64[0];
LABEL_7:
    si128.m128i_i64[0] = v10;
    v47 = 257;
    v43[16] = 257;
    v42 = 257;
    v39 = "include";
    v40 = 259;
    sub_228A3B0(&ptr, &v39, v41, v43, &src);
    v47 = 261;
    src = ptr;
    n = si128.m128i_i64[0];
    sub_112FA80((__int64)a2, (__int64)a3, (__int64)&src);
    if ( ptr != v50 )
      free(ptr);
    goto LABEL_9;
  }
  do
  {
    v17 = *v7;
    if ( *(_QWORD *)(*v7 + 16LL) )
      v17 = *(_QWORD *)(*v7 + 16LL);
    ++v7;
    *(_BYTE *)(v17 + 44) |= 1u;
    if ( v7 == v8 )
      break;
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3033) )
    {
      if ( v8 == ++v7 )
        goto LABEL_9;
    }
  }
  while ( v8 != v7 );
LABEL_9:
  LODWORD(ptr) = 3055;
  v12 = sub_21B6DA0(a2, &ptr, 1);
  v13 = a2[1];
  v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
  v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
  if ( v14 == v15 )
    goto LABEL_13;
  while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3055) )
  {
    if ( v15 == ++v14 )
      goto LABEL_13;
  }
  if ( v14 == v15 )
  {
LABEL_13:
    v16 = getenv("NCC_C_INCLUDE_PATH");
    if ( v16 )
    {
      src = v16;
      v43[0] = 58;
      si128.m128i_i64[0] = 0x400000000LL;
      ptr = &si128.m128i_u64[1];
      n = strlen(v16);
      sub_22471D0(&src, &ptr, v43, 1, 0xFFFFFFFFLL, 1);
      sub_112D6D0(a2, a3, (__int64 *)ptr, si128.m128i_u32[0]);
      if ( ptr != &si128.m128i_u64[1] )
        free(ptr);
      return;
    }
    v20 = *(_QWORD *)(a1 + 8);
    src = v46;
    sub_12B7650(&src, *(_BYTE **)(v20 + 488), *(_QWORD *)(v20 + 488) + *(_QWORD *)(v20 + 496));
    v21 = n;
    if ( 0x7FFFFFFFFFFFFFFFLL - n <= 0x12 )
      std::__throw_length_error("basic_string::append");
    v22 = n + 19;
    if ( src == v46 )
    {
      v23 = 15;
      if ( v22 <= 0xF )
        goto LABEL_42;
    }
    else
    {
      v23 = v46[0];
      if ( v22 <= v46[0] )
      {
LABEL_42:
        v24 = _mm_load_si128((const __m128i *)&xmmword_23A9F80);
        v25 = (char *)src + n;
        *((_WORD *)v25 + 8) = 25717;
        *(__m128i *)v25 = v24;
        v25[18] = 101;
        v26 = src;
LABEL_43:
        n = v22;
        v26[v21 + 19] = 0;
        ptr = &src;
        v50[4] = 260;
        sub_112FA80((__int64)a2, (__int64)a3, (__int64)&ptr);
        if ( src != v46 )
          operator delete(src);
        return;
      }
    }
    if ( (v22 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    v27 = 2 * v23;
    if ( v22 < v27 )
    {
      v28 = v27 + 1;
      if ( v27 < 0 )
      {
        v28 = 0x8000000000000000LL;
        v27 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v28 = n + 20;
      v27 = n + 19;
    }
    v34 = n + 19;
    v29 = (_BYTE *)operator new(v28);
    v22 = v21 + 19;
    v30 = src;
    v26 = v29;
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        *v29 = *(_BYTE *)src;
      }
      else
      {
        v37 = v34;
        v35 = src;
        v31 = memcpy(v29, src, v21);
        v22 = v37;
        v30 = v35;
        v26 = v31;
      }
    }
    v32 = _mm_load_si128((const __m128i *)&xmmword_23A9F80);
    v33 = (__m128i *)&v26[v21];
    v33[1].m128i_i16[0] = 25717;
    *v33 = v32;
    v33[1].m128i_i8[2] = 101;
    if ( v30 != v46 )
    {
      v38 = v22;
      v36 = v26;
      operator delete(v30);
      v22 = v38;
      v26 = v36;
    }
    src = v26;
    v46[0] = v27;
    goto LABEL_43;
  }
  do
  {
    v18 = *v14;
    if ( *(_QWORD *)(*v14 + 16LL) )
      v18 = *(_QWORD *)(*v14 + 16LL);
    ++v14;
    *(_BYTE *)(v18 + 44) |= 1u;
    if ( v14 == v15 )
      break;
    while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3055) )
    {
      if ( v15 == ++v14 )
        return;
    }
  }
  while ( v14 != v15 );
}
