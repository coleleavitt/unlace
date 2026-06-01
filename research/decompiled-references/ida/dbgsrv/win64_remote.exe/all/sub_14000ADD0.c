/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000ADD0
// Address: 0x000000014000ADD0

//----- (000000014000ADD0) ----------------------------------------------------
void __fastcall sub_14000ADD0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  void *v5; // rcx

  if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      v3 = 0;
      do
      {
        v4 = (_QWORD *)(v3 + *(_QWORD *)a1);
        v5 = (void *)v4[1];
        if ( v5 )
        {
          v4[2] = 0;
          j_free(v5);
          v4[1] = 0;
          v4[3] = 0;
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
