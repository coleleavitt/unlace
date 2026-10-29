__int64 __fastcall sub_B8BE90(__int64 a1)
{
  char v1; // dl
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v1 == 67 )
    return sub_BBE5D0(a1);
  if ( v1 == 47 )
    return *(unsigned __int8 *)(a1 + 80);
  result = 0;
  if ( v1 == 68 )
    return (*(_BYTE *)(a1 + 80) & 2) != 0;
  return result;
}
