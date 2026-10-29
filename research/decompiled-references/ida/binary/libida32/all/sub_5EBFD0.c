__int64 __fastcall sub_5EBFD0(const char *src, _QWORD *a2, const char *a3, __int64 a4, __int64 a5)
{
  const char *v6; // rbp
  int v8; // eax
  size_t v10; // rax
  size_t v11; // r14
  size_t v12; // rax
  size_t v13; // rbp
  size_t v14; // rax
  size_t v15; // r12
  void *v16; // rdi
  size_t v17; // r13
  void *v18; // rdi
  size_t v19; // r15
  void *v20; // rdi
  size_t v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v6 = src;
  v8 = *(_DWORD *)(a5 + 80);
  if ( src && *src )
  {
    if ( (v8 & 8) == 0 )
    {
      if ( (v8 & 4) == 0 || *(_BYTE *)(a5 + 72) )
        return 3;
      v6 = nullptr;
    }
  }
  else if ( (v8 & 4) == 0 )
  {
    return 3;
  }
  if ( !get_tinfo_property(*a2, 5) )
  {
    if ( *(_QWORD *)(a5 + 8) > 1u && *(_BYTE *)(a5 + 72) )
    {
      if ( (*(_BYTE *)(a5 + 80) & 8) == 0 || !v6 )
        return 3;
      if ( *(_QWORD *)(a5 + 32) <= 1u )
        goto LABEL_17;
    }
    else
    {
      if ( *(_QWORD *)(a5 + 32) <= 1u )
        goto LABEL_23;
      if ( !v6 )
        return 3;
    }
    if ( strcmp(*(const char **)(a5 + 24), v6) )
      return 3;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a5 + 32) > 1u )
  {
    if ( *(_BYTE *)(a5 + 72) )
      return 3;
LABEL_23:
    if ( !v6 )
    {
LABEL_24:
      if ( a3 )
      {
        v12 = strlen(a3);
        v13 = v12;
        if ( v12 )
        {
          v20 = *(void **)(a5 + 48);
          v21 = v12 + 1;
          if ( *(_QWORD *)(a5 + 64) < v12 + 1 )
          {
            v23 = qvector_reserve(a5 + 48, *(_QWORD *)(a5 + 48), v21, 1);
            *(_QWORD *)(a5 + 48) = v23;
            v20 = (void *)v23;
          }
          *(_QWORD *)(a5 + 56) = v21;
          memmove(v20, a3, v13);
          *(_BYTE *)(*(_QWORD *)(a5 + 48) + v13) = 0;
        }
        else
        {
          *(_QWORD *)(a5 + 56) = 0;
        }
      }
      copy_tinfo_t(a5 + 72);
      *(_BYTE *)(a5 + 84) = 1;
      return 3;
    }
LABEL_17:
    v10 = strlen(v6);
    v11 = v10;
    if ( v10 )
    {
      v18 = *(void **)a5;
      v19 = v10 + 1;
      if ( *(_QWORD *)(a5 + 16) < v10 + 1 )
      {
        v22 = qvector_reserve(a5, *(_QWORD *)a5, v10 + 1, 1);
        *(_QWORD *)a5 = v22;
        v18 = (void *)v22;
      }
      *(_QWORD *)(a5 + 8) = v19;
      memmove(v18, v6, v11);
      *(_BYTE *)(*(_QWORD *)a5 + v11) = 0;
    }
    else
    {
      *(_QWORD *)(a5 + 8) = 0;
    }
    goto LABEL_24;
  }
  if ( v6 && (v14 = strlen(v6), (v15 = v14) != 0) )
  {
    v16 = *(void **)(a5 + 24);
    v17 = v14 + 1;
    if ( *(_QWORD *)(a5 + 40) < v14 + 1 )
    {
      v24 = qvector_reserve(a5 + 24, *(_QWORD *)(a5 + 24), v17, 1);
      *(_QWORD *)(a5 + 24) = v24;
      v16 = (void *)v24;
    }
    *(_QWORD *)(a5 + 32) = v17;
    memmove(v16, v6, v15);
    *(_BYTE *)(*(_QWORD *)(a5 + 24) + v15) = 0;
  }
  else
  {
    *(_QWORD *)(a5 + 32) = 0;
  }
  return 3;
}

