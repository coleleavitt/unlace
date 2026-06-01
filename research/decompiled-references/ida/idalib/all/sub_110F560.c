__int64 __fastcall sub_110F560(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  size_t v3; // r13
  const void *v4; // rbp
  __int64 v5; // rax
  char v6; // si
  size_t v7; // r14
  const void *v8; // r12
  size_t v9; // r15
  signed __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r14
  __int64 v14; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_24;
  }
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(const void **)a2;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v2 + 40);
    v8 = *(const void **)(v2 + 32);
    v9 = v7;
    if ( v3 <= v7 )
      v9 = v3;
    if ( !v9 || (LODWORD(v10) = memcmp(v4, *(const void **)(v2 + 32), v9), !(_DWORD)v10) )
    {
      v10 = v3 - v7;
      if ( (__int64)(v3 - v7) > 0x7FFFFFFF )
        goto LABEL_3;
      if ( v10 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v10 < 0 )
      break;
LABEL_3:
    v5 = *(_QWORD *)(v2 + 24);
    v6 = 0;
    if ( !v5 )
      goto LABEL_11;
LABEL_4:
    v2 = v5;
  }
  v5 = *(_QWORD *)(v2 + 16);
  v6 = 1;
  if ( v5 )
    goto LABEL_4;
LABEL_11:
  if ( !v6 )
    goto LABEL_12;
LABEL_24:
  if ( *(_QWORD *)(a1 + 24) == v2 )
    return 0;
  v14 = std::_Rb_tree_decrement(v2);
  v7 = *(_QWORD *)(v14 + 40);
  v8 = *(const void **)(v14 + 32);
  v2 = v14;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(const void **)a2;
  v9 = v7;
  if ( v3 <= v7 )
    v9 = *(_QWORD *)(a2 + 8);
LABEL_12:
  if ( v9 )
  {
    v11 = memcmp(v8, v4, v9);
    if ( v11 )
    {
LABEL_17:
      if ( v11 < 0 )
        return 0;
      return v2;
    }
  }
  v12 = v7 - v3;
  if ( v12 > 0x7FFFFFFF )
    return v2;
  if ( v12 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v11 = v12;
    goto LABEL_17;
  }
  return 0;
}
