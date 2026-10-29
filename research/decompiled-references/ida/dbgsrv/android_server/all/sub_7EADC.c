/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EADC
// Address: 0x000000000007EADC

//----- (000000000007EADC) ----------------------------------------------------
char *__fastcall sub_7EADC(
        pthread_mutex_t *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        void *ptr)
{
  size_t v11; // x20
  void *v14; // x21
  char *v15; // x8
  __int16 v16; // w22
  char *result; // x0
  char *v18; // x8

  v11 = *(_QWORD *)(a2 + 8);
  if ( v11 )
  {
    v14 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    memcpy(v14, *(const void **)a2, v11);
  }
  else
  {
    v14 = nullptr;
  }
  v15 = (char *)*(&a1->__align + 1);
  v16 = *(_WORD *)(a2 + 24);
  if ( *(&a1->__align + 2) >= (unsigned __int64)(v15 + 1) )
  {
    result = (char *)a1->__align;
  }
  else
  {
    result = (char *)qvector_reserve(a1, (void *)a1->__align, (unsigned __int64)(v15 + 1), 0x20u);
    v15 = (char *)*(&a1->__align + 1);
    a1->__align = (__int64)result;
  }
  v18 = &result[32 * (_QWORD)v15];
  *(_QWORD *)v18 = v14;
  *((_QWORD *)v18 + 1) = v11;
  *((_QWORD *)v18 + 2) = v11;
  *((_WORD *)v18 + 12) = v16;
  ++*(&a1->__align + 1);
  return result;
}
