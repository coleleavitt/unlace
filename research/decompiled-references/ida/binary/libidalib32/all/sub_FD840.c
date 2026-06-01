const char **__fastcall sub_FD840(const char **a1, const char *a2, char a3)
{
  const char *v3; // r12
  char v4; // r13
  char *v5; // rax
  char v6; // dl
  size_t v7; // rax
  size_t v8; // rbx
  char *v9; // rsi
  size_t v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r13
  char *v14; // rbx
  size_t v16; // rax
  size_t v17; // r13
  size_t v18; // rbx
  char *v19; // rax
  char *v20; // [rsp+10h] [rbp-58h]
  size_t v21; // [rsp+18h] [rbp-50h]

  v3 = a2;
  if ( a3 )
  {
    v20 = nullptr;
    if ( !a2 )
    {
      v11 = 0;
LABEL_18:
      *a1 = v3;
      a1[1] = (const char *)v11;
      a1[2] = nullptr;
      return a1;
    }
    v4 = a3;
    getinf();
    v5 = (char *)tag_advance();
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 != 2 )
        break;
      if ( v5[1] )
        v5 += 2;
      else
        ++v5;
    }
    v7 = v5 - a2;
    v8 = v7;
    if ( v6 )
    {
      v9 = nullptr;
      if ( v7 == -3 )
        goto LABEL_9;
    }
    else
    {
      v9 = nullptr;
      v4 = 0;
      if ( !v7 )
      {
LABEL_9:
        v10 = v8 + 1;
        if ( v8 != -1 )
        {
          v20 = (char *)qvector_reserve();
          v10 = v8 + 1;
          v9 = v20;
        }
        v21 = v10;
        v9[v8] = 0;
        memmove(v20, v3, v8);
        v11 = v21;
        v3 = v20;
        if ( v4 )
        {
          if ( v21 )
          {
            v12 = v21 + 2;
            v13 = v21 + 3;
            v11 = v21 - 1;
          }
          else
          {
            v13 = 4;
            v12 = 3;
          }
          if ( v13 )
          {
            v20 = (char *)qvector_reserve();
            v3 = v20;
          }
          v3[v12] = 0;
          v14 = &v20[v11];
          *(_WORD *)v14 = -32542;
          v14[2] = -90;
          v3 = v20;
          v11 = v13;
        }
        goto LABEL_18;
      }
    }
    v20 = (char *)qvector_reserve();
    v9 = v20;
    goto LABEL_9;
  }
  *a1 = nullptr;
  *(_OWORD *)(a1 + 1) = 0;
  if ( a2 )
  {
    v16 = strlen(a2);
    v17 = v16 + 1;
    v18 = v16;
    v19 = (char *)qvector_reserve();
    *a1 = v19;
    a1[1] = (const char *)v17;
    memmove(v19, a2, v18);
    (*a1)[v18] = 0;
  }
  return a1;
}

