/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440380
// Address: 0x0000000000440380

//----- (0000000000440380) ----------------------------------------------------
void __fastcall sub_440380(__int64 a1, __int64 *a2)
{
  __int64 *v2; // x19
  __int64 *v4; // x20
  void *v5; // x0
  __int64 *v6; // x0

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_440380(a1, (_QWORD *)v2[3]);
      v4 = (__int64 *)v2[2];
      sub_448310(v2 + 7);
      v5 = (void *)v2[4];
      if ( v5 )
      {
        v2[5] = 0;
        j__free(v5);
      }
      v6 = v2;
      v2 = v4;
      j__free_0(v6);
    }
    while ( v4 );
  }
}
