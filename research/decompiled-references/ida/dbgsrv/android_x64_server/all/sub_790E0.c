/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_790E0
// Address: 0x00000000000790E0

//----- (00000000000790E0) ----------------------------------------------------
char __fastcall sub_790E0(__int64 a1, double a2, __m128 a3)
{
  pthread_mutex_t *v4; // r14
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v17; // rdi
  char **v18; // r14
  unsigned __int64 v19; // rsi
  char *v20; // rax
  char *v21; // rdi
  char v22[8]; // [rsp+0h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+8h] [rbp-50h]
  __int64 v24; // [rsp+18h] [rbp-40h]
  char v25[8]; // [rsp+20h] [rbp-38h] BYREF
  void *v26[2]; // [rsp+28h] [rbp-30h]
  __int64 v27; // [rsp+38h] [rbp-20h]
  unsigned __int64 v28; // [rsp+40h] [rbp-18h]

  v28 = __readfsqword(0x28u);
  v4 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v5 = *(_QWORD *)(a1 + 104);
  if ( !v5 || (v6 = *(_DWORD *)(v5 + 136), v6 <= 0) )
  {
    if ( !(_BYTE)under_debugger )
      interr(487);
    BUG();
  }
  *(_DWORD *)(v5 + 136) = v6 - 1;
  qmutex_unlock(v4);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 == *(_DWORD *)(a1 + 96) + 1 )
    goto LABEL_4;
  v22[0] = 2;
  *(_OWORD *)ptr = 0;
  v24 = 0;
  if ( (unsigned int)move_idcv(v22, (char *)(*(_QWORD *)(a1 + 24) + 32 * v7 - 32), 0.0, a3) )
  {
    if ( v22[0] != 5 )
    {
      if ( v22[0] != 7 )
        return 0;
      v17 = ptr[0];
      if ( !ptr[0] )
        return 0;
      goto LABEL_17;
    }
    goto LABEL_26;
  }
  if ( v22[0] == 10 && SLODWORD(ptr[1]) >= *(_DWORD *)(a1 + 96) && !deref_idcv(v22, 2, 0.0, a3) )
  {
    if ( v22[0] != 5 )
    {
      if ( v22[0] != 7 )
        return 0;
      v17 = ptr[0];
      if ( !ptr[0] )
        return 0;
LABEL_17:
      ptr[1] = nullptr;
      qfree(v17);
      ptr[0] = nullptr;
      v24 = 0;
      return 0;
    }
LABEL_26:
    sub_72DD0((char **)ptr[0], v22, 0.0, a3);
    return 0;
  }
  v18 = (char **)(a1 + 24);
  v19 = *(int *)(a1 + 96);
  if ( *(_QWORD *)(a1 + 32) != v19 )
  {
    v25[0] = 2;
    *(_OWORD *)v26 = 0;
    v27 = 0;
    sub_68BE0(a1 + 24, v19, v25, 0.0, a3);
    if ( v25[0] == 5 )
    {
      sub_72DD0((char **)v26[0], v25, 0.0, a3);
    }
    else if ( v25[0] == 7 && v26[0] )
    {
      v26[1] = nullptr;
      qfree(v26[0]);
      v26[0] = nullptr;
      v27 = 0;
    }
    v19 = *(_QWORD *)(a1 + 32);
  }
  if ( *(_QWORD *)(a1 + 40) >= v19 + 1 )
  {
    v20 = *v18;
  }
  else
  {
    v20 = (char *)qvector_reserve(a1 + 24, *v18, v19 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v20;
    v19 = *(_QWORD *)(a1 + 32);
  }
  v21 = &v20[32 * v19];
  *v21 = 2;
  *(_OWORD *)(v21 + 8) = 0;
  *((_QWORD *)v21 + 3) = 0;
  *((_QWORD *)v21 + 1) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv(v21, v22, 0.0, a3);
  if ( v22[0] == 5 )
  {
    sub_72DD0((char **)ptr[0], v22, 0.0, a3);
  }
  else if ( v22[0] == 7 && ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v24 = 0;
  }
LABEL_4:
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v10 = *(_QWORD *)(a1 + 72);
    v11 = v8 - 1;
    do
    {
      if ( v9 > *(int *)(v10 + 4 * v11) )
        break;
      *(_QWORD *)(a1 + 80) = v11--;
    }
    while ( v11 != -1 );
  }
  v12 = *(_QWORD *)(a1 + 48);
  v13 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(v12 + 24 * (v13 - 1) + 16);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v12 + 24 * (v13 - 1) + 12);
  *(_QWORD *)(a1 + 112) = *(int *)(v12 + 24 * (v13 - 1) + 8);
  v14 = *(_QWORD *)(v12 + 24 * (v13 - 1));
  *(_QWORD *)(a1 + 104) = v14;
  if ( v13 )
    *(_QWORD *)(a1 + 56) = v13 - 1;
  v15 = v14 + 32;
  if ( !v14 )
    v15 = 0;
  *(_QWORD *)(a1 + 128) = v15;
  return 1;
}
// 158B40: using guessed type __int64 under_debugger;
