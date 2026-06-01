__int64 __fastcall sub_3958C0(__int64 *a1, const char *a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r14
  const char *v7; // rdi
  unsigned int *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rbp
  size_t v11; // r12
  __int64 result; // rax
  void *v13; // rax
  __int64 v14; // rbp
  size_t v15; // rax
  size_t v16; // r12
  __int64 v17; // rax
  void *v18; // rdi
  size_t v19; // r13
  __int64 v20; // rax
  __int64 v22; // [rsp+8h] [rbp-40h]

  v4 = a1[1];
  v22 = *a1;
  if ( v4 )
  {
    v5 = *a1;
    v6 = 0;
    while ( 1 )
    {
      v7 = haystack;
      if ( *(_QWORD *)(v5 + 8) )
        v7 = *(const char **)v5;
      if ( !strcmp(v7, a2) )
        break;
      ++v6;
      v5 += 40;
      if ( v4 == v6 )
        goto LABEL_13;
    }
    v8 = (unsigned int *)(v5 + 24);
  }
  else
  {
LABEL_13:
    if ( a1[2] < (unsigned __int64)(v4 + 1) )
    {
      v17 = qvector_reserve(a1, v22, v4 + 1, 40);
      v4 = a1[1];
      v22 = v17;
      *a1 = v17;
    }
    v14 = v22 + 40 * v4;
    *(_QWORD *)v14 = 0;
    *(_DWORD *)(v14 + 24) = 0;
    *(_QWORD *)(v14 + 32) = 0;
    *(_OWORD *)(v14 + 8) = 0;
    ++a1[1];
    if ( a2 && (v15 = strlen(a2), (v16 = v15) != 0) )
    {
      v18 = *(void **)v14;
      v19 = v15 + 1;
      if ( *(_QWORD *)(v14 + 16) < v15 + 1 )
      {
        v20 = qvector_reserve(v14, *(_QWORD *)v14, v15 + 1, 1);
        *(_QWORD *)v14 = v20;
        v18 = (void *)v20;
      }
      *(_QWORD *)(v14 + 8) = v19;
      memmove(v18, a2, v16);
      *(_BYTE *)(*(_QWORD *)v14 + v16) = 0;
    }
    else
    {
      *(_QWORD *)(v14 + 8) = 0;
    }
    v8 = (unsigned int *)(v14 + 24);
  }
  v9 = operator new(0x18u);
  *(_OWORD *)(v9 + 8) = 0;
  v10 = (_QWORD *)v9;
  *(_QWORD *)v9 = 0;
  v11 = *(_QWORD *)(a3 + 8);
  if ( v11 )
  {
    v13 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8));
    *v10 = v13;
    v10[2] = v11;
    memcpy(v13, *(const void **)a3, v11);
    v10[1] = v11;
    result = *v8;
    if ( !(_DWORD)result )
      goto LABEL_10;
LABEL_12:
    result = jvalue_t_clear(v8);
    goto LABEL_10;
  }
  result = *v8;
  if ( (_DWORD)result )
    goto LABEL_12;
LABEL_10:
  *v8 = 2;
  *((_QWORD *)v8 + 1) = v10;
  return result;
}
