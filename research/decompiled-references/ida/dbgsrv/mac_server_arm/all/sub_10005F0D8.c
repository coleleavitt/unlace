/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F0D8
// Address: 0x000000010005F0D8

//----- (000000010005F0D8) ----------------------------------------------------
_QWORD *__fastcall sub_10005F0D8(__int64 a1, char a2, __int64 a3)
{
  unsigned __int64 v6; // x22
  unsigned int v7; // w23
  __darwin_time_t v8; // x0
  _QWORD *result; // x0
  _QWORD *v10; // x1
  __int64 v11; // x8
  _QWORD *v12; // x8

  v6 = 0;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v7 = *(_DWORD *)(a1 + 24);
    if ( (v7 & 0x80000000) == 0 )
    {
      v8 = qtime64();
      v6 = sub_10005E28C(v8, v7);
    }
  }
  v10 = *(_QWORD **)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 40);
  result = (_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v11 + 1) )
  {
    result = qvector_reserve(result, v10, v11 + 1, 0x20u);
    v10 = result;
    *(_QWORD *)(a1 + 32) = result;
    v11 = *(_QWORD *)(a1 + 40);
  }
  v12 = &v10[4 * v11];
  *v12 = a3;
  v12[1] = 0;
  v12[2] = v6;
  *((_BYTE *)v12 + 24) = a2;
  ++*(_QWORD *)(a1 + 40);
  return result;
}
