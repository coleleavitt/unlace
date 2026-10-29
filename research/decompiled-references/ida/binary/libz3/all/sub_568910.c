_QWORD *__fastcall sub_568910(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax
  int v6; // edx
  unsigned int *v8; // r13
  __int64 v9; // rdx
  unsigned int v10; // r14d
  int v11; // ebx
  int v12; // edx

  result = nullptr;
  v6 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a2 + 32) != v6 || *(_DWORD *)(a3 + 32) != v6 || a4 && *(_DWORD *)(a4 + 32) != v6 )
    return result;
  v8 = *(unsigned int **)(a2 + 16);
  result = *(_QWORD **)(a3 + 16);
  if ( !v8 )
  {
    if ( result )
    {
      v9 = 0;
      goto LABEL_7;
    }
LABEL_21:
    v10 = 0;
    goto LABEL_11;
  }
  v9 = *(v8 - 1);
  if ( !result )
  {
    if ( (_DWORD)v9 )
      return result;
    goto LABEL_21;
  }
LABEL_7:
  v10 = *((_DWORD *)result - 1);
  if ( (_DWORD)v9 != v10 || memcmp(*(const void **)(a2 + 16), *(const void **)(a3 + 16), 8 * v9) )
    return nullptr;
LABEL_11:
  v11 = *(_DWORD *)(a2 + 24);
  result = nullptr;
  if ( *(_DWORD *)(a3 + 24) != v11 )
    return result;
  if ( !a4 )
  {
LABEL_17:
    result = (_QWORD *)sub_186B270(8u);
    *result = off_1C51428;
    return result;
  }
  result = *(_QWORD **)(a4 + 16);
  if ( result )
  {
    if ( v10 == *((_DWORD *)result - 1) )
    {
      v12 = memcmp(*(const void **)(a4 + 16), v8, 8LL * v10);
      result = nullptr;
      if ( v12 )
        return result;
      goto LABEL_16;
    }
    return nullptr;
  }
  if ( v10 )
    return result;
LABEL_16:
  result = nullptr;
  if ( v11 == *(_DWORD *)(a4 + 24) )
    goto LABEL_17;
  return result;
}

