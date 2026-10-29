__int64 __fastcall sub_390AF0(__int64 *a1, const char *a2, __int64 a3)
{
  const char *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // r14
  const char *v8; // rdi
  unsigned int *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rbp
  size_t v16; // r12
  __int64 result; // rax
  void *v18; // rax
  __int64 v19; // rbp
  size_t v20; // rax
  size_t v21; // r12
  __int64 v22; // rax
  void *v23; // rdi
  size_t v24; // r13
  __int64 v25; // rax
  __int64 v27; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v5 = a1[1];
  v27 = *a1;
  if ( v5 )
  {
    v6 = *a1;
    v7 = 0;
    while ( 1 )
    {
      v8 = haystack;
      if ( *(_QWORD *)(v6 + 8) )
        v8 = *(const char **)v6;
      a2 = v4;
      if ( !strcmp(v8, v4) )
        break;
      ++v7;
      v6 += 40;
      if ( v5 == v7 )
        goto LABEL_13;
    }
    v9 = (unsigned int *)(v6 + 24);
  }
  else
  {
LABEL_13:
    if ( a1[2] < (unsigned __int64)(v5 + 1) )
    {
      a2 = (const char *)v27;
      v22 = qvector_reserve(a1, v27, v5 + 1, 40);
      v5 = a1[1];
      v27 = v22;
      *a1 = v22;
    }
    v19 = v27 + 40 * v5;
    *(_QWORD *)v19 = 0;
    *(_DWORD *)(v19 + 24) = 0;
    *(_QWORD *)(v19 + 32) = 0;
    *(_OWORD *)(v19 + 8) = 0;
    ++a1[1];
    if ( v4 && (v20 = strlen(v4), (v21 = v20) != 0) )
    {
      v23 = *(void **)v19;
      v24 = v20 + 1;
      if ( *(_QWORD *)(v19 + 16) < v20 + 1 )
      {
        v25 = qvector_reserve(v19, *(_QWORD *)v19, v20 + 1, 1);
        *(_QWORD *)v19 = v25;
        v23 = (void *)v25;
      }
      *(_QWORD *)(v19 + 8) = v24;
      a2 = v4;
      memmove(v23, v4, v21);
      *(_BYTE *)(*(_QWORD *)v19 + v21) = 0;
    }
    else
    {
      *(_QWORD *)(v19 + 8) = 0;
    }
    v9 = (unsigned int *)(v19 + 24);
  }
  v10 = operator new(0x18u);
  *(_OWORD *)(v10 + 8) = 0;
  v15 = (_QWORD *)v10;
  *(_QWORD *)v10 = 0;
  v16 = *(_QWORD *)(a3 + 8);
  if ( v16 )
  {
    v18 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8), a2, v11, v12, v13, v14);
    *v15 = v18;
    v15[2] = v16;
    memcpy(v18, *(const void **)a3, v16);
    v15[1] = v16;
    result = *v9;
    if ( !(_DWORD)result )
      goto LABEL_10;
LABEL_12:
    result = jvalue_t_clear(v9);
    goto LABEL_10;
  }
  result = *v9;
  if ( (_DWORD)result )
    goto LABEL_12;
LABEL_10:
  *v9 = 2;
  *((_QWORD *)v9 + 1) = v15;
  return result;
}

