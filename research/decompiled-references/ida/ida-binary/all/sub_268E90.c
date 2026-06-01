__int64 __fastcall sub_268E90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v10; // rbx
  const char *v11; // rsi
  void *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebp
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  const char *v18; // rdi
  __int64 v19; // rax
  const void *v20; // rbp
  size_t v21; // rax
  size_t v22; // rbx
  void *v23; // rdi
  size_t v24; // r12
  const char *v25; // r14
  const char *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax

  if ( sub_1A15A0() || !a3 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( !*(_BYTE *)(a2 + 24) )
    {
      if ( *(_QWORD *)(a2 + 8) && !strcmp(*(const char **)a2, "Original") )
      {
LABEL_13:
        v11 = (const char *)*(unsigned __int8 *)(a2 + 25);
        v12 = (void *)a1;
        sub_268600(a1, v11, 0, v14, a5);
LABEL_14:
        v15 = 1;
        goto LABEL_15;
      }
      goto LABEL_8;
    }
    if ( (unsigned __int8)(*(_BYTE *)(a2 + 25) - 3) <= 1u )
      goto LABEL_9;
    if ( !*(_QWORD *)(a2 + 8) )
      goto LABEL_43;
    v18 = *(const char **)a2;
    if ( !strcmp(*(const char **)a2, "Original") )
      goto LABEL_13;
    if ( strcmp(v18, "Live") )
    {
LABEL_43:
      v11 = (const char *)a2;
      v12 = (void *)a1;
      if ( (unsigned __int8)sub_267A80(a1, (const char *)a2, 2) )
        break;
    }
LABEL_8:
    v11 = (const char *)a2;
    v12 = (void *)a1;
    if ( (unsigned __int8)sub_267A80(a1, (const char *)a2, 1) )
      goto LABEL_14;
LABEL_9:
    ++v10;
    a2 += 56;
    if ( a3 == v10 )
      return 0;
  }
  v15 = 2;
LABEL_15:
  if ( !a2 )
    return 0;
  if ( a4 )
  {
    if ( a4 != a2 )
    {
      v16 = *(_QWORD *)(a2 + 8);
      if ( v16 > 1 )
      {
        v26 = *(const char **)a2;
        v12 = *(void **)a4;
        if ( *(_QWORD *)(a4 + 16) < v16 )
        {
          v29 = qvector_reserve(a4, *(_QWORD *)a4, *(_QWORD *)(a2 + 8), 1);
          *(_QWORD *)a4 = v29;
          v12 = (void *)v29;
        }
        *(_QWORD *)(a4 + 8) = v16;
        v11 = v26;
        memmove(v12, v26, v16 - 1);
        *(_BYTE *)(*(_QWORD *)a4 + v16 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a4 + 8) = 0;
      }
      *(_BYTE *)(a4 + 24) = *(_BYTE *)(a2 + 24);
      *(_BYTE *)(a4 + 25) = *(_BYTE *)(a2 + 25);
      v17 = *(_QWORD *)(a2 + 40);
      if ( v17 > 1 )
      {
        v25 = *(const char **)(a2 + 32);
        v12 = *(void **)(a4 + 32);
        if ( *(_QWORD *)(a4 + 48) < v17 )
        {
          v28 = qvector_reserve(a4 + 32, *(_QWORD *)(a4 + 32), *(_QWORD *)(a2 + 40), 1);
          *(_QWORD *)(a4 + 32) = v28;
          v12 = (void *)v28;
        }
        *(_QWORD *)(a4 + 40) = v17;
        v11 = v25;
        memmove(v12, v25, v17 - 1);
        *(_BYTE *)(*(_QWORD *)(a4 + 32) + v17 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a4 + 40) = 0;
      }
    }
    if ( v15 == 2
      && (v19 = *(_QWORD *)(get_current_config(v12, v11, v13) + 624), *(_QWORD *)(v19 + 48) > 1u)
      && (v20 = *(const void **)(v19 + 40)) != nullptr
      && (v21 = strlen(*(const char **)(v19 + 40)), (v22 = v21) != 0) )
    {
      v23 = *(void **)(a4 + 32);
      v24 = v21 + 1;
      if ( *(_QWORD *)(a4 + 48) < v21 + 1 )
      {
        v27 = qvector_reserve(a4 + 32, *(_QWORD *)(a4 + 32), v24, 1);
        *(_QWORD *)(a4 + 32) = v27;
        v23 = (void *)v27;
      }
      *(_QWORD *)(a4 + 40) = v24;
      memmove(v23, v20, v22);
      *(_BYTE *)(*(_QWORD *)(a4 + 32) + v22) = 0;
    }
    else
    {
      *(_QWORD *)(a4 + 40) = 0;
    }
  }
  return 1;
}
