/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005C25C
// Address: 0x000000010005C25C

//----- (000000010005C25C) ----------------------------------------------------
_QWORD *__fastcall sub_10005C25C(_QWORD *result, char a2)
{
  _QWORD *v3; // x1
  __int64 v4; // x8
  bool v5; // cf
  __int64 v6; // x8
  __int64 v7; // x22
  _QWORD *v8; // x21

  v3 = (_QWORD *)*result;
  v4 = result[1];
  v5 = v4 != 0;
  v6 = v4 - 1;
  if ( v5 )
    v7 = v6;
  else
    v7 = 0;
  if ( result[2] < (unsigned __int64)(v7 + 2) )
  {
    v8 = result;
    v3 = qvector_reserve(result, v3, v7 + 2, 1u);
    result = v8;
    *v8 = v3;
  }
  result[1] = v7 + 2;
  *((_BYTE *)v3 + v7) = a2;
  *(_BYTE *)(*result + v7 + 1) = 0;
  return result;
}
