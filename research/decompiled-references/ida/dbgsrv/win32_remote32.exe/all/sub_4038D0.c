/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4038D0
// Address: 0x004038D0

//----- (004038D0) --------------------------------------------------------
int __stdcall sub_4038D0(int a1, _DWORD *a2, int *a3)
{
  _DWORD *v4; // edx
  _DWORD *v5; // ecx
  int *v6; // esi
  unsigned int v7; // edi
  bool v8; // cf
  _DWORD *v9; // ecx
  int *v10; // esi
  unsigned int v11; // edi
  _DWORD *v12; // ecx
  int *v13; // esi
  unsigned int v14; // edi
  int v15; // edx
  int v16; // ecx
  _DWORD *v17; // ecx
  int *v18; // esi
  unsigned int v19; // edi
  int *v20; // ecx
  unsigned int v21; // esi

  if ( !a3 )
    return -2147024809;
  v4 = a2;
  v5 = a2;
  *a3 = 0;
  v6 = dword_489B34;
  v7 = 12;
  do
  {
    if ( *v5 != *v6 )
    {
      v9 = a2;
      v10 = dword_489B44;
      v11 = 12;
      while ( *v9 == *v10 )
      {
        ++v9;
        ++v10;
        v8 = v11 < 4;
        v11 -= 4;
        if ( v8 )
          goto LABEL_24;
      }
      v12 = a2;
      v13 = dword_489B54;
      v14 = 12;
      while ( *v12 == *v13 )
      {
        ++v12;
        ++v13;
        v8 = v14 < 4;
        v14 -= 4;
        if ( v8 )
        {
          v15 = a1;
          v16 = 0;
          if ( *(_DWORD *)(a1 + 16) != -1 )
          {
            v16 = a1 != 0 ? a1 + 4 : 0;
            *a3 = v16;
          }
          goto LABEL_25;
        }
      }
      v17 = a2;
      v18 = dword_489B64;
      v19 = 12;
      while ( *v17 == *v18 )
      {
        ++v17;
        ++v18;
        v8 = v19 < 4;
        v19 -= 4;
        if ( v8 )
        {
          v15 = a1;
          v16 = 0;
          if ( *(_DWORD *)(a1 + 16) == -1 )
          {
            v16 = a1 != 0 ? a1 + 8 : 0;
            *a3 = v16;
          }
          goto LABEL_25;
        }
      }
      v20 = dword_489B74;
      v21 = 12;
      while ( *v4 == *v20 )
      {
        ++v4;
        ++v20;
        v8 = v21 < 4;
        v21 -= 4;
        if ( v8 )
          goto LABEL_24;
      }
      return -2147467262;
    }
    ++v5;
    ++v6;
    v8 = v7 < 4;
    v7 -= 4;
  }
  while ( !v8 );
LABEL_24:
  v15 = a1;
  v16 = a1;
  *a3 = a1;
LABEL_25:
  if ( v16 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v15 + 4))(v15);
    return 0;
  }
  return -2147467262;
}
// 489B34: using guessed type int dword_489B34[4];
// 489B44: using guessed type int dword_489B44[4];
// 489B54: using guessed type int dword_489B54[4];
// 489B64: using guessed type int dword_489B64[4];
// 489B74: using guessed type int dword_489B74[2];
