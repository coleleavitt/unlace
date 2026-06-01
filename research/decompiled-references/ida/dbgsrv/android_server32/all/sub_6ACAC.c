/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6ACAC
// Address: 0x0006ACAC

//----- (0006ACAC) --------------------------------------------------------
int __fastcall sub_6ACAC(int *a1)
{
  int result; // r0
  int *v3; // r4
  int v4; // r0

  result = a1[99];
  v3 = a1 + 99;
  if ( result < 0 )
  {
    v4 = (*(int (__fastcall **)(int *))(*a1 + 312))(a1);
    if ( v4 >= 16 )
      v4 = 16;
    result = v4 & ~(v4 >> 31);
    *v3 = result;
  }
  return result;
}
