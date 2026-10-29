/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F30C
// Address: 0x0007F30C

//----- (0007F30C) --------------------------------------------------------
int __fastcall sub_7F30C(unsigned int *a1, unsigned int a2)
{
  void *v4; // r0
  unsigned int v5; // r3
  unsigned int v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r5
  int v9; // r6
  __int64 v11; // [sp+4h] [bp-Ch] BYREF

  sub_7F2C8((int)a1);
  a1[1] = a2;
  a1[2] = (unsigned int)sub_77DC4(a2, 4u);
  v4 = sub_77DC4(a1[1], 4u);
  v5 = a1[1];
  a1[3] = (unsigned int)v4;
  if ( !v5 )
    return 0;
  v6 = 0;
  do
  {
    *(_DWORD *)(a1[2] + 4 * v6) = -1;
    *(_DWORD *)(a1[3] + 4 * v6++) = -1;
    v7 = a1[1];
  }
  while ( v7 > v6 );
  if ( !v7 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = sub_7F1DC(&v11);
    if ( v9 )
      break;
    *(_DWORD *)(a1[2] + 4 * v8) = v11;
    *(_DWORD *)(a1[3] + 4 * v8++) = HIDWORD(v11);
    if ( a1[1] <= v8 )
      return 0;
  }
  sub_7F2C8((int)a1);
  return v9;
}
