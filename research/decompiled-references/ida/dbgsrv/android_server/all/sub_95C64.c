/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95C64
// Address: 0x0000000000095C64

//----- (0000000000095C64) ----------------------------------------------------
void __fastcall sub_95C64(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x23
  _QWORD *v4; // x20
  __int64 *v5; // x0
  __int64 v6; // x8
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 *v9; // x23
  _QWORD *v10; // x24
  __int64 v11; // x8
  __int64 v12; // x8
  void *v13; // x0

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 < a2 )
  {
    v4 = qvector_reserve((pthread_mutex_t *)a1, nullptr, a2, 0x18u);
    v5 = *(__int64 **)a1;
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v2;
    v8 = v6 - 1;
    if ( v6 - 1 >= 0 )
    {
      v9 = v5 + 1;
      v10 = v4;
      do
      {
        *v10 = *(v9 - 1);
        v11 = *v9;
        *(v9 - 1) = 0;
        v10[1] = v11;
        v12 = v9[1];
        *v9 = 0;
        v10[2] = v12;
        v13 = (void *)*(v9 - 1);
        v9[1] = 0;
        if ( v13 )
        {
          *v9 = 0;
          qfree(v13);
          *(v9 - 1) = 0;
          v9[1] = 0;
        }
        --v8;
        v9 += 3;
        v10 += 3;
      }
      while ( v8 >= 0 );
      v5 = *(__int64 **)a1;
    }
    qfree(v5);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 16) = v7;
  }
}
