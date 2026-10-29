/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7771C
// Address: 0x0007771C

//----- (0007771C) --------------------------------------------------------
int __fastcall sub_7771C(int a1)
{
  int result; // r0
  int v3; // r1
  bool v4; // zf
  int v5; // r8

  result = sub_772C8(a1);
  v4 = ++v3 == 0;
  if ( !v3 )
    v4 = result == -1;
  if ( !v4 )
  {
    v5 = sub_772FC(a1);
    sub_772FC(a1);
    return v5;
  }
  return result;
}
// 7772A: variable 'v3' is possibly undefined
