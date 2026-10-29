void __fastcall sub_1377320(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  size_t v5; // rbp
  void *v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rsi
  unsigned int v16; // eax
  __int8 *v17; // rsi
  signed __int64 v18; // r14
  __int64 v19; // rbp
  __int8 *v20; // rax
  unsigned __int64 v21; // rax
  char *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rbp
  _QWORD *v25; // rax
  _BYTE *v26; // rdi
  void *v27; // rcx
  size_t v28; // rdx
  __int64 v29; // [rsp+10h] [rbp-F8h]
  void *src; // [rsp+18h] [rbp-F0h] BYREF
  unsigned int v31; // [rsp+24h] [rbp-E4h]
  _QWORD *v32; // [rsp+28h] [rbp-E0h]
  void *v33; // [rsp+30h] [rbp-D8h]
  void **v34; // [rsp+38h] [rbp-D0h]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-C0h]
  void *v37; // [rsp+60h] [rbp-A8h]
  __m128 dest; // [rsp+68h] [rbp-A0h] BYREF
  void *v39; // [rsp+80h] [rbp-88h] BYREF
  size_t n; // [rsp+88h] [rbp-80h]
  void *v41; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v42; // [rsp+A0h] [rbp-68h] BYREF
  __m128i *v43; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v44; // [rsp+B0h] [rbp-58h]
  __m128i v45; // [rsp+B8h] [rbp-50h] BYREF

  v1 = *a1;
  ptr = nullptr;
  v2 = *(_QWORD *)(v1 + 32);
  v3 = *(unsigned int *)(v1 + 40);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  v29 = v2 + 32 * v3;
  if ( v2 == v29 )
  {
    v22 = nullptr;
    goto LABEL_27;
  }
  v34 = &v39;
  v33 = &v41;
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 8);
      src = *(void **)v2;
      v6 = src;
      v7 = sub_2244B30(src, v5);
      v8 = sub_2244CB0(&ptr, v6, v5, v7);
      v31 = v8;
      v12 = (__int64 *)((char *)ptr + 8 * v8);
      if ( !*v12 )
        goto LABEL_8;
      if ( *v12 == -8 )
        break;
      sub_A45C10(&v42, v12, 0);
LABEL_4:
      v2 += 32;
      if ( v29 == v2 )
        goto LABEL_20;
    }
    --si128.m128i_i32[2];
LABEL_8:
    v13 = sub_22300B0(v5 + 9, 8, v8, v9, v10, v11);
    v14 = (_QWORD *)v13;
    if ( v5 )
    {
      v32 = (_QWORD *)v13;
      memcpy((void *)(v13 + 8), src, v5);
      v14 = v32;
    }
    v15 = v31;
    *((_BYTE *)v14 + v5 + 8) = 0;
    *v14 = v5;
    *v12 = (__int64)v14;
    ++si128.m128i_i32[1];
    v16 = sub_22450D0(&ptr, v15);
    sub_A45C10(&v42, (__int64 *)ptr + v16, 0);
    v37 = &dest.m128_u16[4];
    v17 = *(__int8 **)v2;
    v18 = *(_QWORD *)(v2 + 8);
    v19 = a1[1];
    if ( v18 + *(_QWORD *)v2 && !v17 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v18 > 0xF )
    {
      if ( v18 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      src = *(void **)v2;
      v20 = (__int8 *)operator new(v18 + 1);
      dest.m128_u64[1] = v18;
      v17 = (__int8 *)src;
      v37 = v20;
LABEL_32:
      memcpy(v20, v17, v18);
      v20 = (__int8 *)v37;
      goto LABEL_15;
    }
    if ( v18 == 1 )
    {
      dest.m128_i8[8] = *v17;
      v20 = &dest.m128_i8[8];
      goto LABEL_15;
    }
    v20 = &dest.m128_i8[8];
    if ( v18 )
      goto LABEL_32;
LABEL_15:
    dest.m128_u64[0] = v18;
    v20[v18] = 0;
    LOWORD(v42) = 6;
    if ( (unsigned __int8)sub_22296D0(v37, dest.m128_u64[0], 0) )
      goto LABEL_16;
    sub_222A8E0(v34, v37, dest.m128_u64[0]);
    v26 = v37;
    if ( v39 == v33 )
    {
      v28 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)v37 = (_BYTE)v41;
        else
          memcpy(v37, v33, n);
        v28 = n;
        v26 = v37;
      }
      dest.m128_u64[0] = v28;
      v26[v28] = 0;
      v26 = v39;
      goto LABEL_38;
    }
    if ( v37 == &dest.m128_u16[4] )
    {
      src = v41;
      v37 = v39;
      dest = _mm_loadh_ps((const double *)&src);
    }
    else
    {
      src = v41;
      v27 = (void *)dest.m128_u64[1];
      v37 = v39;
      dest = _mm_loadh_ps((const double *)&src);
      if ( v26 )
      {
        v39 = v26;
        v41 = v27;
        goto LABEL_38;
      }
    }
    v39 = v33;
    v26 = v33;
LABEL_38:
    n = 0;
    *v26 = 0;
    if ( v39 != v33 )
      operator delete(v39);
LABEL_16:
    v43 = &v45;
    if ( v37 == &dest.m128_u16[4] )
    {
      v45 = _mm_load_si128((const __m128i *)&dest.m128_u16[4]);
    }
    else
    {
      v43 = (__m128i *)v37;
      v45.m128i_i64[0] = dest.m128_i64[1];
    }
    v21 = dest.m128_u64[0];
    v37 = &dest.m128_u16[4];
    dest.m128_u64[0] = 0;
    v44 = v21;
    dest.m128_i8[8] = 0;
    sub_222CAC0(v19, &v42);
    sub_222B2A0(&v42);
    if ( v37 == &dest.m128_u16[4] )
      goto LABEL_4;
    operator delete(v37);
    v2 += 32;
  }
  while ( v29 != v2 );
LABEL_20:
  v22 = (char *)ptr;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v23 = 0;
    v24 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    do
    {
      v25 = *(_QWORD **)&v22[v23];
      if ( v25 != (_QWORD *)-8LL && v25 )
      {
        operator delete(*(_QWORD *)&v22[v23], *v25 + 9LL, 8);
        v22 = (char *)ptr;
      }
      v23 += 8;
    }
    while ( v24 != v23 );
  }
LABEL_27:
  free(v22);
}
