void __fastcall sub_76A4B0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r13
  __int64 i; // r15
  char **v5; // rdi
  size_t v6; // rbp
  const void *v7; // r14
  char *v8; // r12
  char *v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rax

  v3 = a2[1];
  for ( i = *a2; v3 != i; *(_BYTE *)(v13 + 19) |= 2u )
  {
    v5 = *(char ***)(a1 + 8);
    v6 = *(_QWORD *)(i + 8);
    v7 = *(const void **)i;
    v8 = *v5;
    v5[10] += v6 + 1;
    v9 = &v8[v6 + 1];
    if ( v5[1] >= v9 && v8 )
      *v5 = v9;
    else
      v8 = (char *)sub_767C50((__int64)v5, v6 + 1, 0);
    memcpy(v8, v7, v6);
    v8[v6] = 0;
    v10 = *(__int64 **)(a1 + 8);
    v11 = *v10;
    v10[10] += 24;
    v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v10[1] >= v12 + 24 && v11 )
    {
      *v10 = v12 + 24;
      v13 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v13 = sub_767C50((__int64)v10, 24, 4);
      v12 = v13;
    }
    *(_QWORD *)(v13 + 16) = 0;
    *(_OWORD *)v13 = 0;
    *(_QWORD *)v13 = v8;
    v14 = (*(_DWORD *)a1)++ & 0xFFFFF;
    *(_DWORD *)(v13 + 16) = v14 | *(_DWORD *)(v13 + 16) & 0xFFF00000;
    v15 = *(unsigned int *)(a1 + 24);
    if ( *(unsigned int *)(a1 + 28) < (unsigned __int64)(v15 + 1) )
    {
      sub_25D6060(a1 + 16, a1 + 32, v15 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned int *)(a1 + 24)) = v12;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v15) = v12;
    }
    i += 32;
    ++*(_DWORD *)(a1 + 24);
  }
}

