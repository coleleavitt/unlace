/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46FA4
// Address: 0x0000000000046FA4

//----- (0000000000046FA4) ----------------------------------------------------
char *__fastcall sub_46FA4(pthread_mutex_t *a1, __int64 a2)
{
  size_t v2; // x20
  void *v5; // x0
  const void *v6; // x1
  void *v7; // x21
  char *v8; // x8
  char *result; // x0
  char *v10; // x8

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v5 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    v6 = *(const void **)a2;
    v7 = v5;
    memcpy(v5, v6, v2);
  }
  else
  {
    v7 = nullptr;
  }
  v8 = (char *)*(&a1->__align + 1);
  if ( *(&a1->__align + 2) >= (unsigned __int64)(v8 + 1) )
  {
    result = (char *)a1->__align;
  }
  else
  {
    result = (char *)qvector_reserve(a1, (void *)a1->__align, (unsigned __int64)(v8 + 1), 0x18u);
    v8 = (char *)*(&a1->__align + 1);
    a1->__align = (__int64)result;
  }
  v10 = &result[24 * (_QWORD)v8];
  *(_QWORD *)v10 = v7;
  *((_QWORD *)v10 + 1) = v2;
  *((_QWORD *)v10 + 2) = v2;
  ++*(&a1->__align + 1);
  return result;
}
