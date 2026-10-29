/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C530
// Address: 0x000000000006C530

//----- (000000000006C530) ----------------------------------------------------
void __fastcall sub_6C530(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x21
  __int64 v5; // x22
  unsigned __int64 v6; // x23
  __int64 v7; // x24
  __int64 v8; // x25
  void *v9; // x0
  void *v10; // x0
  _QWORD *v11; // x24

  v2 = a1[1];
  if ( v2 > a2 )
  {
    v5 = 48 * a2;
    v6 = a2;
    do
    {
      v7 = *a1;
      v8 = *a1 + v5;
      v9 = *(void **)(v8 + 24);
      if ( v9 )
      {
        *(_QWORD *)(v8 + 32) = 0;
        qfree(v9);
        *(_QWORD *)(v8 + 24) = 0;
        *(_QWORD *)(v7 + v5 + 40) = 0;
      }
      v10 = *(void **)(v7 + v5);
      if ( v10 )
      {
        v11 = (_QWORD *)(v7 + v5);
        v11[1] = 0;
        qfree(v10);
        *v11 = 0;
        v11[2] = 0;
      }
      ++v6;
      v5 += 48;
    }
    while ( v6 < v2 );
  }
  a1[1] = a2;
}
