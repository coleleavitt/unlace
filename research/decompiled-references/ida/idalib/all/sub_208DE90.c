__int64 __fastcall sub_208DE90(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax

  result = 1;
  if ( ((1LL << (*(_BYTE *)(a1 + 32) & 0xF)) & 0x614) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( v2 )
    {
      if ( (unsigned __int8)sub_20BE3A0(v2) )
        return ((*(_BYTE *)(a1 + 33) >> 6) ^ 1) & 1;
      else
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
