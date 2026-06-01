/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DE28
// Address: 0x0007DE28

//----- (0007DE28) --------------------------------------------------------
int __fastcall sub_7DE28(int *a1, int a2)
{
  unsigned int *v2; // r3
  unsigned int v3; // r4
  int v5; // r0

  if ( a2 != -1 )
  {
    v2 = (unsigned int *)a1[3];
    v3 = a2 + 1;
    if ( v2 && v3 >= *v2 && v3 < v2[1] )
      return v3;
    v5 = sub_7DD5C(a1, a2 + 1);
    if ( v5 != *a1 + 8 * a1[1] )
    {
      a1[3] = v5;
      if ( v3 < *(_DWORD *)v5 )
        return *(_DWORD *)v5;
      return v3;
    }
  }
  return -1;
}
