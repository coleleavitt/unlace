__int64 __fastcall sub_78DA90(__int64 a1, const char *a2)
{
  __int64 v2; // r12
  const char *v3; // r13
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v3 = *(const char **)(v2 + 32);
    v4 = strcmp(a2, v3);
    v5 = *(_QWORD *)(v2 + 24);
    if ( v4 < 0 )
      v5 = *(_QWORD *)(v2 + 16);
    v6 = (v4 >> 31) & 1;
    if ( !v5 )
      break;
    v2 = v5;
  }
  if ( (_BYTE)v6 )
  {
LABEL_10:
    if ( v2 == *(_QWORD *)(a1 + 24) )
      return 0;
    v2 = std::_Rb_tree_decrement();
    if ( strcmp(*(const char **)(v2 + 32), a2) < 0 )
      return 0;
    return v2;
  }
  if ( strcmp(v3, a2) >= 0 )
    return v2;
  return 0;
}

