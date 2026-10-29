__int64 __fastcall dwarf_formaddr(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int is_indexed; // r12d
  unsigned int v6; // r15d
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-68h]
  __int64 v11; // [rsp+8h] [rbp-60h]
  __int64 v12; // [rsp+10h] [rbp-58h] BYREF
  __int64 v13; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v14[9]; // [rsp+20h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v12 = 0;
  v13 = 0;
  if ( (unsigned int)sub_1F170(&v12, &v13, a1, a3) )
    return 1;
  v6 = *(unsigned __int16 *)(a1 + 2);
  is_indexed = dwarf_addr_form_is_indexed(*(unsigned __int16 *)(a1 + 2));
  if ( !is_indexed )
  {
    if ( (_WORD)v6 == 1 || *(_BYTE *)(v13 + 34) == 1 && (_WORD)v6 == 16 )
    {
      v11 = v12;
      v10 = v13;
      v7 = _dwarf_calculate_info_section_end_ptr(v13);
      v8 = *(_QWORD *)(a1 + 16);
      v14[0] = 0;
      v9 = *(unsigned __int8 *)(v10 + 32);
      if ( __CFADD__(v9, v8) )
      {
        _dwarf_error_string(v11, a3, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
      }
      else
      {
        if ( v7 >= v9 + v8 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(v11 + 8296))(v14, v8);
          *a2 = v14[0];
          return is_indexed;
        }
        _dwarf_error_string(v11, a3, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      }
    }
    else
    {
      sub_1F300(v12, a3, v6);
    }
    return 1;
  }
  return _dwarf_look_in_local_and_tied(v6, v13, *(_QWORD *)(a1 + 16), a2, a3);
}

