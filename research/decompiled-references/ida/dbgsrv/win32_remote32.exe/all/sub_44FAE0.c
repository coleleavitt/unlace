/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44FAE0
// Address: 0x0044FAE0

//----- (0044FAE0) --------------------------------------------------------
bool __cdecl sub_44FAE0(int a1, int a2, int a3, char a4)
{
  int v4; // ebx
  int v5; // ebp
  int (__stdcall *v6)(int, int, char *, int, _DWORD, _DWORD, int); // eax
  int v7; // esi
  unsigned int v8; // kr00_4
  int v9; // ebx
  unsigned int v10; // ebp
  int (__stdcall *v11)(int, int, char *, int, _DWORD, _DWORD, int); // eax
  int v12; // esi
  int v13; // ebp
  unsigned int v14; // ebx
  unsigned int v15; // kr04_4
  int v16; // ebp
  unsigned int v17; // eax
  int v18; // esi
  unsigned int v20; // [esp+38h] [ebp-40Ch]
  unsigned int v21; // [esp+3Ch] [ebp-408h]
  char v22[1024]; // [esp+40h] [ebp-404h] BYREF

  v4 = a2;
  v5 = a3;
  v20 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
  if ( a4 )
  {
    v6 = (int (__stdcall *)(int, int, char *, int, _DWORD, _DWORD, int))dword_4B70E4;
    if ( !dword_4B70E4 )
    {
      v6 = (int (__stdcall *)(int, int, char *, int, _DWORD, _DWORD, int))sub_450400(a2, a1, 1u);
      dword_4B70E4 = (int)v6;
    }
    v7 = v6(a2, a3, v22, 1024, 0, 0, 4);
    WSASetLastError(v7);
    if ( !v7 )
    {
      v8 = strlen(v22);
      v9 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
      v10 = v8 + v9 + 1;
      if ( v10 > *(_DWORD *)(a1 + 8) )
        *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v8 + v9 + 1, 1u);
      *(_DWORD *)(a1 + 4) = v10;
      *(_BYTE *)(v9 + v8 + *(_DWORD *)a1) = 0;
      sub_464310(v9 + *(_DWORD *)a1, (unsigned int)v22, v8);
      v4 = a2;
      v5 = a3;
    }
  }
  v11 = (int (__stdcall *)(int, int, char *, int, _DWORD, _DWORD, int))dword_4B70E4;
  if ( !dword_4B70E4 )
  {
    v11 = (int (__stdcall *)(int, int, char *, int, _DWORD, _DWORD, int))sub_450400(v4, a1, 1u);
    dword_4B70E4 = (int)v11;
  }
  v12 = v11(v4, v5, v22, 1024, 0, 0, 2);
  WSASetLastError(v12);
  if ( !v12 )
  {
    v13 = *(_DWORD *)(a1 + 4);
    v14 = v13 != 0 ? v13 - 1 : 0;
    if ( v14 > v20 )
    {
      if ( v14 + 2 > *(_DWORD *)(a1 + 8) )
        *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v14 + 2, 1u);
      *(_DWORD *)(a1 + 4) = v14 + 2;
      *(_BYTE *)(v14 + *(_DWORD *)a1) = 40;
      *(_BYTE *)(v14 + *(_DWORD *)a1 + 1) = 0;
      v13 = *(_DWORD *)(a1 + 4);
    }
    v15 = strlen(v22);
    v16 = v13 != 0 ? v13 - 1 : 0;
    v17 = v15 + v16 + 1;
    v21 = v17;
    if ( v17 > *(_DWORD *)(a1 + 8) )
    {
      *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v15 + v16 + 1, 1u);
      v17 = v21;
    }
    *(_DWORD *)(a1 + 4) = v17;
    *(_BYTE *)(v15 + v16 + *(_DWORD *)a1) = 0;
    sub_464310(v16 + *(_DWORD *)a1, (unsigned int)v22, v15);
    if ( v14 > v20 )
    {
      v18 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
      if ( (unsigned int)(v18 + 2) > *(_DWORD *)(a1 + 8) )
        *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v18 + 2, 1u);
      *(_DWORD *)(a1 + 4) = v18 + 2;
      *(_BYTE *)(v18 + *(_DWORD *)a1) = 41;
      *(_BYTE *)(v18 + *(_DWORD *)a1 + 1) = 0;
    }
  }
  return ((*(_DWORD *)(a1 + 4) - 1) & (unsigned int)-(*(_DWORD *)(a1 + 4) != 0)) > v20;
}
// 4B70E4: using guessed type int dword_4B70E4;
