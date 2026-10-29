__int64 __fastcall sub_798420(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 result; // rax

  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v2 == 65 )
    return sub_7D53F0(a1, a2);
  if ( v2 == 45 )
    return *(unsigned __int8 *)(a1 + 80);
  result = 0;
  if ( v2 == 66 )
    return (*(_BYTE *)(a1 + 80) & 2) != 0;
  return result;
}

