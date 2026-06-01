__int64 __fastcall sub_1D39EE0(__int64 a1)
{
  char v1; // al
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v1 != 67 )
  {
    if ( v1 == 47 )
    {
      if ( !*(_BYTE *)(a1 + 81) )
        return 0;
    }
    else if ( v1 != 68 || (*(_BYTE *)(a1 + 80) & 4) == 0 )
    {
      return 0;
    }
    return (unsigned int)(*(_DWORD *)(a1 + 84) + 1);
  }
  result = *(unsigned int *)(a1 + 64);
  if ( !(_DWORD)result )
    return 0;
  return result;
}
