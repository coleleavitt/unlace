/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61A00
// Address: 0x00061A00

//----- (00061A00) --------------------------------------------------------
char **__fastcall sub_61A00(char **a1, int *a2)
{
  unsigned int v2; // r1
  char *v3; // r0
  unsigned int v4; // r1
  char *v5; // r6
  int v6; // r2
  int i; // r4
  int v8; // r3
  char *v9; // r5
  size_t v10; // r7
  void *v11; // r0
  char **v12; // r4
  char *v13; // r5
  unsigned int v14; // r7
  int j; // r4
  void *v16; // r0
  char **v18; // [sp+4h] [bp-30h]
  unsigned int v19; // [sp+10h] [bp-24h]
  char **v21; // [sp+18h] [bp-1Ch]
  int v22; // [sp+1Ch] [bp-18h]
  int v23; // [sp+20h] [bp-14h]
  unsigned int v24; // [sp+20h] [bp-14h]
  char *v25; // [sp+24h] [bp-10h] BYREF
  unsigned int v26; // [sp+28h] [bp-Ch]
  unsigned int v27; // [sp+2Ch] [bp-8h]

  v26 = 0;
  v25 = nullptr;
  v27 = 0;
  v2 = a2[1];
  if ( v2 )
  {
    v18 = a1;
    v19 = v2;
    v3 = (char *)qalloc_or_throw(12 * v2);
    v4 = v19;
    v5 = v3;
    v25 = v3;
    v27 = v19;
    v6 = 1;
    for ( i = 0; ; i += 12 )
    {
      v8 = *a2;
      *(_DWORD *)&v5[i] = 0;
      v9 = &v5[i];
      *((_DWORD *)v9 + 1) = 0;
      *((_DWORD *)v9 + 2) = 0;
      v10 = *(_DWORD *)(v8 + i + 4);
      if ( v10 )
      {
        v23 = v6;
        v22 = v8;
        v11 = qalloc_or_throw(*(_DWORD *)(v8 + i + 4));
        *(_DWORD *)&v5[i] = v11;
        *((_DWORD *)v9 + 2) = v10;
        qmemcpy(v11, *(const void **)(v22 + i), v10);
        v6 = v23;
        v4 = v19;
        *((_DWORD *)v9 + 1) = v10;
      }
      if ( v4 == v6 )
        break;
      ++v6;
      v5 = v25;
    }
    v26 = v4;
    a1 = v18;
  }
  v12 = sub_61B00(a1, &v25);
  v13 = v25;
  if ( v25 )
  {
    v24 = v26;
    if ( v26 )
    {
      v21 = v12;
      v14 = 1;
      for ( j = 8; ; j += 12 )
      {
        v16 = *(void **)&v13[j - 8];
        if ( v16 )
        {
          *(_DWORD *)&v13[j - 4] = 0;
          qfree(v16);
          *(_DWORD *)&v13[j - 8] = 0;
          *(_DWORD *)&v13[j] = 0;
        }
        if ( v14 >= v24 )
          break;
        ++v14;
        v13 = v25;
      }
      v13 = v25;
      v12 = v21;
    }
    v26 = 0;
    qfree(v13);
    v27 = 0;
    v25 = nullptr;
  }
  return v12;
}
