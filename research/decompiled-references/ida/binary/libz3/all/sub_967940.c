void __fastcall sub_967940(__int64 *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  __int64 v4; // r8
  char *v5; // rcx
  char *v6; // r11
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbp
  char *v10; // rdx
  char *v11; // rax

  v2 = *a1;
  if ( !*a1 )
    return;
  v3 = *(unsigned int *)(v2 - 4);
  v4 = *(unsigned int *)(v2 - 8);
  v5 = (char *)(v2 + v4);
  v6 = (char *)(v2 + v3);
  v7 = *(_DWORD *)(v2 - 8);
  v8 = (v3 - v4) >> 4;
  v9 = (v3 - v4) >> 2;
  if ( v8 > 0 )
  {
    v10 = (char *)(v2 + v4);
    v11 = &v5[16 * v8];
    while ( a2 != *(_DWORD *)v10 )
    {
      if ( a2 == *((_DWORD *)v10 + 1) )
      {
        v10 += 4;
        goto LABEL_9;
      }
      if ( a2 == *((_DWORD *)v10 + 2) )
      {
        v10 += 8;
        goto LABEL_9;
      }
      if ( a2 == *((_DWORD *)v10 + 3) )
      {
        v10 += 12;
        goto LABEL_9;
      }
      v10 += 16;
      if ( v10 == v11 )
      {
        if ( v6 - v10 == 8 )
          goto LABEL_25;
        v9 = (v6 - v10) >> 2;
        goto LABEL_19;
      }
    }
    goto LABEL_9;
  }
  v10 = (char *)(v2 + v4);
  if ( v3 - v4 == 8 )
  {
    if ( a2 == *(_DWORD *)v5 )
    {
      if ( v3 == v4 )
        return;
LABEL_12:
      *(_DWORD *)(v2 - 8) = v7 + 4;
      return;
    }
  }
  else
  {
LABEL_19:
    if ( v9 != 3 )
    {
      if ( v9 != 1 )
        return;
      goto LABEL_21;
    }
    if ( a2 == *(_DWORD *)v10 )
      goto LABEL_9;
    v10 += 4;
LABEL_25:
    if ( a2 == *(_DWORD *)v10 )
      goto LABEL_9;
  }
  v10 += 4;
LABEL_21:
  if ( a2 == *(_DWORD *)v10 )
  {
LABEL_9:
    if ( v6 == v10 )
      return;
    if ( v10 != v5 )
    {
      memmove(v5 + 4, (const void *)(v2 + v4), v10 - v5);
      v7 = *(_DWORD *)(v2 - 8);
    }
    goto LABEL_12;
  }
}

