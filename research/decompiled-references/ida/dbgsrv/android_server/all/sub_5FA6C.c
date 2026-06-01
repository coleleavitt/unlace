/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FA6C
// Address: 0x000000000005FA6C

//----- (000000000005FA6C) ----------------------------------------------------
__int64 __fastcall sub_5FA6C(__int64 a1)
{
  __int64 v2; // x21
  __int64 v3; // x8
  pthread_mutex_t *v5; // x0
  char *align; // x0
  pthread_mutex_t *v7; // x0
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x8
  __int64 v13[5]; // [xsp+8h] [xbp-58h] BYREF

  v13[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)(a1 + 192);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    if ( v3 + *(_DWORD *)(a1 + 448) + 1 != *(_QWORD *)(a1 + 144) )
      return set_qerrno(0x4F4u);
  }
  else
  {
    *(_DWORD *)(a1 + 448) = *(_DWORD *)(a1 + 144) - 1;
    v3 = *(_QWORD *)(v2 + 72);
  }
  v5 = (pthread_mutex_t *)(v2 + 64);
  if ( *(_QWORD *)(v2 + 80) >= (unsigned __int64)(v3 + 1) )
  {
    align = (char *)v5->__align;
  }
  else
  {
    align = (char *)qvector_reserve(v5, *(void **)(v2 + 64), v3 + 1, 0x20u);
    v3 = *(_QWORD *)(v2 + 72);
    *(_QWORD *)(v2 + 64) = align;
  }
  v7 = (pthread_mutex_t *)&align[32 * v3];
  v7->__size[0] = 2;
  *(&v7->__align + 1) = 0;
  *(&v7->__align + 2) = 0;
  v7->__list.__prev = nullptr;
  ++*(_QWORD *)(v2 + 72);
  if ( *(_QWORD *)(a1 + 432) != 1 )
  {
    if ( !under_debugger )
      v7 = interr(1437);
    __break(1u);
    sub_39134(v7);
  }
  swap_idcvs((__int128 *)&v7->__lock, *(__int128 **)(a1 + 424));
  v8 = *(_QWORD *)(a1 + 424);
  v9 = *(_QWORD *)(a1 + 432);
  LOBYTE(v13[0]) = 2;
  memset(&v13[1], 0, 24);
  copy_idcv((unsigned __int8 *)v13, (unsigned __int8 *)(v8 + 32 * v9 - 32));
  v10 = *(_QWORD *)(a1 + 432);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 424);
    v12 = v10 - 1;
    *(_QWORD *)(a1 + 432) = v12;
    free_idcv((__int64 *)(v11 + 32 * v12));
  }
  free_idcv(v13);
  return 0;
}
// 168DF0: using guessed type char under_debugger;
