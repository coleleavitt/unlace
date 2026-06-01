/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400245D0
// Address: 0x00000001400245D0

//----- (00000001400245D0) ----------------------------------------------------
void __fastcall sub_1400245D0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi

  if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      v3 = 0;
      do
      {
        sub_140029390(v3 + *(_QWORD *)a1);
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
