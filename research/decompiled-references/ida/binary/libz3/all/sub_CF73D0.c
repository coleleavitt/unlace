__int64 __fastcall sub_CF73D0(__int64 a1)
{
  __int64 result; // rax
  char *v3; // rdi
  int v4; // ecx
  char *v5; // rdx
  unsigned int v6; // esi
  unsigned int v7; // ebp
  __int64 v8; // r12
  void *v9; // rcx
  unsigned int v10; // esi

  if ( *(_DWORD *)(a1 + 68) || (result = *(unsigned int *)(a1 + 72), (_DWORD)result) )
  {
    v3 = *(char **)(a1 + 56);
    v4 = 0;
    v5 = &v3[8 * *(unsigned int *)(a1 + 64)];
    v6 = *(_DWORD *)(a1 + 64);
    result = *(_QWORD *)(a1 + 56);
    if ( v3 == v5 )
      goto LABEL_14;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 8;
        if ( v5 == (char *)result )
          goto LABEL_8;
      }
      result += 8;
      ++v4;
    }
    while ( v5 != (char *)result );
LABEL_8:
    if ( v6 <= 0x10 )
      goto LABEL_14;
    result = 3 * v6;
    if ( (unsigned int)result >= 4 * v4 )
      goto LABEL_14;
    if ( v3 )
    {
      sub_186B220(v3);
      v7 = *(_DWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 56) = 0;
      v7 >>= 1;
      *(_DWORD *)(a1 + 64) = v7;
      v8 = v7;
      result = sub_186B270(8LL * v7);
      v9 = (void *)result;
      if ( !v7 )
      {
LABEL_13:
        *(_QWORD *)(a1 + 56) = v9;
LABEL_14:
        *(_QWORD *)(a1 + 68) = 0;
        return result;
      }
    }
    else
    {
      v10 = v6 >> 1;
      *(_QWORD *)(a1 + 56) = 0;
      v8 = v10;
      *(_DWORD *)(a1 + 64) = v10;
      v9 = (void *)sub_186B270(8LL * v10);
    }
    result = (__int64)memset(v9, 0, 8 * v8);
    v9 = (void *)result;
    goto LABEL_13;
  }
  return result;
}

