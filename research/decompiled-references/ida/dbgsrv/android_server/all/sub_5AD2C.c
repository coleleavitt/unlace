/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AD2C
// Address: 0x000000000005AD2C

//----- (000000000005AD2C) ----------------------------------------------------
char *__fastcall sub_5AD2C(pthread_mutex_t *a1, __int64 a2)
{
  size_t v4; // x20
  void *v5; // x21
  char *v6; // x8
  char *result; // x0
  char *v8; // x8
  _BYTE v9[13]; // [xsp+8h] [xbp-48h]

  _ReadStatusReg(TPIDR_EL0);
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    memcpy(v5, *(const void **)a2, v4);
  }
  else
  {
    v5 = nullptr;
  }
  *(_QWORD *)&v9[5] = *(_QWORD *)(a2 + 29);
  *(_QWORD *)v9 = *(_QWORD *)(a2 + 24);
  v6 = (char *)*(&a1->__align + 1);
  if ( *(&a1->__align + 2) >= (unsigned __int64)(v6 + 1) )
  {
    result = (char *)a1->__align;
  }
  else
  {
    result = (char *)qvector_reserve(a1, (void *)a1->__align, (unsigned __int64)(v6 + 1), 0x28u);
    v6 = (char *)*(&a1->__align + 1);
    a1->__align = (__int64)result;
  }
  v8 = &result[40 * (_QWORD)v6];
  *(_QWORD *)v8 = v5;
  *((_QWORD *)v8 + 1) = v4;
  *(_QWORD *)(v8 + 29) = *(_QWORD *)&v9[5];
  *((_QWORD *)v8 + 2) = v4;
  *((_QWORD *)v8 + 3) = *(_QWORD *)v9;
  ++*(&a1->__align + 1);
  return result;
}
