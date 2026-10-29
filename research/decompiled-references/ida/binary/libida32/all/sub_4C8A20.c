__int64 __fastcall sub_4C8A20(__int64 a1, unsigned int a2)
{
  pthread_rwlock_t *v3; // rdi
  __int64 *v4; // rax
  __int64 *v5; // rbp
  _DWORD *v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  unsigned int v9; // r13d
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  _QWORD *v13; // rax
  size_t v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r14
  _QWORD *v17; // rax
  size_t v18; // rdx
  unsigned int *v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // r9
  unsigned __int64 v22; // rtt
  __int64 **v23; // r10
  unsigned __int64 v24; // r8
  __int64 *v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  pthread_rwlock_t *v29; // rax
  unsigned int v30; // ebx
  unsigned __int64 v32; // rdx
  _DWORD *v33; // rax
  unsigned __int64 v34; // rdx
  unsigned int v35; // [rsp+8h] [rbp-60h] BYREF
  int v36; // [rsp+Ch] [rbp-5Ch] BYREF
  pthread_rwlock_t *rwlock; // [rsp+10h] [rbp-58h]
  char v38; // [rsp+18h] [rbp-50h]
  unsigned __int64 v39; // [rsp+28h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v3 = *(pthread_rwlock_t **)a1;
  v38 = 0;
  rwlock = v3;
  if ( !v3 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(v3) == 35 )
    std::__throw_system_error(35);
  v38 = 1;
  v4 = (__int64 *)sub_4C7060((_QWORD *)(a1 + 48), a2);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_DWORD **)(a1 + 112);
    v7 = *(_QWORD *)(a1 + 104);
    v8 = *((unsigned int *)v4 + 3);
    v9 = *((_DWORD *)v4 + 3);
    v10 = ((__int64)v6 - v7) >> 2;
    if ( v8 >= v10 )
    {
      v32 = (unsigned int)(v8 + 1);
      v36 = -1;
      if ( v10 < v32 )
      {
        sub_424500(a1 + 104, v6, v32 - v10, &v36);
        v7 = *(_QWORD *)(a1 + 104);
      }
      else if ( v32 < v10 )
      {
        v33 = (_DWORD *)(v7 + 4 * v32);
        if ( v6 != v33 )
          *(_QWORD *)(a1 + 112) = v33;
      }
    }
    *(_DWORD *)(v7 + 4 * v8) = -1;
    v11 = *(_QWORD *)(a1 + 200);
    v12 = *(unsigned int *)(*(_QWORD *)(a1 + 232) + 4 * v8);
    v13 = (_QWORD *)(v11 + 8 * v12);
    v14 = *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 232) + 4 * v8) + 1)) - *v13;
    *(_QWORD *)(a1 + 224) += v14;
    memset((void *)(*(_QWORD *)(a1 + 152) + *v13), 0, v14);
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v12) = -1;
    v15 = *(_QWORD *)(a1 + 304);
    v16 = *(unsigned int *)(*(_QWORD *)(a1 + 336) + 4 * v8);
    v17 = (_QWORD *)(v15 + 8 * v16);
    v18 = *(_QWORD *)(v15 + 8LL * (unsigned int)(v16 + 1)) - *v17;
    *(_QWORD *)(a1 + 328) += v18;
    memset((void *)(*(_QWORD *)(a1 + 256) + *v17), 0, v18);
    *(_DWORD *)(*(_QWORD *)(a1 + 280) + 4 * v16) = -1;
    sub_428E60((_QWORD *)(a1 + 360), v9);
    v35 = v9;
    v19 = *(unsigned int **)(a1 + 24);
    if ( v19 == *(unsigned int **)(a1 + 32) )
    {
      sub_4208B0(a1 + 16, &v35);
    }
    else
    {
      *v19 = v9;
      *(_QWORD *)(a1 + 24) += 4LL;
    }
    v20 = *(_QWORD *)(a1 + 56);
    v21 = *(_QWORD *)(a1 + 48);
    v22 = *((unsigned int *)v5 + 2);
    v23 = (__int64 **)(v21 + 8 * (v22 % v20));
    v24 = v22 % v20;
    v25 = *v23;
    do
    {
      v26 = v25;
      v25 = (__int64 *)*v25;
    }
    while ( v5 != v25 );
    v27 = *v5;
    if ( *v23 == v26 )
    {
      if ( v27 )
      {
        v34 = *(unsigned int *)(v27 + 8) % v20;
        if ( v24 != v34 )
        {
          *(_QWORD *)(v21 + 8 * v34) = v26;
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v24) = 0;
          v27 = *v5;
        }
      }
      else
      {
        *v23 = nullptr;
        v27 = *v5;
      }
    }
    else if ( v27 )
    {
      v28 = *(unsigned int *)(v27 + 8) % v20;
      if ( v24 != v28 )
      {
        *(_QWORD *)(v21 + 8 * v28) = v26;
        v27 = *v5;
      }
    }
    *v26 = v27;
    operator delete(v5, 0x10u);
    v29 = *(pthread_rwlock_t **)a1;
    --*(_QWORD *)(a1 + 72);
    v30 = 1;
    ++v29[1].__align;
  }
  else
  {
    v30 = 0;
  }
  if ( rwlock && &_pthread_key_create )
    pthread_rwlock_unlock(rwlock);
  return v30;
}

