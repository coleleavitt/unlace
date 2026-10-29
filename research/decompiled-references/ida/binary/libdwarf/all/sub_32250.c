unsigned __int64 __fastcall sub_32250(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, const char *a4, __int64 a5)
{
  const char *v8; // rdx
  const char *v9; // rsi
  __int64 v10; // rax
  char *v12; // [rsp+10h] [rbp-168h] BYREF
  __int64 v13; // [rsp+18h] [rbp-160h] BYREF
  _BYTE v14[32]; // [rsp+20h] [rbp-158h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v16[32]; // [rsp+60h] [rbp-118h] BYREF
  _BYTE v17[32]; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE v18[32]; // [rsp+A0h] [rbp-D8h] BYREF
  char v19[120]; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned __int64 v20; // [rsp+138h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v12 = nullptr;
  v13 = 0;
  dwarfstring_constructor_static(v16, v17, 32);
  dwarfstring_constructor_static(v15, v18, 32);
  dwarf_get_LNCT_name(a2, &v13);
  if ( v13 )
    dwarfstring_append();
  else
    dwarfstring_append_printf_u(v15, "Invalid DW_LNCT  0xllx", a2);
  dwarf_get_FORM_name(a3, (const char **)&v12);
  if ( v12 )
    dwarfstring_append();
  else
    dwarfstring_append_printf_u(v16, "Invalid Form Code  0xllx", a3);
  dwarfstring_constructor_static(v14, v19, 120);
  dwarfstring_string(v16, v19);
  dwarfstring_append_printf_s();
  dwarfstring_string(
    v15,
    "DW_DLE_LNCT_FORM_CODE_NOT_HANDLED: form %s instead of a specifically allowed offset form",
    v8);
  v9 = " on line type %s";
  dwarfstring_append_printf_s();
  if ( a4 )
  {
    dwarfstring_append();
    v9 = a4;
    dwarfstring_append();
  }
  v10 = dwarfstring_string(v14, v9);
  _dwarf_error_string(a1, a5, 383, v10);
  dwarfstring_destructor(v14);
  dwarfstring_destructor(v16);
  dwarfstring_destructor(v15);
  return v20 - __readfsqword(0x28u);
}

