__int64 __fastcall dwarf_get_LNE_name(__int64 a1, _QWORD *a2)
{
  if ( (unsigned int)a1 <= 0x20 )
  {
    if ( (_DWORD)a1 )
    {
      switch ( a1 )
      {
        case 1LL:
          *a2 = "DW_LNE_end_sequence";
          return 0;
        case 2LL:
          *a2 = "DW_LNE_set_address";
          return 0;
        case 3LL:
          *a2 = "DW_LNE_define_file";
          return 0;
        case 4LL:
          *a2 = "DW_LNE_set_discriminator";
          return 0;
        case 17LL:
          *a2 = "DW_LNE_HP_negate_is_UV_update";
          return 0;
        case 18LL:
          *a2 = "DW_LNE_HP_push_context";
          return 0;
        case 19LL:
          *a2 = "DW_LNE_HP_pop_context";
          return 0;
        case 20LL:
          *a2 = "DW_LNE_HP_set_file_line_column";
          return 0;
        case 21LL:
          *a2 = "DW_LNE_HP_set_routine_name";
          return 0;
        case 22LL:
          *a2 = "DW_LNE_HP_set_sequence";
          return 0;
        case 23LL:
          *a2 = "DW_LNE_HP_negate_post_semantics";
          return 0;
        case 24LL:
          *a2 = "DW_LNE_HP_negate_function_exit";
          return 0;
        case 25LL:
          *a2 = "DW_LNE_HP_negate_front_end_logical";
          return 0;
        case 32LL:
          *a2 = "DW_LNE_HP_define_proc";
          return 0;
        default:
          return 0xFFFFFFFFLL;
      }
    }
    return 0xFFFFFFFFLL;
  }
  if ( (_DWORD)a1 == 128 )
  {
    *a2 = "DW_LNE_HP_source_file_correlation";
  }
  else
  {
    if ( (_DWORD)a1 != 255 )
      return 0xFFFFFFFFLL;
    *a2 = "DW_LNE_hi_user";
  }
  return 0;
}

