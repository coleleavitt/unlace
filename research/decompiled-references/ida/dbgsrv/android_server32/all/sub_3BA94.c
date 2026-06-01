/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BA94
// Address: 0x0003BA94

//----- (0003BA94) --------------------------------------------------------
int __fastcall sub_3BA94(_DWORD *a1)
{
  _DWORD *v1; // r5
  _DWORD *v2; // r7
  char *v3; // r0
  _DWORD *v4; // r4
  void *v5; // r6
  int v7; // [sp+0h] [bp-Ch]
  char *s; // [sp+8h] [bp-4h]

  v7 = *(_DWORD *)(a1[48] + 4 * a1[49] - 4);
  v1 = a1 + 49;
  v2 = a1 + 48;
  if ( a1[7] )
    v3 = (char *)a1[6];
  else
    v3 = &byte_B3CBE;
  s = v3;
  v4 = operator new(0x10u);
  v4[3] = 0;
  *v4 = 5;
  v5 = operator new(0xCu);
  sub_1B09C((int)v5, s);
  v4[1] = v5;
  v4[2] = v7;
  *(_DWORD *)(*v2 + 4 * *v1 - 4) = v4;
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
