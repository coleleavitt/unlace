__int64 __fastcall sub_237500(_QWORD *a1)
{
  unsigned int v1; // edx
  unsigned __int8 tinfo_property; // al
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( (get_tinfo_property(*a1, 2) & 0x3F) == 0x2D )
  {
    tinfo_property = get_tinfo_property(*a1, 19);
    v1 = 0;
    if ( !tinfo_property )
      return v1;
    v4[0] = tinfo_property;
    copy_tinfo_t(a1, v4);
    clear_tinfo_t(v4);
  }
  return 1;
}
