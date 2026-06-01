_QWORD *__fastcall sub_1FF31C0(_QWORD *a1)
{
  __int64 v2; // rax
  size_t v3; // rdx
  __int64 v4; // rdi
  const void *v5; // r15
  size_t v6; // rbx
  _BYTE *v7; // rsi
  __int64 v8; // rdx
  void *v10[2]; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v11; // [rsp+10h] [rbp-1A8h] BYREF
  const char *v12; // [rsp+20h] [rbp-198h] BYREF
  __int16 v13; // [rsp+40h] [rbp-178h]
  _BYTE v14[32]; // [rsp+50h] [rbp-168h] BYREF
  __int16 v15; // [rsp+70h] [rbp-148h]
  _BYTE v16[32]; // [rsp+80h] [rbp-138h] BYREF
  __int16 v17; // [rsp+A0h] [rbp-118h]
  _BYTE v18[32]; // [rsp+B0h] [rbp-108h] BYREF
  __int16 v19; // [rsp+D0h] [rbp-E8h]
  void *ptr; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-D0h]
  _BYTE v22[192]; // [rsp+F8h] [rbp-C0h] BYREF

  sub_228B760(v10);
  ptr = v22;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v2 = sub_228A4B0(v10[0], v10[1], 0);
  v4 = 0;
  si128.m128i_i64[0] = 0;
  v5 = (const void *)v2;
  v6 = v3;
  if ( v3 > si128.m128i_i64[1] )
  {
    sub_2236E10(&ptr, v22, v3, 1);
    v4 = si128.m128i_i64[0];
  }
  if ( v6 )
  {
    memcpy((char *)ptr + v4, v5, v6);
    v4 = si128.m128i_i64[0];
  }
  v15 = 257;
  v19 = 257;
  v17 = 257;
  v13 = 259;
  v12 = "clang-tool";
  si128.m128i_i64[0] = v4 + v6;
  sub_228A3B0(&ptr, &v12, v14, v16, v18);
  v7 = ptr;
  v8 = si128.m128i_i64[0];
  *a1 = a1 + 2;
  sub_1FF3100(a1, v7, (__int64)&v7[v8]);
  if ( ptr != v22 )
    free(ptr);
  if ( v10[0] != &v11 )
    operator delete(v10[0]);
  return a1;
}
