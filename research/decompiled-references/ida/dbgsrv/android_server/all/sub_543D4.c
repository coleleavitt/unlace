/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_543D4
// Address: 0x00000000000543D4

//----- (00000000000543D4) ----------------------------------------------------
long double __fastcall sub_543D4(pthread_mutex_t *a1, __int64 a2)
{
  size_t v4; // x24
  void *v5; // x19
  __int64 v6; // x25
  char *v7; // x20
  __int64 v8; // x27
  __int64 v9; // x28
  __int64 v10; // x26
  char *v11; // x29
  __int64 v12; // x19
  size_t v13; // x24
  void *v14; // x0
  char *v15; // x22
  __int64 v16; // x9
  char *v17; // x8
  char *align; // x0
  char *v19; // x8
  size_t v21; // [xsp+8h] [xbp-98h]
  void *ptr; // [xsp+18h] [xbp-88h]
  long double v23; // [xsp+20h] [xbp-80h]
  __int64 v24; // [xsp+30h] [xbp-70h]

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
  v24 = *(_QWORD *)(a2 + 40);
  v23 = *(long double *)(a2 + 24);
  v6 = *(_QWORD *)(a2 + 56);
  if ( v6 )
  {
    v21 = v4;
    ptr = v5;
    v7 = (char *)qalloc_or_throw(40 * v6);
    v8 = 0;
    v9 = v6;
    do
    {
      v10 = *(_QWORD *)(a2 + 48);
      v11 = &v7[v8];
      *((_QWORD *)v11 + 1) = 0;
      *((_QWORD *)v11 + 2) = 0;
      *(_QWORD *)v11 = 0;
      v12 = v10 + v8;
      v13 = *(_QWORD *)(v10 + v8 + 8);
      if ( v13 )
      {
        v14 = qalloc_or_throw(*(_QWORD *)(v10 + v8 + 8));
        v15 = &v7[v8];
        *(_QWORD *)v15 = v14;
        *((_QWORD *)v15 + 2) = v13;
        memcpy(v14, *(const void **)(v10 + v8), v13);
        *((_QWORD *)v15 + 1) = v13;
      }
      v16 = *(_QWORD *)(v12 + 24);
      --v9;
      v8 += 40;
      *(_QWORD *)(v11 + 29) = *(_QWORD *)(v12 + 29);
      *((_QWORD *)v11 + 3) = v16;
    }
    while ( v9 );
    v5 = ptr;
    v4 = v21;
  }
  else
  {
    v7 = nullptr;
  }
  v17 = (char *)*(&a1->__align + 1);
  if ( *(&a1->__align + 2) >= (unsigned __int64)(v17 + 1) )
  {
    align = (char *)a1->__align;
  }
  else
  {
    align = (char *)qvector_reserve(a1, (void *)a1->__align, (unsigned __int64)(v17 + 1), 0x48u);
    v17 = (char *)*(&a1->__align + 1);
    a1->__align = (__int64)align;
  }
  v19 = &align[72 * (_QWORD)v17];
  *(_QWORD *)v19 = v5;
  *((_QWORD *)v19 + 1) = v4;
  *((_QWORD *)v19 + 2) = v4;
  *((_QWORD *)v19 + 7) = v6;
  *((_QWORD *)v19 + 8) = v6;
  *(long double *)(v19 + 24) = v23;
  *((_QWORD *)v19 + 5) = v24;
  *((_QWORD *)v19 + 6) = v7;
  ++*(&a1->__align + 1);
  return v23;
}
