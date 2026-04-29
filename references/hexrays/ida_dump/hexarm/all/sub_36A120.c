__int64 __fastcall sub_36A120(__int64 a1)
{
  char v1; // al
  char v2; // dl
  int v3; // eax
  unsigned int tinfo; // ebp
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_BYTE *)(a1 + 88);
  v6[1] = __readfsqword(0x28u);
  v2 = v1;
  v3 = v1 & 0xF0;
  if ( (v2 & 0xF0) == 0xC0 )
    v3 = *(_DWORD *)(a1 + 28);
  if ( (unsigned int)(v3 - 208) > 0x2F )
    return calc_arglocs(a1);
  v6[0] = 0;
  tinfo = create_tinfo(v6, 12, 12, a1);
  if ( (_BYTE)tinfo )
    tinfo = get_tinfo_details(v6[0], 12, a1);
  clear_tinfo_t(v6);
  return tinfo;
}
