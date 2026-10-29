/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100021A70
// Address: 0x0000000100021A70

//----- (0000000100021A70) ----------------------------------------------------
_BYTE *__fastcall sub_100021A70(_BYTE *result, char a2)
{
  _BYTE *v3; // x19
  __int64 v4; // x21
  _QWORD *v5; // x1
  __int64 v6; // x8

  v3 = result;
  result[212] = a2;
  v4 = *((_QWORD *)result + 25);
  v5 = *(_QWORD **)v4;
  v6 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 16) < (unsigned __int64)(v6 + 1) )
  {
    result = qvector_reserve(*((_QWORD **)result + 25), v5, v6 + 1, 1u);
    v5 = result;
    *(_QWORD *)v4 = result;
    v6 = *(_QWORD *)(v4 + 8);
  }
  *((_BYTE *)v5 + v6) = a2;
  ++*(_QWORD *)(v4 + 8);
  ++*((_DWORD *)v3 + 52);
  return result;
}
