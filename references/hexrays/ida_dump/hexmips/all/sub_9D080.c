__int64 __fastcall sub_9D080(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( (a3 & 0x80) == 0 )
    *(_DWORD *)(a2 + 4) &= ~0x80u;
  result = sub_1193D0(a2, a1);
  if ( *(_BYTE *)(a2 + 32) )
  {
    if ( (*(_BYTE *)(a2 + 33) & 4) != 0 )
    {
      result = sub_1188D0(*(unsigned int *)(a2 + 36));
      if ( !(_BYTE)result )
        *(_BYTE *)(a2 + 33) &= ~4u;
    }
  }
  if ( *(_BYTE *)(a2 + 48) )
  {
    if ( (*(_BYTE *)(a2 + 49) & 4) != 0 )
    {
      result = sub_1188D0(*(unsigned int *)(a2 + 52));
      if ( !(_BYTE)result )
        *(_BYTE *)(a2 + 49) &= ~4u;
    }
  }
  if ( *(_BYTE *)(a2 + 64) && (*(_BYTE *)(a2 + 65) & 4) != 0 )
  {
    result = sub_1188D0(*(unsigned int *)(a2 + 68));
    if ( !(_BYTE)result )
      *(_BYTE *)(a2 + 65) &= ~4u;
  }
  return result;
}
