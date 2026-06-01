/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_577D8
// Address: 0x000577D8

//----- (000577D8) --------------------------------------------------------
int __fastcall sub_577D8(int a1, int a2)
{
  int result; // r0
  int v4; // [sp+0h] [bp-Ch] BYREF

  if ( sub_57384(*(_DWORD *)(a1 + 8), (int)&v4, 4) != 4 )
    return sub_378E4((_BYTE *)a2, "read error");
  result = 0;
  *(_DWORD *)(a2 + 8) = v4;
  return result;
}
