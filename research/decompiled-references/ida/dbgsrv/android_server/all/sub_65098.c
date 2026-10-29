/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65098
// Address: 0x0000000000065098

//----- (0000000000065098) ----------------------------------------------------
__int64 __fastcall sub_65098(__int64 a1)
{
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 v4; // x8
  unsigned __int64 v5; // x9
  pthread_mutex_t *v6; // x0
  _OWORD *align; // x0
  __int64 v8; // x0
  __int64 v9; // x8
  __int128 v11; // [xsp+0h] [xbp-50h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = *(_QWORD *)(a1 + 368);
  v3 = *(_QWORD *)(a1 + 376) - 1LL;
  v11 = *(_OWORD *)(v2 + 16 * v3);
  v4 = *(_QWORD *)(a1 + 400);
  v5 = *(_QWORD *)(a1 + 408);
  v6 = (pthread_mutex_t *)(a1 + 392);
  if ( v5 >= v4 + 1 )
  {
    align = (_OWORD *)v6->__align;
  }
  else
  {
    align = qvector_reserve(v6, *(void **)(a1 + 392), v4 + 1, 0x10u);
    v4 = *(_QWORD *)(a1 + 400);
    *(_QWORD *)(a1 + 392) = align;
  }
  align[v4] = v11;
  v8 = *(_QWORD *)(a1 + 200);
  ++*(_QWORD *)(a1 + 400);
  ((void (__fastcall *)(__int64, _QWORD, _QWORD))loc_68E54)(
    v8,
    (unsigned int)(*(_DWORD *)(v2 + 16 * v3 + 4) - 4),
    (unsigned int)(*(_DWORD *)(a1 + 208) - *(_DWORD *)(v2 + 16 * v3 + 4)));
  v9 = *(_QWORD *)(a1 + 376);
  if ( v9 )
    *(_QWORD *)(a1 + 376) = v9 - 1;
  return 0;
}
