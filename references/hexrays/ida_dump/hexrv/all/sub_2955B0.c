bool __fastcall sub_2955B0(__int64 *a1)
{
  __int64 v1; // rdi
  char tinfo_property; // bl
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *a1;
  v4[1] = __readfsqword(0x28u);
  if ( !(_BYTE)v1 || (v1 & 0xE) == 0 && (v1 & 0x30) != 0 )
    return 0;
  v4[0] = get_tinfo_property(v1, 9);
  tinfo_property = get_tinfo_property(v4[0], 2);
  clear_tinfo_t(v4);
  return (tinfo_property & 0x3F) != 48;
}
