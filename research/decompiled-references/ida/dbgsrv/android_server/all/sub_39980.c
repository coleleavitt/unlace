/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39980
// Address: 0x0000000000039980

//----- (0000000000039980) ----------------------------------------------------
void __fastcall sub_39980(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x21
  __int64 v5; // x22
  unsigned __int64 v6; // x23
  __int64 v7; // x25
  _QWORD *v8; // x24
  void *v9; // x0
  void *v10; // x0
  __int64 v11; // x25

  v2 = a1[1];
  if ( v2 > a2 )
  {
    v5 = a2 << 6;
    v6 = a2;
    do
    {
      v7 = *a1;
      v8 = (_QWORD *)(*a1 + v5);
      v9 = (void *)v8[5];
      if ( v9 )
      {
        v8[6] = 0;
        qfree(v9);
        v8[5] = 0;
        *(_QWORD *)(v7 + v5 + 56) = 0;
      }
      v10 = (void *)v8[1];
      if ( v10 )
      {
        v11 = v7 + v5;
        *(_QWORD *)(v11 + 16) = 0;
        qfree(v10);
        v8[1] = 0;
        *(_QWORD *)(v11 + 24) = 0;
      }
      ++v6;
      v5 += 64;
    }
    while ( v6 < v2 );
  }
  a1[1] = a2;
}
