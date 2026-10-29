/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79660
// Address: 0x00079660

//----- (00079660) --------------------------------------------------------
int __fastcall sub_79660(void **a1, char *s, unsigned int a3)
{
  const char *v4; // r5
  int i; // r6
  size_t v7; // r0
  char *v8; // r7
  size_t v9; // r9
  size_t v10; // r10
  void *v11; // r1
  void *v13; // r3
  unsigned int v14; // r7
  char *v15; // r1
  unsigned int v16; // r8
  unsigned int v17; // r6
  char *v18; // r0
  char *v19; // r7
  char *v20; // r6
  size_t v21; // r11
  int v22; // r10
  void *v23; // r1
  const char *v24; // r1
  unsigned int v25; // r2
  char *v26; // r0
  char *v27; // r0
  int v28; // [sp+0h] [bp-14h]
  char v29; // [sp+Bh] [bp-9h] BYREF

  v4 = s;
  i = (int)s;
  if ( !s )
    return i;
  if ( !a3 )
  {
    i = 0;
    goto LABEL_4;
  }
  v13 = a1[1];
  if ( v13 )
    v28 = (int)v13 - 1;
  else
    v28 = 0;
  for ( i = 0; ; i = 1 )
  {
    v18 = strchr(v4, 9);
    v19 = v18;
    if ( !v18 )
      break;
    v20 = (char *)a1[1];
    v21 = v18 - v4;
    v22 = v18 - v4;
    if ( v20 )
    {
      --v20;
      v22 = (int)&v20[v21];
    }
    v23 = *a1;
    if ( v22 + 1 > (unsigned int)a1[2] )
    {
      v23 = sub_77EB0((int)a1, v23, v22 + 1, 1u);
      *a1 = v23;
    }
    a1[1] = (void *)(v22 + 1);
    *((_BYTE *)v23 + v22) = 0;
    v24 = v4;
    v4 = v19 + 1;
    memmove(&v20[(_DWORD)*a1], v24, v21);
    v17 = (unsigned int)a1[1];
    if ( v17 )
    {
      v14 = v17 - 1 + a3 - (v17 - 1 - v28) % a3;
      v15 = (char *)*a1;
      v29 = 32;
      if ( v14 >= v17 )
        v15[v17 - 1] = 32;
      v16 = v17 + a3 - (v17 - 1 - v28) % a3;
      if ( v14 >= v17 )
      {
        v17 = (unsigned int)a1[1];
        v15 = (char *)*a1;
      }
      if ( v16 < v17 )
        goto LABEL_18;
    }
    else
    {
      v14 = a3 - -v28 % a3;
      v15 = (char *)*a1;
      v16 = v14 + 1;
      v29 = 32;
    }
    if ( v16 > v17 )
    {
      v25 = (unsigned int)a1[2];
      if ( v15 <= &v29 && &v29 < &v15[v25] )
      {
        if ( v16 <= v25
          || (v27 = (char *)sub_77EB0((int)a1, v15, v16, 1u), v17 = (unsigned int)a1[1], v15 = v27, *a1 = v27, v16 > v17) )
        {
          do
          {
            v15[v17++] = 32;
            v15 = (char *)*a1;
          }
          while ( v16 > v17 );
        }
      }
      else if ( v16 <= v25
             || (v26 = (char *)sub_77EB0((int)a1, v15, v16, 1u),
                 v17 = (unsigned int)a1[1],
                 v15 = v26,
                 *a1 = v26,
                 v16 > v17) )
      {
        do
        {
          v15[v17++] = 32;
          v15 = (char *)*a1;
        }
        while ( v16 > v17 );
      }
LABEL_18:
      a1[1] = (void *)v16;
    }
    v15[v14] = 0;
  }
  if ( v4 )
  {
LABEL_4:
    v7 = strlen(v4);
    v8 = (char *)a1[1];
    v9 = v7;
    v10 = v7;
    if ( v8 )
    {
      --v8;
      v10 = (size_t)&v8[v7];
    }
    v11 = *a1;
    if ( v10 + 1 > (unsigned int)a1[2] )
    {
      v11 = sub_77EB0((int)a1, v11, v10 + 1, 1u);
      *a1 = v11;
    }
    a1[1] = (void *)(v10 + 1);
    *((_BYTE *)v11 + v10) = 0;
    memmove(&v8[(_DWORD)*a1], v4, v9);
  }
  return i;
}
