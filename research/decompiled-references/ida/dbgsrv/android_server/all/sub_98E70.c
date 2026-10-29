/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98E70
// Address: 0x0000000000098E70

//----- (0000000000098E70) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_98E70(pthread_mutex_t *result, unsigned __int64 a2, char *a3)
{
  _QWORD *p_align; // x19
  unsigned __int64 v5; // x8
  char *align; // x1
  unsigned __int64 v7; // x9
  __int64 v9; // x9
  unsigned __int64 v10; // x8
  __int64 v11; // x9
  unsigned __int64 v12; // x8
  __int128 v13; // [xsp+0h] [xbp-50h]

  p_align = &result->__align;
  _ReadStatusReg(TPIDR_EL0);
  v5 = *(&result->__align + 1);
  if ( v5 > a2 )
  {
LABEL_2:
    p_align[1] = a2;
    return result;
  }
  if ( v5 < a2 )
  {
    align = (char *)result->__align;
    v7 = *(&result->__align + 2);
    if ( result->__align > (unsigned __int64)a3 || &align[16 * v7] <= a3 )
    {
      if ( v7 < a2 )
      {
        result = (pthread_mutex_t *)qvector_reserve(result, align, a2, 0x10u);
        v5 = p_align[1];
        align = (char *)result;
        *p_align = result;
      }
      if ( v5 < a2 )
      {
        *(_OWORD *)&align[16 * v5] = *(_OWORD *)a3;
        if ( v5 + 1 != a2 )
        {
          v11 = 16 * v5 + 16;
          v12 = a2 - 1 - v5;
          do
          {
            --v12;
            *(_OWORD *)(*p_align + v11) = *(_OWORD *)a3;
            v11 += 16;
          }
          while ( v12 );
        }
      }
    }
    else
    {
      v13 = *(_OWORD *)a3;
      if ( v7 < a2 )
      {
        result = (pthread_mutex_t *)qvector_reserve(result, align, a2, 0x10u);
        v5 = p_align[1];
        align = (char *)result;
        *p_align = result;
      }
      if ( v5 < a2 )
      {
        *(_OWORD *)&align[16 * v5] = v13;
        if ( v5 + 1 != a2 )
        {
          v9 = 16 * v5 + 16;
          v10 = a2 - 1 - v5;
          do
          {
            --v10;
            *(_OWORD *)(*p_align + v9) = v13;
            v9 += 16;
          }
          while ( v10 );
        }
      }
    }
    goto LABEL_2;
  }
  return result;
}
