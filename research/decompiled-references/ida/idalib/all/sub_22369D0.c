__int64 __fastcall sub_22369D0(__int64 a1, void *a2, char **a3)
{
  bool v4; // zf
  char v5; // dl
  void *v6; // rax
  __int64 v7; // r12
  char v8; // dl
  char *v9; // rsi
  char *v10; // rdx
  __int64 result; // rax
  __int64 v12; // r13

  v4 = *((_BYTE *)a3 + 20) == 0;
  v5 = *(_BYTE *)(a1 + 20);
  if ( v4 )
  {
    v7 = *((unsigned int *)a3 + 2);
    if ( *(_DWORD *)(a1 + 8) == (_DWORD)v7 )
    {
      v6 = *(void **)a1;
      v9 = *a3;
      goto LABEL_17;
    }
    v12 = 8LL * (unsigned int)v7;
    if ( v5 )
    {
      v6 = malloc(8LL * (unsigned int)v7);
      if ( !v6 )
      {
        if ( v12 )
          goto LABEL_15;
        v6 = malloc(1u);
        if ( !v6 )
          goto LABEL_15;
      }
      *(_QWORD *)a1 = v6;
    }
    else
    {
      v6 = realloc(*(void **)a1, 8LL * (unsigned int)v7);
      if ( !v6 && (v12 || (v6 = malloc(1u)) == nullptr) )
LABEL_15:
        sub_2221CE0("Allocation failed", 1u);
      *(_QWORD *)a1 = v6;
      v7 = *((unsigned int *)a3 + 2);
    }
    *(_BYTE *)(a1 + 20) = 0;
    v8 = *((_BYTE *)a3 + 20);
    goto LABEL_5;
  }
  v6 = a2;
  if ( !v5 )
  {
    free(*(void **)a1);
    v6 = a2;
  }
  *(_QWORD *)a1 = v6;
  v7 = *((unsigned int *)a3 + 2);
  *(_BYTE *)(a1 + 20) = 1;
  v8 = *((_BYTE *)a3 + 20);
LABEL_5:
  *(_DWORD *)(a1 + 8) = v7;
  v9 = *a3;
  if ( v8 )
  {
    v10 = &v9[8 * *((unsigned int *)a3 + 3)];
    goto LABEL_7;
  }
LABEL_17:
  v10 = &v9[8 * v7];
LABEL_7:
  if ( v9 != v10 )
    memmove(v6, v9, v10 - v9);
  *(_DWORD *)(a1 + 12) = *((_DWORD *)a3 + 3);
  result = *((unsigned int *)a3 + 4);
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
