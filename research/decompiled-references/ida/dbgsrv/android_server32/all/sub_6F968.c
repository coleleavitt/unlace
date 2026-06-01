/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F968
// Address: 0x0006F968

//----- (0006F968) --------------------------------------------------------
unsigned int __fastcall sub_6F968(int a1, int a2, char *s, int a4)
{
  const char *v6; // r7
  int v7; // r1
  int v8; // r0
  bool v9; // zf
  const char *v10; // r1
  size_t v11; // r4
  char *v12; // r0
  const char *v13; // r1
  char *v14; // r6
  int v15; // r1
  _DWORD *v16; // r0
  int v17; // r4
  int v18; // r0
  int v19; // r3
  size_t v20; // r2
  unsigned int v21; // r5
  _BYTE *v22; // r0
  _BOOL4 v23; // r4
  size_t v24; // r0
  size_t v25; // r2
  int v26; // r1
  unsigned int result; // r0
  int v28; // r1
  _DWORD *v29; // r0
  char *v30; // r0
  _DWORD *v31; // [sp+8h] [bp-30h]
  int v33; // [sp+10h] [bp-28h]
  int v34; // [sp+14h] [bp-24h]
  size_t n; // [sp+18h] [bp-20h]
  size_t v36; // [sp+20h] [bp-18h]
  size_t v38; // [sp+30h] [bp-8h]
  char *v39; // [sp+34h] [bp-4h]

  n = strlen(s);
  v6 = *(const char **)a1;
  v31 = (_DWORD *)a1;
  v7 = *(_DWORD *)(a1 + 4);
  v8 = *(_DWORD *)a1 + v7 - 1;
  v9 = v7 == 0;
  v10 = *(const char **)a1;
  if ( !v9 )
    v10 = (const char *)v8;
  v11 = n;
  if ( v6 < v10 )
  {
    v34 = a2;
    v39 = (char *)v10;
    do
    {
      v12 = strstr(v6, s);
      v13 = v39;
      v14 = v12;
      if ( !v12 )
        v12 = v39;
      if ( (a4 & 1) == 0 || v12 != v6 )
      {
        v38 = v12 - v6;
        v15 = *(_DWORD *)(a2 + 4);
        if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v15 + 1) )
        {
          v16 = *(_DWORD **)a2;
        }
        else
        {
          v16 = qvector_reserve(a2, *(void **)a2, v15 + 1, 0xCu);
          *(_DWORD *)a2 = v16;
          v15 = *(_DWORD *)(a2 + 4);
        }
        v16[3 * v15] = 0;
        v17 = (int)&v16[3 * v15];
        *(_DWORD *)(v17 + 4) = 0;
        *(_DWORD *)(v17 + 8) = 0;
        ++*(_DWORD *)(a2 + 4);
        v18 = *(_DWORD *)(v17 + 4);
        v19 = v18 - 1;
        if ( !v18 )
          v19 = 0;
        v20 = v38;
        v21 = v19 + v38 + 1;
        v36 = v19 + v38;
        if ( *(_DWORD *)(v17 + 8) >= v21 )
        {
          v22 = *(_BYTE **)v17;
        }
        else
        {
          v33 = v19;
          v22 = qvector_reserve(v17, *(void **)v17, v21, 1u);
          v19 = v33;
          v20 = v38;
          *(_DWORD *)v17 = v22;
        }
        *(_DWORD *)(v17 + 4) = v21;
        v22[v36] = 0;
        memmove((void *)(*(_DWORD *)v17 + v19), v6, v20);
        a2 = v34;
        v11 = n;
        v13 = v39;
      }
      v6 = &v14[v11];
      if ( !v14 )
        v6 = v13;
    }
    while ( v6 < v13 );
  }
  v23 = 1;
  if ( !s )
    goto LABEL_30;
  v24 = n;
  if ( n == -1 )
  {
    v24 = strlen(s);
    if ( !v24 )
    {
LABEL_30:
      result = a4 << 31;
      if ( !(a4 << 31) && v23 )
      {
        v28 = *(_DWORD *)(a2 + 4);
        if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v28 + 1) )
        {
          v29 = *(_DWORD **)a2;
        }
        else
        {
          v29 = qvector_reserve(a2, *(void **)a2, v28 + 1, 0xCu);
          *(_DWORD *)a2 = v29;
          v28 = *(_DWORD *)(a2 + 4);
        }
        v29[3 * v28] = 0;
        v30 = (char *)&v29[3 * v28];
        *((_DWORD *)v30 + 1) = 0;
        *((_DWORD *)v30 + 2) = 0;
        result = *(_DWORD *)(a2 + 4) + 1;
        *(_DWORD *)(a2 + 4) = result;
      }
      return result;
    }
  }
  else if ( !n )
  {
    goto LABEL_30;
  }
  v25 = v24;
  v26 = v31[1];
  result = v26 - 1;
  if ( !v26 )
    result = 0;
  if ( result >= v25 )
  {
    v23 = strncmp((const char *)(*v31 + result - v25), s, v25) == 0;
    goto LABEL_30;
  }
  return result;
}
