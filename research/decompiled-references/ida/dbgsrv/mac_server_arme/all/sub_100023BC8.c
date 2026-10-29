/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100023BC8
// Address: 0x0000000100023BC8

//----- (0000000100023BC8) ----------------------------------------------------
_QWORD *__fastcall sub_100023BC8(_QWORD *result, unsigned int a2, unsigned int a3)
{
  __int16 v3; // w20
  _QWORD *v4; // x19
  char v5; // w21
  __int64 v6; // x20
  _QWORD *v7; // x1
  __int64 v8; // x8
  unsigned int v9; // w8
  char v10; // w22
  __int64 v11; // x21
  _QWORD *v12; // x1
  __int64 v13; // x8
  __int64 v14; // x21
  _QWORD *v15; // x1
  __int64 v16; // x8
  char v17; // w22
  __int64 v18; // x21
  _QWORD *v19; // x1
  __int64 v20; // x8
  __int64 _28; // [xsp+28h] [xbp+8h]

  v3 = a3;
  v4 = result;
  if ( a3 <= 0xF )
  {
    v5 = a3 + a2;
    *((_BYTE *)result + 212) = a3 + a2;
    v6 = result[25];
    v7 = *(_QWORD **)v6;
    v8 = *(_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v6 + 16) < (unsigned __int64)(v8 + 1) )
    {
      result = qvector_reserve((_QWORD *)result[25], v7, v8 + 1, 1u);
      v7 = result;
      *(_QWORD *)v6 = result;
      v8 = *(_QWORD *)(v6 + 8);
    }
    *((_BYTE *)v7 + v8) = v5;
    ++*(_QWORD *)(v6 + 8);
LABEL_11:
    ++*((_DWORD *)v4 + 52);
    return result;
  }
  v9 = a2 >> 3;
  if ( a3 <= 0xFF )
  {
    v10 = v9 | 0x80;
    *((_BYTE *)result + 212) = v9 | 0x80;
    v11 = result[25];
    v12 = *(_QWORD **)v11;
    v13 = *(_QWORD *)(v11 + 8);
    if ( *(_QWORD *)(v11 + 16) < (unsigned __int64)(v13 + 1) )
    {
      result = qvector_reserve((_QWORD *)result[25], v12, v13 + 1, 1u);
      v12 = result;
      *(_QWORD *)v11 = result;
      v13 = *(_QWORD *)(v11 + 8);
    }
    *((_BYTE *)v12 + v13) = v10;
    ++*(_QWORD *)(v11 + 8);
    ++*((_DWORD *)v4 + 52);
    v14 = v4[25];
    v15 = *(_QWORD **)v14;
    v16 = *(_QWORD *)(v14 + 8);
    if ( *(_QWORD *)(v14 + 16) < (unsigned __int64)(v16 + 1) )
    {
      result = qvector_reserve((_QWORD *)v4[25], v15, v16 + 1, 1u);
      v15 = result;
      *(_QWORD *)v14 = result;
      v16 = *(_QWORD *)(v14 + 8);
    }
    *((_BYTE *)v15 + v16) = v3;
    ++*(_QWORD *)(v14 + 8);
    goto LABEL_11;
  }
  v17 = v9 - 127;
  *((_BYTE *)result + 212) = v9 - 127;
  v18 = result[25];
  v19 = *(_QWORD **)v18;
  v20 = *(_QWORD *)(v18 + 8);
  if ( *(_QWORD *)(v18 + 16) < (unsigned __int64)(v20 + 1) )
  {
    v19 = qvector_reserve((_QWORD *)result[25], v19, v20 + 1, 1u);
    *(_QWORD *)v18 = v19;
    v20 = *(_QWORD *)(v18 + 8);
  }
  *((_BYTE *)v19 + v20) = v17;
  ++*(_QWORD *)(v18 + 8);
  ++*((_DWORD *)v4 + 52);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_10002385C(v4, v3);
}
// 100023D60: variable '_28' is possibly undefined
