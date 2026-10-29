/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_986BC
// Address: 0x00000000000986BC

//----- (00000000000986BC) ----------------------------------------------------
void __fastcall sub_986BC(pthread_mutex_t *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x23
  __int64 v6; // x21
  unsigned __int64 v7; // x25
  char *align; // x26
  char *v9; // x27
  void *v10; // x0
  char *v11; // x1
  unsigned __int64 v12; // x8
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x21
  __int64 v16; // x23
  __int64 v17; // x0
  char *v18; // x0
  __int64 v19; // x0
  __int64 v20; // x25
  unsigned __int64 v21; // x23
  __int64 v22; // x0
  int v23; // [xsp+8h] [xbp-78h] BYREF
  void *ptr; // [xsp+10h] [xbp-70h]
  __int64 v25; // [xsp+18h] [xbp-68h]
  __int64 v26; // [xsp+20h] [xbp-60h]
  __int64 v27; // [xsp+28h] [xbp-58h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(&a1->__align + 1);
  if ( v5 > a2 )
  {
    v6 = 32 * a2;
    v7 = a2;
    do
    {
      align = (char *)a1->__align;
      if ( *(int *)(a1->__align + v6) >= -1 )
      {
        v9 = &align[v6];
        v10 = *(void **)&align[v6 + 8];
        if ( v10 )
        {
          *((_QWORD *)v9 + 2) = 0;
          qfree(v10);
          *((_QWORD *)v9 + 1) = 0;
          *(_QWORD *)&align[v6 + 24] = 0;
        }
        *(_DWORD *)&align[v6] = -2;
      }
      ++v7;
      v6 += 32;
    }
    while ( v7 < v5 );
LABEL_8:
    *(&a1->__align + 1) = a2;
    return;
  }
  if ( v5 < a2 )
  {
    v11 = (char *)a1->__align;
    v12 = *(&a1->__align + 2);
    if ( a1->__align > a3 || (unsigned __int64)&v11[32 * v12] <= a3 )
    {
      if ( v12 < a2 )
      {
        v18 = (char *)qvector_reserve(a1, v11, a2, 0x20u);
        v5 = *(&a1->__align + 1);
        v11 = v18;
        a1->__align = (__int64)v18;
      }
      if ( v5 < a2 )
      {
        v19 = (__int64)&v11[32 * v5];
        *(_DWORD *)v19 = -2;
        *(_QWORD *)(v19 + 16) = 0;
        *(_QWORD *)(v19 + 24) = 0;
        *(_QWORD *)(v19 + 8) = 0;
        sub_98928(v19, a3);
        if ( v5 + 1 != a2 )
        {
          v20 = 32 * v5 + 32;
          v21 = a2 - 1 - v5;
          do
          {
            v22 = a1->__align + v20;
            *(_DWORD *)v22 = -2;
            *(_QWORD *)(v22 + 16) = 0;
            *(_QWORD *)(v22 + 24) = 0;
            *(_QWORD *)(v22 + 8) = 0;
            sub_98928(v22, a3);
            --v21;
            v20 += 32;
          }
          while ( v21 );
        }
      }
      goto LABEL_8;
    }
    v23 = -2;
    v25 = 0;
    v26 = 0;
    ptr = nullptr;
    sub_98928((__int64)&v23, a3);
    if ( *(&a1->__align + 2) < a2 )
      a1->__align = (__int64)qvector_reserve(a1, (void *)a1->__align, a2, 0x20u);
    v14 = *(&a1->__align + 1);
    if ( v14 < a2 )
    {
      v15 = a2 - v14;
      v16 = 32 * v14;
      do
      {
        v17 = a1->__align + v16;
        *(_DWORD *)v17 = -2;
        *(_QWORD *)(v17 + 16) = 0;
        *(_QWORD *)(v17 + 24) = 0;
        *(_QWORD *)(v17 + 8) = 0;
        sub_98928(v17, (__int64)&v23);
        --v15;
        v16 += 32;
      }
      while ( v15 );
    }
    *(&a1->__align + 1) = a2;
    if ( v23 >= -1 )
    {
      if ( ptr )
      {
        v25 = 0;
        qfree(ptr);
        ptr = nullptr;
        v26 = 0;
      }
      v23 = -2;
    }
  }
}
