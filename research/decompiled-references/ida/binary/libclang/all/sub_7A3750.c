__int64 __fastcall sub_7A3750(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl

  result = *(_QWORD *)(a1 + 128);
  if ( result )
  {
    v2 = *(_BYTE *)(result + 10);
    result = 0;
    if ( (v2 & 0x20) != 0 )
    {
      result = sub_7A2060(a1);
      if ( (*(_BYTE *)(result + 28) & 0x7F) == 0x45 )
        return *(_QWORD *)(result + 48);
    }
  }
  return result;
}

