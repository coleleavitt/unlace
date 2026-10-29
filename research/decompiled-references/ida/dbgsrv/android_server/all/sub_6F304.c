/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F304
// Address: 0x000000000006F304

//----- (000000000006F304) ----------------------------------------------------
__int64 __fastcall sub_6F304(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v3; // x8
  unsigned __int64 v4; // x9
  int v5; // w22
  pthread_mutex_t *v9; // x0
  _DWORD *align; // x0

  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 88);
  v5 = *(_DWORD *)(a1 + 32);
  v9 = (pthread_mutex_t *)(a1 + 72);
  if ( v4 >= v3 + 1 )
  {
    align = (_DWORD *)v9->__align;
  }
  else
  {
    align = qvector_reserve(v9, *(void **)(a1 + 72), v3 + 1, 4u);
    v3 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 72) = align;
  }
  align[v3] = v5;
  ++*(_QWORD *)(a1 + 80);
  sub_65CA4((pthread_mutex_t *)(a1 + 24), a3);
  return sub_73704((_QWORD *)a1, 0, 0, a2);
}
