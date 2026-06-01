/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100018E90
// Address: 0x0000000100018E90

//----- (0000000100018E90) ----------------------------------------------------
_QWORD *__fastcall sub_100018E90(_QWORD *result, __int128 *a2)
{
  __int64 v2; // x20
  __int64 v3; // x21
  int v4; // w8
  _QWORD *v5; // x12
  __int64 v6; // x8
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x10
  unsigned __int64 v9; // x11
  _QWORD *v10; // x12
  __int64 v11; // x13
  unsigned __int64 v12; // x16
  __int64 v15; // x19
  _QWORD *v16; // x1
  __int64 v17; // x8
  _QWORD *v18; // x8
  __int128 v19; // [xsp+20h] [xbp-70h]
  __int128 v20; // [xsp+30h] [xbp-60h]
  __int128 v21; // [xsp+40h] [xbp-50h]
  __int128 v22; // [xsp+50h] [xbp-40h]

  v21 = *a2;
  v22 = a2[1];
  v2 = *((_QWORD *)a2 + 5);
  v19 = a2[3];
  v20 = a2[4];
  v3 = result[5] + *((_QWORD *)a2 + 4);
  v4 = *((_DWORD *)result + 13) - 1;
  *((_DWORD *)result + 13) = v4;
  if ( v4 >= 1
    && *(_QWORD *)(*(_QWORD *)result[3] + 72LL * *(_QWORD *)(result[3] + 8LL) - 40)
    && (v5 = (_QWORD *)result[2], (v6 = 80LL * v5[1]) != 0) )
  {
    v7 = *(_QWORD *)(result[1] + 16LL);
    v8 = v7 & v3;
    v9 = v7 & (v3 + v2);
    v10 = (_QWORD *)(*v5 + 40LL);
    while ( 1 )
    {
      v11 = *(v10 - 1);
      v12 = (*v10 + v11) & v7;
      if ( v8 > (v11 & v7) && v8 < v12 )
        break;
      if ( v9 > (v11 & v7) && v9 < v12 )
        break;
      v10 += 10;
      v6 -= 80;
      if ( !v6 )
        goto LABEL_16;
    }
    return (_QWORD *)sub_10000EA94();
  }
  else
  {
LABEL_16:
    v15 = result[2];
    v16 = *(_QWORD **)v15;
    v17 = *(_QWORD *)(v15 + 8);
    if ( *(_QWORD *)(v15 + 16) < (unsigned __int64)(v17 + 1) )
    {
      result = qvector_reserve((_QWORD *)result[2], v16, v17 + 1, 0x50u);
      v16 = result;
      *(_QWORD *)v15 = result;
      v17 = *(_QWORD *)(v15 + 8);
    }
    v18 = &v16[10 * v17];
    *(_OWORD *)v18 = v21;
    *((_OWORD *)v18 + 1) = v22;
    v18[4] = v3;
    v18[5] = v2;
    *((_OWORD *)v18 + 3) = v19;
    *((_OWORD *)v18 + 4) = v20;
    ++*(_QWORD *)(v15 + 8);
  }
  return result;
}
