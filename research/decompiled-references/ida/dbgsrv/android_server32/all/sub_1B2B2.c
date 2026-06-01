/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B2B2
// Address: 0x0001B2B2

//----- (0001B2B2) --------------------------------------------------------
void **__fastcall sub_1B2B2(void **a1)
{
  void **v2; // r5
  void **v3; // r6
  void *v4; // r0
  char *v5; // r0
  char *v6; // r1

  sub_1B72C(a1);
  v2 = (void **)a1[1];
  v3 = (void **)a1[2];
  if ( v2 != v3 )
  {
    do
    {
      v4 = *v2++;
      operator delete(v4);
    }
    while ( v3 != v2 );
    v5 = (char *)a1[1];
    v6 = (char *)a1[2];
    if ( v6 != v5 )
    {
      do
        v6 -= 4;
      while ( v5 != v6 );
      a1[2] = v5;
    }
  }
  if ( *a1 )
    operator delete(*a1);
  return a1;
}
