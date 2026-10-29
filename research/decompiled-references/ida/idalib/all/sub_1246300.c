__m128i *__fastcall sub_1246300(__m128i *a1, __int64 a2, _BYTE **a3, __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned __int8 (__fastcall *v11)(__int64, _QWORD *); // rax
  __int64 *v13; // rbp
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64 *, _QWORD *, size_t); // r15
  size_t v16; // r12
  size_t v17; // r10
  unsigned __int64 v18; // rdx
  _BYTE *v19; // rdi
  size_t v20; // rdx
  unsigned __int64 v21; // rax
  char v22; // bp
  _QWORD *v24; // [rsp+8h] [rbp-B0h] BYREF
  void *dest; // [rsp+10h] [rbp-A8h] BYREF
  __m128 v26; // [rsp+18h] [rbp-A0h] BYREF
  void *src; // [rsp+30h] [rbp-88h] BYREF
  size_t n; // [rsp+38h] [rbp-80h]
  _QWORD v29[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v30[4]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v31; // [rsp+70h] [rbp-48h]

  v5 = *((unsigned int *)a4 + 2);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *a4;
  v24 = (_QWORD *)a2;
  v8 = v7 + 32 * v5;
  dest = &v26.m128_u16[4];
  v9 = v7;
  v26.m128_u64[0] = 0;
  v26.m128_i8[8] = 0;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v6 + 8);
      v11 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 96LL);
      v31 = 260;
      v30[0] = v9;
      if ( v11(v10, v30) )
        break;
      v9 += 32;
      if ( v8 == v9 )
        goto LABEL_9;
    }
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    sub_1244640(a1, *(_BYTE **)v9, *(_QWORD *)v9 + *(_QWORD *)(v9 + 8));
    goto LABEL_6;
  }
LABEL_9:
  v13 = (__int64 *)sub_112C5D0((__int64)v24);
  v14 = *v13;
  v24 = v29;
  src = v29;
  v15 = *(__int64 (__fastcall **)(__int64 *, _QWORD *, size_t))(v14 + 96);
  sub_1244640(&src, *a3, (__int64)&a3[1][(_QWORD)*a3]);
  v16 = n;
  if ( 0x7FFFFFFFFFFFFFFFLL - n <= 9 )
    std::__throw_length_error("basic_string::append");
  v17 = n + 10;
  if ( src == v24 )
    v18 = 15;
  else
    v18 = v29[0];
  if ( v17 > v18 )
  {
    v24 = (_QWORD *)(n + 10);
    sub_998B30((__int64)&src, n, 0, "/../target", 0xAu);
    v17 = (size_t)v24;
  }
  else
  {
    qmemcpy((char *)src + n, "/../target", 10);
  }
  n = v17;
  *((_BYTE *)src + v16 + 10) = 0;
  v19 = dest;
  if ( src == v29 )
  {
    v20 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v29[0];
      else
        memcpy(dest, src, n);
      v20 = n;
      v19 = dest;
    }
    v26.m128_u64[0] = v20;
    v19[v20] = 0;
    v19 = src;
    goto LABEL_18;
  }
  v20 = v29[0];
  if ( dest == &v26.m128_u16[4] )
  {
    v24 = (_QWORD *)v29[0];
    dest = src;
    v26 = _mm_loadh_ps((const double *)&v24);
    goto LABEL_33;
  }
  v24 = (_QWORD *)v29[0];
  v21 = v26.m128_u64[1];
  dest = src;
  v26 = _mm_loadh_ps((const double *)&v24);
  if ( !v19 )
  {
LABEL_33:
    v19 = v29;
    src = v29;
    goto LABEL_18;
  }
  src = v19;
  v29[0] = v21;
LABEL_18:
  n = 0;
  *v19 = 0;
  v31 = 260;
  v30[0] = &dest;
  v22 = v15(v13, v30, v20);
  if ( src != v29 )
    operator delete(src);
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( v22 )
  {
    if ( dest == &v26.m128_u16[4] )
    {
      a1[1] = _mm_load_si128((const __m128i *)&v26.m128_u16[4]);
    }
    else
    {
      a1->m128i_i64[0] = (__int64)dest;
      a1[1].m128i_i64[0] = v26.m128_i64[1];
    }
    a1->m128i_i64[1] = v26.m128_u64[0];
    return a1;
  }
  sub_1244640(a1, *a3, (__int64)&a3[1][(_QWORD)*a3]);
LABEL_6:
  if ( dest != &v26.m128_u16[4] )
    operator delete(dest);
  return a1;
}
