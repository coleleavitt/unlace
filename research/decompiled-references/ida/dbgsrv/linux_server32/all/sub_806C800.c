/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806C800
// Address: 0x0806C800

//----- (0806C800) --------------------------------------------------------
int __cdecl sub_806C800(int a1, _DWORD *a2, int a3, size_t n, char a5)
{
  int v5; // ecx
  int v6; // edx
  int v7; // ebp
  unsigned int v8; // edx
  void *v9; // eax
  int v10; // edi
  char v11; // cl
  char *v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v16; // eax
  int v17; // edx
  char *v18; // edx
  char *v19; // eax
  unsigned int v20; // edx
  char *v21; // eax
  unsigned int v22; // edx
  _BOOL4 v23; // [esp+0h] [ebp-40h]
  int v24; // [esp+0h] [ebp-40h]
  unsigned int v25; // [esp+8h] [ebp-38h]
  unsigned int v26; // [esp+Ch] [ebp-34h]
  unsigned int v27; // [esp+Ch] [ebp-34h]
  char v28; // [esp+10h] [ebp-30h]
  char v29; // [esp+1Fh] [ebp-21h] BYREF
  unsigned int v30; // [esp+20h] [ebp-20h]

  v5 = a3;
  v30 = __readgsdword(0x14u);
  v23 = __CFADD__(n, a3);
  v6 = 0;
  if ( !__CFADD__(n, a3) && a2[1] >= n + a3 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    if ( a5 )
    {
      if ( *(_DWORD *)(a1 + 8) >= n )
      {
        if ( n )
        {
          v7 = a3;
          goto LABEL_9;
        }
        goto LABEL_20;
      }
      v7 = a3;
      *(_DWORD *)a1 = sub_80CF920(a1, *(void **)a1, n, 1u);
      while ( 1 )
      {
LABEL_9:
        v11 = *(_BYTE *)(*a2 + v7);
        if ( !v11 )
          goto LABEL_20;
        v10 = *(_DWORD *)(a1 + 4);
        if ( v10 )
        {
          v24 = *(_DWORD *)(a1 + 4);
          v8 = v10 + 1;
          v9 = *(void **)a1;
          --v10;
          if ( *(_DWORD *)(a1 + 8) < v8 )
            goto LABEL_12;
        }
        else
        {
          v24 = 1;
          v9 = *(void **)a1;
          v8 = 2;
          if ( *(_DWORD *)(a1 + 8) < 2u )
          {
LABEL_12:
            v28 = *(_BYTE *)(*a2 + v7);
            v26 = v8;
            v9 = sub_80CF920(a1, v9, v8, 1u);
            v11 = v28;
            v8 = v26;
            *(_DWORD *)a1 = v9;
          }
        }
        *(_DWORD *)(a1 + 4) = v8;
        ++v7;
        *((_BYTE *)v9 + v10) = v11;
        *(_BYTE *)(*(_DWORD *)a1 + v24) = 0;
        if ( n + a3 == v7 )
          goto LABEL_20;
      }
    }
    v29 = 0;
    v12 = *(char **)a1;
    v25 = n + 1;
    if ( n == -1 )
    {
LABEL_19:
      v12[n] = 0;
      memcpy(*(void **)a1, (const void *)(v5 + *a2), n);
LABEL_20:
      v6 = 1;
      goto LABEL_21;
    }
    v27 = *(_DWORD *)(a1 + 8);
    if ( &v29 >= v12 )
    {
      if ( &v29 < &v12[v27] )
      {
        if ( v27 >= v25
          || (v21 = (char *)sub_80CF920(a1, v12, v25, 1u),
              v22 = *(_DWORD *)(a1 + 4),
              *(_DWORD *)a1 = v21,
              v12 = v21,
              v23 = v22,
              v5 = a3,
              v22 < v25) )
        {
          v16 = v23;
          do
          {
            v17 = v16;
            v12[v16++] = 0;
            v12 = *(char **)a1;
          }
          while ( n != v17 );
          v18 = *(char **)a1;
        }
        else
        {
          v18 = v21;
        }
        v12 = v18;
        *(_DWORD *)(a1 + 4) = v25;
        goto LABEL_19;
      }
      if ( v27 >= v25 )
        goto LABEL_16;
    }
    else if ( v27 >= n + 1 )
    {
LABEL_16:
      v13 = __CFADD__(n, a3);
      goto LABEL_17;
    }
    v19 = (char *)sub_80CF920(a1, v12, v25, 1u);
    v20 = *(_DWORD *)(a1 + 4);
    v5 = a3;
    *(_DWORD *)a1 = v19;
    v12 = v19;
    if ( v20 >= v25 )
    {
LABEL_18:
      *(_DWORD *)(a1 + 4) = v25;
      goto LABEL_19;
    }
    v13 = v20;
    do
    {
LABEL_17:
      v14 = v13;
      v12[v13++] = 0;
      v12 = *(char **)a1;
    }
    while ( n != v14 );
    goto LABEL_18;
  }
LABEL_21:
  if ( v30 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v6;
}
