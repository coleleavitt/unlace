_BOOL8 __fastcall sub_53CE30(__int64 a1, __int64 a2, char a3, int a4)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r13

  v5 = *(_WORD *)(a1 + 68);
  v6 = *(_QWORD *)(a2 + 1672);
  if ( (~(_BYTE)v5 & 0x70) == 0 )
  {
    if ( !under_debugger )
      interr(1083);
    BUG();
  }
  if ( *(_DWORD *)(a1 + 60) != *(_DWORD *)(v6 + 2608) )
  {
    sub_540F70(a1, 1);
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(v6 + 2608);
    v5 = *(_WORD *)(a1 + 68);
  }
  if ( ((unsigned __int16)a4 & v5) == 0 )
  {
    if ( *(_QWORD *)(a1 + 32) || (v5 & 0x4000) != 0 && *(_QWORD *)(a1 + 16) != -1 )
    {
      if ( (v5 & 1) == 0 )
      {
        sub_53C680(a1, a2);
        v5 = *(_WORD *)(a1 + 68);
      }
    }
    else
    {
      v5 |= 5u;
      *(_WORD *)(a1 + 68) = v5;
    }
    if ( (a4 & 3) == 2 && ((a4 & 0x40000000) == 0 || (*(_BYTE *)(a1 + 70) & 0x2F) == 0xD) )
    {
      *(_QWORD *)(a1 + 48) = -1;
      if ( a4 >= 0 || (*(_BYTE *)(a1 + 70) & 0xF) != 0xC )
      {
        *(_WORD *)(a1 + 68) = v5 | 2;
        sub_5481E0(a1, v6);
        if ( (*(_WORD *)(a1 + 68) & 0x40) == 0 )
          goto LABEL_10;
        return 1;
      }
    }
  }
  if ( (v5 & 0x40) != 0 )
    return 1;
LABEL_10:
  if ( (a3 & 0xF) != 0xD || (a3 & 0x3F) == 0x3D )
    return 1;
  return (*(_BYTE *)(a1 + 70) & 0x3F) == (a3 & 0x3F);
}
