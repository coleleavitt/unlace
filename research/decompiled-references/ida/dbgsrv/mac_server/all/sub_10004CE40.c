/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004CE40
// Address: 0x000000010004CE40

//----- (000000010004CE40) ----------------------------------------------------
void __fastcall sub_10004CE40(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  void *v6; // rdi

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = *(_QWORD *)(a1 + 24);
        v6 = *(void **)(v5 + v4);
        if ( v6 )
        {
          *(_QWORD *)(v5 + v4 + 8) = 0;
          qfree(v6);
          *(_QWORD *)(v5 + v4) = 0;
          *(_QWORD *)(v5 + v4 + 16) = 0;
        }
        v4 += 32;
        --v3;
      }
      while ( v3 );
      v2 = *(void **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
    operator delete(*(void **)(a1 + 16));
}
