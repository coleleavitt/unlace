/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36624
// Address: 0x00036624

//----- (00036624) --------------------------------------------------------
char **__fastcall sub_36624(char **a1, int *a2)
{
  char **v2; // r2
  char *v3; // r4
  char *v4; // r0
  char *v5; // r5
  int i; // r6
  char *v7; // r4
  int v8; // r7
  char *v9; // r5
  int v10; // r3
  size_t v11; // r7
  void *v12; // r0
  char *v15; // [sp+4h] [bp-28h]
  int v17; // [sp+10h] [bp-1Ch]
  int v18; // [sp+1Ch] [bp-10h]
  char *v19; // [sp+20h] [bp-Ch]
  int v20; // [sp+28h] [bp-4h]

  v2 = a1;
  *a1 = nullptr;
  a1[1] = nullptr;
  a1[2] = nullptr;
  v3 = (char *)a2[1];
  if ( v3 )
  {
    v4 = (char *)qalloc_or_throw(28 * (_DWORD)v3);
    v2 = a1;
    v5 = v4;
    *a1 = v4;
    v15 = v3;
    a1[2] = v3;
    v20 = 1;
    for ( i = 12; ; i += 28 )
    {
      v19 = v5;
      v7 = &v5[i];
      v8 = *a2;
      *((_DWORD *)v7 - 3) = 0;
      *((_DWORD *)v7 - 2) = 0;
      v9 = &v5[i - 12];
      *((_DWORD *)v9 + 2) = 0;
      v18 = v8;
      v10 = v8 + i;
      v11 = *(_DWORD *)(v8 + i - 8);
      if ( v11 )
      {
        v17 = v10;
        v12 = qalloc_or_throw(v11);
        *(_DWORD *)v9 = v12;
        *((_DWORD *)v9 + 2) = v11;
        qmemcpy(v12, *(const void **)(v17 - 12), v11);
        v2 = a1;
        *((_DWORD *)v7 - 2) = v11;
      }
      *(_DWORD *)&v19[i] = *(_DWORD *)(v18 + i);
      v7[12] = *(_BYTE *)(v18 + i + 12);
      *((_DWORD *)v7 + 2) = *(_DWORD *)(v18 + i + 8);
      *((_DWORD *)v7 + 1) = *(_DWORD *)(v18 + i + 4);
      if ( v15 == (char *)v20 )
        break;
      ++v20;
      v5 = *v2;
    }
    v2[1] = v15;
  }
  return v2;
}
