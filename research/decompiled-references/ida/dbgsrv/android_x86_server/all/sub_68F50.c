/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68F50
// Address: 0x00068F50

//----- (00068F50) --------------------------------------------------------
int __cdecl sub_68F50(_DWORD *a1, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *v4; // edi
  const char *v5; // eax
  int v6; // eax
  const char *v7; // eax
  _DWORD *v8; // ecx
  _DWORD *v9; // eax
  int *v10; // ecx
  int v11; // ecx
  bool v12; // zf
  void *v13; // eax
  const char *v14; // [esp+Ch] [ebp-20h]
  int **v15; // [esp+10h] [ebp-1Ch]
  _DWORD *v16; // [esp+14h] [ebp-18h]

  v2 = a1[1];
  result = 0;
  if ( v2 )
  {
    v14 = byte_EF875;
    if ( *(_DWORD *)(a2 + 4) )
      v14 = *(const char **)a2;
    v4 = a1 + 1;
    v16 = a1 + 1;
    v15 = (int **)a1[1];
    do
    {
      v5 = byte_EF875;
      if ( *(_DWORD *)(v2 + 20) )
        v5 = *(const char **)(v2 + 16);
      v6 = strcmp(v5, v14);
      if ( v6 >= 0 )
        v4 = (_DWORD *)v2;
      v2 = *(_DWORD *)(v2 + 4 * ((unsigned int)v6 >> 31));
    }
    while ( v2 );
    if ( v4 == v16 )
      return 0;
    v7 = v4[5] ? (const char *)v4[4] : byte_EF875;
    if ( strcmp(v14, v7) < 0 )
    {
      return 0;
    }
    else
    {
      result = 0;
      if ( v4 != v16 )
      {
        v8 = (_DWORD *)v4[1];
        if ( v8 )
        {
          do
          {
            v9 = v8;
            v8 = (_DWORD *)*v8;
          }
          while ( v8 );
        }
        else
        {
          v9 = (_DWORD *)v4[2];
          if ( (_DWORD *)*v9 != v4 )
          {
            v10 = v4 + 2;
            do
            {
              v11 = *v10;
              v9 = *(_DWORD **)(v11 + 8);
              v12 = *v9 == v11;
              v10 = (int *)(v11 + 8);
            }
            while ( !v12 );
          }
        }
        if ( (_DWORD *)*a1 == v4 )
          *a1 = v9;
        --a1[2];
        sub_2F420(v15, (int **)v4);
        free_idcv((char *)v4 + 28);
        v13 = (void *)v4[4];
        if ( v13 )
        {
          v4[5] = 0;
          qfree(v13);
        }
        operator delete(v4);
        return 1;
      }
    }
  }
  return result;
}
