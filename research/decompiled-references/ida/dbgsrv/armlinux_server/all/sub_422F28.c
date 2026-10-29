/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422F28
// Address: 0x0000000000422F28

//----- (0000000000422F28) ----------------------------------------------------
__int64 __fastcall sub_422F28(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // x19
  unsigned __int64 v5; // x1
  __int64 v6; // x3
  char *v7; // x0
  unsigned __int64 v8; // x2
  char *v9; // x1
  __int64 result; // x0

  v2 = (__int64)(a1 + 72);
  v6 = a1[73];
  v5 = a1[74];
  v7 = (char *)a1[72];
  v8 = v6 + 1;
  if ( v6 + 1 > v5 )
  {
    v7 = (char *)sub_491288(v2, v7, v8, 0x18u);
    a1[72] = v7;
    v6 = *(_QWORD *)(v2 + 8);
    v8 = v6 + 1;
  }
  *(_QWORD *)(v2 + 8) = v8;
  v9 = &v7[24 * v6];
  *(_QWORD *)v9 = a2[1];
  *((_QWORD *)v9 + 1) = a2[4];
  result = a2[2];
  *((_QWORD *)v9 + 2) = result;
  return result;
}
