/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40698
// Address: 0x0000000000040698

//----- (0000000000040698) ----------------------------------------------------
__int64 __fastcall sub_40698(pthread_mutex_t *a1, __int64 a2, int a3)
{
  __int64 v4; // x19
  int64x2_t v6; // q0
  __int64 v7; // x9
  __int64 v8; // x8
  __int64 v9; // x10
  __int64 v10; // x11
  __int64 v11; // x12
  unsigned __int64 v12; // x9
  __int64 v13; // x0
  __int64 v14; // x8
  __int64 v15; // x9
  _QWORD v17[2]; // [xsp+10h] [xbp-B0h] BYREF
  char v18; // [xsp+20h] [xbp-A0h]
  __int128 v19; // [xsp+24h] [xbp-9Ch]
  __int128 v20; // [xsp+34h] [xbp-8Ch]
  __int128 v21; // [xsp+44h] [xbp-7Ch]
  int v22; // [xsp+54h] [xbp-6Ch]
  __int64 v23; // [xsp+58h] [xbp-68h]

  v4 = (__int64)a1;
  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1[48].__size[14] && !a1[46].__size[13] )
  {
    if ( !under_debugger )
      a1 = interr(30059);
    __break(1u);
    sub_39134(a1);
  }
  do
  {
    while ( !*(_QWORD *)(v4 + 160) )
    {
      v17[0] = 0xFFFFFFFFLL;
      v17[1] = -1;
      v18 = 0;
      v20 = 0u;
      v21 = 0u;
      v19 = 0u;
      v22 = 0;
      if ( !(unsigned int)sub_3FA98(v4, (__int64)v17, a3) )
      {
        free_debug_event((__int64)v17);
        return 0;
      }
      if ( (v19 & 0xFFFFFFF) != 0 )
      {
        v8 = *(_QWORD *)(v4 + 128);
        v9 = *(_QWORD *)(v4 + 152);
        v10 = *(_QWORD *)(v4 + 160);
        if ( *(_QWORD *)(v4 + 136) == v8 )
          v11 = 0;
        else
          v11 = 56 * ((*(_QWORD *)(v4 + 136) - v8) >> 3) - 1;
        v12 = v10 + v9;
        if ( v11 == v10 + v9 )
        {
          sub_4825C(v4 + 120);
          v8 = *(_QWORD *)(v4 + 128);
          v12 = *(_QWORD *)(v4 + 152) + *(_QWORD *)(v4 + 160);
        }
        v13 = *(_QWORD *)(v8 + 8 * (v12 / 0x38)) + 72 * (v12 % 0x38);
        *(_QWORD *)v13 = 0xFFFFFFFFLL;
        *(_QWORD *)(v13 + 8) = -1;
        *(_BYTE *)(v13 + 16) = 0;
        *(_DWORD *)(v13 + 20) = 0;
        copy_debug_event(v13, (__int64)v17);
        v14 = *(_QWORD *)(v4 + 160);
        *(_BYTE *)(v4 + 1932) = 0;
        *(_QWORD *)(v4 + 160) = v14 + 1;
      }
      free_debug_event((__int64)v17);
    }
    copy_debug_event(
      a2,
      *(_QWORD *)(*(_QWORD *)(v4 + 128) + 8 * (*(_QWORD *)(v4 + 152) / 0x38uLL))
    + 72 * (*(_QWORD *)(v4 + 152) % 0x38uLL));
    free_debug_event(
      *(_QWORD *)(*(_QWORD *)(v4 + 128) + 8 * (*(_QWORD *)(v4 + 152) / 0x38uLL))
    + 72 * (*(_QWORD *)(v4 + 152) % 0x38uLL));
    v6 = vaddq_s64(*(int64x2_t *)(v4 + 152), (int64x2_t)xmmword_F1800);
    *(int64x2_t *)(v4 + 152) = v6;
    if ( v6.n128_u64[0] >= 0x70 )
    {
      operator delete(**(void ***)(v4 + 128));
      v7 = *(_QWORD *)(v4 + 152) - 56LL;
      *(_QWORD *)(v4 + 128) += 8LL;
      *(_QWORD *)(v4 + 152) = v7;
    }
  }
  while ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 0 );
  v15 = *(_QWORD *)(v4 + 360);
  *(_BYTE *)(v4 + 1934) = 1;
  if ( !v15 )
    *(_BYTE *)(v4 + 1933) = 0;
  if ( *(_QWORD *)(v4 + 160) )
    return 2;
  else
    return 1;
}
// F1800: using guessed type __int128 xmmword_F1800;
// 168DF0: using guessed type char under_debugger;
