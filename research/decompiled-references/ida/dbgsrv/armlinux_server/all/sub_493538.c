/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493538
// Address: 0x0000000000493538

//----- (0000000000493538) ----------------------------------------------------
__int64 __fastcall sub_493538(__int64 a1, char *s, unsigned int a3)
{
  unsigned int v4; // w20
  const char *v5; // x21
  __int64 v7; // x23
  __int64 v8; // x25
  unsigned __int64 v9; // x23
  char *v10; // x0
  char *i; // x27
  __int64 v12; // x20
  size_t v13; // x26
  __int64 v14; // x20
  signed __int64 v15; // x5
  signed __int64 v16; // x28
  _BYTE *v17; // x0
  const char *v18; // x1
  unsigned __int64 v19; // x2
  char *v20; // x0
  unsigned __int64 v21; // x20
  unsigned __int64 v22; // x27
  size_t v24; // x0
  size_t v25; // x26
  __int64 v26; // x23
  size_t v27; // x25
  _BYTE *v28; // x0
  unsigned __int64 v29; // x1
  signed __int64 v30; // [xsp+60h] [xbp-20h]
  char v31; // [xsp+77h] [xbp-9h] BYREF

  v4 = 0;
  v5 = s;
  if ( !s )
    return v4;
  v7 = *(_QWORD *)(a1 + 8);
  if ( !a3 )
    goto LABEL_19;
  v8 = v7 - 1;
  if ( !v7 )
    v8 = 0;
  v9 = a3;
  v10 = strchr(s, 9);
  for ( i = v10; v10; i = v10 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = v10 - v5;
    if ( v12 )
    {
      v14 = v12 - 1;
      v15 = v13 + v14;
    }
    else
    {
      v15 = v10 - v5;
      v14 = 0;
    }
    v16 = v15 + 1;
    v17 = *(_BYTE **)a1;
    if ( (unsigned __int64)(v15 + 1) > *(_QWORD *)(a1 + 16) )
    {
      v30 = v15;
      v17 = sub_491288(a1, *(void **)a1, v15 + 1, 1u);
      v15 = v30;
      *(_QWORD *)a1 = v17;
    }
    *(_QWORD *)(a1 + 8) = v16;
    v18 = v5;
    v17[v15] = 0;
    v5 = i + 1;
    memmove((void *)(*(_QWORD *)a1 + v14), v18, v13);
    v19 = *(_QWORD *)(a1 + 8);
    if ( v19 )
    {
      v31 = 32;
      v20 = *(char **)a1;
      v21 = v19 - 1 + (int)(a3 - (v19 - 1 - v8) % v9);
      if ( v21 >= v19 )
      {
        v20[v19 - 1] = 32;
        v20 = *(char **)a1;
        v19 = *(_QWORD *)(a1 + 8);
      }
      v22 = v21 + 1;
      if ( v21 + 1 < v19 )
        goto LABEL_14;
    }
    else
    {
      v31 = 32;
      v20 = *(char **)a1;
      v21 = (int)(a3 - -v8 % v9);
      v22 = v21 + 1;
    }
    if ( v19 >= v22 )
      goto LABEL_15;
    v29 = *(_QWORD *)(a1 + 16);
    if ( v20 <= &v31 && &v31 < &v20[v29] )
    {
      if ( v29 >= v22
        || (v20 = (char *)sub_491288(a1, v20, v22, 1u), *(_QWORD *)a1 = v20, v19 = *(_QWORD *)(a1 + 8), v22 > v19) )
      {
        do
        {
          v20[v19++] = 32;
          v20 = *(char **)a1;
        }
        while ( v22 > v19 );
      }
    }
    else if ( v29 >= v22
           || (v20 = (char *)sub_491288(a1, v20, v22, 1u), *(_QWORD *)a1 = v20, v19 = *(_QWORD *)(a1 + 8), v22 > v19) )
    {
      do
      {
        v20[v19++] = 32;
        v20 = *(char **)a1;
      }
      while ( v22 > v19 );
    }
LABEL_14:
    *(_QWORD *)(a1 + 8) = v22;
LABEL_15:
    v20[v21] = 0;
    v4 = 1;
    v10 = strchr(v5, 9);
  }
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 8);
LABEL_19:
    v24 = strlen(v5);
    v25 = v24;
    if ( v7 )
    {
      v26 = v7 - 1;
      v27 = v24 + v26;
    }
    else
    {
      v27 = v24;
      v26 = 0;
    }
    v28 = *(_BYTE **)a1;
    if ( v27 + 1 > *(_QWORD *)(a1 + 16) )
    {
      v28 = sub_491288(a1, *(void **)a1, v27 + 1, 1u);
      *(_QWORD *)a1 = v28;
    }
    *(_QWORD *)(a1 + 8) = v27 + 1;
    v28[v27] = 0;
    memmove((void *)(*(_QWORD *)a1 + v26), v5, v25);
  }
  return v4;
}
