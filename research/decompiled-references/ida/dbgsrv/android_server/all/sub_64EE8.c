/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64EE8
// Address: 0x0000000000064EE8

//----- (0000000000064EE8) ----------------------------------------------------
__int64 __fastcall sub_64EE8(__int64 a1)
{
  __int64 v1; // x8
  unsigned __int64 v2; // x9
  pthread_mutex_t *v4; // x0
  unsigned __int64 v5; // x2
  _DWORD *align; // x0
  int v7; // w9

  v1 = *(_QWORD *)(a1 + 376);
  v2 = *(_QWORD *)(a1 + 384);
  v4 = (pthread_mutex_t *)(a1 + 368);
  v5 = v1 + 1;
  if ( v2 >= v1 + 1 )
  {
    align = (_DWORD *)v4->__align;
  }
  else
  {
    align = qvector_reserve(v4, *(void **)(a1 + 368), v5, 0x10u);
    v1 = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(a1 + 368) = align;
    v5 = v1 + 1;
  }
  v7 = *(_DWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 376) = v5;
  align[4 * v1] = v7;
  return 0;
}
