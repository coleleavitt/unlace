/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CEE4
// Address: 0x000000000005CEE4

//----- (000000000005CEE4) ----------------------------------------------------
__int64 __fastcall sub_5CEE4(_QWORD *a1, __int64 a2)
{
  __int64 v3; // x8
  __int64 v4; // x23
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x8
  __int64 v7; // x9
  __int128 v8; // q0
  __int64 v9; // x8
  __int64 v10; // x24
  size_t v11; // x20
  __int64 v12; // x8
  pthread_mutex_t dest; // [xsp+0h] [xbp-60h] BYREF

  dest.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = a1[2];
  v4 = a1[5];
  v5 = a1[9];
  if ( v3 )
    v6 = v3 - 1;
  else
    v6 = 0;
  if ( v4 < 0 )
  {
    if ( ((v6 + v4 + 1) & ~((__int64)(v6 + v4 + 1) >> 63)) <= v6 )
      v4 = (v6 + v4 + 1) & ~((__int64)(v6 + v4 + 1) >> 63);
    else
      v4 = v6;
    if ( (v5 & 0x8000000000000000LL) == 0 )
      goto LABEL_6;
  }
  else if ( (v5 & 0x8000000000000000LL) == 0 )
  {
    goto LABEL_6;
  }
  v5 = (v6 + v5 + 1) & ~((__int64)(v6 + v5 + 1) >> 63);
  if ( v5 > v6 )
    v5 = v6;
LABEL_6:
  v7 = v5 - v4;
  v8 = 0u;
  memset(&dest, 0, 24);
  if ( v7 < 1 || (v9 = v6 - v4, v9 < 1) )
  {
    v12 = 0;
  }
  else
  {
    v10 = a1[1];
    if ( v7 <= v9 )
      v11 = v7;
    else
      v11 = v9;
    dest.__align = (__int64)qvector_reserve(&dest, nullptr, v11 + 1, 1u);
    *(&dest.__align + 1) = v11 + 1;
    *(_BYTE *)(dest.__align + v11) = 0;
    memmove((void *)dest.__align, (const void *)(v10 + v4), v11);
    v8 = *(_OWORD *)&dest.__lock;
    v12 = *(&dest.__align + 2);
  }
  *(_OWORD *)(a2 + 8) = v8;
  *(_QWORD *)(a2 + 24) = v12;
  *(_BYTE *)a2 = 7;
  return 0;
}
// 5CF5C: conditional instruction was optimized away because x20.8>=1
