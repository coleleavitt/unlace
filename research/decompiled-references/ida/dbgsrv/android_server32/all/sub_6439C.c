/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6439C
// Address: 0x0006439C

//----- (0006439C) --------------------------------------------------------
char *__fastcall sub_6439C(int a1, int *a2)
{
  char *result; // r0
  int v3; // r6
  int v4; // r7
  void **v5; // r5
  unsigned int v6; // r0
  size_t v7; // r2
  int v8; // r1
  int v9; // r4
  _BYTE *v10; // r1
  bool v11; // cf
  unsigned int v12; // r0
  _BYTE *v13; // r0
  void *v14; // r0
  int v15; // r4
  unsigned int v16; // r2
  void *v17; // r1
  void *v18; // r0
  char **v19; // r2
  unsigned int v20; // r6
  _BYTE *v21; // r0
  size_t v22; // [sp+4h] [bp-10h]
  unsigned int v23; // [sp+8h] [bp-Ch]
  size_t v24; // [sp+Ch] [bp-8h]

  result = (char *)a2[1];
  if ( 12 * (_DWORD)result )
  {
    v3 = *a2;
    v4 = 12 * (_DWORD)result;
    do
    {
      result = strchr(*(const char **)v3, 61);
      v5 = (void **)a1;
      if ( result )
      {
        v6 = *(_DWORD *)(v3 + 4);
        v7 = v6 - 1;
        if ( v6 >= 2 )
        {
          v8 = *(_DWORD *)(a1 + 4);
          v9 = v8 - 1;
          if ( !v8 )
            v9 = 0;
          v24 = v9 + v7;
          v10 = *(_BYTE **)a1;
          v11 = *(_DWORD *)(a1 + 8) >= v9 + v6;
          v12 = v9 + v6;
          if ( !v11 )
          {
            v22 = v7;
            v23 = v12;
            v13 = qvector_reserve(a1, v10, v12, 1u);
            v7 = v22;
            v5 = (void **)a1;
            v10 = v13;
            v12 = v23;
            *(_DWORD *)a1 = v10;
          }
          v5[1] = (void *)v12;
          v10[v24] = 0;
          qmemcpy((char *)*v5 + v9, *(const void **)v3, v7);
          v5 = (void **)a1;
        }
        v14 = v5[1];
        v15 = (int)v14 - 1;
        if ( !v14 )
          v15 = 0;
        v16 = v15 + 2;
        v17 = *v5;
        if ( (unsigned int)v5[2] < v15 + 2 )
        {
          v18 = qvector_reserve((int)v5, v17, v16, 1u);
          v16 = v15 + 2;
          v5 = (void **)a1;
          v17 = v18;
          *(_DWORD *)a1 = v18;
        }
        v5[1] = (void *)v16;
        result = nullptr;
        *((_BYTE *)v17 + v15) = 0;
        *((_BYTE *)*v5 + v15 + 1) = 0;
      }
      v4 -= 12;
      v3 += 12;
    }
    while ( v4 );
  }
  v19 = (char **)a1;
  v20 = *(_DWORD *)(a1 + 4);
  if ( v20 >= 2 )
  {
    if ( *(_DWORD *)(a1 + 8) >= v20 + 1 )
    {
      v21 = *(_BYTE **)a1;
    }
    else
    {
      v21 = qvector_reserve(a1, *(void **)a1, v20 + 1, 1u);
      v19 = (char **)a1;
      *(_DWORD *)a1 = v21;
    }
    v19[1] = (char *)(v20 + 1);
    v21[v20 - 1] = 0;
    result = *v19;
    (*v19)[v20] = 0;
  }
  return result;
}
