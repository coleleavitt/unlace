/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444E78
// Address: 0x0000000000444E78

//----- (0000000000444E78) ----------------------------------------------------
_QWORD *__fastcall sub_444E78(__int64 a1, const char **a2)
{
  _QWORD *v2; // x23
  _QWORD *v3; // x19
  const char *v5; // x24
  const char *v6; // x21
  const char *v7; // x20
  int v8; // w0
  __int64 v9; // x3
  _QWORD *v11; // x20
  _QWORD *v12; // x19

  v2 = (_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  if ( !v3 )
    return v2;
  v5 = a2[1];
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = (const char *)&qword_4B2D48;
      v7 = (const char *)&qword_4B2D48;
      if ( v3[5] )
        v6 = (const char *)v3[4];
      if ( v5 )
        v7 = *a2;
      if ( (strcmp(v6, v7) & 0x80000000) == 0 )
        break;
      v3 = (_QWORD *)v3[3];
      if ( !v3 )
        return v2;
    }
    v8 = strcmp(v7, v6);
    v9 = v3[2];
    if ( (v8 & 0x80000000) == 0 )
      break;
    v2 = v3;
    v3 = (_QWORD *)v3[2];
    if ( !v9 )
      return v2;
  }
  v11 = (_QWORD *)v3[3];
  v12 = sub_443EB8((_QWORD *)v3[2], v3, (__int64)a2);
  sub_443F40(v11, v2, (__int64)a2);
  return v12;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
