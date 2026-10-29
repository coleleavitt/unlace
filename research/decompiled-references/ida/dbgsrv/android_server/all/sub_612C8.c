/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_612C8
// Address: 0x00000000000612C8

//----- (00000000000612C8) ----------------------------------------------------
__int64 __fastcall sub_612C8(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x8
  _BYTE *v4; // x0
  pthread_mutex_t *v6; // x0
  __int64 v7; // x8
  unsigned __int64 v8; // x10
  int v9; // w20
  _DWORD *align; // x0

  if ( !*(_QWORD *)(a1 + 304) )
    return set_qerrno(0x33u);
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
  v6 = (pthread_mutex_t *)(a1 + 272);
  ++*(_QWORD *)(v1 + 8);
  v7 = *(_QWORD *)(a1 + 280);
  v8 = *(_QWORD *)(a1 + 288);
  v9 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v9;
  if ( v8 >= v7 + 1 )
  {
    align = (_DWORD *)v6->__align;
  }
  else
  {
    align = qvector_reserve(v6, *(void **)(a1 + 272), v7 + 1, 4u);
    v7 = *(_QWORD *)(a1 + 280);
    *(_QWORD *)(a1 + 272) = align;
  }
  align[v7] = v9;
  ++*(_QWORD *)(a1 + 280);
  sub_5EB14(a1, 0);
  sub_5EB14(a1, 0);
  return 0;
}
