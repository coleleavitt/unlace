/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_393F8
// Address: 0x00000000000393F8

//----- (00000000000393F8) ----------------------------------------------------
void __fastcall sub_393F8(void **a1)
{
  void **v2; // x20
  void **v3; // x21
  void *v4; // t1
  char *v5; // x8
  char *v6; // x9

  sub_39A1C(a1);
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
        v6 -= 8;
      while ( v5 != v6 );
      a1[2] = v5;
    }
  }
  if ( *a1 )
    operator delete(*a1);
}
