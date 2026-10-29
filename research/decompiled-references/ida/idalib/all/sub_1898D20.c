__int64 __fastcall sub_1898D20(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (_BYTE)result == 18 )
    {
      if ( (*(_BYTE *)(a2 + 58) & 2) != 0 )
        return sub_1898B30(a1, a2, 1, 1);
      else
        return sub_1898B30(a1, a2, 1, 0);
    }
  }
  return result;
}
