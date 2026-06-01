__int64 __fastcall sub_56C820(char **a1, size_t a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  char *v11; // rdi
  const __m128i *v12; // rax
  char *v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v17; // ebx

  v6 = (unsigned int)a2;
  v7 = *((unsigned int *)a1 + 2);
  if ( (unsigned int)a2 >= (unsigned int)v7 )
    __assert_fail("version < self->heads.size", "lib/src/./stack.c", 0x2BAu, "ts_stack_copy_version");
  v8 = *((_DWORD *)a1 + 3);
  v9 = v7 + 1;
  v11 = *a1;
  if ( v8 < (int)v7 + 1 )
  {
    v17 = 2 * v8;
    a2 = 8;
    if ( 2 * v8 < v9 )
      v17 = v7 + 1;
    if ( v17 < 8 )
      v17 = 8;
    if ( v8 < v17 )
    {
      a2 = 48LL * v17;
      if ( v11 )
        v11 = (char *)off_8C52A8(v11, a2);
      else
        v11 = (char *)off_8C52B8(48LL * v17);
      v7 = *((unsigned int *)a1 + 2);
      *a1 = v11;
      *((_DWORD *)a1 + 3) = v17;
      v9 = v7 + 1;
    }
  }
  *((_DWORD *)a1 + 2) = v9;
  v12 = (const __m128i *)&v11[48 * v6];
  v13 = &v11[48 * (unsigned int)v7];
  *(__m128i *)v13 = _mm_loadu_si128(v12);
  *((__m128i *)v13 + 1) = _mm_loadu_si128(v12 + 1);
  *((__m128i *)v13 + 2) = _mm_loadu_si128(v12 + 2);
  if ( !v9 )
    __assert_fail(
      "(uint32_t)((&self->heads)->size - 1) < (&self->heads)->size",
      "lib/src/./stack.c",
      0x2BCu,
      "ts_stack_copy_version");
  v14 = *(_QWORD *)v13;
  if ( *(_QWORD *)v13 )
  {
    v15 = *(_DWORD *)(v14 + 212);
    if ( !v15 )
      __assert_fail("self->ref_count > 0", "lib/src/./stack.c", 0x55u, "stack_node_retain");
    *(_DWORD *)(v14 + 212) = v15 + 1;
    if ( v15 == -1 )
      sub_55D220(v11, a2, v7, v14, a5, a6);
  }
  if ( *((_QWORD *)v13 + 3) )
  {
    sub_56C560(*((volatile signed __int32 **)v13 + 3));
    LODWORD(v7) = *((_DWORD *)a1 + 2) - 1;
  }
  *((_QWORD *)v13 + 1) = 0;
  return (unsigned int)v7;
}
