__int64 __fastcall dwarf_convert_to_global_offset(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 result; // rax
  __int16 v8; // dx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v13[40]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v5 = a2;
  v14 = __readfsqword(0x28u);
  v11 = 0;
  v12 = 0;
  result = sub_1F170(&v11, &v12, a1, a4);
  if ( !(_DWORD)result )
  {
    v8 = *(_WORD *)(a1 + 2);
    if ( v8 == 16 )
    {
LABEL_5:
      *a3 = v5;
      return result;
    }
    if ( (unsigned __int16)(v8 - 17) <= 4u )
    {
      v5 = *(_QWORD *)(v12 + 72) + a2;
      goto LABEL_5;
    }
    dwarfstring_constructor(v13);
    dwarfstring_append_printf_u(
      v13,
      "DW_DLE_BAD_REF_FORM. The form code is 0x%x which cannot be converted to a global  offset by dwarf_convert_to_global_offset()",
      *(unsigned __int16 *)(a1 + 2));
    v10 = dwarfstring_string(
            v13,
            "DW_DLE_BAD_REF_FORM. The form code is 0x%x which cannot be converted to a global  offset by dwarf_convert_to"
            "_global_offset()",
            v9);
    _dwarf_error_string(v11, a4, 118, v10);
    dwarfstring_destructor(v13);
  }
  return 1;
}

