/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77194
// Address: 0x00077194

//----- (00077194) --------------------------------------------------------
int __fastcall sub_77194(int a1)
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
    sub_70A2C(1);
    return v4;
  }
  return result;
}
// 771A2: variable 'v2' is possibly undefined
// 1439C: using guessed type int __fastcall lseek64(_DWORD);
