__int64 __fastcall sub_3C01E0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v10; // rcx
  const char *v11; // rdx
  bool v13; // zf
  __m128 v15; // xmm0
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  const char *v20; // rdi
  unsigned int v21; // ebx
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rsi
  int v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  const char *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __m128 v46; // xmm4
  __m128 v47; // xmm5
  const char *v48; // rsi
  __int64 path; // rax
  _QWORD v50[2]; // [rsp+0h] [rbp-68h] BYREF
  const char *v51; // [rsp+10h] [rbp-58h] BYREF
  __int128 v52; // [rsp+18h] [rbp-50h]
  unsigned __int64 v53; // [rsp+28h] [rbp-40h]

  v10 = "Generate ~c~ompilable header file";
  v11 = "#Adjust order of types so the header file can be compiled, or export local type list as is#";
  v13 = *(_QWORD *)(a2 + 8) == 0;
  v53 = __readfsqword(0x28u);
  byte_8CF9E8 = v13;
  v50[0] = (unsigned __int8)byte_8BCD38;
  if ( !v13 )
  {
    v10 = "Include ~d~ependencies";
    v11 = "#If a type depends on other local types, export those as well#";
  }
  v15 = 0;
  v52 = 0;
  v51 = nullptr;
  sub_169A50(
    (__int64 *)&v51,
    (__int64)"BUTTON NO NONE\n"
             "BUTTON YES Export\n"
             "BUTTON CANCEL Cancel\n"
             "Export local types\n"
             "%%/<%s%s:C1>\n"
             "<#Include definitions of types even if they only need forward declarations#Define ~f~orward-declared types:"
             "C2>\n"
             "<#Define __int8, __int16, __int32, __int64#Include IDA ~b~asic types :C4>\n"
             "<#Do not export types with name like $hex_numbers#Ignore IDA anonymous types :C16>>\n"
             "<~O~utput file:f5:1:40::>\n",
    v11,
    v10);
  if ( !byte_8CFA00 )
  {
    path = get_path(1);
    set_file_ext(&byte_8CFA00, 4096, path, "h");
  }
  v20 = &s1;
  if ( (_QWORD)v52 )
    LODWORD(v20) = (_DWORD)v51;
  v21 = sub_1697D0(
          (int)v20,
          (__int64)sub_3B5280,
          (__int64)v50,
          (__int64)&byte_8CFA00,
          v16,
          v17,
          (__m128)0LL,
          a4,
          a5,
          a6,
          v18,
          v19,
          a9,
          a10,
          v50[0]);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    *(double *)v15.m128_u64 = qfree(v51, (const char *)sub_3B5280);
  }
  if ( v21 == 1 && (v23 = sub_31C1D0((__int64)&byte_8CFA00)) != 0 )
  {
    v50[1] = v23;
    v24 = a2;
    v50[0] = file_sink_t___vtable;
    if ( !*(_QWORD *)(a2 + 8) )
      v24 = 0;
    v25 = a1;
    v26 = print_decls(v50, a1, v24, (unsigned __int8)byte_8BCD38 | 8u);
    qfclose(v23);
    if ( v26 < 0 )
    {
      v26 = -v26;
      sub_169630(
        (int)"IDA has detected that the resulting header file might not\n"
             "be compilable. This is due to the fact that IDA always\n"
             "defines types passed as function arguments, even if they\n"
             "don't have to be.  Please be wary of this situation when\n"
             "compiling",
        v25,
        v27,
        v28,
        v29,
        v30,
        v15,
        a4,
        a5,
        a6,
        v31,
        v32,
        a9,
        a10,
        v50[0]);
    }
    v33 = *(_QWORD *)(a2 + 8);
    v51 = nullptr;
    v52 = 0;
    v34 = v26 - v33;
    if ( (_DWORD)v33 && v34 > 0 )
      sub_169A50(
        (__int64 *)&v51,
        (__int64)"Operation completed: %d types exported, including %d additional types",
        v33,
        v34);
    else
      sub_169A50((__int64 *)&v51, (__int64)"Operation completed: %d types have been exported", v26);
    v41 = &s1;
    if ( (_QWORD)v52 )
      v41 = v51;
    sub_16B9E0((int)"%s", (__int64)v41, v35, v36, v37, v38, (__m128)0LL, a4, a5, a6, v39, v40, a9, a10, v50[0]);
    v48 = &s1;
    if ( (_QWORD)v52 )
      v48 = v51;
    sub_169700((int)"%s", (__int64)v48, v42, v43, v44, v45, (__m128)0LL, a4, a5, a6, v46, v47, a9, a10, v50[0]);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51, v48);
    }
  }
  else
  {
    return 0;
  }
  return v21;
}
