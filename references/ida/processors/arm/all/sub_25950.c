__int64 __fastcall sub_25950(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax

  set_immd();
  if ( !(unsigned __int8)is_defarg() )
  {
    v2 = *(_WORD *)(a2 + 24);
    if ( v2 > 0x51u )
    {
      if ( v2 > 0x3FAu )
      {
        if ( v2 != 1062 )
          return get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      }
      else if ( v2 <= 0x3F8u && v2 != 963 )
      {
        return get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      }
      set_op_type();
      return get_flags_ex(*(_QWORD *)(a2 + 16), 0);
    }
    if ( v2 > 9u )
    {
      switch ( *(_WORD *)(a2 + 24) )
      {
        case 0xA:
        case 0xB:
        case 0x12:
        case 0x13:
        case 0x16:
        case 0x18:
        case 0x19:
          num_flag();
          set_op_type();
          break;
        case 0x2C:
        case 0x51:
          if ( !sub_25880(a1, a2) )
          {
            get_default_reftype();
            op_offset();
          }
          break;
        default:
          return get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      }
    }
  }
  return get_flags_ex(*(_QWORD *)(a2 + 16), 0);
}
