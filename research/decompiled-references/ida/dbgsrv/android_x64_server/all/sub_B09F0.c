/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B09F0
// Address: 0x00000000000B09F0

//----- (00000000000B09F0) ----------------------------------------------------
void __fastcall sub_B09F0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  unsigned __int64 v3; // r15
  unsigned __int64 i; // rbx
  void **v5; // r12
  void *v6; // rdi

  v2 = (_QWORD *)a1[31];
  v3 = a1[32];
  if ( v3 )
  {
    for ( i = 0; i < v3; ++i )
    {
      v5 = (void **)v2[i];
      if ( v5 )
      {
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = nullptr;
          qfree(v6);
          *v5 = nullptr;
          v5[2] = nullptr;
        }
        qfree(v5);
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
