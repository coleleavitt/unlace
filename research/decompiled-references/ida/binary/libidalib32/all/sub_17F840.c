void __fastcall sub_17F840(_QWORD *a1)
{
  unsigned __int64 v1; // r14
  unsigned __int64 v3; // rdx
  void *v4; // rdi
  __int64 v5; // r12
  unsigned __int8 **v6; // rax
  unsigned __int8 *v7; // rbp
  unsigned __int8 *v8; // rbx
  const __int32_t **v9; // rax
  unsigned __int8 *v10; // rdx
  const __int32_t *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx

  v1 = a1[1];
  a1[7] = 0;
  if ( v1 )
  {
    v3 = v1;
    v4 = (void *)a1[6];
    if ( a1[8] < v1 )
    {
      v13 = qvector_reserve();
      v14 = a1[7];
      a1[6] = v13;
      v3 = v1 - v14;
      v4 = (void *)(v13 + 8 * v14);
    }
    v5 = 0;
    memset(v4, 0, 8 * v3);
    a1[7] = v1;
    do
    {
      v6 = (unsigned __int8 **)(*a1 + 24 * v5);
      v7 = v6[1];
      if ( v7 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          if ( --v7 )
          {
            v9 = __ctype_toupper_loc();
            v10 = &v7[(_QWORD)v8];
            v7 = nullptr;
            v11 = *v9;
            do
            {
              v12 = *v8++;
              v7 = (unsigned __int8 *)((1LL << v11[v12]) | (unsigned __int64)v7);
            }
            while ( v8 != v10 );
          }
        }
        else
        {
          v7 = nullptr;
        }
      }
      *(_QWORD *)(a1[6] + 8 * v5++) = v7;
    }
    while ( v1 != v5 );
  }
}

