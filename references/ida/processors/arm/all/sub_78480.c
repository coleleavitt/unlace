__int64 sub_78480()
{
  char *s; // [rsp+30h] [rbp-48h]
  unsigned __int64 v2; // [rsp+48h] [rbp-30h]

  v2 = __readfsqword(0x28u);
  copy_tinfo_t();
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    s = (char *)get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
  }
  clear_tinfo_t();
  return 0;
}
