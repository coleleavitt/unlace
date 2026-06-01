/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41DB0
// Address: 0x00041DB0

//----- (00041DB0) --------------------------------------------------------
_BYTE *__cdecl sub_41DB0(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // edx
  int *v12; // ecx
  int v13; // edi
  _QWORD *v14; // edi

  v4 = a1[2];
  v5 = *(_DWORD *)(v4 + 16);
  if ( *(_DWORD *)(v4 + 20) >= (unsigned int)(v5 + 1) )
  {
    v6 = *(_DWORD **)(v4 + 12);
  }
  else
  {
    v6 = qvector_reserve(v4 + 12, *(void **)(v4 + 12), v5 + 1, 0x18u);
    *(_DWORD *)(v4 + 12) = v6;
    v5 = *(_DWORD *)(v4 + 16);
  }
  v7 = 3 * v5;
  v6[2 * v7 + 3] = 0;
  v6[2 * v7 + 4] = 0;
  v6[2 * v7 + 5] = 0;
  ++*(_DWORD *)(v4 + 16);
  v6[2 * v7 + 1] = a4;
  v6[2 * v7] = a3;
  v6[2 * v7 + 2] = *(_DWORD *)(a1[2] + 44);
  v8 = a1[2];
  v9 = *(_DWORD *)(v8 + 44);
  if ( *(_DWORD *)(v8 + 48) >= (unsigned int)(v9 + 1) )
  {
    v10 = *(_DWORD **)(v8 + 40);
  }
  else
  {
    v10 = qvector_reserve(v8 + 40, *(void **)(v8 + 40), v9 + 1, 0xCu);
    *(_DWORD *)(v8 + 40) = v10;
    v9 = *(_DWORD *)(v8 + 44);
  }
  v11 = 3 * v9;
  v10[v11] = 0;
  v10[v11 + 1] = 0;
  v10[v11 + 2] = 0;
  ++*(_DWORD *)(v8 + 44);
  v12 = (int *)a1[1];
  v13 = a1[3];
  if ( v13 == 2 )
  {
    v14 = v12 + 65;
  }
  else
  {
    if ( v13 != 1 )
    {
      if ( !(_BYTE)under_debugger )
        interr(20086);
      BUG();
    }
    v14 = v12 + 57;
  }
  return sub_3C8A0(v12, (void **)&v10[v11], v14, *(_DWORD *)(a2 + 4));
}
// 13E34C: using guessed type int under_debugger;
