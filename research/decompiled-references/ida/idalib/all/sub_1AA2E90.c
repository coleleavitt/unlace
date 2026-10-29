__int64 __fastcall sub_1AA2E90(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // r12d
  char *v9; // rax
  void *v10; // rdi
  __int64 v11; // r13
  char *v12; // rsi
  __int64 v13; // rdx

  v3 = *(unsigned int *)(a2 + 24);
  v4 = sub_168B6C0(a1);
  v5 = sub_B33F30(v4, v3 | (v3 << 32));
  if ( v5 + 40 != a2 + 40 )
  {
    v6 = *(unsigned int *)(a2 + 48);
    v7 = *(unsigned int *)(v5 + 48);
    v8 = *(_DWORD *)(a2 + 48);
    if ( v6 <= v7 )
    {
      if ( *(_DWORD *)(a2 + 48) )
        memmove(*(void **)(v5 + 40), *(const void **)(a2 + 40), 8 * v6);
    }
    else
    {
      if ( v6 > *(unsigned int *)(v5 + 52) )
      {
        *(_DWORD *)(v5 + 48) = 0;
        sub_2237220(v5 + 40, v5 + 56, v6, 8);
        v9 = *(char **)(a2 + 40);
        v6 = *(unsigned int *)(a2 + 48);
        v7 = 0;
        v10 = *(void **)(v5 + 40);
        v12 = v9;
      }
      else
      {
        v9 = *(char **)(a2 + 40);
        v10 = *(void **)(v5 + 40);
        v11 = 8 * v7;
        v12 = v9;
        if ( *(_DWORD *)(v5 + 48) )
        {
          memmove(v10, v9, 8 * v7);
          v9 = *(char **)(a2 + 40);
          v7 = v11;
          v6 = *(unsigned int *)(a2 + 48);
          v10 = (void *)(v11 + *(_QWORD *)(v5 + 40));
          v12 = &v9[v11];
        }
      }
      v13 = 8 * v6;
      if ( v12 != &v9[v13] )
        memcpy(v10, v12, v13 - v7);
    }
    *(_DWORD *)(v5 + 48) = v8;
  }
  return v5;
}
