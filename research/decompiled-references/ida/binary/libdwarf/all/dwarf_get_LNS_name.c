__int64 __fastcall dwarf_get_LNS_name(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 1LL:
      *a2 = "DW_LNS_copy";
      goto LABEL_3;
    case 2LL:
      *a2 = "DW_LNS_advance_pc";
      goto LABEL_3;
    case 3LL:
      *a2 = "DW_LNS_advance_line";
      goto LABEL_3;
    case 4LL:
      *a2 = "DW_LNS_set_file";
      goto LABEL_3;
    case 5LL:
      *a2 = "DW_LNS_set_column";
      goto LABEL_3;
    case 6LL:
      *a2 = "DW_LNS_negate_stmt";
      goto LABEL_3;
    case 7LL:
      *a2 = "DW_LNS_set_basic_block";
      goto LABEL_3;
    case 8LL:
      *a2 = "DW_LNS_const_add_pc";
      goto LABEL_3;
    case 9LL:
      *a2 = "DW_LNS_fixed_advance_pc";
      goto LABEL_3;
    case 10LL:
      *a2 = "DW_LNS_set_prologue_end";
      goto LABEL_3;
    case 11LL:
      *a2 = "DW_LNS_set_epilogue_begin";
      goto LABEL_3;
    case 12LL:
      *a2 = "DW_LNS_set_isa";
      goto LABEL_3;
    case 13LL:
      *a2 = "DW_LNS_set_address_from_logical";
      goto LABEL_3;
    case 14LL:
      *a2 = "DW_LNS_inlined_call";
      goto LABEL_3;
    case 15LL:
      *a2 = "DW_LNS_pop_context";
LABEL_3:
      result = 0;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

