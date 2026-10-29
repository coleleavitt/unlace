int __fastcall sub_653800(__int64 a1, int a2, char a3)
{
  _QWORD *v5; // rbp
  void *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned int *v9; // r12
  __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  _QWORD *v14; // r12
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r14
  _QWORD *v17; // r11
  unsigned __int64 v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  char *v26; // rbp
  size_t v27; // r8
  __int64 v28; // r8
  char *v29; // rax
  _QWORD *v30; // rdx
  int v31; // eax
  size_t v32; // r9
  void *v33; // r8
  _QWORD *v34; // rsi
  unsigned __int64 v35; // rdi
  _QWORD *v36; // rcx
  unsigned __int64 v37; // rdx
  char *v38; // rax
  void *v39; // rdi
  __int64 v40; // rdx
  __int64 v42; // [rsp+8h] [rbp-70h]
  size_t n; // [rsp+18h] [rbp-60h]
  __int64 na; // [rsp+18h] [rbp-60h]
  size_t nb; // [rsp+18h] [rbp-60h]
  std::__detail::_Prime_rehash_policy *v47; // [rsp+20h] [rbp-58h]
  unsigned __int64 v48; // [rsp+28h] [rbp-50h]
  pthread_rwlock_t *rwlock; // [rsp+30h] [rbp-48h]

  rwlock = *(pthread_rwlock_t **)(a1 + 8);
  if ( !rwlock )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(rwlock) == 35 )
    std::__throw_system_error(35);
  v5 = *(_QWORD **)(a1 + 72);
  while ( v5 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    operator delete(v6, 0x10u);
  }
  v7 = 0;
  memset(*(void **)(a1 + 56), 0, 8LL * *(_QWORD *)(a1 + 64));
  v8 = *(unsigned int *)(a1 + 48);
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  v42 = v8;
  v47 = (std::__detail::_Prime_rehash_policy *)(a1 + 88);
  if ( (_DWORD)v8 )
  {
    do
    {
      v9 = (unsigned int *)(*(_QWORD *)(a1 + 112) + 4 * v7);
      v10 = *v9;
      if ( (_DWORD)v10 != -1 )
      {
        v11 = v10 + a2;
        if ( a3 )
        {
          v31 = node2ea(v10);
          v11 = ea2node((unsigned int)(v31 + a2));
        }
        *v9 = v11;
        v12 = operator new(0x10u);
        v13 = *(_QWORD *)(a1 + 80);
        *(_QWORD *)v12 = 0;
        v14 = (_QWORD *)v12;
        *(_DWORD *)(v12 + 8) = v11;
        *(_DWORD *)(v12 + 12) = v7;
        if ( v13 )
        {
          v15 = *(_QWORD *)(a1 + 64);
          v16 = v11;
          v17 = *(_QWORD **)(*(_QWORD *)(a1 + 56) + 8 * (v11 % v15));
          v18 = v11 % v15;
          if ( !v17 )
            goto LABEL_27;
          v19 = (_QWORD *)*v17;
          if ( v11 != *(_DWORD *)(*v17 + 8LL) )
          {
            do
            {
              v20 = (_QWORD *)*v19;
              if ( !*v19 )
                goto LABEL_27;
              v17 = v19;
              if ( *((unsigned int *)v20 + 2) % v15 != v11 % v15 )
                goto LABEL_27;
              v19 = (_QWORD *)*v19;
            }
            while ( v11 != *((_DWORD *)v20 + 2) );
          }
          if ( !v17 || !*v17 )
            goto LABEL_27;
        }
        else
        {
          v22 = *(__int64 **)(a1 + 72);
          if ( !v22 )
          {
LABEL_26:
            v15 = *(_QWORD *)(a1 + 64);
            v16 = v11;
            v18 = v11 % v15;
LABEL_27:
            n = v18;
            if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(v47, v15, v13, 1u) )
            {
              v32 = v23;
              if ( v23 == 1 )
              {
                v33 = (void *)(a1 + 104);
                *(_QWORD *)(a1 + 104) = 0;
                v26 = (char *)(a1 + 104);
              }
              else
              {
                if ( v23 > 0xFFFFFFFFFFFFFFFLL )
                {
                  if ( v23 >> 61 )
                    sub_2E883E(v47, v15, v23, v24, v25);
                  std::__throw_bad_alloc();
                }
                v48 = v23;
                na = 8 * v23;
                v26 = (char *)operator new(8 * v23);
                memset(v26, 0, na);
                v32 = v48;
                v33 = (void *)(a1 + 104);
              }
              v34 = *(_QWORD **)(a1 + 72);
              v35 = 0;
              for ( *(_QWORD *)(a1 + 72) = 0; v34; v35 = v37 )
              {
                while ( 1 )
                {
                  v36 = v34;
                  v34 = (_QWORD *)*v34;
                  v37 = *((unsigned int *)v36 + 2) % v32;
                  v38 = &v26[8 * v37];
                  if ( !*(_QWORD *)v38 )
                    break;
                  *v36 = **(_QWORD **)v38;
                  **(_QWORD **)v38 = v36;
                  if ( !v34 )
                    goto LABEL_42;
                }
                *v36 = *(_QWORD *)(a1 + 72);
                *(_QWORD *)(a1 + 72) = v36;
                *(_QWORD *)v38 = a1 + 72;
                if ( *v36 )
                  *(_QWORD *)&v26[8 * v35] = v36;
              }
LABEL_42:
              v39 = *(void **)(a1 + 56);
              if ( v39 != v33 )
              {
                nb = v32;
                operator delete(v39, 8LL * *(_QWORD *)(a1 + 64));
                v32 = nb;
              }
              *(_QWORD *)(a1 + 64) = v32;
              *(_QWORD *)(a1 + 56) = v26;
              v27 = v16 % v32;
            }
            else
            {
              v26 = *(char **)(a1 + 56);
              v27 = n;
            }
            v28 = 8 * v27;
            v29 = &v26[v28];
            v30 = *(_QWORD **)&v26[v28];
            if ( v30 )
            {
              *v14 = *v30;
              **(_QWORD **)v29 = v14;
            }
            else
            {
              v40 = *(_QWORD *)(a1 + 72);
              *(_QWORD *)(a1 + 72) = v14;
              *v14 = v40;
              if ( v40 )
              {
                *(_QWORD *)&v26[8 * ((unsigned __int64)*(unsigned int *)(v40 + 8) % *(_QWORD *)(a1 + 64))] = v14;
                v29 = (char *)(v28 + *(_QWORD *)(a1 + 56));
              }
              *(_QWORD *)v29 = a1 + 72;
            }
            ++*(_QWORD *)(a1 + 80);
            goto LABEL_20;
          }
          while ( v11 != *((_DWORD *)v22 + 2) )
          {
            v22 = (__int64 *)*v22;
            if ( !v22 )
              goto LABEL_26;
          }
        }
        if ( v14 )
          operator delete(v14, 0x10u);
      }
LABEL_20:
      ++v7;
    }
    while ( v7 != v42 );
  }
  v21 = *(_QWORD *)(a1 + 8);
  ++*(_QWORD *)(v21 + 56);
  if ( &_pthread_key_create )
    LODWORD(v21) = pthread_rwlock_unlock(rwlock);
  return v21;
}

