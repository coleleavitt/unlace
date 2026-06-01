/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C9D8
// Address: 0x0002C9D8

//----- (0002C9D8) --------------------------------------------------------
int __fastcall sub_2C9D8(int a1, _DWORD *a2, int a3, size_t n, unsigned __int8 a5)
{
  size_t v8; // r11
  int v10; // r8
  int v11; // r5
  int v12; // r6
  int v13; // r10
  unsigned int v14; // r7
  void *v15; // r1
  size_t v17; // r7
  char *v18; // r1
  size_t v19; // r2
  size_t v20; // r3
  size_t v21; // r3
  char *v22; // r0
  char v23; // [sp+Bh] [bp-9h] BYREF

  if ( n > ~a3 )
    return 0;
  v8 = a3 + n;
  if ( a3 + n > a2[1] )
    return 0;
  *(_DWORD *)(a1 + 4) = 0;
  if ( !a5 )
  {
    v17 = n + 1;
    v18 = *(char **)a1;
    v23 = 0;
    if ( n == -1 )
    {
LABEL_18:
      v18[n] = 0;
      memcpy(*(void **)a1, (const void *)(*a2 + a3), n);
      return 1;
    }
    v19 = *(_DWORD *)(a1 + 8);
    if ( v18 > &v23 || &v23 >= &v18[v19] )
    {
      if ( v19 < v17 )
        *(_DWORD *)a1 = sub_77EB0(a1, v18, n + 1, 1u);
      v20 = *(_DWORD *)(a1 + 4);
      if ( v17 > v20 )
      {
        do
          *(_BYTE *)(*(_DWORD *)a1 + v20++) = 0;
        while ( v17 != v20 );
      }
      v18 = *(char **)a1;
      *(_DWORD *)(a1 + 4) = v17;
      goto LABEL_18;
    }
    if ( v19 < v17 )
    {
      v22 = (char *)sub_77EB0(a1, v18, n + 1, 1u);
      v21 = *(_DWORD *)(a1 + 4);
      v18 = v22;
      *(_DWORD *)a1 = v22;
      if ( v21 >= v17 )
        goto LABEL_32;
    }
    else
    {
      v21 = a5;
    }
    while ( 1 )
    {
      v18[v21++] = 0;
      if ( v17 == v21 )
        break;
      v18 = *(char **)a1;
    }
LABEL_32:
    *(_DWORD *)(a1 + 4) = v17;
    v18 = *(char **)a1;
    goto LABEL_18;
  }
  if ( n > *(_DWORD *)(a1 + 8) )
    *(_DWORD *)a1 = sub_77EB0(a1, *(void **)a1, n, 1u);
  if ( n )
  {
    LOBYTE(v10) = *(_BYTE *)(*a2 + a3);
    if ( (_BYTE)v10 )
    {
      v11 = a3 + 1;
      do
      {
        v12 = *(_DWORD *)(a1 + 4);
        v13 = v12 - 1;
        v14 = v12 + 1;
        if ( !v12 )
        {
          v12 = 1;
          v14 = 2;
          v13 = 0;
        }
        v15 = *(void **)a1;
        if ( *(_DWORD *)(a1 + 8) < v14 )
        {
          v15 = sub_77EB0(a1, v15, v14, 1u);
          *(_DWORD *)a1 = v15;
        }
        *(_DWORD *)(a1 + 4) = v14;
        *((_BYTE *)v15 + v13) = v10;
        *(_BYTE *)(*(_DWORD *)a1 + v12) = 0;
        if ( v8 == v11 )
          break;
        v10 = *(unsigned __int8 *)(*a2 + v11++);
      }
      while ( v10 );
    }
  }
  return a5;
}
