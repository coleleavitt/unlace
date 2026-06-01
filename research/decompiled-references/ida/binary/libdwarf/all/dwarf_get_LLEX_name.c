__int64 __fastcall dwarf_get_LLEX_name(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0LL:
      *a2 = "DW_LLEX_end_of_list_entry";
      result = 0;
      break;
    case 1LL:
      *a2 = "DW_LLEX_base_address_selection_entry";
      result = 0;
      break;
    case 2LL:
      *a2 = "DW_LLEX_start_end_entry";
      result = 0;
      break;
    case 3LL:
      *a2 = "DW_LLEX_start_length_entry";
      result = 0;
      break;
    case 4LL:
      *a2 = "DW_LLEX_offset_pair_entry";
      result = 0;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

