/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC4C4
// Address: 0x00000000000AC4C4

//----- (00000000000AC4C4) ----------------------------------------------------
void __fastcall sub_AC4C4(_QWORD *a1)
{
  _QWORD *v2; // x0
  unsigned __int64 v3; // x21
  _QWORD *v4; // t2
  unsigned __int64 i; // x22
  void **v6; // x20
  void *v7; // x0

  v4 = a1 + 31;
  v2 = (_QWORD *)a1[31];
  v3 = v4[1];
  if ( v3 )
  {
    for ( i = 0; i < v3; ++i )
    {
      v6 = (void **)v2[i];
      if ( v6 )
      {
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = nullptr;
          qfree(v7);
          *v6 = nullptr;
          v6[2] = nullptr;
        }
        qfree(v6);
        v2 = (_QWORD *)a1[31];
      }
    }
  }
  if ( v2 )
  {
    a1[32] = 0;
    qfree(v2);
    a1[31] = 0;
    a1[33] = 0;
  }
}
