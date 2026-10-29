/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97E78
// Address: 0x0000000000097E78

//----- (0000000000097E78) ----------------------------------------------------
void __fastcall sub_97E78(pthread_mutex_t *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x21
  __int64 v6; // x22
  unsigned __int64 v7; // x23
  __int64 v8; // x25
  __int64 v9; // x26
  void *v10; // x0
  unsigned __int64 v12; // x8
  size_t v13; // x22
  __int64 v14; // x25
  void *v15; // x21
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x23
  __int64 v18; // x26
  __int64 align; // x28
  __int64 v20; // x27
  void *v21; // x0
  _QWORD *v22; // x28
  __int128 v23; // [xsp+0h] [xbp-80h]
  int v24; // [xsp+10h] [xbp-70h]

  _ReadStatusReg(TPIDR_EL0);
  v5 = *(&a1->__align + 1);
  if ( v5 <= a2 )
  {
    if ( v5 < a2 )
    {
      if ( a1->__align > a3 || (v12 = *(&a1->__align + 2), a1->__align + 56 * v12 <= a3) )
      {
        sub_98078(a1, a2, (__int64 *)a3);
      }
      else
      {
        v13 = *(_QWORD *)(a3 + 16);
        v14 = *(_QWORD *)a3;
        if ( v13 )
        {
          v15 = qalloc_or_throw(*(_QWORD *)(a3 + 16));
          memcpy(v15, *(const void **)(a3 + 8), v13);
          v12 = *(&a1->__align + 2);
        }
        else
        {
          v15 = nullptr;
        }
        v24 = *(_DWORD *)(a3 + 48);
        v23 = *(_OWORD *)(a3 + 32);
        if ( v12 < a2 )
          a1->__align = (__int64)qvector_reserve(a1, (void *)a1->__align, a2, 0x38u);
        v16 = *(&a1->__align + 1);
        if ( v16 < a2 )
        {
          v17 = a2 - v16;
          v18 = 56 * v16;
          do
          {
            align = a1->__align;
            v20 = a1->__align + v18;
            *(_QWORD *)(v20 + 16) = 0;
            *(_QWORD *)(v20 + 24) = 0;
            *(_QWORD *)v20 = v14;
            *(_QWORD *)(v20 + 8) = 0;
            if ( v13 )
            {
              v21 = qalloc_or_throw(v13);
              v22 = (_QWORD *)(align + v18);
              v22[1] = v21;
              v22[3] = v13;
              memcpy(v21, v15, v13);
              v22[2] = v13;
            }
            --v17;
            v18 += 56;
            *(_DWORD *)(v20 + 48) = v24;
            *(_OWORD *)(v20 + 32) = v23;
          }
          while ( v17 );
        }
        *(&a1->__align + 1) = a2;
        if ( v15 )
          qfree(v15);
      }
    }
  }
  else
  {
    v6 = 56 * a2;
    v7 = a2;
    do
    {
      v8 = a1->__align;
      v9 = a1->__align + v6;
      v10 = *(void **)(v9 + 8);
      if ( v10 )
      {
        *(_QWORD *)(v9 + 16) = 0;
        qfree(v10);
        *(_QWORD *)(v9 + 8) = 0;
        *(_QWORD *)(v8 + v6 + 24) = 0;
      }
      ++v7;
      v6 += 56;
    }
    while ( v7 < v5 );
    *(&a1->__align + 1) = a2;
  }
}
