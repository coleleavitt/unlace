/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98078
// Address: 0x0000000000098078

//----- (0000000000098078) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_98078(pthread_mutex_t *result, unsigned __int64 a2, __int64 *a3)
{
  _QWORD *p_align; // x19
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x24
  __int64 v8; // x25
  __int64 v9; // x9
  __int64 v10; // x26
  size_t v11; // x22
  void *v12; // x0
  __int128 v13; // q0

  p_align = &result->__align;
  if ( *(&result->__align + 2) < a2 )
  {
    result = (pthread_mutex_t *)qvector_reserve(result, (void *)result->__align, a2, 0x38u);
    *p_align = result;
  }
  v6 = p_align[1];
  if ( v6 < a2 )
  {
    v7 = a2 - v6;
    v8 = 56 * v6;
    do
    {
      v9 = *a3;
      v10 = *p_align + v8;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      *(_QWORD *)v10 = v9;
      *(_QWORD *)(v10 + 8) = 0;
      v11 = a3[2];
      if ( v11 )
      {
        v12 = qalloc_or_throw(a3[2]);
        *(_QWORD *)(v10 + 8) = v12;
        *(_QWORD *)(v10 + 24) = v11;
        result = (pthread_mutex_t *)memcpy(v12, (const void *)a3[1], v11);
        *(_QWORD *)(v10 + 16) = v11;
      }
      v13 = *((_OWORD *)a3 + 2);
      --v7;
      v8 += 56;
      *(_DWORD *)(v10 + 48) = *((_DWORD *)a3 + 12);
      *(_OWORD *)(v10 + 32) = v13;
    }
    while ( v7 );
  }
  p_align[1] = a2;
  return result;
}
