__int64 __fastcall sub_54980(_QWORD *a1, const char *a2, const char **a3)
{
  int v4; // r14d
  int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 result; // rax
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  int v14; // edx
  const char *v15; // r13
  const char *v16; // r15
  __int64 v17; // r13
  int v18; // eax

  if ( a2 == (const char *)(a1 + 1) )
  {
    if ( a1[5] )
    {
      v12 = a1[4];
      v13 = *(_DWORD *)a3;
      v14 = *(_DWORD *)(v12 + 32);
      if ( v14 < v13 || v14 <= v13 && *(_DWORD *)(v12 + 36) < *((_DWORD *)a3 + 1) )
        return 0;
      if ( v14 == v13 && *((_DWORD *)a3 + 1) == *(_DWORD *)(v12 + 36) && strcmp(*(const char **)(v12 + 40), a3[1]) < 0 )
        return 0;
    }
    return sub_545A0((__int64)a1, (const char *)a3);
  }
  v4 = *(_DWORD *)a3;
  v5 = *((_DWORD *)a2 + 8);
  v6 = (__int64)a2;
  if ( *(_DWORD *)a3 < v5 )
    goto LABEL_9;
  if ( v4 > v5 )
    goto LABEL_30;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a2 + 9);
  if ( v7 < v8 )
    goto LABEL_9;
  if ( v4 != v5 || v7 != v8 )
  {
    if ( v8 < v7 )
      goto LABEL_30;
    return v6;
  }
  v15 = *((const char **)a2 + 5);
  v16 = a3[1];
  a2 = v15;
  if ( strcmp(v16, v15) < 0 )
  {
LABEL_9:
    result = v6;
    if ( a1[3] == v6 )
      return result;
    v10 = std::_Rb_tree_decrement(v6, a2);
    v11 = *(_DWORD *)(v10 + 32);
    if ( v4 > v11
      || v4 >= v11 && *(_DWORD *)(v10 + 36) < *((_DWORD *)a3 + 1)
      || v4 == v11 && *((_DWORD *)a3 + 1) == *(_DWORD *)(v10 + 36) && strcmp(*(const char **)(v10 + 40), a3[1]) < 0 )
    {
      result = v6;
      if ( !*(_QWORD *)(v10 + 24) )
        return 0;
      return result;
    }
    return sub_545A0((__int64)a1, (const char *)a3);
  }
  if ( strcmp(v15, v16) >= 0 )
    return v6;
LABEL_30:
  if ( a1[4] == v6 )
    return 0;
  v17 = std::_Rb_tree_increment(v6);
  v18 = *(_DWORD *)(v17 + 32);
  if ( v4 >= v18
    && (v4 > v18 || *((_DWORD *)a3 + 1) >= *(_DWORD *)(v17 + 36))
    && (v4 != v18 || *(_DWORD *)(v17 + 36) != *((_DWORD *)a3 + 1) || strcmp(a3[1], *(const char **)(v17 + 40)) >= 0) )
  {
    return sub_545A0((__int64)a1, (const char *)a3);
  }
  result = v17;
  if ( !*(_QWORD *)(v6 + 24) )
    return 0;
  return result;
}

