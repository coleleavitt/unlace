/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A09D8
// Address: 0x00000000000A09D8

//----- (00000000000A09D8) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_A09D8(pthread_mutex_t *result, unsigned __int64 a2, char *a3)
{
  _QWORD *p_align; // x19
  unsigned __int64 v5; // x8
  char *align; // x1
  unsigned __int64 v7; // x9
  char *v9; // x9
  __int64 v10; // x9
  unsigned __int64 v11; // x8
  _OWORD *v12; // x10
  __int128 v13; // q1
  char *v14; // x9
  __int64 v15; // x9
  unsigned __int64 v16; // x8
  __int128 v17; // q1
  _OWORD *v18; // x10
  __int128 v19; // [xsp+0h] [xbp-60h]
  __int128 v20; // [xsp+10h] [xbp-50h]

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
    if ( result->__align > (unsigned __int64)a3 || &align[32 * v7] <= a3 )
    {
      if ( v7 < a2 )
      {
        result = (pthread_mutex_t *)qvector_reserve(result, align, a2, 0x20u);
        v5 = p_align[1];
        align = (char *)result;
        *p_align = result;
      }
      if ( v5 < a2 )
      {
        v13 = *((_OWORD *)a3 + 1);
        v14 = &align[32 * v5];
        *(_OWORD *)v14 = *(_OWORD *)a3;
        *((_OWORD *)v14 + 1) = v13;
        if ( v5 + 1 != a2 )
        {
          v15 = 32 * v5 + 32;
          v16 = a2 - 1 - v5;
          do
          {
            v17 = *((_OWORD *)a3 + 1);
            --v16;
            v18 = (_OWORD *)(*p_align + v15);
            v15 += 32;
            *v18 = *(_OWORD *)a3;
            v18[1] = v17;
          }
          while ( v16 );
        }
      }
    }
    else
    {
      v19 = *(_OWORD *)a3;
      v20 = *((_OWORD *)a3 + 1);
      if ( v7 < a2 )
      {
        result = (pthread_mutex_t *)qvector_reserve(result, align, a2, 0x20u);
        v5 = p_align[1];
        align = (char *)result;
        *p_align = result;
      }
      if ( v5 < a2 )
      {
        v9 = &align[32 * v5];
        *(_OWORD *)v9 = v19;
        *((_OWORD *)v9 + 1) = v20;
        if ( v5 + 1 != a2 )
        {
          v10 = 32 * v5 + 32;
          v11 = a2 - 1 - v5;
          do
          {
            --v11;
            v12 = (_OWORD *)(*p_align + v10);
            v10 += 32;
            *v12 = v19;
            v12[1] = v20;
          }
          while ( v11 );
        }
      }
    }
    goto LABEL_2;
  }
  return result;
}
