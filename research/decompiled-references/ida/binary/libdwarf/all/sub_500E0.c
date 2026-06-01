__int64 __fastcall sub_500E0(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v8; // r13
  int section; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r13
  __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  int v18; // edx
  __int64 v19; // rax
  _QWORD v20[13]; // [rsp+10h] [rbp-68h] BYREF

  v8 = *(_QWORD *)(a2 + 384);
  v20[5] = __readfsqword(0x28u);
  section = _dwarf_load_section(a1, a1 + 6392, a5);
  if ( section )
  {
    if ( section == 1 && a5 )
    {
      dwarf_dealloc_error(a1, *a5);
      *a5 = 0;
      _dwarf_error(a1, a5, 257);
    }
    else
    {
      _dwarf_error(a1, a5, 257);
    }
  }
  else
  {
    v11 = *(unsigned __int8 *)(a2 + 32);
    v12 = *(_QWORD *)(a1 + 6400);
    v13 = a3 * v11;
    v14 = a3 * v11 + v8;
    if ( a3 * v11 < a3 )
      v13 = a3;
    if ( v13 >= v12 || v12 < v14 || v12 - v11 < v14 )
    {
      dwarfstring_constructor(v20);
      dwarfstring_append_printf_u(
        v20,
        "DW_DLE_ATTR_FORM_OFFSET_BAD: Extracting an address from .debug_addr failsas the offset is  0x%x ",
        v14);
      dwarfstring_append_printf_u(
        v20,
        "but the object section is just 0x%x bytes long so there not enough space for an address.",
        v12);
      v19 = dwarfstring_string(
              v20,
              "but the object section is just 0x%x bytes long so there not enough space for an address.",
              v18);
      _dwarf_error_string(a1, a5, 119, v19);
      dwarfstring_destructor(v20);
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 6392);
      v20[0] = 0;
      v16 = v15 + v11 + v14;
      if ( v16 < v15 + v14 )
      {
        _dwarf_error_string(a1, a5, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
      }
      else
      {
        if ( v12 + v15 >= v16 )
        {
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v20, v15 + v14, v11);
          *a4 = v20[0];
          return 0;
        }
        _dwarf_error_string(a1, a5, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      }
    }
  }
  return 1;
}

