/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000585F4
// Address: 0x00000001000585F4

//----- (00000001000585F4) ----------------------------------------------------
__int64 *__fastcall sub_1000585F4(__int64 *result, unsigned __int64 a2, __int64 a3)
{
  __int64 *v5; // x21
  unsigned __int64 v6; // x8
  __int64 v7; // x24
  __int64 v8; // x23
  __int64 v9; // x25
  _QWORD *v10; // x26
  size_t v11; // x22
  void *v12; // x0
  _QWORD *v13; // x26
  size_t v14; // x22
  void *v15; // x0
  __int64 v16; // x26
  __int64 v17; // x28
  _QWORD *v18; // x28
  __int64 v19; // x27
  void *v20; // x0
  __int64 v21; // x25

  v5 = result;
  if ( result[2] < a2 )
  {
    result = (__int64 *)qvector_reserve(result, (_QWORD *)*result, a2, 0x50u);
    *v5 = (__int64)result;
  }
  v6 = v5[1];
  v7 = a2 - v6;
  if ( a2 > v6 )
  {
    v8 = 80 * v6;
    do
    {
      v9 = *v5;
      v10 = (_QWORD *)(*v5 + v8);
      *v10 = 0;
      v10[1] = 0;
      v10[2] = 0;
      v11 = *(_QWORD *)(a3 + 8);
      if ( v11 )
      {
        v12 = qalloc_or_throw(*(_QWORD *)(a3 + 8));
        *v10 = v12;
        v10[2] = v11;
        result = (__int64 *)memcpy(v12, *(const void **)a3, v11);
        v10[1] = v11;
      }
      v10[3] = 0;
      v10[4] = 0;
      v13 = v10 + 3;
      v13[2] = 0;
      v14 = *(_QWORD *)(a3 + 32);
      if ( v14 )
      {
        v15 = qalloc_or_throw(*(_QWORD *)(a3 + 32));
        *v13 = v15;
        *(_QWORD *)(v9 + v8 + 40) = v14;
        result = (__int64 *)memcpy(v15, *(const void **)(a3 + 24), v14);
        *(_QWORD *)(v9 + v8 + 32) = v14;
      }
      v16 = v9 + v8;
      v17 = v9 + v8;
      *(_QWORD *)(v17 + 48) = 0;
      *(_QWORD *)(v17 + 56) = 0;
      v18 = (_QWORD *)(v9 + v8 + 48);
      *(_QWORD *)(v9 + v8 + 64) = 0;
      v19 = *(_QWORD *)(a3 + 56);
      if ( v19 )
      {
        v20 = qalloc_or_throw(16 * v19);
        v21 = v9 + v8;
        *v18 = v20;
        *(_QWORD *)(v21 + 64) = v19;
        result = (__int64 *)memcpy(v20, *(const void **)(a3 + 48), 16 * v19);
        *(_QWORD *)(v21 + 56) = v19;
      }
      *(_DWORD *)(v16 + 72) = *(_DWORD *)(a3 + 72);
      v8 += 80;
      --v7;
    }
    while ( v7 );
  }
  v5[1] = a2;
  return result;
}
