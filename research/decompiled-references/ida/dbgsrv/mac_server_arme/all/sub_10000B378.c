/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000B378
// Address: 0x000000010000B378

//----- (000000010000B378) ----------------------------------------------------
_QWORD *__fastcall sub_10000B378(
        _QWORD *result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // w19
  _QWORD *v11; // x20
  __int64 v12; // x23
  _QWORD *v13; // x1
  __int64 v14; // x8
  unsigned __int64 v15; // x2
  __int64 v16; // x24
  _QWORD *v17; // x0
  _QWORD *v18; // x24
  _QWORD *v19; // x1
  int v20; // w8
  char v21; // w8

  if ( a2 != a3 )
  {
    v8 = a6;
    v11 = result;
    v12 = result[12];
    v13 = *(_QWORD **)v12;
    v14 = *(_QWORD *)(v12 + 8);
    v15 = v14 + 1;
    if ( *(_QWORD *)(v12 + 16) < (unsigned __int64)(v14 + 1) )
    {
      v16 = a4;
      v17 = qvector_reserve((_QWORD *)result[12], v13, v15, 0x50u);
      a4 = v16;
      v13 = v17;
      *(_QWORD *)v12 = v17;
      v14 = *(_QWORD *)(v12 + 8);
    }
    v18 = &v13[10 * v14];
    *(_OWORD *)((char *)v18 + 58) = 0u;
    *((_OWORD *)v18 + 2) = 0u;
    *((_OWORD *)v18 + 3) = 0u;
    *(_OWORD *)v18 = 0u;
    *((_OWORD *)v18 + 1) = 0u;
    ++*(_QWORD *)(v12 + 8);
    result = sub_10000295C((char **)v18 + 2, "%s:%s", v15, a4, a5, a6, a7, a8, v11[13]);
    *v18 = a2;
    v18[1] = a3;
    v19 = (_QWORD *)v18[5];
    if ( v18[7] <= 4u )
    {
      result = qvector_reserve(v18 + 5, v19, 5u, 1u);
      v19 = result;
      v18[5] = result;
    }
    v18[6] = 5;
    if ( v8 )
      v20 = 1162104643;
    else
      v20 = 1096040772;
    *(_DWORD *)v19 = v20;
    *(_BYTE *)(v18[5] + 4LL) = 0;
    *((_BYTE *)v18 + 73) = v8 | 4;
    if ( *(_BYTE *)(v11[11] + 1929LL) )
      v21 = 2;
    else
      v21 = 1;
    *((_BYTE *)v18 + 72) = v21;
  }
  return result;
}
// 10000B434: variable 'v15' is possibly undefined
// 10000B434: variable 'a5' is possibly undefined
// 10000B434: variable 'a6' is possibly undefined
// 10000B434: variable 'a7' is possibly undefined
// 10000B434: variable 'a8' is possibly undefined
