/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9CDC0
// Address: 0x000000000009CDC0

//----- (000000000009CDC0) ----------------------------------------------------
_QWORD *__fastcall sub_9CDC0(_QWORD *result, __int64 a2)
{
  _QWORD *v3; // x20
  pthread_mutex_t *v4; // x23
  unsigned __int64 v5; // x22
  const void *v6; // x24
  void *align; // x0

  v3 = result;
  *(_QWORD *)a2 = result[30];
  v4 = (pthread_mutex_t *)(a2 + 8);
  if ( result + 30 != (_QWORD *)a2 )
  {
    v5 = result[32];
    if ( v5 < 2 )
    {
      *(_QWORD *)(a2 + 16) = 0;
    }
    else
    {
      v6 = (const void *)result[31];
      if ( *(_QWORD *)(a2 + 24) >= v5 )
      {
        align = (void *)v4->__align;
      }
      else
      {
        align = qvector_reserve(v4, (void *)v4->__align, result[32], 1u);
        v4->__align = (__int64)align;
      }
      *(_QWORD *)(a2 + 16) = v5;
      result = memmove(align, v6, v5 - 1);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5 - 1) = 0;
    }
  }
  *(_DWORD *)(a2 + 32) = *((_DWORD *)v3 + 68);
  return result;
}
