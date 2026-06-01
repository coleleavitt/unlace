/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D414
// Address: 0x000000000007D414

//----- (000000000007D414) ----------------------------------------------------
void __fastcall sub_7D414(__int64 a1)
{
  void *v2; // x0
  __int64 v3; // x20
  __int64 v4; // x20
  __int64 v5; // x21

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      sub_39570((__int64)v2);
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = 56;
        do
        {
          sub_39570(*(_QWORD *)a1 + v5);
          --v4;
          v5 += 56;
        }
        while ( v4 );
      }
      v2 = *(void **)a1;
    }
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
