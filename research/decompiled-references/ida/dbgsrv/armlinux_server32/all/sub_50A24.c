/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50A24
// Address: 0x00050A24

//----- (00050A24) --------------------------------------------------------
int __fastcall sub_50A24(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r3
  char v7[8]; // [sp+0h] [bp-18h] BYREF
  int v8; // [sp+8h] [bp-10h]
  int v9; // [sp+Ch] [bp-Ch]

  for ( result = sub_509A8(a1, a2, a3); *(_WORD *)(*(_DWORD *)(a1 + 592) + 12) == 124; *(_DWORD *)(a2 + 12) = v6 )
  {
    v7[0] = 1;
    v8 = 0;
    v9 = 0;
    sub_509A8(a1, (int)v7, 1);
    result = v8;
    v6 = *(_DWORD *)(a2 + 12) | v9;
    *(_DWORD *)(a2 + 8) |= v8;
  }
  return result;
}
