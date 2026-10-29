/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046384
// Address: 0x0000000100046384

//----- (0000000100046384) ----------------------------------------------------
__int64 __fastcall sub_100046384(__int64 a1)
{
  char *v2; // x20
  void *v3; // x0
  char *v5; // x21
  void *v6; // x0

  v2 = *(char **)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v5 = *(char **)v2;
      v6 = *((void **)v2 + 5);
      if ( v6 )
      {
        *((_QWORD *)v2 + 6) = 0;
        qfree(v6);
        *((_QWORD *)v2 + 5) = 0;
        *((_QWORD *)v2 + 7) = 0;
      }
      if ( v2[39] < 0 )
        operator delete(*((void **)v2 + 2));
      operator delete(v2);
      v2 = v5;
    }
    while ( v5 );
  }
  v3 = *(void **)a1;
  *(_QWORD *)a1 = 0;
  if ( v3 )
    operator delete(v3);
  return a1;
}
