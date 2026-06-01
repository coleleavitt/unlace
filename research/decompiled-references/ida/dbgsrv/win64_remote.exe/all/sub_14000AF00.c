/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000AF00
// Address: 0x000000014000AF00

//----- (000000014000AF00) ----------------------------------------------------
void __fastcall sub_14000AF00(__int64 a1)
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
        v5 = (void *)v4[8];
        if ( v5 )
        {
          v4[9] = 0;
          j_free(v5);
          v4[8] = 0;
          v4[10] = 0;
        }
        v3 += 88;
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
