_QWORD *__fastcall sub_10DAE60(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  const void *v5; // r13
  size_t v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  size_t v9; // rdx
  __int64 v10; // rdi
  const void *v11; // r13
  size_t v12; // rbp
  _BYTE *v13; // rsi
  __int64 v14; // rdx
  char *v16; // rdi
  char *v17; // [rsp+0h] [rbp-188h] BYREF
  __int16 v18; // [rsp+20h] [rbp-168h]
  char *v19; // [rsp+30h] [rbp-158h] BYREF
  __int16 v20; // [rsp+50h] [rbp-138h]
  char *v21; // [rsp+60h] [rbp-128h] BYREF
  __int16 v22; // [rsp+80h] [rbp-108h]
  _BYTE v23[32]; // [rsp+90h] [rbp-F8h] BYREF
  __int16 v24; // [rsp+B0h] [rbp-D8h]
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-C0h]
  _BYTE v27[176]; // [rsp+D8h] [rbp-B0h] BYREF

  v5 = (const void *)sub_228A4B0(a2, a3, 0);
  v6 = v4;
  ptr = v27;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v4 > 0x80 )
  {
    sub_2236E10(&ptr, v27, v4, 1);
    v16 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    v7 = v4;
    if ( !v4 )
      goto LABEL_3;
    v16 = v27;
  }
  memcpy(v16, v5, v6);
  v7 = v6 + si128.m128i_i64[0];
LABEL_3:
  si128.m128i_i64[0] = v7;
  v8 = sub_228A4B0(v5, v6, 0);
  v10 = 0;
  si128.m128i_i64[0] = 0;
  v11 = (const void *)v8;
  v12 = v9;
  if ( v9 > si128.m128i_i64[1] )
  {
    sub_2236E10(&ptr, v27, v9, 1);
    v10 = si128.m128i_i64[0];
  }
  if ( v12 )
  {
    memcpy((char *)ptr + v10, v11, v12);
    v10 = si128.m128i_i64[0];
  }
  v24 = 257;
  v21 = "21";
  v22 = 259;
  v19 = "clang";
  v20 = 259;
  v18 = 259;
  v17 = "lib";
  si128.m128i_i64[0] = v10 + v12;
  sub_228A3B0(&ptr, &v17, &v19, &v21, v23);
  v13 = ptr;
  v14 = si128.m128i_i64[0];
  *a1 = a1 + 2;
  sub_10D8DB0(a1, v13, (__int64)&v13[v14]);
  if ( ptr != v27 )
    free(ptr);
  return a1;
}
