/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65F94
// Address: 0x0000000000065F94

//----- (0000000000065F94) ----------------------------------------------------
void __fastcall sub_65F94(pthread_mutex_t *result, unsigned __int64 a2, unsigned __int8 *a3)
{
  unsigned __int64 v5; // x23
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x24
  char *align; // x1
  unsigned __int64 v9; // x8
  unsigned __int64 v11; // x8
  __int64 v12; // x21
  __int64 v13; // x23
  __int64 v14; // x0
  char *v15; // x0
  char *v16; // x0
  __int64 v17; // x25
  unsigned __int64 v18; // x23
  __int64 v19; // x0
  unsigned __int8 v20[8]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v21; // [xsp+10h] [xbp-60h]
  __int64 v22; // [xsp+18h] [xbp-58h]
  __int64 v23; // [xsp+20h] [xbp-50h]
  __int64 v24; // [xsp+28h] [xbp-48h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(&result->__align + 1);
  if ( v5 > a2 )
  {
    v6 = 32 * a2;
    v7 = a2;
    do
    {
      free_idcv((__int64 *)(result->__align + v6));
      ++v7;
      v6 += 32LL;
    }
    while ( v7 < v5 );
LABEL_4:
    *(&result->__align + 1) = a2;
    return;
  }
  if ( v5 < a2 )
  {
    align = (char *)result->__align;
    v9 = *(&result->__align + 2);
    if ( result->__align > (unsigned __int64)a3 || &align[32 * v9] <= (char *)a3 )
    {
      if ( v9 < a2 )
      {
        v15 = (char *)qvector_reserve(result, align, a2, 0x20u);
        v5 = *(&result->__align + 1);
        align = v15;
        result->__align = (__int64)v15;
      }
      if ( v5 < a2 )
      {
        v16 = &align[32 * v5];
        *v16 = 2;
        *((_QWORD *)v16 + 2) = 0;
        *((_QWORD *)v16 + 3) = 0;
        *((_QWORD *)v16 + 1) = 0;
        copy_idcv((unsigned __int8 *)v16, a3);
        if ( v5 + 1 != a2 )
        {
          v17 = 32 * v5 + 32;
          v18 = a2 - 1 - v5;
          do
          {
            v19 = result->__align + v17;
            *(_BYTE *)v19 = 2;
            *(_QWORD *)(v19 + 16) = 0;
            *(_QWORD *)(v19 + 24) = 0;
            *(_QWORD *)(v19 + 8) = 0;
            copy_idcv((unsigned __int8 *)v19, a3);
            --v18;
            v17 += 32;
          }
          while ( v18 );
        }
      }
      goto LABEL_4;
    }
    v20[0] = 2;
    v22 = 0;
    v23 = 0;
    v21 = 0;
    copy_idcv(v20, a3);
    if ( *(&result->__align + 2) < a2 )
      result->__align = (__int64)qvector_reserve(result, (void *)result->__align, a2, 0x20u);
    v11 = *(&result->__align + 1);
    if ( v11 < a2 )
    {
      v12 = a2 - v11;
      v13 = 32 * v11;
      do
      {
        v14 = result->__align + v13;
        *(_BYTE *)v14 = 2;
        *(_QWORD *)(v14 + 16) = 0;
        *(_QWORD *)(v14 + 24) = 0;
        *(_QWORD *)(v14 + 8) = 0;
        copy_idcv((unsigned __int8 *)v14, v20);
        --v12;
        v13 += 32;
      }
      while ( v12 );
    }
    *(&result->__align + 1) = a2;
    free_idcv((__int64 *)v20);
  }
}
