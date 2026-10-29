/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008448
// Address: 0x0000000100008448

//----- (0000000100008448) ----------------------------------------------------
__int64 __fastcall sub_100008448(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x8
  size_t v6; // x20
  size_t v7; // x20
  void *v8; // x22
  void *v9; // x0
  __int64 v10; // x8
  __int64 v11; // x23
  unsigned int v12; // w10
  const void *v14; // x22
  size_t v15; // x8
  _QWORD *v16; // x1
  unsigned __int64 v17; // x8
  size_t v18; // x20
  void *v19; // x21
  void *v20; // x0
  const void *v21; // x21
  size_t v22; // x8
  _QWORD *v23; // x1

  if ( *(_QWORD *)(a1 + 1768) != a3 )
  {
    v10 = *(_QWORD *)(a1 + 1840);
    if ( !v10 )
      return 0;
    v11 = a1 + 1840;
    do
    {
      if ( *(_QWORD *)(v10 + 32) < a3 )
      {
        v12 = 1;
      }
      else
      {
        v11 = v10;
        v12 = 0;
      }
      v10 = *(_QWORD *)(v10 + 8LL * v12);
    }
    while ( v10 );
    if ( v11 == a1 + 1840 || *(_QWORD *)(v11 + 32) > a3 )
      return 0;
    *(_OWORD *)a2 = *(_OWORD *)(v11 + 40);
    if ( v11 + 40 != a2 )
    {
      v17 = *(_QWORD *)(v11 + 64);
      if ( v17 )
        v18 = v17 - 1;
      else
        v18 = 0;
      if ( v17 >= 2 )
      {
        v21 = *(const void **)(v11 + 56);
        v22 = *(_QWORD *)(a2 + 32);
        v23 = *(_QWORD **)(a2 + 16);
        if ( v22 <= v18 )
        {
          v23 = qvector_reserve((_QWORD *)(a2 + 16), v23, v18 + 1, 1u);
          *(_QWORD *)(a2 + 16) = v23;
        }
        *(_QWORD *)(a2 + 24) = v18 + 1;
        memmove(v23, v21, v18);
        *(_BYTE *)(*(_QWORD *)(a2 + 16) + v18) = 0;
        v7 = *(_QWORD *)(v11 + 88);
        if ( v7 )
        {
LABEL_34:
          v19 = qalloc_or_throw(v7);
          memcpy(v19, *(const void **)(v11 + 80), v7);
          v20 = *(void **)(a2 + 40);
          if ( !v20 )
            goto LABEL_41;
          goto LABEL_40;
        }
LABEL_39:
        v19 = nullptr;
        v20 = *(void **)(a2 + 40);
        if ( !v20 )
        {
LABEL_41:
          *(_QWORD *)(a2 + 40) = v19;
          goto LABEL_26;
        }
LABEL_40:
        *(_QWORD *)(a2 + 48) = 0;
        qfree(v20);
        goto LABEL_41;
      }
      *(_QWORD *)(a2 + 24) = 0;
    }
    v7 = *(_QWORD *)(v11 + 88);
    if ( v7 )
      goto LABEL_34;
    goto LABEL_39;
  }
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 1768);
  if ( a1 + 1768 == a2 )
    goto LABEL_8;
  v5 = *(_QWORD *)(a1 + 1792);
  if ( v5 )
    v6 = v5 - 1;
  else
    v6 = 0;
  if ( v5 < 2 )
  {
    *(_QWORD *)(a2 + 24) = 0;
LABEL_8:
    v7 = *(_QWORD *)(a1 + 1816);
    if ( v7 )
      goto LABEL_9;
    goto LABEL_23;
  }
  v14 = *(const void **)(a1 + 1784);
  v15 = *(_QWORD *)(a2 + 32);
  v16 = *(_QWORD **)(a2 + 16);
  if ( v15 <= v6 )
  {
    v16 = qvector_reserve((_QWORD *)(a2 + 16), v16, v6 + 1, 1u);
    *(_QWORD *)(a2 + 16) = v16;
  }
  *(_QWORD *)(a2 + 24) = v6 + 1;
  memmove(v16, v14, v6);
  *(_BYTE *)(*(_QWORD *)(a2 + 16) + v6) = 0;
  v7 = *(_QWORD *)(a1 + 1816);
  if ( v7 )
  {
LABEL_9:
    v8 = qalloc_or_throw(v7);
    memcpy(v8, *(const void **)(a1 + 1808), v7);
    v9 = *(void **)(a2 + 40);
    if ( !v9 )
      goto LABEL_25;
    goto LABEL_24;
  }
LABEL_23:
  v8 = nullptr;
  v9 = *(void **)(a2 + 40);
  if ( v9 )
  {
LABEL_24:
    *(_QWORD *)(a2 + 48) = 0;
    qfree(v9);
  }
LABEL_25:
  *(_QWORD *)(a2 + 40) = v8;
LABEL_26:
  *(_QWORD *)(a2 + 48) = v7;
  *(_QWORD *)(a2 + 56) = v7;
  return 1;
}
