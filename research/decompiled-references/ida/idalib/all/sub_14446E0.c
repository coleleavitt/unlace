__int64 __fastcall sub_14446E0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  char *v3; // r12
  _QWORD *v4; // rbp
  __int64 *v5; // r15
  unsigned __int64 v6; // r13
  char v7; // r14
  __int64 result; // rax
  __int64 v9; // rbx
  size_t v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  _BOOL8 (__fastcall *v13)(__int64, int); // rdx
  bool v14; // al
  __int64 v15; // rdi
  _BOOL8 (__fastcall *v16)(__int64, int); // rdx
  bool v17; // al
  bool v18; // al
  size_t v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-70h]
  char v22; // [rsp+1Fh] [rbp-59h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int8 v24; // [rsp+30h] [rbp-48h]
  char v25; // [rsp+31h] [rbp-47h]

  v2 = sub_1440A00(a2, *a1);
  if ( v2 )
  {
    v3 = *(char **)(v2 + 16);
    v4 = (_QWORD *)*a1;
    v5 = (__int64 *)(v3 + 16);
    v6 = (unsigned int)*(_QWORD *)v3;
    v21 = *(_QWORD *)v3;
    v7 = sub_14425E0(*a1, v3 + 16, v6);
    result = 1;
    if ( v7 )
      return result;
    if ( *(_BYTE *)(*(_QWORD *)(v4[6] + 152LL) + 25LL) <= 3u )
    {
      v9 = v4[7];
      v10 = j__strlen("__");
      if ( v6 >= v10 && (!v10 || !memcmp(v3 + 16, "__", v10)) )
      {
        v19 = j__strlen("__");
        if ( v6 >= v19 && (!v19 || !memcmp((char *)v5 + v6 - v19, "__", v19)) && (v21 & 0xFFFFFFFC) != 0 )
        {
          v20 = v6 - 4;
          v6 -= 2LL;
          v5 = (__int64 *)(v3 + 18);
          if ( v20 <= v6 )
            v6 = v20;
        }
      }
      v11 = v4[5];
      v23[1] = v6;
      v23[0] = v5;
      LOBYTE(v11) = *(_BYTE *)(v11 + 74);
      v25 = 0;
      v22 = v11;
      sub_B7E0A0((__int64)v23, &v22, "define_target_os_macros", 23);
      v12 = v4[8];
      v13 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v12 + 760LL);
      v14 = 0;
      if ( v13 != sub_102BB30 )
        v14 = !v13(v12, 14);
      v22 = v14;
      sub_B7E0A0((__int64)v23, &v22, "swiftcc", 7);
      v15 = v4[8];
      v16 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v15 + 760LL);
      v17 = 0;
      if ( v16 != sub_102BB30 )
        v17 = !v16(v15, 15);
      v22 = v17;
      sub_B7E0A0((__int64)v23, &v22, "swiftasynccc", 12);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "objc_c_static_assert", 20);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "c_alignas", 9);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "c_alignof", 9);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "c_atomic", 8);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "c_generic_selections", 20);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "c_generic_selection_with_controlling_type", 41);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "c_static_assert", 15);
      v22 = *(_BYTE *)(v4[8] + 273LL);
      sub_B7E0A0((__int64)v23, &v22, "c_thread_local", 14);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "c_attributes", 12);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "c_fixed_enum", 12);
      v22 = (*(_WORD *)v9 & 0x810) == 0;
      sub_B7E0A0((__int64)v23, &v22, "c_countof", 9);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_atomic", 10);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_default_function_template_args", 34);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_defaulted_functions", 23);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_deleted_functions", 21);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_explicit_conversions", 24);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_inline_namespaces", 21);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_lambdas", 11);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_local_type_template_args", 28);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_nonstatic_member_init", 25);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_override_control", 20);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_range_for", 13);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_reference_qualified_functions", 33);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_rvalue_references", 21);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_variadic_templates", 22);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "cxx_fixed_enum", 14);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "cxx_binary_literals", 19);
      v22 = (*(_BYTE *)(v9 + 1) & 0x10) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_init_captures", 17);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_variable_templates", 22);
      v22 = *(_BYTE *)(v9 + 1) >> 7;
      sub_B7E0A0((__int64)v23, &v22, "cxx_generalized_nttp", 20);
      v22 = *(_BYTE *)(v9 + 2) & 1;
      sub_B7E0A0((__int64)v23, &v22, "cxx_explicit_this_parameter", 27);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "overloadable_unmarked", 21);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "pragma_clang_attribute_namespaces", 33);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "pragma_clang_attribute_external_declaration", 43);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "statement_attributes_with_gnu_syntax", 36);
      v22 = (*(_BYTE *)(v9 + 15) & 4) != 0;
      sub_B7E0A0((__int64)v23, &v22, "gnu_asm", 7);
      v22 = (*(_BYTE *)(v9 + 15) & 4) != 0;
      sub_B7E0A0((__int64)v23, &v22, "gnu_asm_goto_with_outputs", 25);
      v22 = (*(_BYTE *)(v9 + 15) & 4) != 0;
      sub_B7E0A0((__int64)v23, &v22, "gnu_asm_goto_with_outputs_full", 30);
      v18 = 0;
      if ( (*(_BYTE *)(v9 + 15) & 4) != 0 )
        v18 = (*(_BYTE *)(v9 + 1) & 0x10) != 0;
      v22 = v18;
      sub_B7E0A0((__int64)v23, &v22, "gnu_asm_constexpr_strings", 25);
      v22 = (*(_BYTE *)(v9 + 164) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "matrix_types", 12);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "matrix_types_scalar_division", 28);
      v22 = (*(_BYTE *)(v9 + 1) & 0x10) != 0;
      sub_B7E0A0((__int64)v23, &v22, "cxx_attributes_on_using_declarations", 36);
      v22 = (*(_BYTE *)(v9 + 1) & 8) != 0;
      sub_B7E0A0((__int64)v23, &v22, "datasizeof", 10);
      if ( (*(_BYTE *)(v9 + 60) & 0x10) != 0 )
        v7 = *(_BYTE *)(v9 + 89) >> 7;
      v22 = v7;
      sub_B7E0A0((__int64)v23, &v22, "cuda_implicit_host_device_templates", 35);
      v22 = 1;
      sub_B7E0A0((__int64)v23, &v22, "cxx_type_aware_allocators", 25);
      if ( v25 )
        return v24;
    }
  }
  return 0;
}
