/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100023A70
// Address: 0x0000000100023A70

//----- (0000000100023A70) ----------------------------------------------------
_QWORD *__fastcall sub_100023A70(_QWORD *result, char a2, unsigned int a3)
{
  __int16 v3; // w20
  _QWORD *v4; // x19
  __int64 v5; // x21
  _QWORD *v6; // x8
  __int64 v7; // x9
  char v8; // w22
  __int64 v9; // x21
  _QWORD *v10; // x1
  __int64 v11; // x8
  char v12; // w22
  __int64 v13; // x21
  _QWORD *v14; // x1
  __int64 v15; // x8
  __int64 _28; // [xsp+28h] [xbp+8h]

  v3 = a3;
  v4 = result;
  if ( a3 > 0xFF )
  {
    v12 = a2 + 1;
    *((_BYTE *)result + 212) = a2 + 1;
    v13 = result[25];
    v14 = *(_QWORD **)v13;
    v15 = *(_QWORD *)(v13 + 8);
    if ( *(_QWORD *)(v13 + 16) < (unsigned __int64)(v15 + 1) )
    {
      v14 = qvector_reserve((_QWORD *)result[25], v14, v15 + 1, 1u);
      *(_QWORD *)v13 = v14;
      v15 = *(_QWORD *)(v13 + 8);
    }
    *((_BYTE *)v14 + v15) = v12;
    ++*(_QWORD *)(v13 + 8);
    ++*((_DWORD *)v4 + 52);
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10002385C(v4, v3);
  }
  else
  {
    *((_BYTE *)result + 212) = a2;
    v5 = result[25];
    v6 = *(_QWORD **)v5;
    v7 = *(_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)(v7 + 1) )
    {
      v8 = a2;
      result = qvector_reserve((_QWORD *)result[25], *(_QWORD **)v5, v7 + 1, 1u);
      a2 = v8;
      v6 = result;
      *(_QWORD *)v5 = result;
      v7 = *(_QWORD *)(v5 + 8);
    }
    *((_BYTE *)v6 + v7) = a2;
    ++*(_QWORD *)(v5 + 8);
    ++*((_DWORD *)v4 + 52);
    v9 = v4[25];
    v10 = *(_QWORD **)v9;
    v11 = *(_QWORD *)(v9 + 8);
    if ( *(_QWORD *)(v9 + 16) < (unsigned __int64)(v11 + 1) )
    {
      result = qvector_reserve((_QWORD *)v4[25], v10, v11 + 1, 1u);
      v10 = result;
      *(_QWORD *)v9 = result;
      v11 = *(_QWORD *)(v9 + 8);
    }
    *((_BYTE *)v10 + v11) = v3;
    ++*(_QWORD *)(v9 + 8);
    ++*((_DWORD *)v4 + 52);
  }
  return result;
}
// 100023BB8: variable '_28' is possibly undefined
