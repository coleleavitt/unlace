int __fastcall sub_42E7C0(unsigned int *a1, unsigned int a2, char a3)
{
  pthread_rwlock_t *v5; // r14
  __int64 *v6; // rax
  __int64 *v7; // rbp
  unsigned int v8; // r13d
  unsigned int *v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // r9
  unsigned __int64 v12; // rtt
  __int64 **v13; // r10
  unsigned __int64 v14; // r8
  __int64 *v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  const char *v22; // r14
  pthread_rwlock_t *v23; // rdi
  char *v24; // r15
  unsigned __int64 v25; // r14
  _DWORD *v26; // rax
  char **v27; // r11
  unsigned int v28; // r13d
  _DWORD *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  _BYTE *v33; // rax
  _BYTE *v34; // rdx
  pthread_rwlock_t *v35; // rdi
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  _DWORD *v38; // rax
  unsigned __int64 v39; // rdx
  int v40; // edx
  unsigned __int64 v42; // [rsp+18h] [rbp-70h] BYREF
  pthread_rwlock_t *rwlock; // [rsp+20h] [rbp-68h] BYREF
  char v44; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v46[2]; // [rsp+38h] [rbp-50h]
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( !a3 )
  {
    ptr = nullptr;
    *(_OWORD *)v46 = 0;
    get_func_name(&ptr, a2);
    v21 = v46[0];
    v22 = haystack;
    if ( v46[0] )
    {
      v22 = (const char *)ptr;
      v21 = v46[0] - 1;
    }
    v23 = *((pthread_rwlock_t **)a1 + 1);
    v24 = (char *)v22;
    v44 = 0;
    v25 = v21;
    rwlock = v23;
    if ( !v23 )
      std::__throw_system_error(1);
    if ( &_pthread_key_create && pthread_rwlock_wrlock(v23) == 35 )
      std::__throw_system_error(35);
    v44 = 1;
    v26 = sub_425910((_QWORD *)a1 + 7, a2);
    if ( v26 )
    {
      v28 = v26[3];
      (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, v28);
    }
    else
    {
      v36 = *((_QWORD *)a1 + 4);
      if ( v36 == *((_QWORD *)a1 + 3) )
      {
        v28 = a1[12];
        a1[12] = v28 + 1;
      }
      else
      {
        v28 = *(_DWORD *)(v36 - 4);
        *((_QWORD *)a1 + 4) = v36 - 4;
      }
      v42 = __PAIR64__(v28, a2);
      sub_424FB0(v27, (__int64 *)&v42);
    }
    v29 = *((_DWORD **)a1 + 15);
    v30 = *((_QWORD *)a1 + 14);
    v31 = v28;
    v32 = ((__int64)v29 - v30) >> 2;
    if ( v28 >= v32 )
    {
      v37 = v28 + 1;
      LODWORD(v42) = -1;
      if ( v32 < v37 )
      {
        sub_424500((__int64)(a1 + 28), v29, v37 - v32, &v42);
        v30 = *((_QWORD *)a1 + 14);
        v31 = v28;
      }
      else if ( v37 < v32 )
      {
        v38 = (_DWORD *)(v30 + 4 * v37);
        if ( v29 != v38 )
          *((_QWORD *)a1 + 15) = v38;
      }
    }
    *(_DWORD *)(v30 + 4 * v31) = a2;
    sub_421400((__int64)(a1 + 36), v28, v25, v24);
    sub_427E80((std::string *)(a1 + 88), v25, v24);
    sub_421400((__int64)(a1 + 62), v28, *(_QWORD *)(*((_QWORD *)a1 + 44) - 24LL), *((_BYTE **)a1 + 44));
    v33 = *((_BYTE **)a1 + 44);
    v34 = v33;
    if ( &_pthread_key_create )
    {
      if ( *((int *)v33 - 2) <= 0 )
      {
        v34 = *((_BYTE **)a1 + 44);
        goto LABEL_28;
      }
      v33 = *((_BYTE **)a1 + 44);
    }
    else if ( *((int *)v33 - 2) <= 0 )
    {
LABEL_28:
      if ( v34 - 24 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
      {
        *((_DWORD *)v34 - 2) = 0;
        *((_QWORD *)v34 - 3) = 0;
        *v34 = 0;
      }
LABEL_30:
      (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, v28);
      v35 = rwlock;
      ++*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL);
      if ( v35 && &_pthread_key_create )
        pthread_rwlock_unlock(v35);
      if ( ptr )
      {
        v46[0] = 0;
        qfree(ptr);
      }
      return v47 - __readfsqword(0x28u);
    }
    if ( v33 - 24 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v40 = _InterlockedExchangeAdd((volatile signed __int32 *)v33 - 2, 0xFFFFFFFF);
      }
      else
      {
        v40 = *((_DWORD *)v33 - 2);
        *((_DWORD *)v33 - 2) = v40 - 1;
      }
      if ( v40 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    *((_QWORD *)a1 + 44) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    goto LABEL_30;
  }
  v5 = *((pthread_rwlock_t **)a1 + 1);
  LOBYTE(v46[0]) = 0;
  ptr = v5;
  if ( !v5 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(v5) == 35 )
    std::__throw_system_error(35);
  LOBYTE(v46[0]) = 1;
  v6 = (__int64 *)sub_425910((_QWORD *)a1 + 7, a2);
  v7 = v6;
  if ( v6 )
  {
    v8 = *((_DWORD *)v6 + 3);
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, v8);
    LODWORD(rwlock) = v8;
    v9 = *((unsigned int **)a1 + 4);
    if ( v9 == *((unsigned int **)a1 + 5) )
    {
      sub_4208B0((__int64)(a1 + 6), &rwlock);
    }
    else
    {
      *v9 = v8;
      *((_QWORD *)a1 + 4) += 4LL;
    }
    v10 = *((_QWORD *)a1 + 8);
    v11 = *((_QWORD *)a1 + 7);
    v12 = *((unsigned int *)v7 + 2);
    v13 = (__int64 **)(v11 + 8 * (v12 % v10));
    v14 = v12 % v10;
    v15 = *v13;
    do
    {
      v16 = v15;
      v15 = (__int64 *)*v15;
    }
    while ( v7 != v15 );
    v17 = *v7;
    if ( *v13 == v16 )
    {
      if ( v17 )
      {
        v39 = *(unsigned int *)(v17 + 8) % v10;
        if ( v14 != v39 )
        {
          *(_QWORD *)(v11 + 8 * v39) = v16;
          *(_QWORD *)(*((_QWORD *)a1 + 7) + 8 * v14) = 0;
          v17 = *v7;
        }
      }
      else
      {
        *v13 = nullptr;
        v17 = *v7;
      }
    }
    else if ( v17 )
    {
      v18 = *(unsigned int *)(v17 + 8) % v10;
      if ( v14 != v18 )
      {
        *(_QWORD *)(v11 + 8 * v18) = v16;
        v17 = *v7;
      }
    }
    *v16 = v17;
    operator delete(v7, 0x10u);
    v19 = *((_QWORD *)a1 + 1);
    --*((_QWORD *)a1 + 10);
    ++*(_QWORD *)(v19 + 56);
  }
  if ( !&_pthread_key_create )
    return v47 - __readfsqword(0x28u);
  LODWORD(v20) = pthread_rwlock_unlock(v5);
  return v20;
}

