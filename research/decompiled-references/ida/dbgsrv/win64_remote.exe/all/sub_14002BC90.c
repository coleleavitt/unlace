/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002BC90
// Address: 0x000000014002BC90

//----- (000000014002BC90) ----------------------------------------------------
void __fastcall sub_14002BC90(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rbx
  void *v5; // rcx

  if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      v3 = 0;
      do
      {
        v4 = v3 + *(_QWORD *)a1;
        v5 = *(void **)v4;
        if ( *(_QWORD *)v4 )
        {
          *(_QWORD *)(v4 + 8) = 0;
          j_free(v5);
          *(_QWORD *)v4 = 0;
          *(_QWORD *)(v4 + 16) = 0;
        }
        v3 += 32;
        --v2;
      }
      while ( v2 );
    }
    *(_QWORD *)(a1 + 8) = 0;
    j_free(*(void **)a1);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
