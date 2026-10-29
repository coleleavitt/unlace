/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64B30
// Address: 0x00064B30

//----- (00064B30) --------------------------------------------------------
int __fastcall sub_64B30(int a1, char *a2)
{
  int v3; // r1
  int _14; // [sp+14h] [bp+Ch]
  int varg_r2; // [sp+18h] [bp+10h] BYREF

  if ( *(_BYTE *)(a1 + 348) )
  {
    v3 = *(_DWORD *)(a1 + 208);
    if ( v3 && !*(_BYTE *)(v3 + 36) )
      sub_6D044(0, v3);
    else
      sub_6F27C(0, a2, &varg_r2);
  }
  return _14;
}
// 64B84: variable '_14' is possibly undefined
