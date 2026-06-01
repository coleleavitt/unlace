/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B940
// Address: 0x000000010002B940

//----- (000000010002B940) ----------------------------------------------------
void __fastcall sub_10002B940(unsigned __int8 **result, unsigned __int8 *a2, unsigned __int8 *a3)
{
  unsigned __int64 v5; // x8
  unsigned __int8 *v6; // x22
  unsigned __int64 v7; // x21
  unsigned __int64 v9; // x9
  unsigned __int8 *v11; // x22
  __int64 v12; // x23
  unsigned __int8 *v13; // x0
  unsigned __int64 v14; // x8
  unsigned __int8 *v15; // x21
  __int64 v16; // x22
  unsigned __int8 *v17; // x0
  unsigned __int8 v18[8]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v19; // [xsp+10h] [xbp-50h]
  __int64 v20; // [xsp+18h] [xbp-48h]
  __int64 v21; // [xsp+20h] [xbp-40h]

  v5 = (unsigned __int64)result[1];
  v6 = (unsigned __int8 *)(v5 - (_QWORD)a2);
  if ( v5 > (unsigned __int64)a2 )
  {
    v7 = 32LL * (_QWORD)a2;
    do
    {
      free_idcv(&(*result)[v7]);
      v7 += 32LL;
      --v6;
    }
    while ( v6 );
LABEL_4:
    result[1] = a2;
    return;
  }
  if ( v5 < (unsigned __int64)a2 )
  {
    v9 = (unsigned __int64)result[2];
    if ( *result > a3 || &(*result)[32 * v9] <= a3 )
    {
      if ( v9 < (unsigned __int64)a2 )
      {
        *result = (unsigned __int8 *)qvector_reserve(result, *result, (unsigned __int64)a2, 0x20u);
        v5 = (unsigned __int64)result[1];
      }
      v11 = &a2[-v5];
      if ( (unsigned __int64)a2 > v5 )
      {
        v12 = 32 * v5;
        do
        {
          v13 = &(*result)[v12];
          *v13 = 2;
          *((_QWORD *)v13 + 2) = 0;
          *((_QWORD *)v13 + 3) = 0;
          *((_QWORD *)v13 + 1) = 0;
          copy_idcv(v13, a3);
          v12 += 32;
          --v11;
        }
        while ( v11 );
      }
      goto LABEL_4;
    }
    v18[0] = 2;
    v20 = 0;
    v21 = 0;
    v19 = 0;
    copy_idcv(v18, a3);
    if ( result[2] < a2 )
      *result = (unsigned __int8 *)qvector_reserve(result, *result, (unsigned __int64)a2, 0x20u);
    v14 = (unsigned __int64)result[1];
    v15 = &a2[-v14];
    if ( (unsigned __int64)a2 > v14 )
    {
      v16 = 32 * v14;
      do
      {
        v17 = &(*result)[v16];
        *v17 = 2;
        *((_QWORD *)v17 + 2) = 0;
        *((_QWORD *)v17 + 3) = 0;
        *((_QWORD *)v17 + 1) = 0;
        copy_idcv(v17, v18);
        v16 += 32;
        --v15;
      }
      while ( v15 );
    }
    result[1] = a2;
    free_idcv(v18);
  }
}
