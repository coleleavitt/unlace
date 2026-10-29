/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63870
// Address: 0x0000000000063870

//----- (0000000000063870) ----------------------------------------------------
__int64 __fastcall sub_63870(__int64 a1)
{
  __int64 v1; // x8
  unsigned __int64 v2; // x9
  int v3; // w20
  pthread_mutex_t *v5; // x0
  _DWORD *align; // x0

  v1 = *(_QWORD *)(a1 + 256);
  v2 = *(_QWORD *)(a1 + 264);
  v3 = *(_DWORD *)(a1 + 208);
  v5 = (pthread_mutex_t *)(a1 + 248);
  if ( v2 >= v1 + 1 )
  {
    align = (_DWORD *)v5->__align;
  }
  else
  {
    align = qvector_reserve(v5, *(void **)(a1 + 248), v1 + 1, 4u);
    v1 = *(_QWORD *)(a1 + 256);
    *(_QWORD *)(a1 + 248) = align;
  }
  align[v1] = v3;
  ++*(_QWORD *)(a1 + 256);
  return 0;
}
