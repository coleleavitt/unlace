/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BBF4
// Address: 0x000000000005BBF4

//----- (000000000005BBF4) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_5BBF4(pthread_mutex_t *result, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // x8
  _QWORD *p_align; // x19
  char *align; // x1
  unsigned __int64 v7; // x9
  char v9; // w21
  unsigned __int64 v10; // x9
  unsigned __int64 v11; // x9

  v3 = *(&result->__align + 1);
  p_align = &result->__align;
  if ( v3 > a2 )
  {
LABEL_2:
    p_align[1] = a2;
    return result;
  }
  if ( v3 < a2 )
  {
    align = (char *)result->__align;
    v7 = *(&result->__align + 2);
    if ( result->__align > (unsigned __int64)a3 || &align[v7] <= a3 )
    {
      if ( v7 < a2 )
      {
        result = (pthread_mutex_t *)qvector_reserve(result, align, a2, 1u);
        v3 = p_align[1];
        align = (char *)result;
        *p_align = result;
      }
      if ( v3 < a2 )
      {
        v11 = v3 + 1;
        for ( align[v3] = *a3; a2 != v11; ++v11 )
          *(_BYTE *)(*p_align + v11) = *a3;
      }
    }
    else
    {
      v9 = *a3;
      if ( v7 < a2 )
      {
        result = (pthread_mutex_t *)qvector_reserve(result, align, a2, 1u);
        v3 = p_align[1];
        align = (char *)result;
        *p_align = result;
      }
      if ( v3 < a2 )
      {
        v10 = v3 + 1;
        for ( align[v3] = v9; a2 != v10; ++v10 )
          *(_BYTE *)(*p_align + v10) = v9;
      }
    }
    goto LABEL_2;
  }
  return result;
}
