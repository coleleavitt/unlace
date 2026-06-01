/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D008
// Address: 0x000000000009D008

//----- (000000000009D008) ----------------------------------------------------
__int64 __fastcall sub_9D008(__int64 *a1, pthread_mutex_t *a2, __int64 a3)
{
  _QWORD *v3; // x20
  unsigned __int64 v7; // x23
  unsigned __int64 v8; // x21
  __int64 v9; // x22
  unsigned __int64 i; // x24
  __int64 align; // x25
  __int64 v12; // x26
  void *v13; // x0
  unsigned __int64 v14; // x8
  __int64 v15; // x26
  __int64 v16; // x8
  _QWORD *v17; // x0
  _QWORD *v18; // x9
  pthread_mutex_t *v19; // x22
  __int64 v20; // x10
  unsigned __int64 v21; // x9
  __int64 v22; // x11
  __int64 v23; // x10
  __int64 v24; // x9
  unsigned __int64 v25; // x24
  _QWORD *v26; // x27
  const void *v27; // x25
  void *v28; // x1

  v3 = a1 + 35;
  sub_39980(a1 + 35, 0);
  (*(void (__fastcall **)(__int64 *, _QWORD *, __int64))(*a1 + 24))(a1, v3, a3);
  v7 = *(&a2->__align + 1);
  v8 = a1[36];
  if ( v7 )
  {
    v9 = 0;
    for ( i = 0; i < v7; ++i )
    {
      align = a2->__align;
      v12 = a2->__align + v9;
      v13 = *(void **)(v12 + 8);
      if ( v13 )
      {
        *(_QWORD *)(v12 + 16) = 0;
        qfree(v13);
        *(_QWORD *)(v12 + 8) = 0;
        *(_QWORD *)(align + v9 + 24) = 0;
      }
      v9 += 32;
    }
  }
  v14 = *(&a2->__align + 2);
  *(&a2->__align + 1) = 0;
  if ( v14 >= v8 )
  {
    if ( !v8 )
      return 1;
  }
  else
  {
    a2->__align = (__int64)qvector_reserve(a2, (void *)a2->__align, v8, 0x20u);
  }
  v15 = 0;
  do
  {
    v16 = *(&a2->__align + 1);
    if ( *(&a2->__align + 2) >= (unsigned __int64)(v16 + 1) )
    {
      v17 = (_QWORD *)a2->__align;
    }
    else
    {
      v17 = qvector_reserve(a2, (void *)a2->__align, v16 + 1, 0x20u);
      v16 = *(&a2->__align + 1);
      a2->__align = (__int64)v17;
    }
    v18 = &v17[4 * v16];
    v18[1] = 0;
    v19 = (pthread_mutex_t *)(v18 + 1);
    v18[2] = 0;
    v18[3] = 0;
    ++*(&a2->__align + 1);
    v20 = *v3 + v15;
    *(_DWORD *)v18 = *(_DWORD *)v20;
    v21 = *(_QWORD *)(v20 + 48);
    v22 = v20 + 40;
    v23 = v20 + 8;
    if ( v21 >= 2 )
      v24 = v22;
    else
      v24 = v23;
    if ( v19 != (pthread_mutex_t *)v24 )
    {
      v25 = *(_QWORD *)(v24 + 8);
      if ( v25 < 2 )
      {
        v17[4 * v16 + 2] = 0;
      }
      else
      {
        v26 = &v17[4 * v16];
        v27 = *(const void **)v24;
        v28 = (void *)v19->__align;
        if ( v26[3] < v25 )
        {
          v28 = qvector_reserve(v19, v28, *(_QWORD *)(v24 + 8), 1u);
          v19->__align = (__int64)v28;
        }
        v26[2] = v25;
        memmove(v28, v27, v25 - 1);
        *(_BYTE *)(v19->__align + v25 - 1) = 0;
      }
    }
    --v8;
    v15 += 64;
  }
  while ( v8 );
  return 1;
}
