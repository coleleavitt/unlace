void *__fastcall sub_57A850(__int64 a1, __int64 a2)
{
  const void *v2; // r14
  char *v3; // rbp
  void *result; // rax
  unsigned int v5; // r12d
  __int64 v6; // r13
  __int64 v7; // rdx
  size_t v8; // rdx

  v2 = *(const void **)(a2 + 8);
  v3 = *(char **)(a1 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  result = (void *)*(unsigned __int16 *)(a2 + 24);
  *(_DWORD *)(a1 + 16) = 0;
  v5 = *(_DWORD *)(a2 + 16);
  *(_WORD *)(a1 + 24) = (_WORD)result;
  if ( *(_DWORD *)(a1 + 20) < v5 )
  {
    v6 = v5;
    if ( v3 )
      v3 = (char *)off_8C52A8(v3, 32LL * v5);
    else
      v3 = (char *)off_8C52B8(32LL * v5);
    v7 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = v3;
    *(_DWORD *)(a1 + 20) = v5;
    if ( !(_DWORD)v7 )
    {
      v8 = 32LL * v5;
      if ( !v2 )
      {
LABEL_11:
        result = memset(v3, 0, v8);
        goto LABEL_3;
      }
LABEL_8:
      result = memcpy(v3, v2, v8);
      goto LABEL_3;
    }
    memmove(&v3[32 * v5], v3, 32 * v7);
LABEL_10:
    v8 = 32 * v6;
    if ( !v2 )
      goto LABEL_11;
    goto LABEL_8;
  }
  if ( v5 )
  {
    v6 = v5;
    goto LABEL_10;
  }
LABEL_3:
  *(_DWORD *)(a1 + 16) += v5;
  return result;
}
