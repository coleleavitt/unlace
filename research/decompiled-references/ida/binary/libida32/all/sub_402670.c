__int64 __fastcall sub_402670(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v6; // [rsp+18h] [rbp-30h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v4 = 0;
  if ( get_tinfo_by_edm_name(&v4, 0, a2) == -1 )
  {
    v2 = 0;
  }
  else
  {
    ptr = nullptr;
    v6 = 0;
    if ( (v4 & 0x100) != 0 )
      get_tinfo_pdata(&ptr, v4, 0);
    set_error_string();
    if ( ptr )
    {
      *(_QWORD *)&v6 = 0;
      qfree(ptr);
    }
    v2 = -31;
  }
  clear_tinfo_t(&v4);
  return v2;
}

