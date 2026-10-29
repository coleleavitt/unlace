int __fastcall sub_671380(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v5; // rbp
  void *v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rcx
  unsigned __int64 *v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // r10
  _QWORD *v14; // rbp
  unsigned __int64 v15; // rsi
  _QWORD *v16; // r13
  size_t v17; // r9
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  _QWORD *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  char *v25; // r13
  unsigned __int64 v26; // r9
  __int64 v27; // r9
  char *v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rax
  size_t v31; // r10
  void *v32; // rcx
  _QWORD *v33; // rsi
  size_t v34; // rdi
  _QWORD *v35; // r8
  size_t v36; // rdx
  char *v37; // rax
  void *v38; // rdi
  __int64 v39; // rdx
  __int64 v41; // [rsp+8h] [rbp-70h]
  size_t n; // [rsp+18h] [rbp-60h]
  __int64 na; // [rsp+18h] [rbp-60h]
  size_t nb; // [rsp+18h] [rbp-60h]
  std::__detail::_Prime_rehash_policy *v46; // [rsp+20h] [rbp-58h]
  unsigned __int64 v47; // [rsp+28h] [rbp-50h]
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
    operator delete(v6, 0x18u);
  }
  v7 = 0;
  memset(*(void **)(a1 + 56), 0, 8LL * *(_QWORD *)(a1 + 64));
  v8 = *(unsigned int *)(a1 + 48);
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  v41 = v8;
  v46 = (std::__detail::_Prime_rehash_policy *)(a1 + 88);
  if ( (_DWORD)v8 )
  {
    do
    {
      v9 = (unsigned __int64 *)(*(_QWORD *)(a1 + 112) + 8 * v7);
      v10 = *v9;
      if ( *v9 != -1 )
      {
        v11 = v10 + a2;
        if ( a3 )
        {
          v30 = node2ea(v10);
          v11 = ea2node(v30 + a2);
        }
        *v9 = v11;
        v12 = operator new(0x18u);
        v13 = *(_QWORD *)(a1 + 80);
        *(_QWORD *)v12 = 0;
        v14 = (_QWORD *)v12;
        *(_QWORD *)(v12 + 8) = v11;
        *(_DWORD *)(v12 + 16) = v7;
        if ( v13 )
        {
          v15 = *(_QWORD *)(a1 + 64);
          v16 = *(_QWORD **)(*(_QWORD *)(a1 + 56) + 8 * (v11 % v15));
          v17 = v11 % v15;
          if ( !v16 )
            goto LABEL_27;
          v18 = (_QWORD *)*v16;
          if ( v11 != *(_QWORD *)(*v16 + 8LL) )
          {
            do
            {
              v19 = (_QWORD *)*v18;
              if ( !*v18 )
                goto LABEL_27;
              v16 = v18;
              if ( v19[1] % v15 != v11 % v15 )
                goto LABEL_27;
              v18 = (_QWORD *)*v18;
            }
            while ( v11 != v19[1] );
          }
          if ( !v16 || !*v16 )
            goto LABEL_27;
        }
        else
        {
          v21 = *(_QWORD **)(a1 + 72);
          if ( !v21 )
          {
LABEL_26:
            v15 = *(_QWORD *)(a1 + 64);
            v17 = v11 % v15;
LABEL_27:
            n = v17;
            if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(v46, v15, v13, 1u) )
            {
              v31 = v22;
              if ( v22 == 1 )
              {
                v32 = (void *)(a1 + 104);
                *(_QWORD *)(a1 + 104) = 0;
                v25 = (char *)(a1 + 104);
              }
              else
              {
                if ( v22 > 0xFFFFFFFFFFFFFFFLL )
                {
                  if ( v22 >> 61 )
                    sub_2EBC5E(v46, v15, v22, v23, v24);
                  std::__throw_bad_alloc();
                }
                v47 = v22;
                na = 8 * v22;
                v25 = (char *)operator new(8 * v22);
                memset(v25, 0, na);
                v31 = v47;
                v32 = (void *)(a1 + 104);
              }
              v33 = *(_QWORD **)(a1 + 72);
              v34 = 0;
              for ( *(_QWORD *)(a1 + 72) = 0; v33; v34 = v36 )
              {
                while ( 1 )
                {
                  v35 = v33;
                  v33 = (_QWORD *)*v33;
                  v36 = v35[1] % v31;
                  v37 = &v25[8 * v36];
                  if ( !*(_QWORD *)v37 )
                    break;
                  *v35 = **(_QWORD **)v37;
                  **(_QWORD **)v37 = v35;
                  if ( !v33 )
                    goto LABEL_42;
                }
                *v35 = *(_QWORD *)(a1 + 72);
                *(_QWORD *)(a1 + 72) = v35;
                *(_QWORD *)v37 = a1 + 72;
                if ( *v35 )
                  *(_QWORD *)&v25[8 * v34] = v35;
              }
LABEL_42:
              v38 = *(void **)(a1 + 56);
              if ( v38 != v32 )
              {
                nb = v31;
                operator delete(v38, 8LL * *(_QWORD *)(a1 + 64));
                v31 = nb;
              }
              *(_QWORD *)(a1 + 64) = v31;
              *(_QWORD *)(a1 + 56) = v25;
              v26 = v11 % v31;
            }
            else
            {
              v25 = *(char **)(a1 + 56);
              v26 = n;
            }
            v27 = 8 * v26;
            v28 = &v25[v27];
            v29 = *(_QWORD **)&v25[v27];
            if ( v29 )
            {
              *v14 = *v29;
              **(_QWORD **)v28 = v14;
            }
            else
            {
              v39 = *(_QWORD *)(a1 + 72);
              *(_QWORD *)(a1 + 72) = v14;
              *v14 = v39;
              if ( v39 )
              {
                *(_QWORD *)&v25[8 * (*(_QWORD *)(v39 + 8) % *(_QWORD *)(a1 + 64))] = v14;
                v28 = (char *)(v27 + *(_QWORD *)(a1 + 56));
              }
              *(_QWORD *)v28 = a1 + 72;
            }
            ++*(_QWORD *)(a1 + 80);
            goto LABEL_20;
          }
          while ( v11 != v21[1] )
          {
            v21 = (_QWORD *)*v21;
            if ( !v21 )
              goto LABEL_26;
          }
        }
        if ( v14 )
          operator delete(v14, 0x18u);
      }
LABEL_20:
      ++v7;
    }
    while ( v7 != v41 );
  }
  v20 = *(_QWORD *)(a1 + 8);
  ++*(_QWORD *)(v20 + 56);
  if ( &_pthread_key_create )
    LODWORD(v20) = pthread_rwlock_unlock(rwlock);
  return v20;
}
