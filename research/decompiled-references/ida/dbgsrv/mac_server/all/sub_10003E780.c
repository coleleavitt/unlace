/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003E780
// Address: 0x000000010003E780

//----- (000000010003E780) ----------------------------------------------------
char __fastcall sub_10003E780(__int64 a1)
{
  pthread_mutex_t *v2; // r14
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rax
  char v6; // r14
  int v7; // eax
  __int64 v8; // rsi
  char *v9; // rax
  char *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int8 v21[8]; // [rsp+8h] [rbp-58h] BYREF
  void *v22[2]; // [rsp+10h] [rbp-50h]
  __int64 v23; // [rsp+20h] [rbp-40h]
  unsigned __int8 v24[8]; // [rsp+28h] [rbp-38h] BYREF
  void *__p[2]; // [rsp+30h] [rbp-30h]
  __int64 v26; // [rsp+40h] [rbp-20h]

  v2 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v3 = *(_QWORD *)(a1 + 104);
  if ( !v3 || (v4 = *(_DWORD *)(v3 + 136), v4 <= 0) )
  {
    if ( under_debugger != 1 )
      interr(0x1E7u);
    BUG();
  }
  *(_DWORD *)(v3 + 136) = v4 - 1;
  qmutex_unlock(v2);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 == *(_DWORD *)(a1 + 96) + 1 )
    goto LABEL_26;
  v21[0] = 2;
  *(_OWORD *)v22 = 0;
  v23 = 0;
  if ( (unsigned int)move_idcv(v21, (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v5 - 32)) )
    goto LABEL_5;
  v7 = *(_DWORD *)(a1 + 96);
  if ( v21[0] == 10 && SLODWORD(v22[1]) >= v7 )
  {
    if ( !deref_idcv(v21, 2) )
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
    *(_OWORD *)__p = 0;
    v26 = 0;
    sub_10002E5F0(a1 + 24, v7, v24);
    if ( v24[0] == 5 )
    {
      sub_1000380B0((unsigned __int8 **)__p[0], v24);
    }
    else if ( v24[0] == 7 && __p[0] )
    {
      __p[1] = nullptr;
      qfree(__p[0]);
    }
    v8 = *(_QWORD *)(a1 + 32);
  }
  v9 = *(char **)(a1 + 24);
  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v8 + 1) )
  {
    v9 = (char *)qvector_reserve(a1 + 24, *(void **)(a1 + 24), v8 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v9;
    v8 = *(_QWORD *)(a1 + 32);
  }
  v10 = &v9[32 * v8];
  *v10 = 2;
  *(_OWORD *)(v10 + 8) = 0;
  *((_QWORD *)v10 + 3) = 0;
  ++*(_QWORD *)(a1 + 32);
  v6 = 1;
  move_idcv((unsigned __int8 *)v10, v21);
LABEL_20:
  if ( v21[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)v22[0], v21);
  }
  else if ( v21[0] == 7 && v22[0] )
  {
    v22[1] = nullptr;
    qfree(v22[0]);
  }
  if ( !v6 )
    return 0;
LABEL_26:
  v11 = *(_QWORD *)(a1 + 80);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 32);
    v13 = *(_QWORD *)(a1 + 72);
    v14 = v11 - 1;
    do
    {
      if ( v12 > *(int *)(v13 + 4 * v14) )
        break;
      *(_QWORD *)(a1 + 80) = v14;
    }
    while ( v14-- != 0 );
  }
  v16 = *(_QWORD *)(a1 + 48);
  v17 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(v16 + 24 * v17 - 8);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v16 + 24 * v17 - 12);
  *(_QWORD *)(a1 + 112) = *(int *)(v16 + 24 * v17 - 16);
  v18 = *(_QWORD *)(v16 + 24 * v17 - 24);
  *(_QWORD *)(a1 + 104) = v18;
  if ( v17 )
    *(_QWORD *)(a1 + 56) = v17 - 1;
  v19 = v18 + 32;
  if ( !v18 )
    v19 = 0;
  *(_QWORD *)(a1 + 128) = v19;
  return 1;
}
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
// 1000AE23D: using guessed type char under_debugger;
