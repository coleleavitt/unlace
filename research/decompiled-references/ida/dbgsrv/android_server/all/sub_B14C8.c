/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B14C8
// Address: 0x00000000000B14C8

//----- (00000000000B14C8) ----------------------------------------------------
void __fastcall sub_B14C8(pthread_mutex_t *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x22
  __int64 v6; // x21
  unsigned __int64 v7; // x23
  char *align; // x8
  void *v9; // x0
  char *v10; // x24
  char *v11; // x1
  unsigned __int64 v12; // x8
  __int64 v14; // x23
  void *v15; // x0
  const void *v16; // x1
  void *v17; // x21
  char *v18; // x0
  unsigned __int64 v19; // x23
  __int64 i; // x24
  char *v21; // x25
  __int64 v22; // x26
  void *v23; // x0
  unsigned __int64 v24; // x8
  unsigned __int64 v25; // x24
  __int64 v26; // x25
  __int64 v27; // x26
  char *v28; // x8
  void *v29; // x0
  _QWORD *v30; // x26

  v3 = *(&a1->__align + 1);
  if ( v3 > a2 )
  {
    v6 = 24 * a2;
    v7 = a2;
    do
    {
      align = (char *)a1->__align;
      v9 = *(void **)(a1->__align + v6);
      if ( v9 )
      {
        v10 = &align[v6];
        *(_QWORD *)&align[v6 + 8] = 0;
        qfree(v9);
        *(_QWORD *)v10 = 0;
        *((_QWORD *)v10 + 2) = 0;
      }
      ++v7;
      v6 += 24;
    }
    while ( v7 < v3 );
LABEL_6:
    *(&a1->__align + 1) = a2;
    return;
  }
  if ( v3 < a2 )
  {
    v11 = (char *)a1->__align;
    v12 = *(&a1->__align + 2);
    if ( a1->__align > a3 || (unsigned __int64)&v11[24 * v12] <= a3 )
    {
      if ( v12 < a2 )
      {
        v18 = (char *)qvector_reserve(a1, v11, a2, 0x18u);
        v3 = *(&a1->__align + 1);
        v11 = v18;
        a1->__align = (__int64)v18;
      }
      if ( v3 < a2 )
      {
        v19 = a2 - 1 - v3;
        for ( i = 24 * v3; ; i += 24 )
        {
          v21 = &v11[i];
          *((_QWORD *)v21 + 1) = 0;
          *((_QWORD *)v21 + 2) = 0;
          *(_QWORD *)v21 = 0;
          v22 = *(_QWORD *)(a3 + 8);
          if ( v22 )
          {
            v23 = qalloc_or_throw(8 * v22);
            *(_QWORD *)v21 = v23;
            *((_QWORD *)v21 + 2) = v22;
            memcpy(v23, *(const void **)a3, 8 * v22);
            *((_QWORD *)v21 + 1) = v22;
          }
          if ( !v19 )
            break;
          v11 = (char *)a1->__align;
          --v19;
        }
      }
      goto LABEL_6;
    }
    v14 = *(_QWORD *)(a3 + 8);
    if ( v14 )
    {
      v15 = qalloc_or_throw(8 * v14);
      v16 = *(const void **)a3;
      v17 = v15;
      memcpy(v15, v16, 8 * v14);
      if ( *(&a1->__align + 2) >= a2 )
        goto LABEL_24;
    }
    else
    {
      v17 = nullptr;
      if ( v12 >= a2 )
      {
LABEL_24:
        v24 = *(&a1->__align + 1);
        if ( v24 < a2 )
        {
          v25 = a2 - v24;
          v26 = 24 * v24;
          do
          {
            v27 = a1->__align;
            v28 = (char *)(a1->__align + v26);
            *(_QWORD *)v28 = 0;
            *((_QWORD *)v28 + 1) = 0;
            *((_QWORD *)v28 + 2) = 0;
            if ( v14 )
            {
              v29 = qalloc_or_throw(8 * v14);
              v30 = (_QWORD *)(v27 + v26);
              *v30 = v29;
              v30[2] = v14;
              memcpy(v29, v17, 8 * v14);
              v30[1] = v14;
            }
            --v25;
            v26 += 24;
          }
          while ( v25 );
        }
        *(&a1->__align + 1) = a2;
        if ( v17 )
          qfree(v17);
        return;
      }
    }
    a1->__align = (__int64)qvector_reserve(a1, (void *)a1->__align, a2, 0x18u);
    goto LABEL_24;
  }
}
