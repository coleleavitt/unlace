/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62638
// Address: 0x0000000000062638

//----- (0000000000062638) ----------------------------------------------------
__int64 __fastcall sub_62638(__int64 a1)
{
  _DWORD *v2; // x20
  _QWORD *v3; // x0
  size_t v4; // x22
  _QWORD *v5; // x21
  void *v6; // x0
  __int64 v7; // x8
  pthread_mutex_t *v8; // x0
  _QWORD *align; // x0

  v2 = operator new(0x20u);
  v2[6] = 0;
  *v2 = 1;
  v3 = operator new(0x18u);
  v3[1] = 0;
  v3[2] = 0;
  *v3 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = v3;
  if ( v4 )
  {
    v6 = qalloc_or_throw(*(_QWORD *)(a1 + 48));
    *v5 = v6;
    v5[2] = v4;
    memcpy(v6, *(const void **)(a1 + 40), v4);
    v5[1] = v4;
  }
  *((_QWORD *)v2 + 2) = v5;
  v7 = *(_QWORD *)(a1 + 352);
  v8 = (pthread_mutex_t *)(a1 + 344);
  if ( *(_QWORD *)(a1 + 360) >= (unsigned __int64)(v7 + 1) )
  {
    align = (_QWORD *)v8->__align;
  }
  else
  {
    align = qvector_reserve(v8, *(void **)(a1 + 344), v7 + 1, 8u);
    v7 = *(_QWORD *)(a1 + 352);
    *(_QWORD *)(a1 + 344) = align;
  }
  align[v7] = v2;
  ++*(_QWORD *)(a1 + 352);
  return 0;
}
