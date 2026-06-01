/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001915C
// Address: 0x000000010001915C

//----- (000000010001915C) ----------------------------------------------------
__int64 __fastcall sub_10001915C(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  unsigned int v5; // w22
  int v6; // w23
  _QWORD *v7; // x1
  __int64 v8; // x8
  _QWORD *v9; // x8
  __int64 v10; // x21
  int v11; // w20
  unsigned int v12; // w22
  __int64 v13; // t2
  _QWORD *v14; // x1
  __int64 v15; // x8
  _QWORD *v16; // x8

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a2 + 16);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = *(_QWORD **)v4;
  v8 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 16) < (unsigned __int64)(v8 + 1) )
  {
    v7 = qvector_reserve(*(_QWORD **)(a1 + 16), v7, v8 + 1, 0x10u);
    *(_QWORD *)v4 = v7;
    v8 = *(_QWORD *)(v4 + 8);
  }
  v9 = &v7[2 * v8];
  *v9 = 0;
  v9[1] = 0;
  ++*(_QWORD *)(v4 + 8);
  *(_DWORD *)v9 = v6;
  *((_DWORD *)v9 + 1) = HIWORD(v5);
  *((_DWORD *)v9 + 2) = BYTE1(v5);
  *((_DWORD *)v9 + 3) = (unsigned __int8)v5;
  v10 = *(_QWORD *)(a1 + 16);
  v13 = a2 + 8;
  v11 = *(_DWORD *)(a2 + 8);
  v12 = *(_DWORD *)(v13 + 4);
  v14 = *(_QWORD **)v10;
  v15 = *(_QWORD *)(v10 + 8);
  if ( *(_QWORD *)(v10 + 16) < (unsigned __int64)(v15 + 1) )
  {
    v14 = qvector_reserve(*(_QWORD **)(a1 + 16), v14, v15 + 1, 0x10u);
    *(_QWORD *)v10 = v14;
    v15 = *(_QWORD *)(v10 + 8);
  }
  v16 = &v14[2 * v15];
  *v16 = 0;
  v16[1] = 0;
  ++*(_QWORD *)(v10 + 8);
  *(_DWORD *)v16 = v11;
  *((_DWORD *)v16 + 1) = HIWORD(v12);
  *((_DWORD *)v16 + 2) = BYTE1(v12);
  *((_DWORD *)v16 + 3) = (unsigned __int8)v12;
  *(_BYTE *)(a1 + 24) = 1;
  return 0;
}
