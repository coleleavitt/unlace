/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50E24
// Address: 0x0000000000050E24

//----- (0000000000050E24) ----------------------------------------------------
char *__fastcall sub_50E24(__int64 a1, _QWORD *a2)
{
  __int64 v2; // x8
  unsigned __int64 v3; // x9
  unsigned __int64 v6; // x2
  pthread_mutex_t *v7; // x0
  char *result; // x0
  char *v9; // x8

  v2 = *(_QWORD *)(a1 + 584);
  v3 = *(_QWORD *)(a1 + 592);
  v6 = v2 + 1;
  v7 = (pthread_mutex_t *)(a1 + 576);
  if ( v3 >= v2 + 1 )
  {
    result = (char *)v7->__align;
  }
  else
  {
    result = (char *)qvector_reserve(v7, *(void **)(a1 + 576), v6, 0x18u);
    v2 = *(_QWORD *)(a1 + 584);
    *(_QWORD *)(a1 + 576) = result;
    v6 = v2 + 1;
  }
  *(_QWORD *)(a1 + 584) = v6;
  v9 = &result[24 * v2];
  *(_QWORD *)v9 = a2[1];
  *((_QWORD *)v9 + 1) = a2[4];
  *((_QWORD *)v9 + 2) = a2[2];
  return result;
}
