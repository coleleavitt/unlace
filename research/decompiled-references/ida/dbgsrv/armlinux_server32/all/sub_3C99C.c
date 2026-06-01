/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C99C
// Address: 0x0003C99C

//----- (0003C99C) --------------------------------------------------------
int __fastcall sub_3C99C(int *a1, int *a2, int *a3)
{
  int v3; // r3
  bool v4; // zf
  int v7; // r0
  int v8; // r3

  v3 = *a1 - 1;
  v4 = *a1 == 1;
  *a1 = v3;
  if ( v3 < 0 || v4 )
    return 0;
  v7 = sub_464D8(*a2);
  *a3 = v7;
  if ( v7 )
    return 0;
  v8 = *a2;
  *a2 += 24;
  return *(_DWORD *)(v8 + 8);
}
