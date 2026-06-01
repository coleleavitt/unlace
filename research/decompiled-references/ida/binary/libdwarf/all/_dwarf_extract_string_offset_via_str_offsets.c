__int64 __fastcall dwarf_extract_string_offset_via_str_offsets(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int16 a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  unsigned int section; // r10d
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  unsigned int v15; // eax
  int v16; // edx
  __int64 v17; // rax
  __m128i v18; // xmm0
  int v19; // edx
  __int64 v20; // rax
  int dwarf_five_hdr; // eax
  unsigned int v23; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v24; // [rsp+10h] [rbp-A8h]
  unsigned __int8 v26; // [rsp+27h] [rbp-91h]
  __int64 v27; // [rsp+28h] [rbp-90h]
  __int16 v28; // [rsp+30h] [rbp-88h] BYREF
  __int16 v29; // [rsp+32h] [rbp-86h] BYREF
  __int16 v30; // [rsp+34h] [rbp-84h] BYREF
  __int16 v31; // [rsp+36h] [rbp-82h] BYREF
  __int64 v32; // [rsp+38h] [rbp-80h] BYREF
  __int64 v33; // [rsp+40h] [rbp-78h] BYREF
  __int64 v34; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v35[13]; // [rsp+50h] [rbp-68h] BYREF

  v35[5] = __readfsqword(0x28u);
  v32 = 0;
  v33 = 0;
  section = _dwarf_load_section(a1, a1 + 6160, a7);
  if ( !section )
  {
    v27 = *(_QWORD *)(a1 + 6160);
    v24 = *(_QWORD *)(a1 + 6168);
    v26 = *(_BYTE *)(a5 + 16);
    section = _dwarf_read_str_index_val_itself(a1, a4, a2, a3, (int)&v32, 0, (__int64)a7);
    if ( !section )
    {
      v11 = v26 * v32;
      if ( *(_DWORD *)(a5 + 452) )
      {
        v12 = *(_QWORD *)(a5 + 456);
      }
      else
      {
        if ( !*(_DWORD *)(a5 + 464) )
        {
          if ( v24 >= v26 && v24 >= v11 )
          {
            if ( *(_WORD *)(a5 + 18) == 5 )
            {
              v28 = 0;
              v30 = 0;
              v31 = 0;
              v34 = 0;
              v35[0] = 0;
              v29 = 0;
              v15 = _dwarf_load_section(a1, a1 + 6160, a7);
              if ( v15 )
                return v15;
              dwarf_five_hdr = _dwarf_trial_read_dwarf_five_hdr(
                                 a1,
                                 0,
                                 *(_QWORD *)(a1 + 6168),
                                 (int)&v33,
                                 (int)v35,
                                 (int)&v34,
                                 (__int64)&v28,
                                 (__int64)&v29,
                                 (__int64)&v30,
                                 (__int64)&v31,
                                 (__int64)a7);
              section = 0;
              if ( dwarf_five_hdr )
              {
                if ( dwarf_five_hdr == 1 && a7 )
                {
                  dwarf_dealloc_error(a1, *a7);
                  section = 0;
                  *a7 = 0;
                }
              }
              else
              {
                v11 += v33;
              }
            }
LABEL_9:
            v13 = v26 + v11;
            v14 = v11;
            if ( v13 >= v11 )
              v14 = v26 + v11;
            if ( v24 < v14 )
            {
              dwarfstring_constructor(v35);
              dwarfstring_append_printf_u(
                v35,
                "DW_DLE_ATTR_FORM_SIZE_BAD: The end offset of a .debug_str_offsets table is 0x%x ",
                v13);
              dwarfstring_append_printf_u(v35, "but the object section is just 0x%x bytes long", v24);
              v20 = dwarfstring_string(v35, "but the object section is just 0x%x bytes long", v19);
              _dwarf_error_string(a1, a7, 116, v20);
              dwarfstring_destructor(v35);
            }
            else
            {
              v35[0] = 0;
              if ( v13 + v27 >= v27 + v11 )
              {
                v23 = section;
                (*(void (__fastcall **)(_QWORD *, unsigned __int64, _QWORD))(a1 + 8296))(v35, v27 + v11, v26);
                section = v23;
                *a6 = v35[0];
                return section;
              }
              _dwarf_error_string(a1, a7, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
            }
            return 1;
          }
LABEL_20:
          dwarfstring_constructor(v35);
          dwarfstring_append_printf_u(
            v35,
            "DW_DLE_ATTR_FORM_SIZE_BAD: An Attribute value (offset  into .debug_str_offsets) exceeds section length of 0x%x.",
            v24);
          dwarfstring_append_printf_u(v35, " Invalid offset is 0x%x .Corrupt Dwarf.", v11);
          v17 = dwarfstring_string(v35, " Invalid offset is 0x%x .Corrupt Dwarf.", v16);
          _dwarf_error_string(a1, a7, 116, v17);
          dwarfstring_destructor(v35);
          return 1;
        }
        v18 = _mm_loadu_si128((const __m128i *)(a5 + 472));
        v12 = _mm_add_epi64(v18, _mm_srli_si128(v18, 8)).m128i_u64[0];
      }
      v11 += v12;
      if ( v24 >= v12 && v24 >= v26 + v12 && v24 >= v11 )
        goto LABEL_9;
      goto LABEL_20;
    }
  }
  return section;
}

