char *__fastcall sub_33D9C0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r12
  char *v8; // rbx
  const char *v9; // rbp
  const struct __class_type_info *v10; // rdx
  char *v11; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  _BYTE v15[32]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_8E3AC0(a1 + 880);
  v3 = sub_8E35C0(a1 + 880);
  sub_180C5A0(v15, "arith");
  v4 = sub_15D1320(v3 + 560, v15);
  v5 = v4;
  if ( v4 == -1 )
  {
    v1 = sub_186B270(0x668u);
    sub_A44350(v1, v2);
    sub_8F1E10(v2, v1);
    goto LABEL_45;
  }
  v6 = *(_QWORD *)(v2 + 8672);
  if ( !v6 || (unsigned int)v5 >= *(_DWORD *)(v6 - 4) || (v7 = *(_QWORD **)(v6 + 8LL * (unsigned int)v5)) == nullptr )
  {
    v13 = sub_186B270(0x668u);
    sub_A44350(v13, v2);
    sub_8F1E10(v2, v13);
    v14 = *(_QWORD *)(v2 + 8672);
    if ( !v14 || (unsigned int)v5 >= *(_DWORD *)(v14 - 4) || (v7 = *(_QWORD **)(v14 + 8 * v5)) == nullptr )
LABEL_45:
      __cxa_bad_typeid();
  }
  v8 = *(char **)(*(_QWORD *)(*v7 - 8LL) + 8LL);
  if ( v8 == "N3smt12theory_arithINS_6mi_extEEE"
    || (v9 = &v8[*v8 == 42], !strcmp("N3smt12theory_arithINS_6mi_extEEE", v9)) )
  {
    v10 = (const struct __class_type_info *)&`typeinfo for'smt::theory_arith<smt::mi_ext>;
  }
  else if ( v8 == "N3smt12theory_arithINS_5i_extEEE" || !strcmp("N3smt12theory_arithINS_5i_extEEE", v9) )
  {
    v10 = (const struct __class_type_info *)&`typeinfo for'smt::theory_arith<smt::i_ext>;
  }
  else if ( v8 == "N3smt12theory_arithINS_7inf_extEEE" || !strcmp("N3smt12theory_arithINS_7inf_extEEE", v9) )
  {
    v10 = (const struct __class_type_info *)&`typeinfo for'smt::theory_arith<smt::inf_ext>;
  }
  else if ( v8 == "N3smt17theory_diff_logicINS_7rdl_extEEE" || !strcmp("N3smt17theory_diff_logicINS_7rdl_extEEE", v9) )
  {
    v10 = (const struct __class_type_info *)&`typeinfo for'smt::theory_diff_logic<smt::rdl_ext>;
  }
  else if ( v8 == "N3smt17theory_diff_logicINS_7idl_extEEE" || !strcmp("N3smt17theory_diff_logicINS_7idl_extEEE", v9) )
  {
    v10 = (const struct __class_type_info *)&`typeinfo for'smt::theory_diff_logic<smt::idl_ext>;
  }
  else if ( v8 == "N3smt23theory_dense_diff_logicINS_6mi_extEEE"
         || !strcmp("N3smt23theory_dense_diff_logicINS_6mi_extEEE", v9) )
  {
    v10 = (const struct __class_type_info *)&`typeinfo for'smt::theory_dense_diff_logic<smt::mi_ext>;
  }
  else if ( v8 == "N3smt23theory_dense_diff_logicINS_5i_extEEE"
         || !strcmp("N3smt23theory_dense_diff_logicINS_5i_extEEE", v9) )
  {
    v10 = (const struct __class_type_info *)&`typeinfo for'smt::theory_dense_diff_logic<smt::i_ext>;
  }
  else if ( v8 == "N3smt23theory_dense_diff_logicINS_7smi_extEEE"
         || !strcmp("N3smt23theory_dense_diff_logicINS_7smi_extEEE", v9) )
  {
    v10 = (const struct __class_type_info *)&`typeinfo for'smt::theory_dense_diff_logic<smt::smi_ext>;
  }
  else if ( v8 == "N3smt23theory_dense_diff_logicINS_6si_extEEE"
         || !strcmp("N3smt23theory_dense_diff_logicINS_6si_extEEE", v9) )
  {
    v10 = (const struct __class_type_info *)&`typeinfo for'smt::theory_dense_diff_logic<smt::si_ext>;
  }
  else
  {
    if ( "N3smt10theory_lraE" != v8 && (`typeinfo name for'smt::theory_lra[0] == 42 || strcmp("N3smt10theory_lraE", v9)) )
    {
      sub_1872CE0("");
      sub_1873130(114, 153);
    }
    v10 = (const struct __class_type_info *)&`typeinfo for'smt::theory_lra;
  }
  v11 = (char *)__dynamic_cast(v7, (const struct __class_type_info *)&`typeinfo for'smt::theory, v10, 0);
  if ( !v11 )
    __cxa_bad_cast();
  return v11 + 56;
}

