__int64 __fastcall sub_369210(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 320) )
  {
    v3[0] = get_tinfo_property(*(_QWORD *)(a1 + 328), 24);
    LOBYTE(v1) = (get_tinfo_property(v3[0], 2) & 0x3F) != 1;
    clear_tinfo_t(v3);
  }
  else
  {
    LOBYTE(v1) = *(_DWORD *)(a1 + 480) != -1;
  }
  return v1;
}
