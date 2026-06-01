__int64 __fastcall sub_41A0E0(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a1;
  v5[1] = __readfsqword(0x28u);
  v5[0] = 0;
  sub_6141A0(v2, 26, v5, 8);
  if ( a2 >= LODWORD(v5[0]) && a2 < HIDWORD(v5[0]) )
  {
    v5[0] = 0;
    if ( (unsigned __int8)get_type_by_tid(v5, a2) )
    {
      if ( (get_tinfo_property(v5[0], 2) & 0x3F) == 0x2D )
      {
        v3 = (get_edm_by_tid(v5, 0) != -1) + 1;
      }
      else if ( (get_tinfo_property(v5[0], 2) & 0x2F) == 0xD )
      {
        v3 = 3;
        if ( get_udm_by_tid(v5, 0, a2) != -1 )
          v3 = ((unsigned int)get_tinfo_property4(v5[0], 300, 0, 0, 0, 0) != -1) + 4;
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
    clear_tinfo_t(v5);
  }
  else
  {
    return 0;
  }
  return v3;
}

