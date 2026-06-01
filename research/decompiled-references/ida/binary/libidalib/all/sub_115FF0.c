void __fastcall sub_115FF0(__int64 a1, __int64 a2)
{
  size_t v2; // rbp
  void *v4; // r13
  char *v5; // rax
  const char *v6; // r14
  size_t v7; // rax
  size_t v8; // rbp
  size_t v9; // rbp
  void *v10; // rdi
  size_t v11; // r15
  unsigned __int64 v12; // rbp
  void *v13; // rdi
  const void *v14; // r15
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 > 1 )
  {
    v4 = (void *)qalloc_or_throw();
    memcpy(v4, *(const void **)a2, v2);
    v5 = strchr((const char *)v4, 58);
    if ( v5 )
    {
      *v5 = 0;
      v6 = v5 + 1;
      if ( v4 )
      {
        v7 = strlen((const char *)v4);
        v8 = v7;
        if ( v7 )
        {
          v10 = *(void **)a1;
          v11 = v7 + 1;
          if ( *(_QWORD *)(a1 + 16) < v7 + 1 )
          {
            v16 = qvector_reserve();
            *(_QWORD *)a1 = v16;
            v10 = (void *)v16;
          }
          *(_QWORD *)(a1 + 8) = v11;
          memmove(v10, v4, v8);
          *(_BYTE *)(*(_QWORD *)a1 + v8) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
        v9 = strlen(v6);
        if ( !v9 )
        {
          *(_QWORD *)(a2 + 8) = 0;
LABEL_8:
          qfree();
          return;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
        v9 = strlen(v5 + 1);
        if ( !v9 )
        {
          *(_QWORD *)(a2 + 8) = 0;
          return;
        }
      }
      v13 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v9 + 1 )
      {
        v17 = qvector_reserve();
        *(_QWORD *)a2 = v17;
        v13 = (void *)v17;
      }
      *(_QWORD *)(a2 + 8) = v9 + 1;
      memmove(v13, v6, v9);
      *(_BYTE *)(*(_QWORD *)a2 + v9) = 0;
    }
    else
    {
      if ( a2 != a1 )
      {
        v12 = *(_QWORD *)(a2 + 8);
        if ( v12 > 1 )
        {
          v14 = *(const void **)a2;
          v15 = *(void **)a1;
          if ( *(_QWORD *)(a1 + 16) < v12 )
          {
            v18 = qvector_reserve();
            *(_QWORD *)a1 = v18;
            v15 = (void *)v18;
          }
          *(_QWORD *)(a1 + 8) = v12;
          memmove(v15, v14, v12 - 1);
          *(_BYTE *)(*(_QWORD *)a1 + v12 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
      }
      if ( *(_QWORD *)a2 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        qfree();
        *(_QWORD *)a2 = 0;
        *(_QWORD *)(a2 + 16) = 0;
      }
    }
    if ( v4 )
      goto LABEL_8;
  }
}

