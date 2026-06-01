unsigned __int64 __fastcall dwarf_report_bad_lnct(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  const char *v7; // rdx
  const char *v8; // rdx
  __int64 v9; // rax
  __int64 v11; // [rsp+8h] [rbp-120h] BYREF
  _BYTE v12[32]; // [rsp+10h] [rbp-118h] BYREF
  _BYTE v13[32]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v14[48]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v15[104]; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int64 v16; // [rsp+E8h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v11 = 0;
  dwarfstring_constructor_static(v13, v14, 48);
  dwarf_get_LNCT_name((unsigned int)a2, &v11);
  if ( v11 )
    dwarfstring_append();
  else
    dwarfstring_append_printf_u(v13, "Invalid attribute  0xllx", a2);
  dwarfstring_constructor_static(v12, v15, 100);
  dwarfstring_append_printf_s();
  dwarfstring_string(v13, "%s: Unexpected DW_LNCT type", v7);
  dwarfstring_append_printf_s();
  v9 = dwarfstring_string(v12, " %s ", v8);
  _dwarf_error_string(a1, a5, a3, v9);
  dwarfstring_destructor(v12);
  dwarfstring_destructor(v13);
  return v16 - __readfsqword(0x28u);
}

