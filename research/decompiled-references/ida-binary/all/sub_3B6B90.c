size_t __fastcall ltl_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r14
  size_t result; // rax
  __int64 v7; // r12
  const char *v8; // r13
  size_t v9; // rbp
  const void *v10; // rbp
  __int64 *v11; // r12
  size_t v12; // rbx
  void *v13; // rdi
  size_t v14; // r13
  void *v15; // rdi
  size_t v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax

  v5 = *a2;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
  v7 = *(_QWORD *)(result + 8 * a5);
  v8 = *(const char **)v7;
  if ( *(_QWORD *)v7 && (result = strlen(*(const char **)v7), (v9 = result) != 0) )
  {
    v15 = (void *)*v5;
    v16 = result + 1;
    if ( v5[2] < result + 1 )
    {
      v17 = qvector_reserve(v5, *v5, result + 1, 1);
      *v5 = v17;
      v15 = (void *)v17;
    }
    v5[1] = v16;
    memmove(v15, v8, v9);
    result = *v5;
    *(_BYTE *)(*v5 + v9) = 0;
  }
  else
  {
    v5[1] = 0;
  }
  v10 = *(const void **)(v7 + 8);
  v11 = *a2;
  if ( v10 && (result = strlen((const char *)v10), (v12 = result) != 0) )
  {
    v13 = (void *)v11[3];
    v14 = result + 1;
    if ( v11[5] < result + 1 )
    {
      v18 = qvector_reserve(v11 + 3, v11[3], v14, 1);
      v11[3] = v18;
      v13 = (void *)v18;
    }
    v11[4] = v14;
    memmove(v13, v10, v12);
    result = v11[3];
    *(_BYTE *)(result + v12) = 0;
  }
  else
  {
    v11[4] = 0;
  }
  return result;
}
