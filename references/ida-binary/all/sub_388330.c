unsigned __int64 sub_388330()
{
  __int64 path; // rax
  __int64 free_disk_space; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  char v5[40]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  path = get_path(2);
  free_disk_space = get_free_disk_space(path);
  if ( qword_8BCA78 != free_disk_space )
  {
    qword_8BCA78 = free_disk_space;
    LODWORD(v2) = free_disk_space;
    if ( free_disk_space <= 0x3FFFFFFF )
    {
      if ( free_disk_space > 0xFFFFF )
      {
        v2 = free_disk_space >> 20;
        v3 = 77;
      }
      else
      {
        v3 = 32;
        if ( free_disk_space > 102399 )
        {
          v2 = free_disk_space >> 10;
          v3 = 75;
        }
      }
    }
    else
    {
      v2 = free_disk_space >> 30;
      v3 = 71;
    }
    qsnprintf(v5, 40, "Disk: %u%cB", v2, v3);
    sub_388000(2, v5, nullptr);
  }
  return v6 - __readfsqword(0x28u);
}
