/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001CA90
// Address: 0x000000010001CA90

//----- (000000010001CA90) ----------------------------------------------------
_QWORD **__fastcall sub_10001CA90(_QWORD **result, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x9
  unsigned __int64 v4; // x10
  _QWORD *v6; // x19
  unsigned __int64 v7; // x20
  unsigned __int64 v8; // x21
  void *v9; // x0
  void *v10; // x8
  unsigned __int64 v11; // x8
  __int64 v12; // x9
  _QWORD *v13; // x10
  __int128 v14; // q0
  __int128 v15; // q1
  __int128 v16; // q2
  _QWORD *v17; // x19
  unsigned __int64 v18; // x20
  void *v19; // x0
  void *v20; // x8
  unsigned __int64 v21; // x8
  __int64 v22; // x9
  _QWORD *v23; // x10
  __int128 v24; // [xsp+0h] [xbp-60h]
  __int128 v25; // [xsp+10h] [xbp-50h]
  __int128 v26; // [xsp+20h] [xbp-40h]
  __int64 v27; // [xsp+30h] [xbp-30h]

  v3 = (unsigned __int64)result[1];
  if ( v3 > a2 )
  {
LABEL_2:
    result[1] = (_QWORD *)a2;
    return result;
  }
  if ( v3 < a2 )
  {
    v4 = (unsigned __int64)result[2];
    if ( (unsigned __int64)*result <= a3 && (unsigned __int64)&(*result)[7 * v4] > a3 )
    {
      v24 = *(_OWORD *)a3;
      v25 = *(_OWORD *)(a3 + 16);
      v26 = *(_OWORD *)(a3 + 32);
      v27 = *(_QWORD *)(a3 + 48);
      if ( v4 < a2 )
      {
        v17 = result;
        v18 = a2;
        v19 = qvector_reserve(result, *result, a2, 0x38u);
        a2 = v18;
        v20 = v19;
        result = (_QWORD **)v17;
        *v17 = v20;
        v3 = v17[1];
      }
      v21 = a2 - v3;
      if ( a2 > v3 )
      {
        v22 = 7 * v3;
        do
        {
          v23 = &(*result)[v22];
          *(_OWORD *)v23 = v24;
          *((_OWORD *)v23 + 1) = v25;
          *((_OWORD *)v23 + 2) = v26;
          v23[6] = v27;
          v22 += 7;
          --v21;
        }
        while ( v21 );
      }
    }
    else
    {
      if ( v4 < a2 )
      {
        v6 = result;
        v7 = a2;
        v8 = a3;
        v9 = qvector_reserve(result, *result, a2, 0x38u);
        a3 = v8;
        a2 = v7;
        v10 = v9;
        result = (_QWORD **)v6;
        *v6 = v10;
        v3 = v6[1];
      }
      v11 = a2 - v3;
      if ( a2 > v3 )
      {
        v12 = 7 * v3;
        do
        {
          v13 = &(*result)[v12];
          v14 = *(_OWORD *)a3;
          v15 = *(_OWORD *)(a3 + 16);
          v16 = *(_OWORD *)(a3 + 32);
          v13[6] = *(_QWORD *)(a3 + 48);
          *((_OWORD *)v13 + 1) = v15;
          *((_OWORD *)v13 + 2) = v16;
          *(_OWORD *)v13 = v14;
          v12 += 7;
          --v11;
        }
        while ( v11 );
      }
    }
    goto LABEL_2;
  }
  return result;
}
