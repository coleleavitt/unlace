__int64 sub_619A80()
{
  void *that; // rbx
  unsigned int v1; // ebp
  int aflags; // eax
  __int64 v3; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = 0;
  that = (void *)getinf(19);
  v1 = 0;
  while ( that != (void *)-1LL )
  {
    show_auto(that, 0);
    aflags = get_aflags(that);
    if ( ((aflags & 0x800) == 0 || (aflags & 0xC2000000) == 0x80000000 || (aflags & 0x42000000) == 0x40000000)
      && get_ea_name(&ptr, that, 1, 0) > 0 )
    {
      v1 += (unsigned __int8)apply_named_type(that, (char *)ptr);
    }
    v3 = getinf(20);
    that = (void *)next_that(that, v3, sub_3B7D00, 0);
  }
  if ( ptr )
  {
    *(_QWORD *)&v6 = 0;
    qfree(ptr);
  }
  return v1;
}
