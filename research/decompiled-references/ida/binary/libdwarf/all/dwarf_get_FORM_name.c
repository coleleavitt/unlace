__int64 __fastcall dwarf_get_FORM_name(__int64 a1, _QWORD *a2)
{
  if ( (unsigned int)a1 <= 0x2C )
  {
    if ( (_DWORD)a1 )
    {
      switch ( a1 )
      {
        case 1LL:
          *a2 = "DW_FORM_addr";
          return 0;
        case 3LL:
          *a2 = "DW_FORM_block2";
          return 0;
        case 4LL:
          *a2 = "DW_FORM_block4";
          return 0;
        case 5LL:
          *a2 = "DW_FORM_data2";
          return 0;
        case 6LL:
          *a2 = "DW_FORM_data4";
          return 0;
        case 7LL:
          *a2 = "DW_FORM_data8";
          return 0;
        case 8LL:
          *a2 = "DW_FORM_string";
          return 0;
        case 9LL:
          *a2 = "DW_FORM_block";
          return 0;
        case 10LL:
          *a2 = "DW_FORM_block1";
          return 0;
        case 11LL:
          *a2 = "DW_FORM_data1";
          return 0;
        case 12LL:
          *a2 = "DW_FORM_flag";
          return 0;
        case 13LL:
          *a2 = "DW_FORM_sdata";
          return 0;
        case 14LL:
          *a2 = "DW_FORM_strp";
          return 0;
        case 15LL:
          *a2 = "DW_FORM_udata";
          return 0;
        case 16LL:
          *a2 = "DW_FORM_ref_addr";
          return 0;
        case 17LL:
          *a2 = "DW_FORM_ref1";
          return 0;
        case 18LL:
          *a2 = "DW_FORM_ref2";
          return 0;
        case 19LL:
          *a2 = "DW_FORM_ref4";
          return 0;
        case 20LL:
          *a2 = "DW_FORM_ref8";
          return 0;
        case 21LL:
          *a2 = "DW_FORM_ref_udata";
          return 0;
        case 22LL:
          *a2 = "DW_FORM_indirect";
          return 0;
        case 23LL:
          *a2 = "DW_FORM_sec_offset";
          return 0;
        case 24LL:
          *a2 = "DW_FORM_exprloc";
          return 0;
        case 25LL:
          *a2 = "DW_FORM_flag_present";
          return 0;
        case 26LL:
          *a2 = "DW_FORM_strx";
          return 0;
        case 27LL:
          *a2 = "DW_FORM_addrx";
          return 0;
        case 28LL:
          *a2 = "DW_FORM_ref_sup4";
          return 0;
        case 29LL:
          *a2 = "DW_FORM_strp_sup";
          return 0;
        case 30LL:
          *a2 = "DW_FORM_data16";
          return 0;
        case 31LL:
          *a2 = "DW_FORM_line_strp";
          return 0;
        case 32LL:
          *a2 = "DW_FORM_ref_sig8";
          return 0;
        case 33LL:
          *a2 = "DW_FORM_implicit_const";
          return 0;
        case 34LL:
          *a2 = "DW_FORM_loclistx";
          return 0;
        case 35LL:
          *a2 = "DW_FORM_rnglistx";
          return 0;
        case 36LL:
          *a2 = "DW_FORM_ref_sup8";
          return 0;
        case 37LL:
          *a2 = "DW_FORM_strx1";
          return 0;
        case 38LL:
          *a2 = "DW_FORM_strx2";
          return 0;
        case 39LL:
          *a2 = "DW_FORM_strx3";
          return 0;
        case 40LL:
          *a2 = "DW_FORM_strx4";
          return 0;
        case 41LL:
          *a2 = "DW_FORM_addrx1";
          return 0;
        case 42LL:
          *a2 = "DW_FORM_addrx2";
          return 0;
        case 43LL:
          *a2 = "DW_FORM_addrx3";
          return 0;
        case 44LL:
          *a2 = "DW_FORM_addrx4";
          return 0;
        default:
          return 0xFFFFFFFFLL;
      }
    }
    return 0xFFFFFFFFLL;
  }
  if ( (_DWORD)a1 == 7968 )
  {
    *a2 = "DW_FORM_GNU_ref_alt";
    return 0;
  }
  if ( (unsigned int)a1 <= 0x1F20 )
  {
    if ( (_DWORD)a1 == 7937 )
    {
      *a2 = "DW_FORM_GNU_addr_index";
      return 0;
    }
    if ( (_DWORD)a1 == 7938 )
    {
      *a2 = "DW_FORM_GNU_str_index";
      return 0;
    }
  }
  else
  {
    if ( (_DWORD)a1 == 7969 )
    {
      *a2 = "DW_FORM_GNU_strp_alt";
      return 0;
    }
    if ( (_DWORD)a1 == 8193 )
    {
      *a2 = "DW_FORM_LLVM_addrx_offset";
      return 0;
    }
  }
  return 0xFFFFFFFFLL;
}

