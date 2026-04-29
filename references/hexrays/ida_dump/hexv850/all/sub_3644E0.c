unsigned __int64 __fastcall sub_3644E0(__int64 a1)
{
  __int64 tinfo_property; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  tinfo_property = 0;
  tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 80), 9);
  if ( (get_tinfo_property(tinfo_property, 2) & 0x3F) == 0xD && !(unsigned int)verify_tinfo(tinfo_property) )
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFB7FFD | 0x8002;
  clear_tinfo_t(&tinfo_property);
  return v3 - __readfsqword(0x28u);
}
