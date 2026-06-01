/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_775B4
// Address: 0x000775B4

//----- (000775B4) --------------------------------------------------------
int __fastcall sub_775B4(int a1)
{
  int result; // r0
  int v3; // r1
  bool v4; // zf
  int v5; // r8

  result = sub_77160(a1);
  v4 = ++v3 == 0;
  if ( !v3 )
    v4 = result == -1;
  if ( !v4 )
  {
    v5 = sub_77194(a1);
    sub_77194(a1);
    return v5;
  }
  return result;
}
// 775C2: variable 'v3' is possibly undefined
