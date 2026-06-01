unsigned __int64 sub_156530()
{
  unsigned __int64 v1; // [rsp+28h] [rbp-30h]

  v1 = __readfsqword(0x28u);
  get_idati();
  create_tinfo();
  get_enum_expr();
  tag_remove();
  clear_tinfo_t();
  return v1 - __readfsqword(0x28u);
}

