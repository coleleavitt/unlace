char *__fastcall sub_1C000(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  char *v5; // rcx
  char *v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned int *v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned int *v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  unsigned int *v13; // rsi

  v8 = (unsigned int *)a1[5];
  if ( a2 >= v8[16] )
    return nullptr;
  v9 = a1[4];
  v10 = (unsigned int *)(a1[7] + 4LL * a2);
  if ( (unsigned __int64)v10 < v9 )
    return nullptr;
  v11 = v9 + v8[8];
  if ( v11 < (unsigned __int64)(v10 + 1) )
    return nullptr;
  if ( !v10 )
    return nullptr;
  v12 = *v10;
  if ( (unsigned int)v12 >= v8[14] )
    return nullptr;
  v13 = (unsigned int *)(a1[6] + 4 * v12);
  if ( (unsigned __int64)v13 < v9 || v11 < (unsigned __int64)(v13 + 1) || !v13 )
    return nullptr;
  v2 = *v13;
  v3 = a1[4];
  v4 = 0;
  v5 = (char *)(v3 + v2);
  if ( !__CFADD__(v3, v2) )
  {
    v6 = v5 + 1;
    v7 = v3 + *(unsigned int *)(a1[5] + 32LL);
    if ( v7 >= (unsigned __int64)(v5 + 1) )
    {
      if ( *v5 < 0 && (unsigned __int64)v6 < v7 )
        JUMPOUT(0x1BF28);
      v4 = 0;
      if ( (unsigned __int64)v6 >= v3 && v7 >= (unsigned __int64)(v5 + 2) )
        return v5 + 1;
    }
  }
  return (char *)v4;
}

