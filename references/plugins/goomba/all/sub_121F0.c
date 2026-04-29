_QWORD *__fastcall sub_121F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 sort; // rax
  __int64 v8; // r13
  __int64 v9; // r12
  unsigned int error_code; // eax
  unsigned __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int sort_kind; // r15d
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r12
  unsigned int v22; // r14d
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // r13
  unsigned int v27; // r14d
  _QWORD *exception; // rbx
  const char *v29; // rax
  const char *v30; // rax
  unsigned int v31; // r15d
  const char *error_msg; // rax
  __m128i v33; // [rsp+8h] [rbp-70h]
  __m128i v34; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  v35 = __readfsqword(0x28u);
  sort = Z3_get_sort(*(_QWORD *)(v4 + 8), v5);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = sort;
  error_code = Z3_get_error_code(*(_QWORD *)(v8 + 8));
  if ( error_code && *(_BYTE *)v8 )
  {
    v31 = error_code;
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(v8 + 8), v31);
    sub_105D0(exception, error_msg);
LABEL_14:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v11 = *(_QWORD *)(a2 + 8);
  v33 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)(unsigned __int64)v9);
  Z3_inc_ref(*(_QWORD *)(v11 + 8), v9);
  sort_kind = Z3_get_sort_kind(*(_QWORD *)(v11 + 8), v9);
  if ( v9 )
    Z3_dec_ref(*(_QWORD *)(v11 + 8));
  v16 = *(_QWORD *)(a2 + 8);
  v17 = *(_QWORD *)(a2 + 16);
  v18 = *(_QWORD *)(a3 + 16);
  if ( sort_kind == 1 )
  {
    v34 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v18);
    v19 = Z3_mk_and(*(_QWORD *)(v16 + 8), 2, &v34, v12, v13, v14, &off_4D870, v33.m128i_i64[0], v33.m128i_i64[1]);
    v20 = *(_QWORD *)(a2 + 8);
    v21 = v19;
    v22 = Z3_get_error_code(*(_QWORD *)(v20 + 8));
    if ( v22 && *(_BYTE *)v20 )
    {
      exception = __cxa_allocate_exception(0x10u);
      v30 = (const char *)Z3_get_error_msg(*(_QWORD *)(v20 + 8), v22);
      sub_105D0(exception, v30);
      goto LABEL_14;
    }
  }
  else
  {
    v25 = Z3_mk_bvand(*(_QWORD *)(v16 + 8), v17, v18, v12, v13, v14, &off_4D870, v33.m128i_i64[0], v33.m128i_i64[1]);
    v26 = *(_QWORD *)(a2 + 8);
    v21 = v25;
    v27 = Z3_get_error_code(*(_QWORD *)(v26 + 8));
    if ( v27 && *(_BYTE *)v26 )
    {
      exception = __cxa_allocate_exception(0x10u);
      v29 = (const char *)Z3_get_error_msg(*(_QWORD *)(v26 + 8), v27);
      sub_105D0(exception, v29);
      goto LABEL_14;
    }
  }
  v23 = *(_QWORD *)(a2 + 8);
  a1[2] = v21;
  *a1 = &off_4D850;
  a1[1] = v23;
  Z3_inc_ref(*(_QWORD *)(v23 + 8), v21);
  *a1 = &off_4D890;
  return a1;
}
