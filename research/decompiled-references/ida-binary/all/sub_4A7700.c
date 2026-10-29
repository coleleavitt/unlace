unsigned __int64 __fastcall sub_4A7700(__int64 a1, QT::QAbstractScrollArea *a2)
{
  unsigned __int64 result; // rax

  result = sub_4A72C0(a1, a2);
  if ( *(char *)(a1 + 1784) >= 0 )
  {
    result = *(unsigned int *)(a1 + 2008);
    if ( (result & 0x20) == 0 )
    {
      *(_DWORD *)(a1 + 2008) = result | 0x40;
      result = sub_547F50(a1, 0);
      if ( (*(_BYTE *)(a1 + 1784) & 1) != 0 )
        result = sub_531B30(6, a1, 0);
      *(_DWORD *)(a1 + 2008) &= ~0x40u;
    }
  }
  return result;
}
