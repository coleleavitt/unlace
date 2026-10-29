/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43BC30
// Address: 0x0043BC30

//----- (0043BC30) --------------------------------------------------------
int __stdcall sub_43BC30(int ***a1, int a2)
{
  int v2; // ecx
  int v3; // edi
  int *v5; // edx
  int v6; // edi
  int v7; // eax
  char *v8; // esi
  char *v9; // ecx
  int *v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  void **v14; // esi
  bool v15; // zf
  char *v16; // eax
  char *v17; // esi
  void *v18; // eax
  void **v19; // esi
  char *v20; // [esp+Ch] [ebp-48h]
  int v21; // [esp+24h] [ebp-30h] BYREF
  int v22; // [esp+2Ch] [ebp-28h]
  int ***v23; // [esp+30h] [ebp-24h]
  int v24; // [esp+34h] [ebp-20h]
  int v25; // [esp+38h] [ebp-1Ch]
  _DWORD *v26; // [esp+3Ch] [ebp-18h]
  int v27; // [esp+40h] [ebp-14h]
  int *v28; // [esp+44h] [ebp-10h]
  int v29; // [esp+50h] [ebp-4h]

  v24 = 0;
  v23 = a1 + 40;
  sub_408BC0((int *)a1 + 40, &v21, &a2);
  v25 = v22;
  if ( *(_BYTE *)(v22 + 13) )
    return -1;
  if ( a2 < *(_DWORD *)(v22 + 16) )
    return -1;
  if ( (int **)v22 == a1[40] )
    return -1;
  v2 = *(_DWORD *)(v22 + 24);
  v28 = (int *)(v22 + 20);
  if ( !v2 )
    return -1;
  v3 = *(_DWORD *)(v22 + 20) + 8 * (3 * v2 - 3);
  if ( !((unsigned __int8 (__thiscall *)(int ***, int, int))(*a1)[59])(a1, a2, v3) )
    return -1;
  ((void (__stdcall *)(int ***, int, _DWORD, int **, int **))(*a1)[39])(a1, 4, *(_DWORD *)(v3 + 16), a1[51], a1[52]);
  if ( *(_BYTE *)(v3 + 20)
    && !((unsigned __int8 (__stdcall *)(int ***, int, _DWORD, _DWORD, _DWORD))(*a1)[54])(
          a1,
          a2,
          0,
          *(_DWORD *)(v3 + 4),
          *(_DWORD *)v3) )
  {
    sub_4104E0((int)a1, (int)"Failed to restore %zu registers!\n", *(_DWORD *)(v3 + 4));
    return -1;
  }
  v5 = v28;
  v6 = 0;
  v29 = 0;
  v20 = nullptr;
  v7 = *(_DWORD *)(*v28 + 8 * (3 * v28[1] - 3) + 4);
  v26 = (_DWORD *)(*v28 + 8 * (3 * v28[1] - 3));
  v27 = v7;
  if ( v7 )
  {
    v8 = (char *)sub_4539E0(24 * v7);
    a2 = v27;
    v20 = v8;
    v25 = v22;
    do
    {
      v9 = &v8[v6];
      v10 = (int *)(v6 + *v26);
      *(_DWORD *)v9 = -2;
      *(_OWORD *)(v9 + 8) = 0;
      sub_43AA50((int *)&v8[v6], v10);
      v6 += 24;
      --a2;
    }
    while ( a2 );
    v6 = v27;
    v5 = v28;
  }
  v11 = v5[1];
  v24 = 1;
  if ( v11 )
  {
    v12 = *v5;
    v13 = v11 - 1;
    v5[1] = v13;
    v14 = (void **)(24 * v13 + v12);
    v15 = *v14 == nullptr;
    LOBYTE(v29) = 1;
    if ( !v15 )
    {
      sub_415E40(v14, 0);
      sub_453A20(*v14);
      *v14 = nullptr;
      v14[2] = nullptr;
    }
  }
  v16 = v20;
  v29 = 2;
  if ( v20 )
  {
    if ( v6 )
    {
      v17 = v20 + 8;
      do
      {
        if ( *((int *)v17 - 2) >= -1 )
        {
          v18 = *(void **)v17;
          LOBYTE(v29) = 3;
          if ( v18 )
          {
            *((_DWORD *)v17 + 1) = 0;
            sub_453A20(v18);
            *(_DWORD *)v17 = 0;
            *((_DWORD *)v17 + 2) = 0;
          }
          LOBYTE(v29) = 2;
          *((_DWORD *)v17 - 2) = -2;
        }
        v17 += 24;
        --v6;
      }
      while ( v6 );
      v16 = v20;
    }
    sub_453A20(v16);
  }
  if ( !v28[1] )
  {
    v19 = (void **)sub_40BA90(v23, v25);
    sub_409CE0(v19 + 5);
    sub_4627F2(v19);
  }
  return 2 * (a1[19] != nullptr) + 1;
}
