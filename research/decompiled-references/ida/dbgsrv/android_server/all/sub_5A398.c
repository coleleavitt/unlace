/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A398
// Address: 0x000000000005A398

//----- (000000000005A398) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_5A398(pthread_mutex_t *result, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *p_align; // x19
  unsigned __int64 v5; // x8
  char *align; // x1
  unsigned __int64 v7; // x9
  char *v9; // x9
  __int64 v10; // x9
  unsigned __int64 v11; // x8
  __int64 v12; // x10
  __int128 v13; // q0
  __int128 v14; // q1
  __int128 v15; // q2
  char *v16; // x9
  __int64 v17; // x9
  unsigned __int64 v18; // x8
  __int128 v19; // q0
  __int128 v20; // q1
  __int128 v21; // q2
  __int64 v22; // x10
  __int128 v23; // [xsp+0h] [xbp-70h]
  __int128 v24; // [xsp+10h] [xbp-60h]
  __int128 v25; // [xsp+20h] [xbp-50h]
  __int64 v26; // [xsp+30h] [xbp-40h]

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
    if ( result->__align > a3 || (unsigned __int64)&align[56 * v7] <= a3 )
    {
      if ( v7 < a2 )
      {
        result = (pthread_mutex_t *)qvector_reserve(result, align, a2, 0x38u);
        v5 = p_align[1];
        align = (char *)result;
        *p_align = result;
      }
      if ( v5 < a2 )
      {
        v13 = *(_OWORD *)a3;
        v14 = *(_OWORD *)(a3 + 16);
        v15 = *(_OWORD *)(a3 + 32);
        v16 = &align[56 * v5];
        *((_QWORD *)v16 + 6) = *(_QWORD *)(a3 + 48);
        *((_OWORD *)v16 + 1) = v14;
        *((_OWORD *)v16 + 2) = v15;
        *(_OWORD *)v16 = v13;
        if ( v5 + 1 != a2 )
        {
          v17 = 56 * v5 + 56;
          v18 = a2 - 1 - v5;
          do
          {
            v19 = *(_OWORD *)a3;
            v20 = *(_OWORD *)(a3 + 16);
            v21 = *(_OWORD *)(a3 + 32);
            --v18;
            v22 = *p_align + v17;
            v17 += 56;
            *(_QWORD *)(v22 + 48) = *(_QWORD *)(a3 + 48);
            *(_OWORD *)(v22 + 16) = v20;
            *(_OWORD *)(v22 + 32) = v21;
            *(_OWORD *)v22 = v19;
          }
          while ( v18 );
        }
      }
    }
    else
    {
      v24 = *(_OWORD *)(a3 + 16);
      v25 = *(_OWORD *)(a3 + 32);
      v26 = *(_QWORD *)(a3 + 48);
      v23 = *(_OWORD *)a3;
      if ( v7 < a2 )
      {
        result = (pthread_mutex_t *)qvector_reserve(result, align, a2, 0x38u);
        v5 = p_align[1];
        align = (char *)result;
        *p_align = result;
      }
      if ( v5 < a2 )
      {
        v9 = &align[56 * v5];
        *((_QWORD *)v9 + 6) = v26;
        *((_OWORD *)v9 + 1) = v24;
        *((_OWORD *)v9 + 2) = v25;
        *(_OWORD *)v9 = v23;
        if ( v5 + 1 != a2 )
        {
          v10 = 56 * v5 + 56;
          v11 = a2 - 1 - v5;
          do
          {
            --v11;
            v12 = *p_align + v10;
            v10 += 56;
            *(_QWORD *)(v12 + 48) = v26;
            *(_OWORD *)(v12 + 16) = v24;
            *(_OWORD *)(v12 + 32) = v25;
            *(_OWORD *)v12 = v23;
          }
          while ( v11 );
        }
      }
    }
    goto LABEL_2;
  }
  return result;
}
