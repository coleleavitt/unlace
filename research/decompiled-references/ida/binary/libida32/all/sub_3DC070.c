__int64 __fastcall sub_3DC070(unsigned int a1)
{
  unsigned int v1; // ebx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v4; // [rsp+8h] [rbp-20h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  ptr = nullptr;
  v4 = 0;
  get_ea_name(&ptr, a1, 0, 0);
  v1 = sub_375980(0x47u, a1, ptr);
  if ( ptr )
  {
    *(_QWORD *)&v4 = 0;
    qfree(ptr);
  }
  return v1;
}

