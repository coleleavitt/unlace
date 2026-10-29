/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100021DC0
// Address: 0x0000000100021DC0

//----- (0000000100021DC0) ----------------------------------------------------
_QWORD *__fastcall sub_100021DC0(_QWORD *result, unsigned __int64 a2)
{
  _QWORD *v3; // x19
  char v4; // w21
  __int64 v5; // x20
  _QWORD *v6; // x1
  __int64 v7; // x8
  __int64 v8; // x21
  _QWORD *v9; // x1
  __int64 v10; // x8
  __int64 v11; // x21
  _QWORD *v12; // x1
  __int64 v13; // x8
  __int64 v14; // x21
  _QWORD *v15; // x1
  __int64 v16; // x8

  v3 = result;
  if ( a2 <= 0xF )
  {
    v4 = a2 | 0xE0;
    *((_BYTE *)result + 212) = a2 | 0xE0;
    v5 = result[25];
    v6 = *(_QWORD **)v5;
    v7 = *(_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)(v7 + 1) )
    {
      result = qvector_reserve((_QWORD *)result[25], v6, v7 + 1, 1u);
      v6 = result;
      *(_QWORD *)v5 = result;
      v7 = *(_QWORD *)(v5 + 8);
    }
    *((_BYTE *)v6 + v7) = v4;
    ++*(_QWORD *)(v5 + 8);
LABEL_11:
    ++*((_DWORD *)v3 + 52);
    return result;
  }
  if ( a2 == (char)a2 )
  {
    *((_BYTE *)result + 212) = -96;
    v8 = result[25];
    v9 = *(_QWORD **)v8;
    v10 = *(_QWORD *)(v8 + 8);
    if ( *(_QWORD *)(v8 + 16) < (unsigned __int64)(v10 + 1) )
    {
      result = qvector_reserve((_QWORD *)result[25], v9, v10 + 1, 1u);
      v9 = result;
      *(_QWORD *)v8 = result;
      v10 = *(_QWORD *)(v8 + 8);
    }
    *((_BYTE *)v9 + v10) = -96;
    ++*(_QWORD *)(v8 + 8);
    ++*((_DWORD *)v3 + 52);
    v11 = v3[25];
    v12 = *(_QWORD **)v11;
    v13 = *(_QWORD *)(v11 + 8);
    if ( *(_QWORD *)(v11 + 16) < (unsigned __int64)(v13 + 1) )
    {
      result = qvector_reserve((_QWORD *)v3[25], v12, v13 + 1, 1u);
      v12 = result;
      *(_QWORD *)v11 = result;
      v13 = *(_QWORD *)(v11 + 8);
    }
    *((_BYTE *)v12 + v13) = a2;
    ++*(_QWORD *)(v11 + 8);
    goto LABEL_11;
  }
  *((_BYTE *)result + 212) = -45;
  v14 = result[25];
  v15 = *(_QWORD **)v14;
  v16 = *(_QWORD *)(v14 + 8);
  if ( *(_QWORD *)(v14 + 16) < (unsigned __int64)(v16 + 1) )
  {
    v15 = qvector_reserve((_QWORD *)result[25], v15, v16 + 1, 1u);
    *(_QWORD *)v14 = v15;
    v16 = *(_QWORD *)(v14 + 8);
  }
  *((_BYTE *)v15 + v16) = -45;
  ++*(_QWORD *)(v14 + 8);
  ++*((_DWORD *)v3 + 52);
  sub_1000218E0(v3, a2);
  sub_1000218E0(v3, SWORD1(a2));
  sub_1000218E0(v3, SWORD2(a2));
  return sub_1000218E0(v3, SHIWORD(a2));
}
