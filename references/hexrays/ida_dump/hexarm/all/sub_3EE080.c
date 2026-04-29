char __fastcall sub_3EE080(__int64 a1, __int64 a2)
{
  char v2; // dl
  char result; // al
  int v4; // edx

  v2 = *(_BYTE *)(a2 + 1);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
  {
    result = v2 == 1 || v2 == 12;
    if ( result )
    {
      result = 0;
      if ( (unsigned __int16)(*(_WORD *)(a2 + 6) - 163) <= 0x1Fu && *(char *)(a2 + 32) > 0 )
        return *(_BYTE *)(a2 + 34) == 0;
    }
  }
  else
  {
    result = 0;
    if ( v2 == 1 )
    {
      v4 = *(unsigned __int16 *)(a2 + 6);
      result = 1;
      if ( (unsigned int)(v4 - 45) > 0xF )
      {
        result = 0;
        if ( (unsigned int)(v4 - 61) <= 0x1F )
          return (unsigned __int64)get_dtype_size(*(unsigned __int8 *)(a2 + 5)) <= 7;
      }
    }
  }
  return result;
}
