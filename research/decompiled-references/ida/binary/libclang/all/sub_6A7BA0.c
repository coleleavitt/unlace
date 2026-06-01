__int64 __fastcall sub_6A7BA0(const void *a1, const void *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned int *v8; // rdi
  const void *v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned int *v11; // rsi
  size_t v12; // rdx
  size_t v13; // rbp
  const void *v14; // rsi
  int v15; // eax

  v2 = *(_QWORD *)(*(_QWORD *)a2 + 40LL);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
  if ( (v3 & 7) == 0 )
  {
    v6 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v6 )
    {
      v8 = *(unsigned int **)(v6 + 16);
      v7 = *v8;
      result = v7 != 0;
      if ( (v2 & 7) != 0 )
        return result;
      v9 = v8 + 4;
      v10 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v10 )
        return v7 != 0;
      v11 = *(unsigned int **)(v10 + 16);
      v12 = v7;
      v13 = *v11;
      v14 = v11 + 4;
      if ( v13 <= v7 )
        v12 = v13;
      if ( v12 )
      {
        v15 = memcmp(v9, v14, v12);
        if ( v15 )
          return (v15 >> 31) | 1u;
      }
      if ( v13 != v7 )
        return v7 < v13 ? -1 : 1;
    }
    else if ( (v2 & 7) == 0 )
    {
      v7 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        return (unsigned int)-(**(_DWORD **)(v7 + 16) != 0);
      return v7 != 0;
    }
    return 0;
  }
  if ( (v2 & 7) == 0 && (v4 = v2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return (unsigned int)-(**(_DWORD **)(v4 + 16) != 0);
  else
    return 0;
}

