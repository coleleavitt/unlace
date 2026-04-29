__int64 __fastcall sub_2D360(__int64 a1, unsigned __int64 a2)
{
  unsigned int tinfo_details; // r12d

  tinfo_details = parse_decl();
  if ( (_BYTE)tinfo_details )
  {
    if ( *(_QWORD *)(a1 + 16) > 1u )
    {
      tinfo_details = get_tinfo_details();
      if ( (_BYTE)tinfo_details && a2 > 1 )
      {
        if ( a2 == 2 )
        {
          LOBYTE(tinfo_details) = 0;
LABEL_10:
          cleanup_argloc();
          clear_tinfo_t();
          return tinfo_details;
        }
        get_tinfo_size();
      }
      tinfo_details = 0;
      goto LABEL_10;
    }
    return 0;
  }
  return tinfo_details;
}
