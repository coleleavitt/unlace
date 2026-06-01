void *__fastcall sub_17A9430(__int64 *a1, void *a2, const void *a3)
{
  void *v3; // rcx
  __int64 v4; // rax
  size_t v5; // rbx
  __int64 v6; // rbx

  v3 = a2;
  v4 = *a1;
  v5 = *a1 + 8LL * *((unsigned int *)a1 + 2) - (_QWORD)a3;
  if ( a3 != (const void *)(*a1 + 8LL * *((unsigned int *)a1 + 2)) )
  {
    v3 = memmove(a2, a3, v5);
    v4 = *a1;
  }
  v6 = (__int64)v3 + v5 - v4;
  *((_DWORD *)a1 + 2) = v6 >> 3;
  return v3;
}
