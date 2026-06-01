char __fastcall sub_1757190(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int *v8; // r15
  __int64 v9; // rax
  unsigned int *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char result; // al

  v8 = *(unsigned int **)a1;
  v9 = 4LL * *(unsigned int *)(a1 + 8);
  v10 = (unsigned int *)(*(_QWORD *)a1 + v9);
  v11 = v9 >> 2;
  v12 = v9 >> 4;
  if ( v12 )
  {
    v13 = &v8[4 * v12];
    while ( !sub_1756C20(a2, a3, *v8, a4, a5, a6) )
    {
      if ( sub_1756C20(a2, a3, v8[1], v20, v21, v22) )
        return v10 != v8 + 1;
      if ( sub_1756C20(a2, a3, v8[2], v14, v15, v16) )
        return v10 != v8 + 2;
      if ( sub_1756C20(a2, a3, v8[3], v17, v18, v19) )
        return v10 != v8 + 3;
      v8 += 4;
      if ( v13 == v8 )
      {
        v11 = v10 - v8;
        goto LABEL_11;
      }
    }
    return v10 != v8;
  }
LABEL_11:
  if ( v11 != 2 )
  {
    if ( v11 != 3 )
    {
      result = 0;
      if ( v11 != 1 )
        return result;
      goto LABEL_14;
    }
    if ( sub_1756C20(a2, a3, *v8, a4, a5, a6) )
      return v10 != v8;
    ++v8;
  }
  if ( sub_1756C20(a2, a3, *v8, a4, a5, a6) )
    return v10 != v8;
  ++v8;
LABEL_14:
  result = sub_1756C20(a2, a3, *v8, a4, a5, a6);
  if ( result )
    return v10 != v8;
  return result;
}
