/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A2B0
// Address: 0x0006A2B0

//----- (0006A2B0) --------------------------------------------------------
void __cdecl sub_6A2B0(int a1)
{
  char *v1; // esi
  char *v2; // edi
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  void **v6; // esi
  void **v7; // edi
  _DWORD *v8; // edi
  void *v9; // eax
  void *v10; // eax
  int v11; // esi
  _DWORD *v12; // ecx
  int v13; // esi
  int v14; // edi
  void *v15; // eax

  sub_6A4F0(a1, 1);
  sub_6A690(a1);
  v1 = *(char **)(a1 + 260);
  if ( v1 )
  {
    do
    {
      v2 = *(char **)v1;
      sub_757F0((char **)v1 + 5);
      if ( (v1[8] & 1) != 0 )
        operator delete(*((void **)v1 + 4));
      operator delete(v1);
      v1 = v2;
    }
    while ( v2 );
  }
  v3 = *(void **)(a1 + 252);
  *(_DWORD *)(a1 + 252) = 0;
  if ( v3 )
    operator delete(v3);
  v4 = *(void **)(a1 + 152);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 156) = 0;
    qfree(v4);
    *(_DWORD *)(a1 + 152) = 0;
    *(_DWORD *)(a1 + 160) = 0;
  }
  v5 = *(void **)(a1 + 128);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 132) = 0;
    qfree(v5);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 136) = 0;
  }
  sub_1BC40((char **)(a1 + 116));
  v6 = *(void ***)(a1 + 56);
  if ( v6 )
  {
    do
    {
      v7 = (void **)*v6;
      if ( ((_BYTE)v6[2] & 1) != 0 )
        operator delete(v6[4]);
      operator delete(v6);
      v6 = v7;
    }
    while ( v7 );
  }
  v8 = (_DWORD *)a1;
  v9 = *(void **)(a1 + 48);
  *(_DWORD *)(a1 + 48) = 0;
  if ( v9 )
    operator delete(v9);
  v10 = *(void **)(a1 + 28);
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 32);
    if ( v11 )
    {
      sub_1BC40(*(char ***)(a1 + 28));
      v12 = (_DWORD *)a1;
      if ( v11 != 1 )
      {
        v13 = v11 - 1;
        v14 = 28;
        do
        {
          sub_1BC40((char **)(v14 + v12[7]));
          v12 = (_DWORD *)a1;
          v14 += 28;
          --v13;
        }
        while ( v13 );
      }
      v10 = (void *)v12[7];
      v8 = v12;
    }
    v8[8] = 0;
    qfree(v10);
    v8[7] = 0;
    v8[9] = 0;
  }
  v15 = (void *)v8[4];
  if ( v15 )
  {
    v8[5] = 0;
    qfree(v15);
    v8[4] = 0;
    v8[6] = 0;
  }
}
