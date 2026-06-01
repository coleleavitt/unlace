/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64AA8
// Address: 0x00064AA8

//----- (00064AA8) --------------------------------------------------------
int __fastcall sub_64AA8(int a1, char *a2)
{
  int v4; // r6
  int v5; // r1
  const char *v6; // r0
  int varg_r2; // [sp+20h] [bp+14h] BYREF

  if ( *(_BYTE *)(a1 + 348) )
  {
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
    v5 = *(_DWORD *)(a1 + 208);
    if ( v5 && !*(_BYTE *)(v5 + 36) )
      sub_6D044(0, v5);
    else
      sub_6F27C(0, a2, &varg_r2);
    v6 = (const char *)winerr(v4);
    sub_1BC48(a1, ": %s\n", v6);
  }
  return 0;
}
