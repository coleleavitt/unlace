__int64 __fastcall dwarf_get_RLE_name(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0LL:
      *a2 = "DW_RLE_end_of_list";
      result = 0;
      break;
    case 1LL:
      *a2 = "DW_RLE_base_addressx";
      result = 0;
      break;
    case 2LL:
      *a2 = "DW_RLE_startx_endx";
      result = 0;
      break;
    case 3LL:
      *a2 = "DW_RLE_startx_length";
      result = 0;
      break;
    case 4LL:
      *a2 = "DW_RLE_offset_pair";
      result = 0;
      break;
    case 5LL:
      *a2 = "DW_RLE_base_address";
      result = 0;
      break;
    case 6LL:
      *a2 = "DW_RLE_start_end";
      result = 0;
      break;
    case 7LL:
      *a2 = "DW_RLE_start_length";
      result = 0;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

