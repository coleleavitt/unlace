/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E38
// Address: 0x0000000000046E38

//----- (0000000000046E38) ----------------------------------------------------
long double __fastcall sub_46E38(pthread_mutex_t *a1, __int64 a2)
{
  size_t v4; // x21
  void *v5; // x19
  size_t v6; // x22
  void *v7; // x23
  char *v8; // x8
  char *align; // x0
  char *v11; // x8
  long double v12; // [xsp+0h] [xbp-70h]
  __int64 v13; // [xsp+18h] [xbp-58h]
  __int16 v14; // [xsp+20h] [xbp-50h]

  _ReadStatusReg(TPIDR_EL0);
  v12 = *(long double *)a2;
  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_QWORD *)(a2 + 24));
    memcpy(v5, *(const void **)(a2 + 16), v4);
    v6 = *(_QWORD *)(a2 + 48);
    if ( v6 )
    {
LABEL_3:
      v7 = qalloc_or_throw(v6);
      memcpy(v7, *(const void **)(a2 + 40), v6);
      goto LABEL_6;
    }
  }
  else
  {
    v5 = nullptr;
    v6 = *(_QWORD *)(a2 + 48);
    if ( v6 )
      goto LABEL_3;
  }
  v7 = nullptr;
LABEL_6:
  v14 = *(_WORD *)(a2 + 72);
  v13 = *(_QWORD *)(a2 + 64);
  v8 = (char *)*(&a1->__align + 1);
  if ( *(&a1->__align + 2) >= (unsigned __int64)(v8 + 1) )
  {
    align = (char *)a1->__align;
  }
  else
  {
    align = (char *)qvector_reserve(a1, (void *)a1->__align, (unsigned __int64)(v8 + 1), 0x50u);
    v8 = (char *)*(&a1->__align + 1);
    a1->__align = (__int64)align;
  }
  v11 = &align[80 * (_QWORD)v8];
  *((_QWORD *)v11 + 2) = v5;
  *((_QWORD *)v11 + 3) = v4;
  *((_QWORD *)v11 + 4) = v4;
  *((_QWORD *)v11 + 5) = v7;
  *((_QWORD *)v11 + 6) = v6;
  *((_QWORD *)v11 + 7) = v6;
  *(long double *)v11 = v12;
  *((_WORD *)v11 + 36) = v14;
  *((_QWORD *)v11 + 8) = v13;
  ++*(&a1->__align + 1);
  return v12;
}
