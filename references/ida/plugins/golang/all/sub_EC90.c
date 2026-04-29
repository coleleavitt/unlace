unsigned __int64 sub_EC90()
{
  _BYTE *src; // [rsp+70h] [rbp-58h]
  unsigned __int64 v2; // [rsp+88h] [rbp-40h]

  v2 = __readfsqword(0x28u);
  get_dword();
  get_max_strlit_length();
  get_strlit_contents();
  create_strlit();
  set_name();
  if ( get_func() )
  {
    get_func_cmt();
    src = (_BYTE *)qvector_reserve();
    *src = 0;
    memcpy(src, nullptr, 0);
    set_func_cmt();
    if ( src )
      qfree();
  }
  get_func_name();
  return v2 - __readfsqword(0x28u);
}
