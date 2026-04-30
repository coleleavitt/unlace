__int64 *__fastcall sub_2E4F70(__int64 a1, const char *a2, const char *a3, const char *a4)
{
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r14
  void *v10; // rax
  size_t v11; // rax
  size_t v12; // r14
  size_t v13; // r13
  void *v14; // rax
  size_t v15; // rax
  size_t v16; // r13
  size_t v17; // r12
  void *v18; // rax
  __int64 *v19; // rdi
  const char *v20; // rcx
  bool v21; // zf
  const char *v22; // rdx

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = v7 + 1;
    v9 = v7;
    v10 = (void *)qvector_reserve(a1, 0, v7 + 1, 1);
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = v8;
    memmove(v10, a2, v9);
    *(_BYTE *)(*(_QWORD *)a1 + v9) = 0;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( a3 )
  {
    v11 = strlen(a3);
    v12 = v11 + 1;
    v13 = v11;
    v14 = (void *)qvector_reserve(a1 + 24, 0, v11 + 1, 1);
    *(_QWORD *)(a1 + 24) = v14;
    *(_QWORD *)(a1 + 32) = v12;
    memmove(v14, a3, v13);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v13) = 0;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  if ( a4 )
  {
    v15 = strlen(a4);
    v16 = v15 + 1;
    v17 = v15;
    v18 = (void *)qvector_reserve(a1 + 48, 0, v15 + 1, 1);
    *(_QWORD *)(a1 + 48) = v18;
    *(_QWORD *)(a1 + 56) = v16;
    memmove(v18, a4, v17);
    v19 = (__int64 *)(a1 + 72);
    v20 = &s1;
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + v17) = 0;
    v21 = *(_QWORD *)(a1 + 56) == 0;
    *(_QWORD *)(a1 + 72) = 0;
    *(_OWORD *)(a1 + 80) = 0;
    if ( !v21 )
      v20 = *(const char **)(a1 + 48);
  }
  else
  {
    *(_OWORD *)(a1 + 80) = 0;
    v19 = (__int64 *)(a1 + 72);
    v20 = &s1;
    *(_QWORD *)(a1 + 72) = 0;
  }
  v22 = &s1;
  if ( *(_QWORD *)(a1 + 32) )
    v22 = *(const char **)(a1 + 24);
  return sub_169A50(v19, (__int64)"%s [%s]", v22, v20);
}
