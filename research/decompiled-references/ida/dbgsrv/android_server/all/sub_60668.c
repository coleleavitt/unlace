/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60668
// Address: 0x0000000000060668

//----- (0000000000060668) ----------------------------------------------------
__int64 __fastcall sub_60668(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x8
  _BYTE *v4; // x0
  pthread_mutex_t *v5; // x0
  __int64 v6; // x8
  unsigned __int64 v7; // x10
  int v8; // w20
  _DWORD *align; // x0

  v1 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -83;
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
  v4[v3] = -83;
  v5 = (pthread_mutex_t *)(a1 + 224);
  ++*(_QWORD *)(v1 + 8);
  v6 = *(_QWORD *)(a1 + 232);
  v7 = *(_QWORD *)(a1 + 240);
  v8 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v8;
  if ( v7 >= v6 + 1 )
  {
    align = (_DWORD *)v5->__align;
  }
  else
  {
    align = qvector_reserve(v5, *(void **)(a1 + 224), v6 + 1, 4u);
    v6 = *(_QWORD *)(a1 + 232);
    *(_QWORD *)(a1 + 224) = align;
  }
  align[v6] = v8;
  ++*(_QWORD *)(a1 + 232);
  sub_5EB14(a1, 0);
  sub_5EB14(a1, 0);
  return 0;
}
