__int64 __fastcall sub_520B70(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  char v5; // dl
  unsigned __int64 v6; // rbp
  bool v7; // zf
  __int64 v9; // rax
  unsigned __int64 v10; // rbp

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_16;
  }
  v3 = *a2;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v2 + 32);
    if ( v3 < v6 )
    {
      v4 = *(_QWORD *)(v2 + 16);
      v5 = 1;
      goto LABEL_8;
    }
    if ( v3 == v6 && strcmp((const char *)a2[1], *(const char **)(v2 + 40)) < 0 )
      break;
    v4 = *(_QWORD *)(v2 + 24);
    v5 = 0;
    if ( !v4 )
      goto LABEL_9;
LABEL_5:
    v2 = v4;
  }
  v4 = *(_QWORD *)(v2 + 16);
  v5 = 1;
LABEL_8:
  if ( v4 )
    goto LABEL_5;
LABEL_9:
  if ( v5 )
  {
LABEL_16:
    if ( v2 != *(_QWORD *)(a1 + 24) )
    {
      v9 = std::_Rb_tree_decrement();
      v10 = *(_QWORD *)(v9 + 32);
      v2 = v9;
      v7 = v10 == *a2;
      if ( v10 >= *a2 )
        goto LABEL_18;
    }
    return 0;
  }
  v7 = v6 == v3;
  if ( v6 < v3 )
    return 0;
LABEL_18:
  if ( v7 && strcmp(*(const char **)(v2 + 40), (const char *)a2[1]) < 0 )
    return 0;
  return v2;
}

