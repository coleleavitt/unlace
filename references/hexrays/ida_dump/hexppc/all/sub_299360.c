__int64 __fastcall sub_299360(__int64 *a1)
{
  __int64 v2; // rdi
  char tinfo_property; // bp
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  v2 = *a1;
  if ( (_BYTE)v2
    && ((v2 & 0xE) != 0 || (v2 & 0x30) == 0)
    && (v5[0] = get_tinfo_property(v2, 9),
        tinfo_property = get_tinfo_property(v5[0], 2),
        clear_tinfo_t(v5),
        (tinfo_property & 0x3F) != 0x30) )
  {
    return (unsigned int)sub_299000(a1) ^ 1;
  }
  else
  {
    return 0;
  }
}
