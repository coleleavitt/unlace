/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D67F
// Address: 0x0047D67F

//----- (0047D67F) --------------------------------------------------------
UINT __cdecl sub_47D67F(UINT a1)
{
  UINT result; // eax
  _DWORD v2[3]; // [esp+0h] [ebp-10h] BYREF
  char v3; // [esp+Ch] [ebp-4h]

  sub_467FF8((int)v2, nullptr);
  dword_4B7F84 = 0;
  result = a1;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      dword_4B7F84 = 1;
      result = GetOEMCP();
      break;
    case 0xFFFFFFFD:
      dword_4B7F84 = 1;
      result = GetACP();
      break;
    case 0xFFFFFFFC:
      dword_4B7F84 = 1;
      result = *(_DWORD *)(v2[1] + 8);
      break;
  }
  if ( v3 )
    *(_DWORD *)(v2[0] + 848) &= ~2u;
  return result;
}
// 4B7F84: using guessed type int dword_4B7F84;
