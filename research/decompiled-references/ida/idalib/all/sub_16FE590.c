__int64 __fastcall sub_16FE590(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  unsigned int v3; // edx
  __int64 result; // rax
  unsigned __int8 v5; // dl

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v2 == 72 )
  {
    a2 = *(_QWORD *)(a2 + 48);
    v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  }
  v3 = v2 - 58;
  result = 0;
  if ( v3 <= 3 )
  {
    v5 = *(_BYTE *)(a2 + 73) >> 5;
    LOBYTE(result) = v5 == 3;
    return (v5 <= 1u) | (unsigned int)result;
  }
  return result;
}
