unsigned __int64 __fastcall sub_171230(__int64 *a1)
{
  __int64 v2; // [rsp+8h] [rbp-48h] BYREF
  __int128 v3; // [rsp+10h] [rbp-40h]
  unsigned __int64 v4; // [rsp+20h] [rbp-30h]

  v4 = __readfsqword(0x28u);
  v3 = 0;
  v2 = 0;
  if ( (unsigned __int8)is_mapped() )
  {
    if ( get_ea_name() <= 0 )
      sub_16FC90((__int64)&v2);
  }
  else if ( !(unsigned __int8)get_tid_name() )
  {
    if ( !(unsigned __int8)get_type_by_tid() || (unsigned int)get_tinfo_property4() == -1 )
    {
      clear_tinfo_t();
      sub_16FC90((__int64)&v2);
    }
    else
    {
      get_tinfo_property4();
      get_func_name();
      clear_tinfo_t();
    }
  }
  sub_94360(a1);
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree();
  }
  return v4 - __readfsqword(0x28u);
}

