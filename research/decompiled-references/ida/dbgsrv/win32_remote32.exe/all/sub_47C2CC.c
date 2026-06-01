/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C2CC
// Address: 0x0047C2CC

//----- (0047C2CC) --------------------------------------------------------
unsigned int __cdecl sub_47C2CC(__int16 *a1, const CHAR *a2, int a3, int *a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // edx
  __int16 v6; // cx
  unsigned int v8; // [esp+0h] [ebp-4h] BYREF

  v8 = v4;
  v5 = sub_4810FA((int)&v8, a2, a3, a4);
  if ( v5 <= 4 )
  {
    v6 = v8;
    if ( v8 > 0xFFFF )
      v6 = -3;
    if ( a1 )
      *a1 = v6;
  }
  return v5;
}
// 47C2D1: variable 'v4' is possibly undefined
