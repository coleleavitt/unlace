/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57730
// Address: 0x00057730

//----- (00057730) --------------------------------------------------------
int __fastcall sub_57730(int a1, int a2)
{
  int result; // r0
  unsigned __int8 v4; // [sp+3h] [bp-9h] BYREF

  if ( sub_57384(*(_DWORD *)(a1 + 8), (int)&v4, 1) != 1 )
    return sub_378E4((_BYTE *)a2, "read error");
  result = 0;
  *(_DWORD *)(a2 + 8) = v4;
  return result;
}
