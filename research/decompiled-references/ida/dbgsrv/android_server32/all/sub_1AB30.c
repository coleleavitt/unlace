/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1AB30
// Address: 0x0001AB30

//----- (0001AB30) --------------------------------------------------------
int __fastcall sub_1AB30(void **a1, int *a2)
{
  size_t v4; // r5
  void *v5; // r4
  size_t v6; // r5
  void *v7; // r0
  unsigned int v8; // r4
  size_t v9; // r5
  char *v10; // r6
  int v11; // r4
  int v12; // r5
  char *v13; // r0
  char *v14; // r6
  void *v15; // r0
  void *v16; // r0
  void *v17; // r0
  int v18; // r0
  char *v19; // r0
  int result; // r0
  void *v21; // [sp+Ch] [bp-24h]
  size_t v22; // [sp+10h] [bp-20h]
  int v23; // [sp+14h] [bp-1Ch]
  int v24; // [sp+18h] [bp-18h]
  void *v25; // [sp+1Ch] [bp-14h]
  size_t v26; // [sp+20h] [bp-10h]
  void *v27; // [sp+24h] [bp-Ch]
  char *v28; // [sp+28h] [bp-8h]
  char *v29; // [sp+2Ch] [bp-4h]

  v4 = a2[2];
  v24 = *a2;
  v5 = nullptr;
  v27 = nullptr;
  if ( v4 )
  {
    v27 = qalloc_or_throw(v4);
    qmemcpy(v27, (const void *)a2[1], v4);
  }
  v26 = v4;
  v6 = a2[6];
  v23 = a2[4];
  if ( v6 )
  {
    v5 = qalloc_or_throw(v6);
    qmemcpy(v5, (const void *)a2[5], v6);
  }
  v22 = v6;
  v25 = v5;
  v7 = a1[1];
  v8 = (unsigned int)a1[2];
  if ( v8 >= (unsigned int)v7 + 1 )
  {
    v10 = (char *)*a1;
    v9 = v26;
  }
  else
  {
    v9 = v26;
    v10 = (char *)qvector_reserve((int)a1, nullptr, (unsigned int)v7 + 1, 0x20u);
    v21 = a1[2];
    a1[2] = (void *)v8;
    v29 = (char *)*a1;
    v11 = (int)a1[1] - 1;
    if ( v11 < 0 )
    {
      v17 = *a1;
    }
    else
    {
      v12 = 0;
      v28 = v10;
      do
      {
        *(_DWORD *)&v10[v12] = *(_DWORD *)&v29[v12];
        v13 = &v10[v12];
        v14 = &v29[v12];
        *((_DWORD *)v13 + 1) = *(_DWORD *)&v29[v12 + 4];
        *((_DWORD *)v14 + 1) = 0;
        *((_DWORD *)v13 + 2) = *(_DWORD *)&v29[v12 + 8];
        *((_DWORD *)v14 + 2) = 0;
        *((_DWORD *)v13 + 3) = *(_DWORD *)&v29[v12 + 12];
        *((_DWORD *)v14 + 3) = 0;
        *((_DWORD *)v13 + 4) = *(_DWORD *)&v29[v12 + 16];
        *((_DWORD *)v13 + 5) = *(_DWORD *)&v29[v12 + 20];
        *((_DWORD *)v14 + 5) = 0;
        *((_DWORD *)v13 + 6) = *(_DWORD *)&v29[v12 + 24];
        *((_DWORD *)v14 + 6) = 0;
        *((_DWORD *)v13 + 7) = *(_DWORD *)&v29[v12 + 28];
        *((_DWORD *)v14 + 7) = 0;
        v15 = *(void **)&v29[v12 + 20];
        if ( v15 )
        {
          *((_DWORD *)v14 + 6) = 0;
          qfree(v15);
          *((_DWORD *)v14 + 5) = 0;
          *((_DWORD *)v14 + 7) = 0;
        }
        v16 = *((void **)v14 + 1);
        if ( v16 )
        {
          *((_DWORD *)v14 + 2) = 0;
          qfree(v16);
          *((_DWORD *)v14 + 1) = 0;
          *((_DWORD *)v14 + 3) = 0;
        }
        v12 += 32;
        --v11;
        v10 = v28;
      }
      while ( v11 >= 0 );
      v17 = *a1;
      v9 = v26;
    }
    qfree(v17);
    a1[2] = v21;
    *a1 = v10;
    v7 = a1[1];
  }
  v18 = 32 * (_DWORD)v7;
  *(_DWORD *)&v10[v18] = v24;
  v19 = &v10[v18];
  *((_DWORD *)v19 + 1) = v27;
  *((_DWORD *)v19 + 2) = v9;
  *((_DWORD *)v19 + 3) = v9;
  *((_DWORD *)v19 + 4) = v23;
  *((_DWORD *)v19 + 5) = v25;
  *((_DWORD *)v19 + 6) = v22;
  *((_DWORD *)v19 + 7) = v22;
  result = (int)a1[1] + 1;
  a1[1] = (void *)result;
  return result;
}
