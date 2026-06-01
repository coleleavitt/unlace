/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A48C
// Address: 0x000000000009A48C

//----- (000000000009A48C) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_9A48C(__int64 a1, __int64 a2, char *a3)
{
  __int64 v3; // x8
  unsigned __int64 v4; // x9
  pthread_mutex_t *v8; // x0
  _QWORD *align; // x0
  pthread_mutex_t *v10; // x20
  pthread_mutex_t *result; // x0
  pthread_mutex_t *v12; // x1
  __int64 v13; // x8
  unsigned __int64 v14; // x9
  unsigned __int64 v15; // x2
  pthread_mutex_t *v16; // [xsp+8h] [xbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 88);
  v8 = (pthread_mutex_t *)(a1 + 72);
  if ( v4 >= v3 + 1 )
  {
    align = (_QWORD *)v8->__align;
  }
  else
  {
    align = qvector_reserve(v8, *(void **)(a1 + 72), v3 + 1, 8u);
    v3 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 72) = align;
  }
  align[v3] = a2;
  ++*(_QWORD *)(a1 + 80);
  v10 = qstrdup(a3);
  v16 = v10;
  result = (pthread_mutex_t *)(a1 + 96);
  v12 = *(pthread_mutex_t **)(a1 + 96);
  v13 = *(_QWORD *)(a1 + 104);
  v14 = *(_QWORD *)(a1 + 112);
  v15 = v13 + 1;
  if ( v12 > (pthread_mutex_t *)&v16 || (char *)v12 + 8 * v14 <= (char *)&v16 )
  {
    if ( v14 < v15 )
    {
      result = (pthread_mutex_t *)qvector_reserve(result, v12, v15, 8u);
      *(_QWORD *)(a1 + 96) = result;
      v13 = *(_QWORD *)(a1 + 104);
      v10 = v16;
      v12 = result;
    }
  }
  else if ( v14 < v15 )
  {
    result = (pthread_mutex_t *)qvector_reserve(result, v12, v15, 8u);
    v13 = *(_QWORD *)(a1 + 104);
    v12 = result;
    *(_QWORD *)(a1 + 96) = result;
  }
  *(_QWORD *)&v12->__size[8 * v13] = v10;
  ++*(_QWORD *)(a1 + 104);
  return result;
}
