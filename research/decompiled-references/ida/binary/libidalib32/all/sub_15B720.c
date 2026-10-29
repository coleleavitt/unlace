__int64 __fastcall sub_15B720(__int64 a1, const char *a2, int a3)
{
  const char *v4; // rbp
  int v5; // r12d
  size_t v6; // r12
  _QWORD *v7; // r13
  size_t v8; // rax
  size_t v9; // r12
  const char *v11; // r14
  void *v12; // rdi
  void *v13; // rdi
  size_t v14; // r14
  __int64 regvar; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  const char *v19; // rax
  int v20; // edx
  const char *v21; // [rsp+0h] [rbp-68h]

  if ( !a2 )
  {
    *(_DWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    goto LABEL_11;
  }
  v4 = a2;
  v5 = a3;
  if ( (a3 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 64) = a3;
    v6 = strlen(a2);
    if ( !v6 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      v7 = nullptr;
      goto LABEL_5;
    }
    v11 = a2;
    v7 = nullptr;
    goto LABEL_17;
  }
  v11 = a2;
  v7 = nullptr;
  if ( (int)str2reg() >= 0
    || get_func()
    && (regvar = find_regvar(), (v7 = (_QWORD *)regvar) != nullptr)
    && (v11 = *(const char **)(regvar + 8), (int)str2reg() >= 0) )
  {
    if ( (unsigned __int8)parse_reg_name() && get_reg_name() >= 0 )
    {
      if ( strcmp(s1, v11) )
      {
        v5 &= ~2u;
        v11 = a2;
        v7 = nullptr;
        goto LABEL_14;
      }
      get_ph();
      v18 = sub_9E220();
      if ( v18 )
      {
        if ( v18 != 1 )
          goto LABEL_14;
        v19 = v21;
      }
      else
      {
        v20 = str2reg();
        v19 = v11;
        if ( v20 == -1 )
          goto LABEL_14;
      }
      if ( v19 )
        v11 = v19;
    }
LABEL_14:
    *(_DWORD *)(a1 + 64) = v5;
    v6 = strlen(a2);
    if ( !v6 )
    {
      *(_QWORD *)(a1 + 16) = 0;
LABEL_20:
      if ( !v11 )
        goto LABEL_6;
      v4 = v11;
LABEL_5:
      v8 = strlen(v4);
      v9 = v8;
      if ( v8 )
      {
        v13 = *(void **)(a1 + 32);
        v14 = v8 + 1;
        if ( *(_QWORD *)(a1 + 48) < v8 + 1 )
        {
          v17 = qvector_reserve();
          *(_QWORD *)(a1 + 32) = v17;
          v13 = (void *)v17;
        }
        *(_QWORD *)(a1 + 40) = v14;
        memmove(v13, v4, v9);
        *(_BYTE *)(*(_QWORD *)(a1 + 32) + v9) = 0;
LABEL_7:
        if ( v7 )
        {
          *(_QWORD *)(a1 + 56) = *v7;
          return 1;
        }
LABEL_11:
        *(_QWORD *)(a1 + 56) = 0;
        return 1;
      }
LABEL_6:
      *(_QWORD *)(a1 + 40) = 0;
      goto LABEL_7;
    }
LABEL_17:
    v12 = *(void **)(a1 + 8);
    if ( *(_QWORD *)(a1 + 24) < v6 + 1 )
    {
      v16 = qvector_reserve();
      *(_QWORD *)(a1 + 8) = v16;
      v12 = (void *)v16;
    }
    *(_QWORD *)(a1 + 16) = v6 + 1;
    memmove(v12, a2, v6);
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6) = 0;
    goto LABEL_20;
  }
  return 0;
}

