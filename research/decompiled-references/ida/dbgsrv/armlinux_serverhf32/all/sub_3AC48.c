/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AC48
// Address: 0x0003AC48

//----- (0003AC48) --------------------------------------------------------
int __fastcall sub_3AC48(int a1, char a2, int a3)
{
  int v4; // r7
  int v7; // r3
  _BYTE *v8; // r0
  int v9; // r5
  int v10; // r3
  unsigned int v11; // r7
  __int64 v12; // kr08_8
  int v13; // r1
  __int64 v14; // r2
  int v15; // r5

  v4 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = a2;
  v7 = *(_DWORD *)(v4 + 4);
  if ( (unsigned int)(v7 + 1) > *(_DWORD *)(v4 + 8) )
  {
    v8 = sub_77EB0(v4, *(void **)v4, v7 + 1, 1u);
    v7 = *(_DWORD *)(v4 + 4);
    *(_DWORD *)v4 = v8;
  }
  else
  {
    v8 = *(_BYTE **)v4;
  }
  v8[v7] = a2;
  v9 = a3 - 4;
  ++*(_DWORD *)(v4 + 4);
  v10 = *(_DWORD *)(a1 + 116) + 1;
  v11 = v9 - v10;
  *(_DWORD *)(a1 + 116) = v10;
  sub_39B10(a1, (unsigned __int16)(v9 - v10));
  sub_39B10(a1, HIWORD(v11));
  while ( 1 )
  {
    v12 = *(_QWORD *)(a1 + 156);
    v13 = *(_DWORD *)(v12 + 4 * (HIDWORD(v12) + 0x3FFFFFFF));
    if ( HIDWORD(v12) )
      *(_DWORD *)(a1 + 160) = HIDWORD(v12) - 1;
    if ( v13 == -1 )
      break;
    sub_3E5A4(*(int **)(a1 + 112), v13, v9 - v13);
  }
  while ( 1 )
  {
    v14 = *(_QWORD *)(a1 + 144);
    v15 = *(_DWORD *)(v14 + 4 * (HIDWORD(v14) + 0x3FFFFFFF));
    if ( HIDWORD(v14) )
      *(_DWORD *)(a1 + 148) = HIDWORD(v14) - 1;
    if ( v15 == -1 )
      break;
    sub_3E5A4(*(int **)(a1 + 112), v15, *(_DWORD *)(a1 + 116) - 4 - v15);
  }
  return 0;
}
