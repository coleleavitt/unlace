/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DD04
// Address: 0x0007DD04

//----- (0007DD04) --------------------------------------------------------
int __fastcall sub_7DD04(int *a1, int a2)
{
  unsigned int *v2; // r3
  unsigned int v3; // r5
  unsigned int *v5; // r0
  unsigned int v6; // r3

  if ( a2 )
  {
    v2 = (unsigned int *)a1[3];
    v3 = a2 - 1;
    if ( v2 && v3 >= *v2 && v3 < v2[1] )
      return v3;
    v5 = (unsigned int *)sub_7DBF4(a1, a2 - 1);
    if ( v5 != (unsigned int *)(*a1 + 8 * a1[1]) && v3 >= *v5 && v3 < v5[1] )
    {
LABEL_10:
      a1[3] = (int)v5;
      return v3;
    }
    if ( (unsigned int *)*a1 != v5 )
    {
      v6 = *(v5 - 1);
      v5 -= 2;
      if ( v6 <= v3 )
        v3 = v6 - 1;
      goto LABEL_10;
    }
  }
  return -1;
}
