__int64 __fastcall sub_7984D0(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 32 > 5 )
  {
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x45 )
      return *(_QWORD *)(a1 + 48);
    else
      return 0;
  }
  return result;
}

