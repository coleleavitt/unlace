/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059720
// Address: 0x0000000100059720

//----- (0000000100059720) ----------------------------------------------------
void __fastcall sub_100059720(_QWORD *a1, __int64 *a2, int a3)
{
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x25
  _QWORD *v9; // x24
  void *v10; // x0
  void *v11; // x0
  __int64 v12; // x25

  v6 = a1[7];
  if ( v6 )
  {
    v7 = 0;
    do
    {
      v8 = a1[6];
      v9 = (_QWORD *)(v8 + v7);
      v10 = *(void **)(v8 + v7 + 32);
      if ( v10 )
      {
        v9[5] = 0;
        qfree(v10);
        v9[4] = 0;
        *(_QWORD *)(v8 + v7 + 48) = 0;
      }
      v11 = (void *)v9[1];
      if ( v11 )
      {
        v12 = v8 + v7;
        *(_QWORD *)(v12 + 16) = 0;
        qfree(v11);
        v9[1] = 0;
        *(_QWORD *)(v12 + 24) = 0;
      }
      v7 += 56;
      --v6;
    }
    while ( v6 );
  }
  a1[7] = 0;
  if ( a1[8] < (unsigned __int64)a3 )
    a1[6] = qvector_reserve(a1 + 6, (_QWORD *)a1[6], a3, 0x38u);
  if ( a3 >= 1 )
  {
    do
    {
      sub_100059814(a1 + 6, a2);
      a2 += 7;
      --a3;
    }
    while ( a3 );
  }
}
