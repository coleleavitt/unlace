unsigned __int64 __fastcall CoinSearchTree<CoinSearchTreeCompareDepth>::realpush(_QWORD *a1, int *a2)
{
  _QWORD *v2; // rsi
  int *v3; // rcx
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 result; // rax
  int *v10; // rdx

  v2 = (_QWORD *)a1[2];
  if ( v2 == (_QWORD *)a1[3] )
  {
    std::vector<CoinTreeSiblings *>::_M_realloc_insert<CoinTreeSiblings * const&>();
    v4 = (_QWORD *)a1[2];
    v3 = a2;
  }
  else
  {
    v3 = a2;
    if ( v2 )
    {
      *v2 = a2;
      v3 = a2;
    }
    v4 = v2 + 1;
    a1[2] = v4;
  }
  v5 = a1[1];
  v6 = v5 - 8;
  v7 = ((__int64)v4 - v5) >> 3;
  v8 = v7;
  result = v7 >> 1;
  if ( v7 >> 1
    && (v10 = *(int **)(v6 + 8 * result),
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 1) + 8LL * *v10) + 8LL) < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 1)
                                                                                                  + 8LL * *v3)
                                                                                      + 8LL)) )
  {
    while ( 1 )
    {
      *(_QWORD *)(v6 + 8 * v8) = v10;
      if ( !(result >> 1) )
        break;
      v10 = *(int **)(v6 + 8 * (result >> 1));
      v8 = result;
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 1) + 8LL * *v10) + 8LL) >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL * *a2)
                                                                                          + 8LL) )
        goto LABEL_12;
      result >>= 1;
    }
    result = 1;
LABEL_12:
    *(_QWORD *)(v6 + 8 * result) = a2;
  }
  else
  {
    *(_QWORD *)(v6 + 8 * v7) = v3;
    return v7;
  }
  return result;
}

