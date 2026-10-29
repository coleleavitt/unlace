/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432B08
// Address: 0x0000000000432B08

//----- (0000000000432B08) ----------------------------------------------------
__int64 __fastcall sub_432B08(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x1
  __int64 v4; // x4
  unsigned __int64 v5; // x5
  __int64 v6; // x3
  char *v7; // x0
  int *v8; // x21
  int v9; // w25
  int v10; // w23
  int v11; // w24
  int v12; // w22
  char *v13; // x1
  __int64 v14; // x0

  v1 = a1 + 392;
  v3 = *(_QWORD *)(a1 + 368);
  v4 = *(_QWORD *)(a1 + 400);
  v5 = *(_QWORD *)(a1 + 408);
  v6 = 16LL * *(_QWORD *)(a1 + 376);
  v7 = *(char **)(a1 + 392);
  v8 = (int *)(v3 + v6 - 16);
  v9 = *v8;
  v11 = v8[1];
  v10 = v8[2];
  v12 = v8[3];
  if ( v4 + 1 > v5 )
  {
    v7 = (char *)sub_491288(v1, v7, v4 + 1, 0x10u);
    *(_QWORD *)(a1 + 392) = v7;
    v4 = *(_QWORD *)(v1 + 8);
  }
  v13 = &v7[16 * v4];
  *(_DWORD *)v13 = v9;
  *((_DWORD *)v13 + 1) = v11;
  *((_DWORD *)v13 + 2) = v10;
  *((_DWORD *)v13 + 3) = v12;
  ++*(_QWORD *)(v1 + 8);
  sub_43D210(*(_QWORD *)(a1 + 200), (unsigned int)(v8[1] - 4), *(_DWORD *)(a1 + 208) - v8[1]);
  v14 = *(_QWORD *)(a1 + 376);
  if ( v14 )
    *(_QWORD *)(a1 + 376) = v14 - 1;
  return 0;
}
