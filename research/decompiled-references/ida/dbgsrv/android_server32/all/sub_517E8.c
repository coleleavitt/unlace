/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_517E8
// Address: 0x000517E8

//----- (000517E8) --------------------------------------------------------
int __fastcall sub_517E8(char **a1, int a2, char **a3)
{
  int v5; // r1
  int result; // r0
  int v7; // r1
  _BYTE v8[4]; // [sp+4h] [bp-8h] BYREF

  if ( !a2 )
    sub_50E30((int)a1, (int)a3);
  v5 = sub_511B4((int)a1, a3);
  result = 2;
  if ( !v5 )
  {
    v7 = sub_50F44(a1, (int)a3, v8);
    result = -1;
    if ( !v7 )
      return v8[0];
  }
  return result;
}
