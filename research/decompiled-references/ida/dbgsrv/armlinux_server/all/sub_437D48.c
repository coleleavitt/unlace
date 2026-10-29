/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437D48
// Address: 0x0000000000437D48

//----- (0000000000437D48) ----------------------------------------------------
__int64 __fastcall sub_437D48(__int64 a1, char a2, int a3)
{
  __int64 v6; // x21
  __int64 v7; // x1
  _BYTE *v8; // x0
  int v9; // w20
  int v10; // w21
  int v11; // w21
  __int64 v12; // x0
  unsigned int v13; // w1
  __int64 v14; // x0
  unsigned int v15; // w3

  *(_BYTE *)(a1 + 212) = a2;
  v6 = *(_QWORD *)(a1 + 200);
  v7 = *(_QWORD *)(v6 + 8);
  if ( (unsigned __int64)(v7 + 1) > *(_QWORD *)(v6 + 16) )
  {
    v8 = sub_491288(v6, *(void **)v6, v7 + 1, 1u);
    *(_QWORD *)v6 = v8;
    v7 = *(_QWORD *)(v6 + 8);
  }
  else
  {
    v8 = *(_BYTE **)v6;
  }
  v8[v7] = a2;
  v9 = a3 - 4;
  ++*(_QWORD *)(v6 + 8);
  v10 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v10;
  v11 = v9 - v10;
  sub_436010(a1, v11);
  sub_436010(a1, HIWORD(v11));
  while ( 1 )
  {
    v12 = *(_QWORD *)(a1 + 280);
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v12 - 4);
    if ( v12 )
      *(_QWORD *)(a1 + 280) = v12 - 1;
    if ( v13 == -1 )
      break;
    sub_43D210(*(_QWORD *)(a1 + 200), v13, v9 - v13);
  }
  while ( 1 )
  {
    v14 = *(_QWORD *)(a1 + 256);
    v15 = *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v14 - 4);
    if ( v14 )
      *(_QWORD *)(a1 + 256) = v14 - 1;
    if ( v15 == -1 )
      break;
    sub_43D210(*(_QWORD *)(a1 + 200), v15, *(_DWORD *)(a1 + 208) - 4 - v15);
  }
  return 0;
}
