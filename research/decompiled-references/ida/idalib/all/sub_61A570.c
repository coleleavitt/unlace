unsigned __int64 __fastcall sub_61A570(__int64 *a1, void *a2)
{
  int v2; // eax
  int aflags; // eax
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v2 = sub_3BE900(a1, (unsigned __int64)a2, 4);
  if ( (~(_WORD)v2 & 0x600) == 0 && (v2 & 0x10000000) != 0 )
  {
    v5 = 0;
    if ( (unsigned __int8)sub_694940(a1, &v5, a2) )
    {
      if ( (debug & 0x4000) != 0 )
        sub_3879F0();
      if ( (get_tinfo_property(v5, 2) & 0xF) == 0xC )
      {
        aflags = get_aflags(a2);
        sub_617E20(a1, a2, &v5, (aflags & 0x2000000) != 0);
      }
    }
    clear_tinfo_t(&v5);
  }
  return v6 - __readfsqword(0x28u);
}
