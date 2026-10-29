__int64 __fastcall sub_13F4960(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  __int64 v5; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 21LL) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(a1 + 64) )
    {
      v4 = *(_BYTE *)(a4 + 904);
      if ( (v4 & 0x40) != 0 && (v4 & 0x10) == 0 )
      {
        v5 = *(_QWORD *)(a4 + 40);
        if ( !v5 )
          return sub_13F47D0(a2, a3);
        while ( (*(_BYTE *)(v5 + 904) & 0x10) == 0 )
        {
          v5 = *(_QWORD *)(v5 + 40);
          if ( !v5 )
            return sub_13F47D0(a2, a3);
        }
      }
    }
  }
  return 0;
}
