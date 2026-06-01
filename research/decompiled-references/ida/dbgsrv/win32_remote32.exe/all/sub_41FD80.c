/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41FD80
// Address: 0x0041FD80

//----- (0041FD80) --------------------------------------------------------
int __thiscall sub_41FD80(int **this, int a2)
{
  int *v2; // ebx
  int v3; // esi
  const char **v4; // edx
  int v5; // ecx
  int v6; // edi
  int *v7; // eax
  const char *v8; // ecx
  int v9; // ebx
  const char *v10; // eax
  int v11; // eax
  int v12; // esi
  const char *v13; // ecx
  const char *v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  const char *v18; // ecx
  const char *v19; // eax
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // ecx
  int i; // ecx
  int j; // edx
  _DWORD *v27; // esi
  void *v28; // eax
  int *v29; // [esp+10h] [ebp-20h]
  int *v30; // [esp+14h] [ebp-1Ch]
  int v32; // [esp+1Ch] [ebp-14h]
  int *v33; // [esp+20h] [ebp-10h]

  v2 = *this;
  v3 = (int)v2;
  v4 = (const char **)a2;
  v29 = *this;
  v33 = *this;
  v5 = (*this)[1];
  v6 = v5;
  v7 = (int *)(a2 + 4);
  v30 = (int *)v2[1];
  if ( !*(_BYTE *)(v5 + 13) )
  {
    do
    {
      v8 = MultiByteStr;
      if ( *v7 )
        v8 = *v4;
      v9 = *(_DWORD *)(v6 + 20);
      v10 = MultiByteStr;
      if ( v9 )
        v10 = *(const char **)(v6 + 16);
      v11 = strcmp(v10, v8);
      if ( v11 )
        v11 = v11 < 0 ? -1 : 1;
      if ( v11 >= 0 )
      {
        v12 = (int)v33;
        if ( *((_BYTE *)v33 + 13) )
        {
          v13 = MultiByteStr;
          if ( v9 )
            v13 = *(const char **)(v6 + 16);
          if ( *(_DWORD *)(a2 + 4) )
            v14 = *(const char **)a2;
          else
            v14 = MultiByteStr;
          v15 = strcmp(v14, v13);
          if ( v15 )
            v15 = v15 < 0 ? -1 : 1;
          if ( v15 < 0 )
            v12 = v6;
          v33 = (int *)v12;
        }
        v3 = v6;
        v6 = *(_DWORD *)v6;
      }
      else
      {
        v6 = *(_DWORD *)(v6 + 8);
      }
      v7 = (int *)(a2 + 4);
      v4 = (const char **)a2;
    }
    while ( !*(_BYTE *)(v6 + 13) );
    v2 = v33;
    v5 = (int)v30;
  }
  v16 = v5;
  if ( !*((_BYTE *)v2 + 13) )
    v16 = *v2;
  if ( !*(_BYTE *)(v16 + 13) )
  {
    v17 = *v7;
    do
    {
      v18 = MultiByteStr;
      if ( *(_DWORD *)(v16 + 20) )
        v18 = *(const char **)(v16 + 16);
      v19 = MultiByteStr;
      if ( v17 )
        v19 = *v4;
      v20 = strcmp(v19, v18);
      if ( v20 )
        v20 = v20 < 0 ? -1 : 1;
      if ( v20 >= 0 )
      {
        v16 = *(_DWORD *)(v16 + 8);
      }
      else
      {
        v33 = (int *)v16;
        v16 = *(_DWORD *)v16;
      }
      v4 = (const char **)a2;
    }
    while ( !*(_BYTE *)(v16 + 13) );
    v2 = v33;
  }
  v21 = 0;
  v22 = v3;
  v32 = 0;
  if ( (int *)v3 != v2 )
  {
    do
    {
      v23 = *(_DWORD *)(v22 + 8);
      ++v21;
      if ( *(_BYTE *)(v23 + 13) )
      {
        for ( i = *(_DWORD *)(v22 + 4); !*(_BYTE *)(i + 13); i = *(_DWORD *)(i + 4) )
        {
          if ( v22 != *(_DWORD *)(i + 8) )
            break;
          v22 = i;
        }
        v22 = i;
      }
      else
      {
        v22 = *(_DWORD *)(v22 + 8);
        for ( j = *(_DWORD *)v23; !*(_BYTE *)(j + 13); j = *(_DWORD *)j )
          v22 = j;
      }
    }
    while ( (int *)v22 != v2 );
    v32 = v21;
  }
  a2 = v3;
  if ( v3 == **this && *((_BYTE *)v2 + 13) )
  {
    sub_41C390(this, (int)this, v30);
    v29[1] = (int)v29;
    *v29 = (int)v29;
    v29[2] = (int)v29;
    *(this + 1) = nullptr;
    return v21;
  }
  if ( (int *)v3 == v2 )
    return v21;
  do
  {
    sub_40B5E0(&a2);
    v27 = (_DWORD *)sub_40BA90((int ***)this, v3);
    sub_423B70((int)(v27 + 8));
    v28 = (void *)v27[4];
    if ( v28 )
    {
      v27[5] = 0;
      sub_453A20(v28);
      v27[4] = 0;
      v27[6] = 0;
    }
    sub_4627F2(v27);
    v3 = a2;
  }
  while ( (int *)a2 != v2 );
  return v32;
}
