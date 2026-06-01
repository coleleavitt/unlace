/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74984
// Address: 0x0000000000074984

//----- (0000000000074984) ----------------------------------------------------
__int64 __fastcall sub_74984(__int64 a1)
{
  pthread_mutex_t *v2; // x20
  __int64 v3; // x8
  int v4; // w9
  __int64 v5; // x8
  __int64 v6; // x10
  __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int64 v9; // x10
  __int64 v10; // x10
  __int64 v11; // x9
  __int64 v12; // x9
  __int64 v13; // x8
  int v15; // w0
  void *v16; // x0
  unsigned __int64 v17; // x1
  void **v18; // x20
  char *v19; // x0
  char *v20; // x0
  unsigned __int8 v21[8]; // [xsp+8h] [xbp-68h] BYREF
  void *ptr; // [xsp+10h] [xbp-60h]
  __int64 v23; // [xsp+18h] [xbp-58h]
  __int64 v24; // [xsp+20h] [xbp-50h]
  unsigned __int8 v25[8]; // [xsp+28h] [xbp-48h] BYREF
  void *v26; // [xsp+30h] [xbp-40h]
  __int64 v27; // [xsp+38h] [xbp-38h]
  __int64 v28; // [xsp+40h] [xbp-30h]
  __int64 v29; // [xsp+48h] [xbp-28h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (pthread_mutex_t *)qword_166AA8;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v3 = *(_QWORD *)(a1 + 104);
  if ( !v3 || (v4 = *(_DWORD *)(v3 + 136), v4 <= 0) )
  {
    if ( !under_debugger )
      interr(487);
    __break(1u);
  }
  *(_DWORD *)(v3 + 136) = v4 - 1;
  qmutex_unlock(v2);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 == *(_DWORD *)(a1 + 96) + 1 )
    goto LABEL_4;
  v21[0] = 2;
  v23 = 0;
  v24 = 0;
  ptr = nullptr;
  move_idcv(v21, (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v5 - 32));
  if ( v15 )
  {
    if ( v21[0] != 5 )
    {
      if ( v21[0] != 7 )
        return 0;
      v16 = ptr;
      if ( !ptr )
        return 0;
      goto LABEL_17;
    }
    goto LABEL_26;
  }
  if ( v21[0] == 10 && (int)v23 >= *(_DWORD *)(a1 + 96) && !deref_idcv(v21, 2) )
  {
    if ( v21[0] != 5 )
    {
      if ( v21[0] != 7 )
        return 0;
      v16 = ptr;
      if ( !ptr )
        return 0;
LABEL_17:
      v23 = 0;
      qfree(v16);
      ptr = nullptr;
      v24 = 0;
      return 0;
    }
LABEL_26:
    sub_6F17C((__int64)ptr, v21);
    return 0;
  }
  v17 = *(int *)(a1 + 96);
  v18 = (void **)(a1 + 24);
  if ( *(_QWORD *)(a1 + 32) != v17 )
  {
    v25[0] = 2;
    v27 = 0;
    v28 = 0;
    v26 = nullptr;
    sub_65F94((pthread_mutex_t *)(a1 + 24), v17, v25);
    if ( v25[0] == 5 )
    {
      sub_6F17C((__int64)v26, v25);
    }
    else if ( v25[0] == 7 && v26 )
    {
      v27 = 0;
      qfree(v26);
      v26 = nullptr;
      v28 = 0;
    }
    v17 = *(_QWORD *)(a1 + 32);
  }
  if ( *(_QWORD *)(a1 + 40) >= v17 + 1 )
  {
    v19 = (char *)*v18;
  }
  else
  {
    v19 = (char *)qvector_reserve((pthread_mutex_t *)(a1 + 24), *v18, v17 + 1, 0x20u);
    v17 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 24) = v19;
  }
  v20 = &v19[32 * v17];
  *v20 = 2;
  *((_QWORD *)v20 + 1) = 0;
  *((_QWORD *)v20 + 2) = 0;
  *((_QWORD *)v20 + 3) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv((unsigned __int8 *)v20, v21);
  if ( v21[0] == 5 )
  {
    sub_6F17C((__int64)ptr, v21);
    goto LABEL_4;
  }
  if ( v21[0] != 7 || !ptr )
  {
LABEL_4:
    v6 = *(_QWORD *)(a1 + 80);
    if ( v6 )
      goto LABEL_5;
    goto LABEL_8;
  }
  v23 = 0;
  qfree(ptr);
  ptr = nullptr;
  v24 = 0;
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
  {
LABEL_5:
    v7 = *(_QWORD *)(a1 + 72);
    v8 = *(_QWORD *)(a1 + 32);
    v9 = v6 - 1;
    do
    {
      if ( v8 > *(int *)(v7 + 4 * v9) )
        break;
      *(_QWORD *)(a1 + 80) = v9--;
    }
    while ( v9 != -1 );
  }
LABEL_8:
  v10 = *(_QWORD *)(a1 + 56);
  v11 = *(_QWORD *)(a1 + 48) + 24 * (v10 - 1);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(v11 + 16);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v11 + 12);
  *(_QWORD *)(a1 + 112) = *(int *)(v11 + 8);
  v12 = *(_QWORD *)v11;
  *(_QWORD *)(a1 + 104) = v12;
  if ( v10 )
    *(_QWORD *)(a1 + 56) = v10 - 1;
  v13 = v12 + 32;
  if ( !v12 )
    v13 = 0;
  *(_QWORD *)(a1 + 128) = v13;
  return 1;
}
// 74A94: variable 'v15' is possibly undefined
// 166AA8: using guessed type __int64 qword_166AA8;
// 168DF0: using guessed type char under_debugger;
