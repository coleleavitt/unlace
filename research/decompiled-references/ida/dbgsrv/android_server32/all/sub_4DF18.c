/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DF18
// Address: 0x0004DF18

//----- (0004DF18) --------------------------------------------------------
int __fastcall sub_4DF18(int a1, int a2)
{
  int v2; // r4
  int v3; // r7
  int v4; // r5
  const char *v5; // r6
  const char *v6; // r0
  int v7; // r0
  int *v8; // r1
  const char *v9; // r1
  _DWORD *v10; // r1
  _DWORD *v11; // r5
  _DWORD *v12; // r0
  _DWORD *v13; // r1
  int v14; // r2
  void *v15; // r0
  int *v18; // [sp+8h] [bp-Ch]
  int v19; // [sp+Ch] [bp-8h]

  v2 = *(_DWORD *)(a1 + 4);
  v3 = a1 + 4;
  v4 = 0;
  if ( v2 )
  {
    v5 = &byte_B3CBE;
    if ( *(_DWORD *)(a2 + 4) )
      v5 = *(const char **)a2;
    v19 = a1 + 4;
    v18 = *(int **)(a1 + 4);
    do
    {
      v6 = &byte_B3CBE;
      if ( *(_DWORD *)(v2 + 20) )
        v6 = *(const char **)(v2 + 16);
      v7 = strcmp(v6, v5);
      if ( v7 >= 0 )
        v3 = v2;
      v8 = (int *)(v2 + 4);
      if ( v7 >= 0 )
        v8 = (int *)v2;
      v2 = *v8;
    }
    while ( *v8 );
    if ( v3 == v19 )
    {
      return 0;
    }
    else
    {
      v4 = 0;
      if ( *(_DWORD *)(v3 + 20) )
        v9 = *(const char **)(v3 + 16);
      else
        v9 = &byte_B3CBE;
      if ( strcmp(v5, v9) >= 0 )
      {
        v10 = *(_DWORD **)(v3 + 4);
        if ( v10 )
        {
          v11 = (_DWORD *)a1;
          do
          {
            v12 = v10;
            v10 = (_DWORD *)*v10;
          }
          while ( v10 );
        }
        else
        {
          v13 = (_DWORD *)(v3 + 8);
          v12 = *(_DWORD **)(v3 + 8);
          v11 = (_DWORD *)a1;
          if ( *v12 != v3 )
          {
            do
            {
              v14 = *v13;
              v13 = (_DWORD *)(*v13 + 8);
              v12 = *(_DWORD **)(v14 + 8);
            }
            while ( *v12 != v14 );
          }
        }
        if ( *v11 == v3 )
          *v11 = v12;
        --v11[2];
        sub_27512(v18, (int *)v3);
        free_idcv((unsigned __int8 *)(v3 + 32));
        v15 = *(void **)(v3 + 16);
        if ( v15 )
        {
          *(_DWORD *)(v3 + 20) = 0;
          qfree(v15);
        }
        operator delete((void *)v3);
        return 1;
      }
    }
  }
  return v4;
}
// B3CBE: using guessed type char byte_B3CBE;
