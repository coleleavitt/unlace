__int64 __fastcall sub_B8D170(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
    v2 = *(_QWORD *)v2;
  if ( !v2 )
    return 0;
  if ( (*(_BYTE *)(v2 + 8) & 0x7F) != 0x18
    || v2 == 48
    || (v3 = *(_QWORD *)(v2 - 8), (v3 & 7) == 0) && (v3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(sub_B8C1B0(v2) + 16);
      if ( (v4 & 4) != 0 )
      {
        v2 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v2 )
          return 0;
      }
      else
      {
        v2 = v4 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v2 )
          return 0;
      }
      if ( (*(_BYTE *)(v2 + 8) & 0x7F) == 0x18 && v2 != 48 )
      {
        v5 = *(_QWORD *)(v2 - 8);
        if ( (v5 & 7) != 0 || (v5 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return 1;
      }
    }
  }
  return 1;
}
