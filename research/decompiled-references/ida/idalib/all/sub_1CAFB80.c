__int64 __fastcall sub_1CAFB80(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 16);
  if ( !(_BYTE)result )
  {
    if ( (*(_WORD *)(a2 + 20) & 0x7FFFu) >= *(_DWORD *)(a1 + 12) )
    {
      *(_BYTE *)(a1 + 17) = 1;
      *(_DWORD *)(a1 + 20) = 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
