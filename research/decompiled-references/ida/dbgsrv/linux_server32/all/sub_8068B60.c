/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8068B60
// Address: 0x08068B60

//----- (08068B60) --------------------------------------------------------
int __cdecl sub_8068B60(int a1, signed int a2)
{
  char *v2; // eax
  int v3; // esi
  int i; // edi
  char *v5; // ebp
  void *v6; // edx
  void *v7; // edx
  int v8; // edi
  _DWORD *v9; // esi
  void *v10; // eax
  void *v11; // eax
  int v12; // ebp
  _DWORD *v13; // eax
  void *v14; // ecx
  void *v15; // eax
  void *v16; // eax
  int v17; // esi
  _DWORD *v19; // [esp+0h] [ebp-20h]

  v2 = *(char **)(a1 + 236);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 240);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[40 * i];
        v6 = *((void **)v5 + 5);
        if ( v6 )
        {
          *((_DWORD *)v5 + 6) = 0;
          sub_80CF780(v6);
        }
        v7 = *((void **)v5 + 2);
        if ( v7 )
        {
          *((_DWORD *)v5 + 3) = 0;
          sub_80CF780(v7);
        }
        v2 = *(char **)(a1 + 236);
      }
    }
    *(_DWORD *)(a1 + 240) = 0;
    sub_80CF780(v2);
    *(_DWORD *)(a1 + 236) = 0;
    *(_DWORD *)(a1 + 244) = 0;
  }
  v8 = *(_DWORD *)(a1 + 640);
  *(_BYTE *)(a1 + 770) = 0;
  while ( v8 )
  {
    v9 = (_DWORD *)v8;
    sub_8057A30(*(_DWORD **)(v8 + 12));
    v10 = *(void **)(v8 + 88);
    v8 = *(_DWORD *)(v8 + 8);
    if ( v10 )
    {
      v9[23] = 0;
      sub_80CF780(v10);
    }
    v11 = (void *)v9[19];
    if ( v11 )
    {
      v9[20] = 0;
      sub_80CF780(v11);
    }
    v12 = v9[15];
    while ( v12 )
    {
      sub_8057050(*(_DWORD **)(v12 + 12));
      v13 = (_DWORD *)v12;
      v12 = *(_DWORD *)(v12 + 8);
      v14 = (void *)v13[5];
      if ( v14 )
      {
        v19 = v13;
        v13[6] = 0;
        sub_80CF780(v14);
        v13 = v19;
      }
      operator delete(v13, 0x20u);
    }
    v15 = (void *)v9[10];
    if ( v15 )
    {
      v9[11] = 0;
      sub_80CF780(v15);
    }
    v16 = (void *)v9[7];
    if ( v16 )
    {
      v9[8] = 0;
      sub_80CF780(v16);
    }
    operator delete(v9, 0x68u);
  }
  *(_DWORD *)(a1 + 640) = 0;
  *(_DWORD *)(a1 + 644) = a1 + 636;
  *(_DWORD *)(a1 + 648) = a1 + 636;
  *(_DWORD *)(a1 + 652) = 0;
  if ( !(unsigned __int8)sub_80A1C80((_DWORD *)a1) )
    return 0;
  v17 = sub_8066E20((_DWORD *)a1, a2, 2);
  if ( !(_BYTE)v17 )
    return 0;
  sub_8067BE0((_DWORD *)a1);
  if ( !(unsigned __int8)sub_805D6C0((_DWORD *)a1) )
    sub_8058E20(
      a1,
      "Debugger failed to correctly restore the instruction pointer after recovering from a broken connection.\n");
  return v17;
}
