__int64 __fastcall sub_4C9940(__int64 a1, __int64 *a2)
{
  unsigned int *v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rsi
  unsigned int *v6; // rax
  __int64 v7; // rdi

  v2 = *(unsigned int **)(a1 + 40);
  v3 = *a2;
  v4 = *(_DWORD *)(a1 + 32);
  v5 = *(_QWORD *)(*a2 + 8LL * *v2);
  if ( v4 <= 1 )
    return 0;
  v6 = v2 + 1;
  v7 = (__int64)&v2[v4];
  while ( *(_QWORD *)(v3 + 8LL * *v6) == v5 )
  {
    if ( (unsigned int *)v7 == ++v6 )
      return 0;
  }
  return 1;
}

