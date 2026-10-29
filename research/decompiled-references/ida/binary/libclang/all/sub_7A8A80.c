__int64 __fastcall sub_7A8A80(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 38 > 6 )
  {
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x32 )
    {
      result = *(_QWORD *)(a1 + 56);
      if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 38 >= 7 )
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

