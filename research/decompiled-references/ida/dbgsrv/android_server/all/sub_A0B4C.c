/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0B4C
// Address: 0x00000000000A0B4C

//----- (00000000000A0B4C) ----------------------------------------------------
void __fastcall sub_A0B4C(pthread_mutex_t *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x22
  __int64 v6; // x21
  unsigned __int64 v7; // x23
  char *align; // x24
  __int64 v9; // x25
  void *v10; // x0
  char *v11; // x1
  unsigned __int64 v12; // x8
  size_t v14; // x22
  __int64 v15; // x23
  void *v16; // x0
  const void *v17; // x1
  void *v18; // x21
  char *v19; // x0
  unsigned __int64 v20; // x23
  __int64 i; // x24
  __int64 v22; // x8
  char *v23; // x25
  size_t v24; // x22
  void *v25; // x0
  unsigned __int64 v26; // x8
  unsigned __int64 v27; // x24
  __int64 v28; // x25
  __int64 v29; // x26
  char *v30; // x8
  void *v31; // x0
  _QWORD *v32; // x26

  v3 = *(&a1->__align + 1);
  if ( v3 > a2 )
  {
    v6 = 32 * a2;
    v7 = a2;
    do
    {
      align = (char *)a1->__align;
      v9 = a1->__align + v6;
      v10 = *(void **)(v9 + 8);
      if ( v10 )
      {
        *(_QWORD *)(v9 + 16) = 0;
        qfree(v10);
        *(_QWORD *)(v9 + 8) = 0;
        *(_QWORD *)&align[v6 + 24] = 0;
      }
      ++v7;
      v6 += 32;
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
    if ( a1->__align > a3 || (unsigned __int64)&v11[32 * v12] <= a3 )
    {
      if ( v12 < a2 )
      {
        v19 = (char *)qvector_reserve(a1, v11, a2, 0x20u);
        v3 = *(&a1->__align + 1);
        v11 = v19;
        a1->__align = (__int64)v19;
      }
      if ( v3 < a2 )
      {
        v20 = a2 - 1 - v3;
        for ( i = 32 * v3; ; i += 32 )
        {
          v22 = *(_QWORD *)a3;
          v23 = &v11[i];
          *((_QWORD *)v23 + 2) = 0;
          *((_QWORD *)v23 + 3) = 0;
          *(_QWORD *)v23 = v22;
          *((_QWORD *)v23 + 1) = 0;
          v24 = *(_QWORD *)(a3 + 16);
          if ( v24 )
          {
            v25 = qalloc_or_throw(*(_QWORD *)(a3 + 16));
            *((_QWORD *)v23 + 1) = v25;
            *((_QWORD *)v23 + 3) = v24;
            memcpy(v25, *(const void **)(a3 + 8), v24);
            *((_QWORD *)v23 + 2) = v24;
          }
          if ( !v20 )
            break;
          v11 = (char *)a1->__align;
          --v20;
        }
      }
      goto LABEL_6;
    }
    v14 = *(_QWORD *)(a3 + 16);
    v15 = *(_QWORD *)a3;
    if ( v14 )
    {
      v16 = qalloc_or_throw(*(_QWORD *)(a3 + 16));
      v17 = *(const void **)(a3 + 8);
      v18 = v16;
      memcpy(v16, v17, v14);
      if ( *(&a1->__align + 2) >= a2 )
        goto LABEL_24;
    }
    else
    {
      v18 = nullptr;
      if ( v12 >= a2 )
      {
LABEL_24:
        v26 = *(&a1->__align + 1);
        if ( v26 < a2 )
        {
          v27 = a2 - v26;
          v28 = 32 * v26;
          do
          {
            v29 = a1->__align;
            v30 = (char *)(a1->__align + v28);
            *((_QWORD *)v30 + 2) = 0;
            *((_QWORD *)v30 + 3) = 0;
            *(_QWORD *)v30 = v15;
            *((_QWORD *)v30 + 1) = 0;
            if ( v14 )
            {
              v31 = qalloc_or_throw(v14);
              v32 = (_QWORD *)(v29 + v28);
              v32[1] = v31;
              v32[3] = v14;
              memcpy(v31, v18, v14);
              v32[2] = v14;
            }
            --v27;
            v28 += 32;
          }
          while ( v27 );
        }
        *(&a1->__align + 1) = a2;
        if ( v18 )
          qfree(v18);
        return;
      }
    }
    a1->__align = (__int64)qvector_reserve(a1, (void *)a1->__align, a2, 0x20u);
    goto LABEL_24;
  }
}
