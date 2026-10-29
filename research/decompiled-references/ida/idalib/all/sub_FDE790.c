bool __fastcall sub_FDE790(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  bool result; // al
  int v5; // r13d
  unsigned __int64 v6; // rax
  unsigned int v7; // r12d
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  size_t v10; // rdx
  _DWORD *v11; // rdi
  unsigned int v12; // edx
  unsigned int v13; // r12d
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int *v18; // rdi
  size_t v19; // rdx

  v3 = *a1;
  if ( ((*a1 >> 2) & 1) != 0 )
    goto LABEL_4;
  if ( (v3 & 2) == 0 )
    return a3 == 0;
  if ( (*a1 & 3) == 2 )
  {
    result = 0;
    if ( a3 != 1 )
      return result;
    v5 = 1;
    v6 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
LABEL_4:
    result = 0;
    if ( a3 != *(_DWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL) - 3 )
      return result;
    v5 = a3;
    if ( !a3 )
      return 1;
    v6 = v3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( ((*a1 >> 2) & 1) != 0 )
    {
      v13 = 0;
      v14 = v3 & 0xFFFFFFFFFFFFFFF8LL;
      while ( 1 )
      {
        v15 = *(_QWORD *)(v14 + 8LL * v13 + 16);
        v16 = a2 + 16LL * v13;
        v17 = *(_QWORD *)(v16 + 8);
        if ( v15 )
        {
          v18 = *(unsigned int **)(v15 + 16);
          v19 = *v18;
          if ( v19 != v17 || *v18 && memcmp(v18 + 4, *(const void **)v16, v19) )
            return 0;
        }
        else if ( v17 )
        {
          return 0;
        }
        if ( v5 == ++v13 )
          return 1;
      }
    }
  }
  if ( v6 )
  {
    v7 = 0;
    v8 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    while ( 1 )
    {
      v9 = a2 + 16LL * v7;
      v10 = *(_QWORD *)(v9 + 8);
      if ( v8 )
      {
        v11 = *(_DWORD **)(v8 + 16);
        if ( v10 != *v11 || v10 && memcmp(v11 + 4, *(const void **)v9, v10) )
          return 0;
      }
      else if ( v10 )
      {
        return 0;
      }
      if ( v5 == ++v7 )
        return 1;
    }
  }
  v12 = 0;
  while ( !*(_QWORD *)(a2 + 16LL * v12 + 8) )
  {
    if ( ++v12 == v5 )
      return 1;
  }
  return 0;
}
