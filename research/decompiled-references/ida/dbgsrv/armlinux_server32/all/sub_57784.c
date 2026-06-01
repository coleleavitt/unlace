/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57784
// Address: 0x00057784

//----- (00057784) --------------------------------------------------------
int __fastcall sub_57784(int a1, int a2)
{
  int result; // r0
  unsigned __int16 v4; // [sp+2h] [bp-Ah] BYREF

  if ( sub_57384(*(_DWORD *)(a1 + 8), (int)&v4, 2) != 2 )
    return sub_378E4((_BYTE *)a2, "read error");
  result = 0;
  *(_DWORD *)(a2 + 8) = v4;
  return result;
}
