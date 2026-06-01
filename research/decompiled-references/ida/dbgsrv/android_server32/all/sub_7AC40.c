/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7AC40
// Address: 0x0007AC40

//----- (0007AC40) --------------------------------------------------------
int __fastcall sub_7AC40(int a1, int a2, __int64 a3, unsigned int a4)
{
  int v4; // r4
  int result; // r0
  __int64 v6; // r0

  v4 = 0;
  result = -1;
  if ( a4 <= 2 )
  {
    v6 = qlseek(a2, a3, a4);
    if ( (HIDWORD(v6) & (unsigned int)v6) == 0xFFFFFFFF )
      return -1;
    return v4;
  }
  return result;
}
