/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000117E8
// Address: 0x00000001000117E8

//----- (00000001000117E8) ----------------------------------------------------
_QWORD *__fastcall sub_1000117E8(_QWORD *result, unsigned int a2, _QWORD *a3, unsigned __int64 *a4)
{
  __int64 v4; // x9
  _QWORD *v5; // x11
  unsigned __int64 v6; // x8
  __int64 v7; // x12
  unsigned __int64 v8; // x8
  __int64 v9; // x9
  unsigned __int64 v10; // x9
  __int64 v11; // x10
  __int64 v12; // x10
  _QWORD *v13; // x11
  unsigned __int64 v14; // x12
  __int64 v15; // x11
  __int64 v16; // x10
  __int64 v17; // x11
  __int64 v18; // x12
  __int64 v19; // x12
  _QWORD *v20; // x13
  unsigned __int64 v21; // x14
  __int64 v22; // x0
  __int64 v23; // x1
  int v24; // w2

  v4 = a3[1];
  if ( !v4 )
    goto LABEL_28;
  v5 = (_QWORD *)(*a3 + 72 * v4 - 24);
  while ( 1 )
  {
    v6 = *(v5 - 1);
    v7 = a2 - v6;
    if ( a2 >= v6 )
    {
      v8 = *v5 + v6;
      if ( v8 > a2 )
        break;
    }
    v5 -= 9;
    if ( !--v4 )
      goto LABEL_28;
  }
  v9 = v7 + *(v5 - 3);
  if ( v9 == -1 )
  {
LABEL_28:
    if ( under_debugger != 1 )
      goto LABEL_30;
    goto LABEL_29;
  }
  if ( v8 == -1 )
  {
    while ( under_debugger == 1 )
    {
LABEL_29:
      __break(1u);
LABEL_30:
      interr(20143);
    }
    interr(20144);
    return sub_100011970(v22, v23, v24);
  }
  else
  {
    v10 = *(_QWORD *)(*result + 16LL) & v9;
    v11 = result[67];
    if ( (v11 & 0x7FFFFFFFFFFFFFFLL) != 0 )
    {
      v12 = 32 * v11;
      v13 = (_QWORD *)(result[66] + 8LL);
      while ( 1 )
      {
        v14 = *(v13 - 1);
        if ( v14 <= v10 && *v13 + v14 > v10 )
          break;
        v13 += 4;
        v12 -= 32;
        if ( !v12 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      v15 = result[99];
      if ( (v15 & 0x1FFFFFFFFFFFFFFFLL) == 0 )
        return nullptr;
      v16 = result[98];
      v17 = v16 + 8 * v15;
      while ( 1 )
      {
        result = *(_QWORD **)v16;
        v18 = *(_QWORD *)(*(_QWORD *)v16 + 536LL);
        if ( (v18 & 0x7FFFFFFFFFFFFFFLL) != 0 )
          break;
LABEL_16:
        v16 += 8;
        if ( v16 == v17 )
          return nullptr;
      }
      v19 = 32 * v18;
      v20 = (_QWORD *)(result[66] + 8LL);
      while ( 1 )
      {
        v21 = *(v20 - 1);
        if ( v21 <= v10 && *v20 + v21 > v10 )
          break;
        v20 += 4;
        v19 -= 32;
        if ( !v19 )
          goto LABEL_16;
      }
    }
    if ( result )
    {
      if ( a4 )
        *a4 = v8;
      return (_QWORD *)result[1];
    }
  }
  return result;
}
// 10001196D: variable 'v22' is possibly undefined
// 10001196D: variable 'v23' is possibly undefined
// 10001196D: variable 'v24' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
