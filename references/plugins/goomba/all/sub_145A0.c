_QWORD *__fastcall sub_145A0(_QWORD *a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  _QWORD *v6; // r14
  __int64 v9; // rdi
  __int64 v10; // rbp
  _UNKNOWN **v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // r13
  unsigned int v18; // r12d
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // r12
  unsigned int v22; // eax
  __int64 v23; // r12
  unsigned int v24; // eax
  __int64 v25; // rdi
  unsigned int v26; // r13d
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int error_code; // r12d
  _QWORD *exception; // rbp
  const char *error_msg; // rax
  _QWORD *v35; // rbp
  const char *v36; // rax
  _QWORD *v37; // rbp
  const char *v38; // rax
  _QWORD *v39; // rbp
  const char *v40; // rax
  _QWORD *v41; // rbp
  const char *v42; // rax
  unsigned int v44; // [rsp+8h] [rbp-D0h]
  unsigned int v45; // [rsp+8h] [rbp-D0h]
  __int64 v46; // [rsp+10h] [rbp-C8h]
  _UNKNOWN **v47; // [rsp+18h] [rbp-C0h]
  __int64 v48; // [rsp+20h] [rbp-B8h]
  _QWORD v50[8]; // [rsp+30h] [rbp-A8h] BYREF
  _UNKNOWN **v51; // [rsp+70h] [rbp-68h] BYREF
  _UNKNOWN **v52; // [rsp+78h] [rbp-60h]
  __int64 v53; // [rsp+80h] [rbp-58h]
  __int64 v54; // [rsp+88h] [rbp-50h]
  unsigned __int64 v55; // [rsp+98h] [rbp-40h]

  v6 = a5 + 1;
  v9 = *(_QWORD *)(a2 + 32);
  v55 = __readfsqword(0x28u);
  v47 = (_UNKNOWN **)(a2 + 24);
  v50[1] = a2 + 24;
  v50[0] = &off_4D8B0;
  v46 = Z3_mk_ast_vector(v9);
  Z3_ast_vector_inc_ref(*(_QWORD *)(a2 + 32), v46);
  v50[2] = v46;
  v10 = (unsigned int)(a4 - 1);
  v48 = a2 + 8;
  v11 = (_UNKNOWN **)(a3 + v10);
  if ( (int)v10 >= 0 )
  {
    do
    {
      v12 = (_QWORD *)a5[2];
      if ( !v12 )
        goto LABEL_9;
      v13 = v6;
      do
      {
        while ( 1 )
        {
          v14 = v12[2];
          v15 = v12[3];
          if ( v12[4] >= (unsigned __int64)v11 )
            break;
          v12 = (_QWORD *)v12[3];
          if ( !v15 )
            goto LABEL_7;
        }
        v13 = v12;
        v12 = (_QWORD *)v12[2];
      }
      while ( v14 );
LABEL_7:
      if ( v6 != v13 && (unsigned __int64)v11 >= v13[4] )
      {
        Z3_ast_vector_push(*(_QWORD *)(a2 + 32), v46, v13[7]);
        error_code = Z3_get_error_code(*(_QWORD *)(a2 + 32));
        if ( error_code && *(_BYTE *)(a2 + 24) )
        {
          exception = __cxa_allocate_exception(0x10u);
          error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 32), error_code);
          sub_105D0(exception, error_msg);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
      }
      else
      {
LABEL_9:
        v16 = *(_DWORD *)(a2 + 20);
        *(_DWORD *)(a2 + 20) = v16 + 1;
        qsnprintf(v48, 12, "y%d", v16);
        v17 = Z3_mk_bv_sort(*(_QWORD *)(a2 + 32), 8);
        v18 = Z3_get_error_code(*(_QWORD *)(a2 + 32));
        if ( v18 && *(_BYTE *)(a2 + 24) )
        {
          v35 = __cxa_allocate_exception(0x10u);
          v36 = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 32), v18);
          sub_105D0(v35, v36);
          __cxa_throw(v35, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        v19 = *(_QWORD *)(a2 + 32);
        v53 = v17;
        v52 = v47;
        Z3_inc_ref(v19, v17);
        v20 = *(_QWORD *)(a2 + 32);
        v51 = &off_4D870;
        v21 = Z3_mk_string_symbol(v20, v48);
        v22 = Z3_get_error_code(*(_QWORD *)(a2 + 32));
        if ( v22 && *(_BYTE *)(a2 + 24) )
        {
          v45 = v22;
          v41 = __cxa_allocate_exception(0x10u);
          v42 = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 32), v45);
          sub_105D0(v41, v42);
          __cxa_throw(v41, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        v23 = Z3_mk_const(*(_QWORD *)(a2 + 32), v21, v17);
        v24 = Z3_get_error_code(*(_QWORD *)(a2 + 32));
        if ( v24 && *(_BYTE *)(a2 + 24) )
        {
          v44 = v24;
          v39 = __cxa_allocate_exception(0x10u);
          v40 = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 32), v44);
          sub_105D0(v39, v40);
          __cxa_throw(v39, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        v25 = *(_QWORD *)(a2 + 32);
        v50[6] = v23;
        v50[5] = v47;
        Z3_inc_ref(v25, v23);
        v50[4] = &off_4D890;
        if ( v17 )
          Z3_dec_ref(*(_QWORD *)(a2 + 32));
        Z3_ast_vector_push(*(_QWORD *)(a2 + 32), v46, v23);
        v26 = Z3_get_error_code(*(_QWORD *)(a2 + 32));
        if ( v26 && *(_BYTE *)(a2 + 24) )
        {
          v37 = __cxa_allocate_exception(0x10u);
          v38 = (const char *)Z3_get_error_msg(*(_QWORD *)(a2 + 32), v26);
          sub_105D0(v37, v38);
          __cxa_throw(v37, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
        }
        v27 = *(_QWORD *)(a2 + 32);
        v51 = v11;
        v54 = v23;
        v53 = (__int64)v47;
        Z3_inc_ref(v27, v23);
        v52 = &off_4D890;
        sub_14400(a5, (unsigned __int64 *)&v51, v28, v29, v30);
        if ( v23 )
        {
          Z3_dec_ref(*(_QWORD *)(a2 + 32));
          Z3_dec_ref(*(_QWORD *)(a2 + 32));
        }
      }
      LODWORD(v10) = v10 - 1;
      v11 = (_UNKNOWN **)((char *)v11 - 1);
    }
    while ( (_DWORD)v10 != -1 );
  }
  sub_13430(a1, (__int64)v50);
  Z3_ast_vector_dec_ref(*(_QWORD *)(a2 + 32), v46);
  return a1;
}
