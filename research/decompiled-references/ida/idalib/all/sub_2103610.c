__int64 __fastcall sub_2103610(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char v3; // r13

  v2 = *(unsigned __int8 *)(a1 + 36);
  v3 = *(_BYTE *)(a2 + 36);
  if ( (_BYTE)v2 )
  {
    if ( v3 )
    {
      v2 = *(unsigned __int8 *)(a2 + 36);
      if ( sub_9C4B50(a1, a2) >= 0 )
      {
        v2 = 0;
        if ( sub_9C4B50(a2, a1) >= 0 )
          LOBYTE(v2) = *(_BYTE *)(a1 + 32) < *(_BYTE *)(a2 + 32);
      }
    }
    return v2;
  }
  if ( v3 )
    return v2;
  if ( sub_9C4B50(a1, a2) >= 0 )
  {
    if ( sub_9C4B50(a2, a1) >= 0 )
    {
      LOBYTE(v2) = *(_DWORD *)(a1 + 32) < *(_DWORD *)(a2 + 32);
      return v2;
    }
    return v2;
  }
  return 1;
}
