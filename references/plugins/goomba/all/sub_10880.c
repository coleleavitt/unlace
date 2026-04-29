_QWORD *__fastcall sub_10880(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // r15d
  _QWORD *exception; // rbx
  const char *error_msg; // rax
  _QWORD *v6; // rbp
  const char *v7; // rax
  _QWORD *v8; // rbp
  const char *v9; // rax
  __int64 sort; // rax
  __int64 v13; // r13
  __int64 v14; // r12
  unsigned int error_code; // eax
  __int64 v16; // r13
  int bv_sort_size; // r15d
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r12
  unsigned int v23; // r13d
  __int64 v24; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  unsigned int v28; // [rsp+Ch] [rbp-5Ch]

  sort = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
  v13 = *(_QWORD *)(a2 + 8);
  v14 = sort;
  error_code = Z3_get_error_code(*(_QWORD *)(v13 + 8));
  if ( error_code && *(_BYTE *)v13 )
  {
    v3 = error_code;
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(v13 + 8), v3);
    sub_105D0(exception, error_msg);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v16 = *(_QWORD *)(a2 + 8);
  Z3_inc_ref(*(_QWORD *)(v16 + 8), v14);
  bv_sort_size = Z3_get_bv_sort_size(*(_QWORD *)(v16 + 8), v14);
  v18 = Z3_get_error_code(*(_QWORD *)(v16 + 8));
  if ( v18 && *(_BYTE *)v16 )
  {
    v28 = v18;
    v6 = __cxa_allocate_exception(0x10u);
    v7 = (const char *)Z3_get_error_msg(*(_QWORD *)(v16 + 8), v28);
    sub_105D0(v6, v7);
    __cxa_throw(v6, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  if ( v14 )
    Z3_dec_ref(*(_QWORD *)(v16 + 8));
  v19 = *(_QWORD *)(a2 + 8);
  if ( a3 == bv_sort_size )
  {
    a1[1] = v19;
    v26 = *(_QWORD *)(a2 + 16);
    *a1 = &off_4D850;
    v27 = *(_QWORD *)(v19 + 8);
    a1[2] = v26;
    Z3_inc_ref(v27, v26);
    *a1 = &off_4D890;
  }
  else
  {
    v20 = Z3_mk_zero_ext(*(_QWORD *)(v19 + 8), (unsigned int)(a3 - bv_sort_size), *(_QWORD *)(a2 + 16));
    v21 = *(_QWORD *)(a2 + 8);
    v22 = v20;
    v23 = Z3_get_error_code(*(_QWORD *)(v21 + 8));
    if ( v23 && *(_BYTE *)v21 )
    {
      v8 = __cxa_allocate_exception(0x10u);
      v9 = (const char *)Z3_get_error_msg(*(_QWORD *)(v21 + 8), v23);
      sub_105D0(v8, v9);
      __cxa_throw(v8, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
    }
    a1[1] = v21;
    v24 = *(_QWORD *)(v21 + 8);
    *a1 = &off_4D850;
    a1[2] = v22;
    Z3_inc_ref(v24, v22);
    *a1 = &off_4D890;
  }
  return a1;
}
