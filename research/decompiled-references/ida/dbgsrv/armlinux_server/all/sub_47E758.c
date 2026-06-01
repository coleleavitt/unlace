/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E758
// Address: 0x000000000047E758

//----- (000000000047E758) ----------------------------------------------------
void __fastcall sub_47E758(_QWORD *a1)
{
  __int64 v2; // x22
  _QWORD *v3; // x0
  __int64 i; // x19
  void **v5; // x20
  void *v6; // x0

  v2 = a1[32];
  v3 = (_QWORD *)a1[31];
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v5 = (void **)v3[i];
      if ( v5 )
      {
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = nullptr;
          j__free(v6);
        }
        j__free(v5);
        v3 = (_QWORD *)a1[31];
      }
    }
  }
  if ( v3 )
  {
    a1[32] = 0;
    j__free(v3);
    a1[31] = 0;
    a1[33] = 0;
  }
}
