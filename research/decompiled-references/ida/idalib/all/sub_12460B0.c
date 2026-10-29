__m128i *__fastcall sub_12460B0(__m128i *a1, __int64 *a2, __int64 a3, __int64 a4, char *a5)
{
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  size_t v10; // rax
  _BYTE *v11; // rdi
  size_t v12; // r15
  unsigned __int64 v13; // rdx
  char *v14; // rdi
  int v15; // eax
  __int64 v17; // rsi
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  _BYTE *v21; // rdi
  void *src; // [rsp+10h] [rbp-A8h] BYREF
  size_t n; // [rsp+18h] [rbp-A0h]
  _QWORD v25[2]; // [rsp+20h] [rbp-98h] BYREF
  void *v26[2]; // [rsp+30h] [rbp-88h] BYREF
  __m128i v27; // [rsp+40h] [rbp-78h] BYREF
  void **v28; // [rsp+50h] [rbp-68h] BYREF
  __int16 v29; // [rsp+70h] [rbp-48h]

  v8 = *(_BYTE **)a4;
  v9 = *(_QWORD *)a4 + *(_QWORD *)(a4 + 8);
  src = v25;
  sub_1244640(&src, v8, v9);
  v10 = strlen(a5);
  if ( 0x7FFFFFFFFFFFFFFFLL - n < v10 )
    std::__throw_length_error("basic_string::append");
  v11 = src;
  v12 = n + v10;
  if ( src == v25 )
    v13 = 15;
  else
    v13 = v25[0];
  if ( v12 > v13 )
  {
    sub_998B30((__int64)&src, n, 0, a5, v10);
    v11 = src;
  }
  else if ( v10 )
  {
    v14 = (char *)src + n;
    if ( v10 == 1 )
      *v14 = *a5;
    else
      memcpy(v14, a5, v10);
    v11 = src;
  }
  n = v12;
  v11[v12] = 0;
  sub_112D4E0(v26, *a2, (char *)src);
  v29 = 260;
  v28 = v26;
  v15 = sub_228C1E0(&v28, 0);
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( v15 )
  {
    sub_1244640(a1, *(_BYTE **)a3, *(_QWORD *)a3 + *(_QWORD *)(a3 + 8));
    v17 = a1->m128i_i64[1];
    v18 = (_QWORD *)a1->m128i_i64[0];
    v19 = n + v17;
    if ( (__m128i *)a1->m128i_i64[0] == &a1[1] )
      v20 = 15;
    else
      v20 = a1[1].m128i_u64[0];
    if ( v19 > v20 )
    {
      sub_998B30((__int64)a1, v17, 0, src, n);
      v18 = (_QWORD *)a1->m128i_i64[0];
    }
    else if ( n )
    {
      v21 = (char *)v18 + v17;
      if ( n == 1 )
        *v21 = *(_BYTE *)src;
      else
        memcpy(v21, src, n);
      v18 = (_QWORD *)a1->m128i_i64[0];
    }
    a1->m128i_i64[1] = v19;
    *((_BYTE *)v18 + v19) = 0;
    if ( v26[0] != &v27 )
      operator delete(v26[0]);
  }
  else
  {
    if ( v26[0] == &v27 )
    {
      a1[1] = _mm_load_si128(&v27);
    }
    else
    {
      a1->m128i_i64[0] = (__int64)v26[0];
      a1[1].m128i_i64[0] = v27.m128i_i64[0];
    }
    a1->m128i_i64[1] = (__int64)v26[1];
  }
  if ( src != v25 )
    operator delete(src);
  return a1;
}
