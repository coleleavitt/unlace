__int64 __fastcall sub_9F5E30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  size_t v3; // r12
  __int64 v4; // rax
  char v5; // cl
  size_t v6; // rbp
  size_t v7; // rdx
  int v8; // eax
  size_t v9; // r14
  size_t v10; // rdx
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_27;
  }
  v3 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v6 = *(_QWORD *)(v2 + 40);
    v7 = v3;
    if ( v6 <= v3 )
      v7 = *(_QWORD *)(v2 + 40);
    if ( v7 )
    {
      v8 = memcmp(*(const void **)a2, *(const void **)(v2 + 32), v7);
      if ( v8 )
        break;
    }
    if ( v6 == v3 || v6 <= v3 )
    {
      v4 = *(_QWORD *)(v2 + 24);
      v5 = 0;
      goto LABEL_12;
    }
LABEL_3:
    v4 = *(_QWORD *)(v2 + 16);
    v5 = 1;
    if ( !v4 )
      goto LABEL_13;
LABEL_4:
    v2 = v4;
  }
  if ( v8 < 0 )
    goto LABEL_3;
  v4 = *(_QWORD *)(v2 + 24);
  v5 = 0;
LABEL_12:
  if ( v4 )
    goto LABEL_4;
LABEL_13:
  if ( !v5 )
    goto LABEL_14;
LABEL_27:
  result = 0;
  if ( *(_QWORD *)(a1 + 24) != v2 )
  {
    v13 = std::_Rb_tree_decrement(v2);
    v3 = *(_QWORD *)(a2 + 8);
    v2 = v13;
LABEL_14:
    v9 = *(_QWORD *)(v2 + 40);
    v10 = v9;
    if ( v3 <= v9 )
      v10 = v3;
    if ( v10 && (v11 = memcmp(*(const void **)(v2 + 32), *(const void **)a2, v10)) != 0 )
    {
      if ( v11 >= 0 )
        return v2;
    }
    else if ( v3 == v9 || v3 <= v9 )
    {
      return v2;
    }
    return 0;
  }
  return result;
}
