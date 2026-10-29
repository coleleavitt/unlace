_QWORD *__fastcall sub_1B90E50(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v5; // rbx
  void *v6; // rax
  __int64 v7; // r12
  __m128 si128; // xmm0
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void **v18; // r12
  size_t v19; // r13
  _QWORD *v20; // rax
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  __m128i vars8; // [rsp+8h] [rbp+8h]
  char vars18; // [rsp+18h] [rbp+18h] BYREF
  int vars38; // [rsp+38h] [rbp+38h]
  char vars3C; // [rsp+3Ch] [rbp+3Ch]

  v5 = (_QWORD *)a2;
  v6 = *(void **)a2;
  vars8.m128i_i64[0] = a2 + 8;
  vars0 = v6;
  sub_F6CCB0((__int64 *)&vars0, a3);
  v7 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return v5;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v10 = *(_QWORD *)a2;
  vars38 = 0;
  vars0 = &vars18;
  vars8 = (__m128i)si128;
  vars3C = 0;
  v11 = sub_F6C560(v10);
  if ( (unsigned __int64)v11 > vars8.m128i_i64[0] )
    sub_1EA60C0(&vars0);
  v14 = sub_1B8F630(a1, (__int64)&vars0, v7, (__m128i *)(a2 + 8), v12, v13, si128, a4);
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v19 = vars8.m128i_i64[0] - vars8.m128i_i64[1];
    v20 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v14, vars8.m128i_i32[0] - vars8.m128i_i32[2], v15, v16, v17);
    v18 = (void **)vars0;
    v5 = v20;
    memcpy(v20 + 1, (char *)vars0 + vars8.m128i_i64[1], v19);
  }
  else
  {
    v18 = (void **)vars0;
    v5 = nullptr;
  }
  if ( !v18 || v18 == &vars0 )
    return v5;
  operator delete[](v18);
  return v5;
}
