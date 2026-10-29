__int64 __fastcall sub_13F00C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int16 v3; // ax

  while ( 1 )
  {
    v3 = *(_WORD *)(a2 + 16);
    if ( v3 == 1 )
      return 0;
    if ( (unsigned __int16)(v3 - 7) > 0xCu )
    {
      v2 = *(_QWORD *)(a2 + 8);
      if ( v2 )
      {
        if ( (*(_BYTE *)(v2 + 3) & 2) != 0 )
          break;
      }
    }
    a2 += 24;
  }
  return 1;
}
