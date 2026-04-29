bool __fastcall sub_3E60D0(__int64 a1)
{
  _QWORD v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 32) != 4
    || **(_DWORD **)(a1 + 40) != 9
    || !(unsigned __int8)sub_11C340((char *)(a1 + 48), v2, 1u) )
  {
    return 0;
  }
  if ( *(_DWORD *)a1 != 19 )
  {
    if ( *(_DWORD *)a1 == 21 )
      return v2[0] == 0x4330000080000000LL;
    return 0;
  }
  return v2[0] == 0x4330000000000000LL;
}
