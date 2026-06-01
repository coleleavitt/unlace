/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450DD0
// Address: 0x0000000000450DD0

//----- (0000000000450DD0) ----------------------------------------------------
char *__fastcall sub_450DD0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // x21
  __int64 v7; // x1
  unsigned __int64 v8; // x3
  char *result; // x0
  __int64 v10; // x3
  char *v11; // x2
  int v12; // w1
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x1

  v5 = a1 + 56;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = *(_QWORD *)(a1 + 72);
  result = *(char **)(a1 + 56);
  if ( v7 + 1 > v8 )
  {
    result = (char *)sub_491288(v5, result, v7 + 1, 0x38u);
    *(_QWORD *)(a1 + 56) = result;
    v7 = *(_QWORD *)(v5 + 8);
  }
  v10 = 56 * v7;
  v11 = &result[v10];
  *(_QWORD *)&result[v10] = 0;
  *((_QWORD *)v11 + 1) = 0;
  *((_QWORD *)v11 + 2) = 0;
  ++*(_QWORD *)(v5 + 8);
  *((_QWORD *)v11 + 3) = *(_QWORD *)a1;
  *((_QWORD *)v11 + 4) = *(_QWORD *)(a1 + 8);
  v12 = *(_DWORD *)(a1 + 80);
  *((_QWORD *)v11 + 5) = a2;
  *((_DWORD *)v11 + 12) = v12;
  if ( a3 )
  {
    v14 = *a3;
    v13 = a3[1];
    *a3 = *(_QWORD *)&result[v10];
    v15 = a3[2];
    a3[1] = *((_QWORD *)v11 + 1);
    a3[2] = *((_QWORD *)v11 + 2);
    *(_QWORD *)&result[v10] = v14;
    *((_QWORD *)v11 + 1) = v13;
    *((_QWORD *)v11 + 2) = v15;
  }
  return result;
}
