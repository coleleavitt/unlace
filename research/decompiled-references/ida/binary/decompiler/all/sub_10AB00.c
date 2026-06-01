unsigned __int64 sub_10AB00()
{
  unsigned __int64 v1; // [rsp+58h] [rbp-10h]

  v1 = __readfsqword(0x28u);
  for_all_arglocs();
  return v1 - __readfsqword(0x28u);
}
