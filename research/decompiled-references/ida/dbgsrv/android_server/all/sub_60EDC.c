/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60EDC
// Address: 0x0000000000060EDC

//----- (0000000000060EDC) ----------------------------------------------------
__int64 __fastcall sub_60EDC(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x8
  _BYTE *v4; // x0
  __int64 v5; // x8
  unsigned __int64 v6; // x10
  _QWORD *v7; // x20
  _DWORD *v8; // x0
  __int64 v9; // x9
  unsigned __int64 v10; // x10
  int v11; // w21
  __int64 v12; // x8
  _DWORD *v13; // x0

  v1 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -85;
  v3 = *(_QWORD *)(v1 + 8);
  if ( *(_QWORD *)(v1 + 16) >= (unsigned __int64)(v3 + 1) )
  {
    v4 = *(_BYTE **)v1;
  }
  else
  {
    v4 = qvector_reserve((pthread_mutex_t *)v1, *(void **)v1, v3 + 1, 1u);
    v3 = *(_QWORD *)(v1 + 8);
    *(_QWORD *)v1 = v4;
  }
  v4[v3] = -85;
  ++*(_QWORD *)(v1 + 8);
  v5 = *(_QWORD *)(a1 + 304);
  v6 = *(_QWORD *)(a1 + 312);
  v7 = (_QWORD *)(a1 + 296);
  ++*(_DWORD *)(a1 + 208);
  if ( v6 >= v5 + 1 )
  {
    v8 = (_DWORD *)*v7;
  }
  else
  {
    v8 = qvector_reserve((pthread_mutex_t *)(a1 + 296), *(void **)(a1 + 296), v5 + 1, 4u);
    v5 = *(_QWORD *)(a1 + 304);
    *(_QWORD *)(a1 + 296) = v8;
  }
  v8[v5] = 0;
  v9 = *(_QWORD *)(a1 + 304);
  v10 = *(_QWORD *)(a1 + 312);
  v11 = *(_DWORD *)(a1 + 208);
  v12 = v9 + 1;
  *(_QWORD *)(a1 + 304) = v9 + 1;
  if ( v10 >= v9 + 2 )
  {
    v13 = (_DWORD *)*v7;
  }
  else
  {
    v13 = qvector_reserve((pthread_mutex_t *)(a1 + 296), *(void **)(a1 + 296), v9 + 2, 4u);
    v12 = *(_QWORD *)(a1 + 304);
    *(_QWORD *)(a1 + 296) = v13;
  }
  v13[v12] = v11;
  ++*(_QWORD *)(a1 + 304);
  sub_5EB14(a1, 0);
  sub_5EB14(a1, 0);
  return 0;
}
