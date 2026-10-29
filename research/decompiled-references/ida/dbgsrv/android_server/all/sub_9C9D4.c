/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C9D4
// Address: 0x000000000009C9D4

//----- (000000000009C9D4) ----------------------------------------------------
long double __fastcall sub_9C9D4(pthread_mutex_t *a1, __int64 *a2)
{
  size_t v4; // x20
  __int64 v5; // x24
  void *v6; // x21
  char *v7; // x8
  char *align; // x0
  char *v9; // x8
  long double v11; // [xsp+30h] [xbp-60h]
  int v12; // [xsp+40h] [xbp-50h]

  _ReadStatusReg(TPIDR_EL0);
  v4 = a2[2];
  v5 = *a2;
  if ( v4 )
  {
    v6 = qalloc_or_throw(a2[2]);
    memcpy(v6, (const void *)a2[1], v4);
  }
  else
  {
    v6 = nullptr;
  }
  v12 = *((_DWORD *)a2 + 12);
  v11 = *((long double *)a2 + 2);
  v7 = (char *)*(&a1->__align + 1);
  if ( *(&a1->__align + 2) >= (unsigned __int64)(v7 + 1) )
  {
    align = (char *)a1->__align;
  }
  else
  {
    align = (char *)qvector_reserve(a1, (void *)a1->__align, (unsigned __int64)(v7 + 1), 0x38u);
    v7 = (char *)*(&a1->__align + 1);
    a1->__align = (__int64)align;
  }
  v9 = &align[56 * (_QWORD)v7];
  *(_QWORD *)v9 = v5;
  *((_QWORD *)v9 + 1) = v6;
  *((_QWORD *)v9 + 2) = v4;
  *((_QWORD *)v9 + 3) = v4;
  *((_DWORD *)v9 + 12) = v12;
  *((long double *)v9 + 2) = v11;
  ++*(&a1->__align + 1);
  return v11;
}
