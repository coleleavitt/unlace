bool __fastcall sub_DCB10(_QWORD *a1, char a2)
{
  __int64 v3; // rdi
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  v3 = *a1;
  if ( !(_BYTE)v3 )
    return 0;
  if ( a2 )
  {
    if ( (get_tinfo_property(v3, 2) & 0xF) != 0xA )
      return 0;
    v5[0] = get_tinfo_property(*a1, 9);
    copy_tinfo_t(a1, v5);
    clear_tinfo_t(v5);
    v3 = *a1;
  }
  return (get_tinfo_property(v3, 2) & 0xF) == 12;
}
