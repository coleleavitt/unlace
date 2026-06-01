/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100054200
// Address: 0x0000000100054200

//----- (0000000100054200) ----------------------------------------------------
void __fastcall sub_100054200(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x24
  void *v9; // x0
  void *v10; // x0
  void *v11; // x0
  _QWORD *v12; // x23

  v4 = a1[1];
  v5 = v4 - a2;
  if ( v4 > a2 )
  {
    v6 = 80 * a2;
    do
    {
      v7 = *a1;
      v8 = *a1 + v6;
      v9 = *(void **)(v8 + 48);
      if ( v9 )
      {
        *(_QWORD *)(v8 + 56) = 0;
        qfree(v9);
        *(_QWORD *)(v8 + 48) = 0;
        *(_QWORD *)(v7 + v6 + 64) = 0;
      }
      v10 = *(void **)(v8 + 24);
      if ( v10 )
      {
        *(_QWORD *)(v7 + v6 + 32) = 0;
        qfree(v10);
        *(_QWORD *)(v8 + 24) = 0;
        *(_QWORD *)(v7 + v6 + 40) = 0;
      }
      v11 = *(void **)v8;
      if ( *(_QWORD *)v8 )
      {
        v12 = (_QWORD *)(v7 + v6);
        v12[1] = 0;
        qfree(v11);
        *v12 = 0;
        v12[2] = 0;
      }
      v6 += 80;
      --v5;
    }
    while ( v5 );
  }
  a1[1] = a2;
}
