__int64 __fastcall sub_2677D0(__int64 a1, _QWORD *a2)
{
  char tinfo_property; // al
  unsigned int v3; // ebp
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  v5[0] = get_tinfo_property(*a2, 13);
  if ( !LOBYTE(v5[0]) )
  {
    if ( !under_debugger )
      sub_37CFE0(50206);
    BUG();
  }
  tinfo_property = get_tinfo_property(v5[0], 2);
  if ( (tinfo_property & 0xFu) <= 0xA || (v3 = 2, (tinfo_property & 0x3F) == 0x2D) )
    v3 = *(_BYTE *)(a1 + 453) ^ 1;
  clear_tinfo_t(v5);
  return v3;
}
