/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A1FC
// Address: 0x000000000005A1FC

//----- (000000000005A1FC) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_5A1FC(pthread_mutex_t *result, unsigned __int64 a2, char *a3)
{
  _QWORD *p_align; // x19
  unsigned __int64 v5; // x8
  char *align; // x1
  unsigned __int64 v7; // x9
  char *v9; // x9
  __int64 v10; // x9
  unsigned __int64 v11; // x8
  _OWORD *v12; // x10
  __int128 v13; // q0
  __int128 v14; // q1
  __int128 v15; // q3
  char *v16; // x9
  __int64 v17; // x9
  unsigned __int64 v18; // x8
  __int128 v19; // q0
  __int128 v20; // q1
  __int128 v21; // q3
  _OWORD *v22; // x10
  __int128 v23; // [xsp+0h] [xbp-80h]
  __int128 v24; // [xsp+10h] [xbp-70h]
  __int128 v25; // [xsp+20h] [xbp-60h]
  __int128 v26; // [xsp+30h] [xbp-50h]

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
    if ( result->__align > (unsigned __int64)a3 || &align[64 * v7] <= a3 )
    {
      if ( v7 < a2 )
      {
        result = (pthread_mutex_t *)qvector_reserve(result, align, a2, 0x40u);
        v5 = p_align[1];
        align = (char *)result;
        *p_align = result;
      }
      if ( v5 < a2 )
      {
        v13 = *(_OWORD *)a3;
        v14 = *((_OWORD *)a3 + 1);
        v15 = *((_OWORD *)a3 + 3);
        v16 = &align[64 * v5];
        *((_OWORD *)v16 + 2) = *((_OWORD *)a3 + 2);
        *((_OWORD *)v16 + 3) = v15;
        *(_OWORD *)v16 = v13;
        *((_OWORD *)v16 + 1) = v14;
        if ( v5 + 1 != a2 )
        {
          v17 = (v5 << 6) + 64;
          v18 = a2 - 1 - v5;
          do
          {
            v19 = *(_OWORD *)a3;
            v20 = *((_OWORD *)a3 + 1);
            v21 = *((_OWORD *)a3 + 3);
            --v18;
            v22 = (_OWORD *)(*p_align + v17);
            v17 += 64;
            v22[2] = *((_OWORD *)a3 + 2);
            v22[3] = v21;
            *v22 = v19;
            v22[1] = v20;
          }
          while ( v18 );
        }
      }
    }
    else
    {
      v25 = *((_OWORD *)a3 + 2);
      v26 = *((_OWORD *)a3 + 3);
      v23 = *(_OWORD *)a3;
      v24 = *((_OWORD *)a3 + 1);
      if ( v7 < a2 )
      {
        result = (pthread_mutex_t *)qvector_reserve(result, align, a2, 0x40u);
        v5 = p_align[1];
        align = (char *)result;
        *p_align = result;
      }
      if ( v5 < a2 )
      {
        v9 = &align[64 * v5];
        *((_OWORD *)v9 + 2) = v25;
        *((_OWORD *)v9 + 3) = v26;
        *(_OWORD *)v9 = v23;
        *((_OWORD *)v9 + 1) = v24;
        if ( v5 + 1 != a2 )
        {
          v10 = (v5 << 6) + 64;
          v11 = a2 - 1 - v5;
          do
          {
            --v11;
            v12 = (_OWORD *)(*p_align + v10);
            v10 += 64;
            v12[2] = v25;
            v12[3] = v26;
            *v12 = v23;
            v12[1] = v24;
          }
          while ( v11 );
        }
      }
    }
    goto LABEL_2;
  }
  return result;
}
