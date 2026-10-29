unsigned int *__fastcall sub_59ED40(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  unsigned int *v6; // rdi
  unsigned int *v7; // rcx
  __int64 v8; // rax
  unsigned int *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rsi
  unsigned int *v14; // rdx
  unsigned int v15; // esi

  v5 = sub_59EB00(a1, a2);
  if ( !v5 )
    return nullptr;
  v6 = (unsigned int *)v5;
  v7 = (unsigned int *)a1[212];
  v8 = 2LL * *(unsigned int *)(a2 + 40);
  v9 = &v6[v8];
  if ( v7 != nullptr && v7 >= v6 && v7 < v9 )
  {
    if ( *v7 >= a3 )
    {
      if ( a3 >= *v7 )
        return v7;
      if ( v7 == v6 )
        return nullptr;
      v14 = v7 - 2;
      a1[212] = v7 - 2;
      v15 = *(v7 - 2);
      v7 -= 2;
      if ( v15 < a3 )
        return v7;
    }
    else
    {
      v14 = v7 + 2;
      a1[212] = v7 + 2;
      if ( v7 + 2 == v9 || (v15 = v7[2], a3 < v15) )
      {
        a1[212] = v7;
        return v7;
      }
    }
    if ( a3 == v15 )
      return v14;
  }
  v10 = (v8 * 4) >> 3;
  v7 = v6;
  while ( v10 > 0 )
  {
    while ( 1 )
    {
      v11 = v10 >> 1;
      v12 = &v7[2 * (v10 >> 1)];
      if ( *v12 < a3 )
        break;
      v10 >>= 1;
      if ( v11 <= 0 )
        goto LABEL_8;
    }
    v7 = v12 + 2;
    v10 = v10 - 1 - v11;
  }
LABEL_8:
  a1[212] = v7;
  if ( v9 != v7 && a3 >= *v7 )
    return v7;
  if ( v6 != v7 )
  {
    v7 -= 2;
    return v7;
  }
  return nullptr;
}

