__int64 __fastcall sub_17570(__int64 a1, unsigned __int64 a2, unsigned int a3, const char *a4)
{
  unsigned __int64 v4; // r13
  __int64 v6; // rdx
  __int64 v7; // rax
  bool v8; // cf
  unsigned __int64 v9; // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  void (__fastcall *v15)(unsigned __int64, __int64, _QWORD); // rax
  __int64 v16; // rdi
  size_t v17; // r14
  char *v18; // r12
  __int64 v19; // r14
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  char *v22; // rax
  unsigned __int64 v23; // [rsp+0h] [rbp-D8h]
  __int64 v24; // [rsp+8h] [rbp-D0h]
  const char *v25; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+18h] [rbp-C0h]
  char *v27; // [rsp+30h] [rbp-A8h]
  __int128 v28; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v29; // [rsp+98h] [rbp-40h]

  v4 = a3;
  v6 = *(_QWORD *)(a1 + 88);
  v29 = __readfsqword(0x28u);
  v7 = *(int *)(a1 + 12);
  v8 = __CFADD__(a2, v7);
  v9 = a2 + v7;
  if ( v8 )
    v9 = a2;
  if ( *(_QWORD *)(v6 + 16) < v9 || !(unsigned __int8)is_mapped() )
  {
    if ( !*(_BYTE *)(a1 + 164) )
      sub_A800((__int64)"AUTOHIDE REGISTRY\n"
                        "Some imported functions will not be visible.\n"
                        "\n"
                        "This happened because the IAT is located in a non-standard section.\n"
                        "Please reload the input file in the manual mode and load all sections.");
    *(_BYTE *)(a1 + 164) = 1;
    return 1;
  }
  v25 = 0;
  v26 = 0;
  if ( a4 )
  {
    if ( *a4 )
    {
      set_import_name();
      *(_BYTE *)(a1 + 165) = 1;
    }
  }
  else
  {
    sub_174B0((__int64 *)&v25);
    a4 = s1;
    if ( (_QWORD)v26 )
      a4 = v25;
    set_import_ordinal();
    *(_BYTE *)(a1 + 165) = 1;
    qsnprintf();
    append_cmt();
  }
  v13 = *(int *)(a1 + 12);
  if ( !*(_BYTE *)(a1 + 8) && (int)v13 > 0 )
  {
    v14 = 0;
    do
    {
      del_value();
      v13 = *(int *)(a1 + 12);
      ++v14;
    }
    while ( (int)v13 > (int)v14 );
  }
  v15 = (void (__fastcall *)(unsigned __int64, __int64, _QWORD))sub_6EB0;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 24LL) == 523 )
    v15 = (void (__fastcall *)(unsigned __int64, __int64, _QWORD))sub_6ED0;
  v15(a2, v13, 0);
  set_name();
  get_default_reftype();
  op_offset();
  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( (unsigned __int8)is_loaded() && (v4 < *(_QWORD *)(a1 + 120) || v4 >= *(_QWORD *)(a1 + 128)) )
    {
      create_data();
      sub_7CE0(v4 + 2, 0);
    }
    get_default_reftype();
    op_offset();
    get_dword();
    auto_mark_range();
    auto_mark_range();
    v27 = 0;
    v28 = 0;
    if ( a4 )
    {
      v17 = strlen(a4);
      v27 = (char *)qvector_reserve();
      *(_QWORD *)&v28 = v17 + 1;
      memmove(v27, a4, v17);
      v27[v17] = 0;
      v18 = v27;
      v19 = v28 - 1;
      v20 = v28 + 5;
      v21 = v28 + 6;
      if ( !(_QWORD)v28 )
      {
        v19 = 0;
        v21 = 7;
        v20 = 6;
      }
      if ( *((_QWORD *)&v28 + 1) >= v21 )
        goto LABEL_29;
    }
    else
    {
      v21 = 7;
      v20 = 6;
      v19 = 0;
    }
    v24 = v20;
    v23 = v21;
    v27 = (char *)qvector_reserve();
    v20 = v24;
    v18 = v27;
    v21 = v23;
LABEL_29:
    *(_QWORD *)&v28 = v21;
    v18[v20] = 0;
    v22 = &v27[v19];
    *(_DWORD *)v22 = 1969779807;
    *((_WORD *)v22 + 2) = 27502;
    set_name();
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
    }
  }
  v16 = (__int64)v25;
  *(_QWORD *)(a1 + 144) = a2 + *(int *)(a1 + 12);
  if ( v16 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return 0;
}
