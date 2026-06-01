__int64 sub_23F8B0()
{
  unsigned int tinfo_size; // ebx

  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    get_tinfo_property();
    copy_tinfo_t();
    copy_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    tinfo_size = get_tinfo_size();
    clear_tinfo_t();
  }
  else
  {
    return (unsigned int)get_tinfo_size();
  }
  return tinfo_size;
}
