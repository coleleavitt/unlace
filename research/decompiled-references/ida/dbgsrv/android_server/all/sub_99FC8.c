/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99FC8
// Address: 0x0000000000099FC8

//----- (0000000000099FC8) ----------------------------------------------------
char *__fastcall sub_99FC8(pthread_mutex_t *a1, __int64 *a2)
{
  size_t v2; // x21
  __int64 v3; // x25
  void *v6; // x19
  size_t v7; // x22
  void *v8; // x23
  char *v9; // x8
  char *result; // x0
  char *v11; // x8

  v2 = a2[2];
  v3 = *a2;
  if ( v2 )
  {
    v6 = qalloc_or_throw(a2[2]);
    memcpy(v6, (const void *)a2[1], v2);
    v7 = a2[5];
    if ( v7 )
    {
LABEL_3:
      v8 = qalloc_or_throw(v7);
      memcpy(v8, (const void *)a2[4], v7);
      goto LABEL_6;
    }
  }
  else
  {
    v6 = nullptr;
    v7 = a2[5];
    if ( v7 )
      goto LABEL_3;
  }
  v8 = nullptr;
LABEL_6:
  v9 = (char *)*(&a1->__align + 1);
  if ( *(&a1->__align + 2) >= (unsigned __int64)(v9 + 1) )
  {
    result = (char *)a1->__align;
  }
  else
  {
    result = (char *)qvector_reserve(a1, (void *)a1->__align, (unsigned __int64)(v9 + 1), 0x38u);
    v9 = (char *)*(&a1->__align + 1);
    a1->__align = (__int64)result;
  }
  v11 = &result[56 * (_QWORD)v9];
  *(_QWORD *)v11 = v3;
  *((_QWORD *)v11 + 1) = v6;
  *((_QWORD *)v11 + 2) = v2;
  *((_QWORD *)v11 + 3) = v2;
  *((_QWORD *)v11 + 4) = v8;
  *((_QWORD *)v11 + 5) = v7;
  *((_QWORD *)v11 + 6) = v7;
  ++*(&a1->__align + 1);
  return result;
}
