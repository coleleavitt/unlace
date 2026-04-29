__int64 __fastcall sub_77F00(__int64 a1, _DWORD *a2)
{
  int tinfo_size; // eax

  if ( !(unsigned int)visit_subtypes() )
  {
    tinfo_size = get_tinfo_size();
    if ( a2 )
      *a2 = tinfo_size;
  }
  clear_tinfo_t();
  return 0;
}
