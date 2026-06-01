/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65C30
// Address: 0x0000000000065C30

//----- (0000000000065C30) ----------------------------------------------------
void __fastcall sub_65C30(char **a1)
{
  char *v2; // x0
  char *v3; // x20
  __int64 v4; // x21
  unsigned __int64 i; // x22

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 1; ; ++i )
      {
        free_idcv((__int64 *)&v2[v4]);
        if ( i >= (unsigned __int64)v3 )
          break;
        v2 = *a1;
        v4 += 32;
      }
      v2 = *a1;
    }
    a1[1] = nullptr;
    qfree(v2);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
