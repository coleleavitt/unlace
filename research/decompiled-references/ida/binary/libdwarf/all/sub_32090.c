unsigned __int64 __fastcall sub_32090(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  const char *v4; // rdx
  __int64 v5; // rax
  char *v7; // [rsp+8h] [rbp-A0h] BYREF
  _BYTE v8[32]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v9[32]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v10[40]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+78h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v10[0] = 0;
  v7 = nullptr;
  dwarfstring_constructor_static(v9, v10, 32);
  dwarf_get_FORM_name(a2, (const char **)&v7);
  if ( v7 )
    dwarfstring_append();
  else
    dwarfstring_append_printf_u(v9, "Invalid Form Code  0xllx", a2);
  dwarfstring_constructor_fixed(v8, 200);
  dwarfstring_string(v9, (const char *)&qword_C8);
  dwarfstring_append_printf_s();
  v5 = dwarfstring_string(v8, "DW_DLE_LINE_OFFSET_WRONG_FORM: form %s instead of an allowed section offset form.", v4);
  _dwarf_error_string(a1, a3, 336, v5);
  dwarfstring_destructor(v8);
  dwarfstring_destructor(v9);
  return v11 - __readfsqword(0x28u);
}

