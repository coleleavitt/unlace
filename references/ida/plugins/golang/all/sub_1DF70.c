unsigned __int64 sub_1DF70()
{
  char *src; // [rsp+0h] [rbp-68h]
  void *v2; // [rsp+28h] [rbp-40h]
  unsigned __int64 v3; // [rsp+58h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  src = (char *)qvector_reserve();
  strcpy(src, "Plugins/Golang");
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0xFu);
  if ( src )
    qfree();
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}
