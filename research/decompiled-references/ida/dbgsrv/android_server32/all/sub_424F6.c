/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424F6
// Address: 0x000424F6

//----- (000424F6) --------------------------------------------------------
void *__fastcall sub_424F6(_DWORD *a1, const char *a2, const void *a3)
{
  int v5; // r1
  unsigned int v6; // r4
  _DWORD *v7; // r6
  char *v8; // r2
  int v9; // r4
  unsigned int v10; // r7
  _DWORD *v11; // r0
  char *v12; // r6
  void *v13; // r0
  void *v14; // r0
  void **v15; // r4
  size_t v16; // r0
  size_t v17; // r6
  void *v18; // r1
  size_t v19; // r7
  void **v20; // r6
  size_t v21; // r0
  size_t v22; // r7
  void *v23; // r0
  void *result; // r0
  void **v25; // [sp+8h] [bp-18h]
  int v26; // [sp+Ch] [bp-14h]
  const char *v27; // [sp+10h] [bp-10h]
  const char *v28; // [sp+10h] [bp-10h]
  _DWORD *v29; // [sp+14h] [bp-Ch]
  _DWORD *v30; // [sp+18h] [bp-8h]
  _DWORD *v31; // [sp+18h] [bp-8h]
  char *v32; // [sp+1Ch] [bp-4h]
  int v33; // [sp+1Ch] [bp-4h]

  v5 = a1[12];
  v6 = a1[13];
  if ( v6 >= v5 + 1 )
  {
    v7 = (_DWORD *)a1[11];
  }
  else
  {
    v29 = a1;
    v25 = (void **)(a1 + 11);
    v7 = qvector_reserve((int)(a1 + 11), nullptr, v5 + 1, 0x18u);
    v26 = v29[13];
    v29[13] = v6;
    v8 = (char *)v29[11];
    v9 = v29[12] - 1;
    if ( v9 >= 0 )
    {
      v27 = a2;
      v10 = 0;
      v32 = (char *)v29[11];
      v30 = v7;
      do
      {
        v7[v10 / 4] = *(_DWORD *)&v8[v10];
        *(_DWORD *)&v8[v10] = 0;
        v11 = &v7[v10 / 4];
        v12 = &v8[v10];
        v11[1] = *(_DWORD *)&v8[v10 + 4];
        *((_DWORD *)v12 + 1) = 0;
        v11[2] = *(_DWORD *)&v8[v10 + 8];
        *((_DWORD *)v12 + 2) = 0;
        v11[3] = *(_DWORD *)&v8[v10 + 12];
        *((_DWORD *)v12 + 3) = 0;
        v11[4] = *(_DWORD *)&v8[v10 + 16];
        *((_DWORD *)v12 + 4) = 0;
        v11[5] = *(_DWORD *)&v8[v10 + 20];
        *((_DWORD *)v12 + 5) = 0;
        v13 = *(void **)&v8[v10 + 12];
        if ( v13 )
        {
          *((_DWORD *)v12 + 4) = 0;
          qfree(v13);
          *((_DWORD *)v12 + 3) = 0;
          *((_DWORD *)v12 + 5) = 0;
          v8 = v32;
        }
        v14 = *(void **)&v8[v10];
        if ( v14 )
        {
          *((_DWORD *)v12 + 1) = 0;
          qfree(v14);
          v8 = v32;
          *(_DWORD *)&v32[v10] = 0;
          *((_DWORD *)v12 + 2) = 0;
        }
        v10 += 24;
        --v9;
        v7 = v30;
      }
      while ( v9 >= 0 );
      v8 = (char *)*v25;
      a2 = v27;
    }
    qfree(v8);
    a1 = v29;
    v29[13] = v26;
    v29[11] = v7;
    v5 = v29[12];
  }
  v7[6 * v5] = 0;
  v31 = v7;
  v33 = 6 * v5;
  v15 = (void **)&v7[6 * v5];
  v15[1] = nullptr;
  v15[2] = nullptr;
  v15[3] = nullptr;
  v15[4] = nullptr;
  v15[5] = nullptr;
  ++a1[12];
  if ( a2 && (v16 = strlen(a2)) != 0 )
  {
    v17 = v16;
    v28 = a2;
    v18 = *v15;
    v19 = v16 + 1;
    if ( (unsigned int)v15[2] < v16 + 1 )
    {
      v18 = qvector_reserve((int)v15, v18, v16 + 1, 1u);
      *v15 = v18;
    }
    v31[v33 + 1] = v19;
    memmove(v18, v28, v17);
    *((_BYTE *)*v15 + v17) = 0;
  }
  else
  {
    v15[1] = nullptr;
  }
  v20 = v15 + 3;
  if ( a3 && (v21 = strlen((const char *)a3)) != 0 )
  {
    v22 = v21;
    if ( (unsigned int)v15[5] >= v21 + 1 )
    {
      v23 = *v20;
    }
    else
    {
      v23 = qvector_reserve((int)v20, *v20, v21 + 1, 1u);
      *v20 = v23;
    }
    v31[v33 + 4] = v22 + 1;
    memmove(v23, a3, v22);
    result = *v20;
    *((_BYTE *)*v20 + v22) = 0;
  }
  else
  {
    v15[4] = nullptr;
    return nullptr;
  }
  return result;
}
