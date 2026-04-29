__int64 __fastcall sub_545A0(__int64 a1, const char *a2)
{
  const char *v2; // r13
  __int64 v3; // rbx
  int v4; // r12d
  __int64 v5; // rax
  char v6; // dl
  int v7; // ebp
  __int64 v9; // rax

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = *(_DWORD *)a2;
    while ( 1 )
    {
      v7 = *(_DWORD *)(v3 + 32);
      if ( v4 < v7
        || v4 <= v7 && *((_DWORD *)v2 + 1) < *(_DWORD *)(v3 + 36)
        || v4 == v7
        && *(_DWORD *)(v3 + 36) == *((_DWORD *)v2 + 1)
        && (a2 = *(const char **)(v3 + 40), strcmp(*((const char **)v2 + 1), a2) < 0) )
      {
        v5 = *(_QWORD *)(v3 + 16);
        v6 = 1;
        if ( !v5 )
        {
LABEL_10:
          if ( !v6 )
            goto LABEL_11;
          goto LABEL_20;
        }
      }
      else
      {
        v5 = *(_QWORD *)(v3 + 24);
        v6 = 0;
        if ( !v5 )
          goto LABEL_10;
      }
      v3 = v5;
    }
  }
  v3 = a1 + 8;
LABEL_20:
  if ( v3 == *(_QWORD *)(a1 + 24) )
    return 0;
  v9 = std::_Rb_tree_decrement(v3, a2);
  v4 = *(_DWORD *)v2;
  v7 = *(_DWORD *)(v9 + 32);
  v3 = v9;
LABEL_11:
  if ( v4 > v7
    || v4 >= v7 && *(_DWORD *)(v3 + 36) < *((_DWORD *)v2 + 1)
    || v4 == v7
    && *((_DWORD *)v2 + 1) == *(_DWORD *)(v3 + 36)
    && strcmp(*(const char **)(v3 + 40), *((const char **)v2 + 1)) < 0 )
  {
    return 0;
  }
  return v3;
}
