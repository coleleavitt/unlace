/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AC7E
// Address: 0x0006AC7E

//----- (0006AC7E) --------------------------------------------------------
int __fastcall sub_6AC7E(int *a1)
{
  int result; // r0
  int *v3; // r4
  int v4; // r0

  result = a1[98];
  v3 = a1 + 98;
  if ( result < 0 )
  {
    v4 = (*(int (__fastcall **)(int *))(*a1 + 308))(a1);
    if ( v4 >= 16 )
      v4 = 16;
    result = v4 & ~(v4 >> 31);
    *v3 = result;
  }
  return result;
}
