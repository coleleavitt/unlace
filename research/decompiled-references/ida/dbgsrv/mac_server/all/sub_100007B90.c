/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007B90
// Address: 0x0000000100007B90

//----- (0000000100007B90) ----------------------------------------------------
__int64 __fastcall sub_100007B90(__int64 a1, unsigned int a2, double a3, double a4)
{
  char v4; // cl
  __int64 result; // rax

  v4 = sub_100007020(a1, a2, a3, a4);
  result = 0xFFFFFFFFLL;
  if ( v4 )
  {
    sub_100007940(a1, a2);
    return 1;
  }
  return result;
}
