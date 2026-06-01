/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66E88
// Address: 0x00066E88

//----- (00066E88) --------------------------------------------------------
int __fastcall sub_66E88(int *a1, int a2, int a3)
{
  int *v5; // r5
  unsigned int v6; // r7
  int v7; // r5
  char *v8; // r6
  int v9; // r1
  void *v10; // r0
  _DWORD *v11; // r4
  int v12; // r5
  unsigned int v13; // r4
  int v14; // r6
  int v15; // r1
  char *v16; // r0
  char *v17; // r4
  int v18; // r1
  int v19; // r0
  void **v20; // r7
  unsigned int *v21; // r1
  unsigned int *v22; // r4
  unsigned int v23; // r5
  size_t v24; // r2
  const void *v25; // r3
  void *v26; // r0
  size_t v27; // r4
  const void *v29; // [sp+4h] [bp-20h]
  int *v30; // [sp+10h] [bp-14h]
  int v31; // [sp+18h] [bp-Ch]
  unsigned int v32; // [sp+1Ch] [bp-8h]
  unsigned int v34; // [sp+20h] [bp-4h]
  unsigned int v35; // [sp+20h] [bp-4h]

  v5 = a1 + 37;
  v6 = 0;
  sub_1B6B6(a1 + 37, 0);
  v30 = v5;
  (*(void (__fastcall **)(int *, int *, int))(*a1 + 12))(a1, v5, a3);
  v34 = a1[38];
  v31 = a2;
  v32 = *(_DWORD *)(a2 + 4);
  if ( v32 )
  {
    v7 = 12;
    do
    {
      v8 = *(char **)v31;
      v9 = *(_DWORD *)v31 + v7;
      v10 = *(void **)(v9 - 8);
      v11 = (_DWORD *)(v9 - 8);
      if ( v10 )
      {
        *(_DWORD *)(v9 - 4) = 0;
        qfree(v10);
        *v11 = 0;
        *(_DWORD *)&v8[v7] = 0;
      }
      v7 += 16;
      ++v6;
    }
    while ( v6 < v32 );
  }
  v12 = v31;
  *(_DWORD *)(v31 + 4) = 0;
  v13 = v34;
  if ( *(_DWORD *)(v31 + 8) >= v34 )
  {
    if ( !v34 )
      return 1;
  }
  else
  {
    *(_DWORD *)v31 = qvector_reserve(v31, *(void **)v31, v34, 0x10u);
  }
  v14 = 20;
  do
  {
    v15 = *(_DWORD *)(v12 + 4);
    v35 = v13;
    if ( *(_DWORD *)(v12 + 8) >= (unsigned int)(v15 + 1) )
    {
      v16 = *(char **)v12;
    }
    else
    {
      v16 = (char *)qvector_reserve(v12, *(void **)v12, v15 + 1, 0x10u);
      *(_DWORD *)v12 = v16;
      v15 = *(_DWORD *)(v12 + 4);
    }
    v17 = &v16[16 * v15];
    *((_DWORD *)v17 + 1) = 0;
    *((_DWORD *)v17 + 2) = 0;
    *((_DWORD *)v17 + 3) = 0;
    ++*(_DWORD *)(v12 + 4);
    v18 = *v30 + v14;
    *(_DWORD *)v17 = *(_DWORD *)(v18 - 20);
    v19 = v18 - 16;
    if ( *(_DWORD *)(v18 + 4) >= 2u )
      v19 = v18;
    v20 = (void **)(v17 + 4);
    v21 = (unsigned int *)(v17 + 12);
    v22 = (unsigned int *)(v17 + 8);
    if ( v20 != (void **)v19 )
    {
      v23 = *(_DWORD *)(v19 + 4);
      v24 = v23 - 1;
      if ( v23 < 2 )
      {
        *v22 = 0;
      }
      else
      {
        v25 = *(const void **)v19;
        if ( *v21 >= v23 )
        {
          v26 = *v20;
        }
        else
        {
          v29 = *(const void **)v19;
          v26 = qvector_reserve((int)v20, *v20, v23, 1u);
          v25 = v29;
          v24 = v23 - 1;
          *v20 = v26;
        }
        *v22 = v23;
        v27 = v24;
        memmove(v26, v25, v24);
        *((_BYTE *)*v20 + v27) = 0;
      }
    }
    v14 += 32;
    v13 = v35 - 1;
    v12 = v31;
  }
  while ( v35 != 1 );
  return 1;
}
