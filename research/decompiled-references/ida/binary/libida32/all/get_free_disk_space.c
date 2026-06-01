__fsblkcnt64_t get_free_disk_space()
{
  struct statvfs64 v1; // [rsp+0h] [rbp-1088h] BYREF
  char file[4104]; // [rsp+70h] [rbp-1018h] BYREF
  unsigned __int64 v3; // [rsp+1078h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  qdirname(file);
  if ( statvfs64(file, &v1) )
  {
    qerrstr(-1);
    sub_375400();
  }
  return v1.f_bavail * v1.f_bsize;
}

