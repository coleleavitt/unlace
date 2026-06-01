/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_772C8
// Address: 0x000772C8

//----- (000772C8) --------------------------------------------------------
int __fastcall sub_772C8(int a1)
{
  int result; // r0
  int v2; // r1
  bool v3; // zf
  int v4; // r4

  result = lseek64(a1);
  v3 = ++v2 == 0;
  if ( !v2 )
    v3 = result == -1;
  v4 = result;
  if ( v3 )
  {
    sub_70B98(1);
    return v4;
  }
  return result;
}
// 772DA: variable 'v2' is possibly undefined
// 14520: using guessed type int __fastcall lseek64(_DWORD);
