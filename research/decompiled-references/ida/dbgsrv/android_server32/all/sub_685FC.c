/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_685FC
// Address: 0x000685FC

//----- (000685FC) --------------------------------------------------------
int __fastcall sub_685FC(int a1, unsigned int *a2)
{
  int result; // r0
  int v4; // r6
  const char *v5; // r1
  void *v6; // r0
  void **v7; // r7
  int v8; // r6
  size_t v9; // r5
  int v10; // r0
  char *v11; // r5
  int *v12; // r6
  _DWORD *v13; // r7
  unsigned int *v14; // r5
  const char *v15; // r3
  _BYTE *v16; // r1
  _BYTE *v17; // r2
  void **v19; // r6
  const char *v20; // r4
  size_t v21; // r0
  size_t v22; // r2
  unsigned int v23; // r3
  unsigned int v24; // r7
  size_t v25; // [sp+4h] [bp-14h]
  int v26; // [sp+8h] [bp-10h]
  int v27; // [sp+Ch] [bp-Ch]
  int v29; // [sp+14h] [bp-4h]

  result = unpack_dd(a2, a2[1]);
  v27 = result;
  if ( result )
  {
    v4 = 0;
    v26 = a1;
    do
    {
      v10 = *(_DWORD *)(a1 + 4);
      v29 = v4;
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v10 + 1) )
      {
        v11 = *(char **)a1;
      }
      else
      {
        v11 = (char *)qvector_reserve(a1, *(void **)a1, v10 + 1, 0x10u);
        *(_DWORD *)a1 = v11;
        v10 = *(_DWORD *)(a1 + 4);
      }
      v12 = (int *)&v11[16 * v10];
      v12[1] = 0;
      v12[2] = 0;
      v12[3] = 0;
      ++*(_DWORD *)(a1 + 4);
      *v12 = unpack_dd(a2, a2[1]);
      v13 = v12 + 3;
      v14 = (unsigned int *)(v12 + 2);
      v15 = (const char *)*a2;
      v16 = (_BYTE *)*a2;
      do
      {
        if ( (unsigned int)v16 >= a2[1] )
          goto LABEL_16;
        v17 = v16 + 1;
      }
      while ( *v16++ != 0 );
      *a2 = (unsigned int)v17;
      v19 = (void **)(v12 + 1);
      if ( !v15 || (v20 = v15, (v21 = strlen(v15)) == 0) )
      {
LABEL_16:
        *v14 = 0;
        a1 = v26;
        v8 = v29;
        goto LABEL_17;
      }
      v22 = v21;
      v23 = v21 + 1;
      if ( *v13 >= v21 + 1 )
      {
        v5 = v20;
        v6 = *v19;
      }
      else
      {
        v24 = v21 + 1;
        v25 = v21;
        v6 = qvector_reserve((int)v19, *v19, v23, 1u);
        v23 = v24;
        v22 = v25;
        v5 = v20;
        *v19 = v6;
      }
      a1 = v26;
      v7 = v19;
      v8 = v29;
      *v14 = v23;
      v9 = v22;
      memmove(v6, v5, v22);
      *((_BYTE *)*v7 + v9) = 0;
LABEL_17:
      v4 = v8 + 1;
      result = v27;
    }
    while ( v4 != v27 );
  }
  return result;
}
