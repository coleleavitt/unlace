/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026AA8
// Address: 0x0000000100026AA8

//----- (0000000100026AA8) ----------------------------------------------------
__int64 __fastcall sub_100026AA8(__int64 a1, char a2, int a3)
{
  __int64 v6; // x22
  _QWORD *v7; // x1
  __int64 v8; // x8
  int v9; // w8
  int v10; // w8
  int v11; // w21
  int i; // w20
  __int64 v13; // x8
  __int64 v14; // x1
  __int64 v15; // x8
  __int64 v16; // x1

  *(_BYTE *)(a1 + 212) = a2;
  v6 = *(_QWORD *)(a1 + 200);
  v7 = *(_QWORD **)v6;
  v8 = *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)(v6 + 16) < (unsigned __int64)(v8 + 1) )
  {
    v7 = qvector_reserve(*(_QWORD **)(a1 + 200), v7, v8 + 1, 1u);
    *(_QWORD *)v6 = v7;
    v8 = *(_QWORD *)(v6 + 8);
  }
  *((_BYTE *)v7 + v8) = a2;
  ++*(_QWORD *)(v6 + 8);
  v9 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 208) = v9 + 1;
  v10 = a3 - v9;
  v11 = v10 - 5;
  sub_10002385C((_QWORD *)a1, v10 - 5);
  sub_10002385C((_QWORD *)a1, SHIWORD(v11));
  for ( i = a3 - 4; ; sub_10002DF38(*(_QWORD **)(a1 + 200), v14, i - v14) )
  {
    v13 = *(_QWORD *)(a1 + 280);
    v14 = *(unsigned int *)(*(_QWORD *)(a1 + 272) + 4 * v13 - 4);
    if ( v13 )
      *(_QWORD *)(a1 + 280) = v13 - 1;
    if ( (_DWORD)v14 == -1 )
      break;
  }
  while ( 1 )
  {
    v15 = *(_QWORD *)(a1 + 256);
    v16 = *(unsigned int *)(*(_QWORD *)(a1 + 248) + 4 * v15 - 4);
    if ( v15 )
      *(_QWORD *)(a1 + 256) = v15 - 1;
    if ( (_DWORD)v16 == -1 )
      break;
    sub_10002DF38(*(_QWORD **)(a1 + 200), v16, *(_DWORD *)(a1 + 208) - v16 - 4);
  }
  return 0;
}
