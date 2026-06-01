/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50FE8
// Address: 0x0000000000050FE8

//----- (0000000000050FE8) ----------------------------------------------------
__int64 __fastcall sub_50FE8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x22
  __int64 v13; // x8
  _DWORD *v14; // x9
  _DWORD *v15; // x21
  pthread_mutex_t ptr; // [xsp+0h] [xbp-50h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a2 + 8) )
  {
    sub_5A570((__int64 *)(a2 + 8), 0);
    qfree(*(void **)(a2 + 8));
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 24) = 0;
  }
  if ( *(_BYTE *)(a1 + 248) )
  {
    v10 = *(_QWORD *)(a1 + 120);
    if ( v10 << 6 )
    {
      v11 = *(_QWORD *)(a1 + 112);
      v12 = v11;
      do
      {
        if ( *(_DWORD *)(v12 + 4) == 7 )
        {
          memset(&ptr, 0, 24);
          sub_511B8((__int64 *)(a1 + 80), &ptr, v12);
          sub_51470((_QWORD *)a2, &ptr.__align);
          if ( ptr.__align )
          {
            *(&ptr.__align + 1) = 0;
            qfree((void *)ptr.__align);
            ptr.__align = 0;
            *(&ptr.__align + 2) = 0;
          }
          v11 = *(_QWORD *)(a1 + 112);
          v10 = *(_QWORD *)(a1 + 120);
        }
        v12 += 64;
      }
      while ( v12 != v11 + (v10 << 6) );
    }
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    v13 = *(_QWORD *)(a1 + 40);
    if ( 56 * v13 )
    {
      v14 = *(_DWORD **)(a1 + 32);
      v15 = v14;
      do
      {
        if ( *v15 == 4 )
        {
          memset(&ptr, 0, 24);
          sub_51644(a1, (__int64)&ptr, (__int64)v15, a4, a5, a6, a7, a8);
          sub_51470((_QWORD *)a2, &ptr.__align);
          if ( ptr.__align )
          {
            *(&ptr.__align + 1) = 0;
            qfree((void *)ptr.__align);
            ptr.__align = 0;
            *(&ptr.__align + 2) = 0;
          }
          v14 = *(_DWORD **)(a1 + 32);
          v13 = *(_QWORD *)(a1 + 40);
        }
        v15 += 14;
      }
      while ( v15 != &v14[14 * v13] );
    }
  }
  *(_BYTE *)(a2 + 32) = 1;
  return 1;
}
// 510F4: variable 'a4' is possibly undefined
// 510F4: variable 'a5' is possibly undefined
// 510F4: variable 'a6' is possibly undefined
// 510F4: variable 'a7' is possibly undefined
// 510F4: variable 'a8' is possibly undefined
