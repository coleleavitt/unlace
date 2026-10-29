/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000218E0
// Address: 0x00000001000218E0

//----- (00000001000218E0) ----------------------------------------------------
_QWORD *__fastcall sub_1000218E0(_QWORD *result, __int16 a2)
{
  _QWORD *v3; // x19
  __int64 v4; // x21
  _QWORD *v5; // x1
  __int64 v6; // x8
  __int64 v7; // x21
  _QWORD *v8; // x1
  __int64 v9; // x8

  v3 = result;
  v4 = result[25];
  v5 = *(_QWORD **)v4;
  v6 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 16) < (unsigned __int64)(v6 + 1) )
  {
    result = qvector_reserve((_QWORD *)result[25], v5, v6 + 1, 1u);
    v5 = result;
    *(_QWORD *)v4 = result;
    v6 = *(_QWORD *)(v4 + 8);
  }
  *((_BYTE *)v5 + v6) = a2;
  ++*(_QWORD *)(v4 + 8);
  ++*((_DWORD *)v3 + 52);
  v7 = v3[25];
  v8 = *(_QWORD **)v7;
  v9 = *(_QWORD *)(v7 + 8);
  if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v9 + 1) )
  {
    result = qvector_reserve((_QWORD *)v3[25], v8, v9 + 1, 1u);
    v8 = result;
    *(_QWORD *)v7 = result;
    v9 = *(_QWORD *)(v7 + 8);
  }
  *((_BYTE *)v8 + v9) = HIBYTE(a2);
  ++*(_QWORD *)(v7 + 8);
  ++*((_DWORD *)v3 + 52);
  return result;
}
