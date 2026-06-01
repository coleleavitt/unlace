/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98AA0
// Address: 0x0000000000098AA0

//----- (0000000000098AA0) ----------------------------------------------------
void __fastcall sub_98AA0(pthread_mutex_t *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x23
  __int64 v6; // x21
  char *align; // x24
  char *v8; // x25
  void *v9; // x0
  void *v10; // x0
  void *v11; // x0
  char *v12; // x24
  char *v13; // x1
  unsigned __int64 v14; // x8
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x21
  __int64 v18; // x23
  char *v19; // x0
  __int64 v20; // x24
  unsigned __int64 v21; // x23
  void *v22[3]; // [xsp+8h] [xbp-A8h] BYREF
  void *v23; // [xsp+20h] [xbp-90h]
  __int64 v24; // [xsp+28h] [xbp-88h]
  __int64 v25; // [xsp+30h] [xbp-80h]
  void *ptr; // [xsp+38h] [xbp-78h]
  __int64 v27; // [xsp+40h] [xbp-70h]
  __int64 v28; // [xsp+48h] [xbp-68h]
  __int64 v29; // [xsp+58h] [xbp-58h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(&a1->__align + 1);
  if ( v5 > a2 )
  {
    v6 = 80 * a2;
    do
    {
      align = (char *)a1->__align;
      v8 = (char *)(a1->__align + v6);
      v9 = *((void **)v8 + 6);
      if ( v9 )
      {
        *((_QWORD *)v8 + 7) = 0;
        qfree(v9);
        *((_QWORD *)v8 + 6) = 0;
        *(_QWORD *)&align[v6 + 64] = 0;
      }
      v10 = *((void **)v8 + 3);
      if ( v10 )
      {
        *(_QWORD *)&align[v6 + 32] = 0;
        qfree(v10);
        *((_QWORD *)v8 + 3) = 0;
        *(_QWORD *)&align[v6 + 40] = 0;
      }
      v11 = *(void **)&align[v6];
      if ( v11 )
      {
        v12 = &align[v6];
        *((_QWORD *)v12 + 1) = 0;
        qfree(v11);
        *(_QWORD *)v12 = 0;
        *((_QWORD *)v12 + 2) = 0;
      }
      --v5;
      v6 += 80;
    }
    while ( a2 != v5 );
LABEL_10:
    *(&a1->__align + 1) = a2;
    return;
  }
  if ( v5 < a2 )
  {
    v13 = (char *)a1->__align;
    v14 = *(&a1->__align + 2);
    if ( a1->__align > a3 || (unsigned __int64)&v13[80 * v14] <= a3 )
    {
      if ( v14 < a2 )
      {
        v19 = (char *)qvector_reserve(a1, v13, a2, 0x50u);
        v5 = *(&a1->__align + 1);
        v13 = v19;
        a1->__align = (__int64)v19;
      }
      if ( v5 < a2 )
      {
        sub_98D54(&v13[80 * v5], a3);
        if ( v5 + 1 != a2 )
        {
          v20 = 80 * v5 + 80;
          v21 = a2 - 1 - v5;
          do
          {
            sub_98D54((_QWORD *)(a1->__align + v20), a3);
            --v21;
            v20 += 80;
          }
          while ( v21 );
        }
      }
      goto LABEL_10;
    }
    sub_98D54(v22, a3);
    if ( *(&a1->__align + 2) < a2 )
      a1->__align = (__int64)qvector_reserve(a1, (void *)a1->__align, a2, 0x50u);
    v16 = *(&a1->__align + 1);
    if ( v16 < a2 )
    {
      v17 = a2 - v16;
      v18 = 80 * v16;
      do
      {
        sub_98D54((_QWORD *)(a1->__align + v18), (__int64)v22);
        --v17;
        v18 += 80;
      }
      while ( v17 );
    }
    *(&a1->__align + 1) = a2;
    if ( ptr )
    {
      v27 = 0;
      qfree(ptr);
      ptr = nullptr;
      v28 = 0;
    }
    if ( v23 )
    {
      v24 = 0;
      qfree(v23);
      v23 = nullptr;
      v25 = 0;
    }
    if ( v22[0] )
    {
      v22[1] = nullptr;
      qfree(v22[0]);
      v22[0] = nullptr;
      v22[2] = nullptr;
    }
  }
}
