__int64 __fastcall sub_9171E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  char *v4; // rdi
  int v5; // ecx
  char *v6; // rdx
  unsigned int v7; // esi
  unsigned int v8; // ebp
  __int64 v9; // r12
  void *v10; // rcx
  unsigned int v11; // esi

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
    *(_DWORD *)(v1 - 4) = 0;
  if ( *(_DWORD *)(a1 + 36) || (result = *(unsigned int *)(a1 + 40), (_DWORD)result) )
  {
    v4 = *(char **)(a1 + 24);
    v5 = 0;
    v6 = &v4[8 * *(unsigned int *)(a1 + 32)];
    v7 = *(_DWORD *)(a1 + 32);
    result = *(_QWORD *)(a1 + 24);
    if ( v4 == v6 )
      goto LABEL_16;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 8;
        if ( v6 == (char *)result )
          goto LABEL_10;
      }
      result += 8;
      ++v5;
    }
    while ( v6 != (char *)result );
LABEL_10:
    if ( v7 <= 0x10 )
      goto LABEL_16;
    result = 3 * v7;
    if ( (unsigned int)result >= 4 * v5 )
      goto LABEL_16;
    if ( v4 )
    {
      sub_186B220(v4);
      v8 = *(_DWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 24) = 0;
      v8 >>= 1;
      *(_DWORD *)(a1 + 32) = v8;
      v9 = v8;
      result = sub_186B270(8LL * v8);
      v10 = (void *)result;
      if ( !v8 )
      {
LABEL_15:
        *(_QWORD *)(a1 + 24) = v10;
LABEL_16:
        *(_QWORD *)(a1 + 36) = 0;
        return result;
      }
    }
    else
    {
      v11 = v7 >> 1;
      *(_QWORD *)(a1 + 24) = 0;
      v9 = v11;
      *(_DWORD *)(a1 + 32) = v11;
      v10 = (void *)sub_186B270(8LL * v11);
    }
    result = (__int64)memset(v10, 0, 8 * v9);
    v10 = (void *)result;
    goto LABEL_15;
  }
  return result;
}

