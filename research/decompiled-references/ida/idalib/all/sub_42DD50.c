__int64 __fastcall sub_42DD50(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int128 v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v2 = *a1;
  v6 = __readfsqword(0x28u);
  v5 = 0;
  sub_630CA0(v2, 26, &v5, 16);
  if ( a2 >= (unsigned __int64)v5 && a2 < *((_QWORD *)&v5 + 1) )
  {
    *(_QWORD *)&v5 = 0;
    if ( (unsigned __int8)get_type_by_tid(&v5, a2) )
    {
      if ( (get_tinfo_property(v5, 2) & 0x3F) == 0x2D )
      {
        v3 = (get_edm_by_tid(&v5, 0) != -1) + 1;
      }
      else if ( (get_tinfo_property(v5, 2) & 0x2F) == 0xD )
      {
        v3 = 3;
        if ( get_udm_by_tid(&v5, 0, a2) != -1 )
          v3 = (get_tinfo_property4(v5, 300, 0, 0, 0, 0) != -1) + 4;
      }
      else
      {
        v3 = 6;
      }
    }
    else
    {
      v3 = 7;
    }
    clear_tinfo_t(&v5);
  }
  else
  {
    return 0;
  }
  return v3;
}
