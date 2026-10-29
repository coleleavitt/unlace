/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100039328
// Address: 0x0000000100039328

//----- (0000000100039328) ----------------------------------------------------
__int64 __fastcall sub_100039328(__int64 a1)
{
  pthread_mutex_t *v2; // x20
  __int64 v3; // x8
  int v4; // w9
  __int64 v5; // x8
  int v6; // w20
  int v7; // w8
  __int64 v8; // x1
  char *v9; // x8
  char *v10; // x0
  __int64 v11; // x10
  __int64 v12; // x8
  unsigned __int64 v13; // x9
  __int64 v14; // x10
  __int64 v15; // x8
  __int64 v16; // x9
  __int64 v17; // x9
  __int64 v18; // x8
  unsigned __int8 v20[8]; // [xsp+8h] [xbp-58h] BYREF
  void *v21; // [xsp+10h] [xbp-50h]
  __int64 v22; // [xsp+18h] [xbp-48h]
  __int64 v23; // [xsp+20h] [xbp-40h]
  unsigned __int8 v24[8]; // [xsp+28h] [xbp-38h] BYREF
  void *v25; // [xsp+30h] [xbp-30h]
  __int64 v26; // [xsp+38h] [xbp-28h]
  __int64 v27; // [xsp+40h] [xbp-20h]

  v2 = (pthread_mutex_t *)qword_1000A57C0;
  qmutex_lock((pthread_mutex_t *)qword_1000A57C0);
  v3 = *(_QWORD *)(a1 + 104);
  if ( !v3 || (v4 = *(_DWORD *)(v3 + 136), v4 <= 0) )
  {
    if ( under_debugger != 1 )
      goto LABEL_38;
    while ( 1 )
    {
      __break(1u);
LABEL_38:
      interr(487);
    }
  }
  *(_DWORD *)(v3 + 136) = v4 - 1;
  qmutex_unlock(v2);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 == *(_DWORD *)(a1 + 96) + 1 )
    goto LABEL_26;
  v20[0] = 2;
  v22 = 0;
  v23 = 0;
  v21 = nullptr;
  if ( (unsigned int)move_idcv(v20, (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v5 - 32)) )
    goto LABEL_5;
  v7 = *(_DWORD *)(a1 + 96);
  if ( v20[0] == 10 && (int)v22 >= v7 )
  {
    if ( !deref_idcv(v20, 2) )
    {
LABEL_5:
      v6 = 0;
      goto LABEL_20;
    }
    v7 = *(_DWORD *)(a1 + 96);
  }
  v8 = v7;
  if ( *(_QWORD *)(a1 + 32) != v7 )
  {
    v24[0] = 2;
    v26 = 0;
    v27 = 0;
    v25 = nullptr;
    sub_10002B940((unsigned __int8 **)(a1 + 24), (unsigned __int8 *)v7, v24);
    if ( v24[0] == 5 )
    {
      sub_10003307C((__int64)v25, v24);
    }
    else if ( v24[0] == 7 && v25 )
    {
      v26 = 0;
      qfree(v25);
    }
    v8 = *(_QWORD *)(a1 + 32);
  }
  v9 = *(char **)(a1 + 24);
  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v8 + 1) )
  {
    v9 = (char *)qvector_reserve((_QWORD *)(a1 + 24), *(_QWORD **)(a1 + 24), v8 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v9;
    v8 = *(_QWORD *)(a1 + 32);
  }
  v10 = &v9[32 * v8];
  *v10 = 2;
  *((_QWORD *)v10 + 2) = 0;
  *((_QWORD *)v10 + 3) = 0;
  *((_QWORD *)v10 + 1) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv((unsigned __int8 *)v10, v20);
  v6 = 1;
LABEL_20:
  if ( v20[0] == 5 )
  {
    sub_10003307C((__int64)v21, v20);
  }
  else if ( v20[0] == 7 && v21 )
  {
    v22 = 0;
    qfree(v21);
  }
  if ( !v6 )
    return 0;
LABEL_26:
  v11 = *(_QWORD *)(a1 + 80);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 72);
    v13 = *(_QWORD *)(a1 + 32);
    v14 = v11 - 1;
    do
    {
      if ( v13 > *(int *)(v12 + 4 * v14) )
        break;
      *(_QWORD *)(a1 + 80) = v14--;
    }
    while ( v14 != -1 );
  }
  v15 = *(_QWORD *)(a1 + 56);
  v16 = *(_QWORD *)(a1 + 48) + 24 * v15;
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(v16 - 8);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v16 - 12);
  *(_QWORD *)(a1 + 112) = *(int *)(v16 - 16);
  v17 = *(_QWORD *)(v16 - 24);
  *(_QWORD *)(a1 + 104) = v17;
  if ( v15 )
    *(_QWORD *)(a1 + 56) = v15 - 1;
  v18 = v17 + 32;
  if ( !v17 )
    v18 = 0;
  *(_QWORD *)(a1 + 128) = v18;
  return 1;
}
// 1000A57C0: using guessed type __int64 qword_1000A57C0;
// 1000A590D: using guessed type char under_debugger;
