/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EFDC
// Address: 0x0004EFDC

//----- (0004EFDC) --------------------------------------------------------
int __fastcall sub_4EFDC(int a1, const char **a2)
{
  int result; // r0
  const char *v4; // r6
  char *v5; // r0
  char *v6; // r0
  size_t v7; // r7
  unsigned int v8; // r5
  _BYTE *v9; // r0
  unsigned int v10; // r2
  unsigned int v11; // r7
  void *v12; // r1
  char *v13; // r0
  unsigned int v14; // r6
  char *v15; // r0
  int v16; // r1
  const char *v17; // [sp+8h] [bp-8h]

  result = -1;
  v4 = *a2;
  if ( **a2 )
  {
    v5 = strchr(v4, 10);
    if ( v5 )
      v6 = v5 + 1;
    else
      v6 = (char *)&v4[strlen(v4)];
    *(_DWORD *)(a1 + 4) = 0;
    v17 = v6;
    v7 = v6 - v4;
    v8 = v6 - v4 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v8 )
    {
      v9 = *(_BYTE **)a1;
    }
    else
    {
      v9 = qvector_reserve(a1, *(void **)a1, v8, 1u);
      *(_DWORD *)a1 = v9;
    }
    *(_DWORD *)(a1 + 4) = v8;
    v9[v7] = 0;
    memmove(*(void **)a1, v4, v7);
    v10 = *(_DWORD *)(a1 + 4);
    if ( v10 >= 2 )
    {
      v11 = v10 - 2;
      v12 = *(void **)a1;
      v13 = (char *)(*(_DWORD *)a1 + v10 - 2);
      if ( *v13 == 10 )
      {
        v14 = v10 - 1;
        if ( (int)(v10 - 1) > 1 )
        {
          if ( *(_DWORD *)(a1 + 8) < v14 )
          {
            v15 = (char *)qvector_reserve(a1, v12, v14, 1u);
            *(_DWORD *)a1 = v15;
            v13 = &v15[v11];
          }
          *(_DWORD *)(a1 + 4) = v14;
          *v13 = 0;
        }
        else if ( v12 )
        {
          *(_DWORD *)(a1 + 4) = 0;
          qfree(v12);
          *(_DWORD *)(a1 + 8) = 0;
          *(_DWORD *)a1 = 0;
        }
      }
    }
    *a2 = v17;
    v16 = *(_DWORD *)(a1 + 4);
    result = v16 - 1;
    if ( !v16 )
      return 0;
  }
  return result;
}
