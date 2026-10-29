/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57654
// Address: 0x00057654

//----- (00057654) --------------------------------------------------------
int __fastcall sub_57654(int a1, int a2)
{
  int result; // r0
  int v4; // [sp+0h] [bp-Ch] BYREF

  if ( sub_57200(*(_DWORD *)(a1 + 8), (int)&v4, 4) != 4 )
    return sub_3774C((_BYTE *)a2, "read error");
  result = 0;
  *(_DWORD *)(a2 + 8) = v4;
  return result;
}
