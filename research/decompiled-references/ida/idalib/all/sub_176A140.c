void **__fastcall sub_176A140(_QWORD *a1, void **a2, __m128 a3)
{
  const __m128i *v4; // r13
  void **v5; // rbx
  void *v6; // rax
  __int64 v7; // r12
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void **v17; // r12
  size_t v18; // r13
  void **v19; // rax
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  __m128i si128; // [rsp+8h] [rbp+8h]
  char vars18; // [rsp+18h] [rbp+18h] BYREF
  int vars38; // [rsp+38h] [rbp+38h]
  char vars3C; // [rsp+3Ch] [rbp+3Ch]

  v4 = (const __m128i *)(a2 + 1);
  v5 = a2;
  v6 = *a2;
  si128.m128i_i64[0] = (__int64)(a2 + 1);
  vars0 = v6;
  sub_F6CCB0((__int64 *)&vars0, a3);
  v7 = (__int64)*a2;
  if ( ((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return v5;
  v9 = (__int64)*a2;
  vars38 = 0;
  vars0 = &vars18;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  vars3C = 0;
  v10 = (unsigned int)sub_F6C560(v9);
  if ( v10 > si128.m128i_i64[0] )
    sub_1EA60C0(&vars0);
  v13 = sub_17687F0(a1, (__int64)&vars0, v7, v4, v11, v12);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v18 = si128.m128i_i64[0] - si128.m128i_i64[1];
    v19 = (void **)sub_A81BC0(*(_QWORD **)(*a1 + 248LL), v13, si128.m128i_i32[0] - si128.m128i_i32[2], v14, v15, v16);
    v17 = (void **)vars0;
    v5 = v19;
    memcpy(v19 + 1, (char *)vars0 + si128.m128i_i64[1], v18);
  }
  else
  {
    v17 = (void **)vars0;
    v5 = nullptr;
  }
  if ( !v17 || v17 == &vars0 )
    return v5;
  operator delete[](v17);
  return v5;
}
