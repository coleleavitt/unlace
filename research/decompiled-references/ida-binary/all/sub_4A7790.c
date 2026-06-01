void __fastcall sub_4A7790(__int64 a1)
{
  int v1; // eax

  if ( *(_DWORD *)(a1 + 2376) == 2 )
  {
    sub_4A72C0(a1, *(QT::QAbstractScrollArea **)(a1 + 2384));
    if ( *(char *)(a1 + 1784) >= 0 )
    {
      v1 = *(_DWORD *)(a1 + 2008);
      if ( (v1 & 0x20) == 0 )
      {
        *(_DWORD *)(a1 + 2008) = v1 | 0x40;
        sub_547F50(a1, 0);
        if ( (*(_BYTE *)(a1 + 1784) & 1) != 0 )
          sub_531B30(6, a1, 0);
        *(_DWORD *)(a1 + 2008) &= ~0x40u;
      }
    }
  }
}
