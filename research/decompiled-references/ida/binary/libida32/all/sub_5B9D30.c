int __fastcall sub_5B9D30(unsigned int *a1, unsigned __int64 a2, char *a3, unsigned int a4)
{
  pthread_rwlock_t *v4; // r15
  _DWORD *v9; // rax
  unsigned int v10; // r12d
  _DWORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  _BYTE *v15; // rax
  _BYTE *v16; // rdx
  void (*v17)(); // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rsi
  _QWORD *v25; // r11
  unsigned __int64 v26; // r8
  _QWORD *v27; // rax
  _QWORD *v28; // rdi
  __int64 *v29; // rax
  char v30; // al
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD **v36; // rax
  _QWORD *v37; // rdx
  int v38; // edx
  __int64 v39; // rdx
  __int64 v41; // [rsp+8h] [rbp-70h]
  _QWORD *v42; // [rsp+10h] [rbp-68h]
  unsigned __int64 v43; // [rsp+18h] [rbp-60h]
  __int64 v44; // [rsp+20h] [rbp-58h]
  int v45; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v46; // [rsp+38h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v4 = *((pthread_rwlock_t **)a1 + 1);
  if ( !v4 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(*((pthread_rwlock_t **)a1 + 1)) == 35 )
    std::__throw_system_error(35);
  v41 = (__int64)(a1 + 14);
  v9 = sub_5AA590((_QWORD *)a1 + 7, a4);
  if ( v9 )
  {
    v10 = v9[3];
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, v10);
    goto LABEL_6;
  }
  v21 = *((_QWORD *)a1 + 4);
  if ( v21 == *((_QWORD *)a1 + 3) )
  {
    v10 = a1[12];
    a1[12] = v10 + 1;
  }
  else
  {
    v10 = *(_DWORD *)(v21 - 4);
    *((_QWORD *)a1 + 4) = v21 - 4;
  }
  v22 = operator new(0x10u);
  v23 = *((_QWORD *)a1 + 10);
  v42 = (_QWORD *)v22;
  *(_QWORD *)v22 = 0;
  *(_DWORD *)(v22 + 8) = a4;
  *(_DWORD *)(v22 + 12) = v10;
  if ( v23 )
  {
    v24 = *((_QWORD *)a1 + 8);
    v43 = a4;
    v25 = *(_QWORD **)(*((_QWORD *)a1 + 7) + 8 * (a4 % v24));
    v26 = a4 % v24;
    if ( v25 )
    {
      v27 = (_QWORD *)*v25;
      if ( *(_DWORD *)(*v25 + 8LL) != a4 )
      {
        do
        {
          v28 = (_QWORD *)*v27;
          if ( !*v27 )
            goto LABEL_41;
          v25 = v27;
          if ( *((unsigned int *)v28 + 2) % v24 != a4 % v24 )
            goto LABEL_41;
          v27 = (_QWORD *)*v27;
        }
        while ( *((_DWORD *)v28 + 2) != a4 );
      }
      if ( v25 && *v25 )
      {
LABEL_34:
        if ( v42 )
          operator delete(v42, 0x10u);
        goto LABEL_6;
      }
    }
  }
  else
  {
    v29 = *((__int64 **)a1 + 9);
    if ( v29 )
    {
      while ( *((_DWORD *)v29 + 2) != a4 )
      {
        v29 = (__int64 *)*v29;
        if ( !v29 )
          goto LABEL_40;
      }
      goto LABEL_34;
    }
LABEL_40:
    v24 = *((_QWORD *)a1 + 8);
    v43 = a4;
    v26 = a4 % v24;
  }
LABEL_41:
  v44 = v26;
  v30 = std::__detail::_Prime_rehash_policy::_M_need_rehash(
          (std::__detail::_Prime_rehash_policy *)(a1 + 22),
          v24,
          v23,
          1u);
  v33 = v44;
  if ( v30 )
  {
    sub_5A9E80(v41, v31, v31, v32, v44);
    v33 = v43 % *((_QWORD *)a1 + 8);
  }
  v34 = *((_QWORD *)a1 + 7);
  v35 = 8 * v33;
  v36 = (_QWORD **)(v34 + v35);
  v37 = *(_QWORD **)(v34 + v35);
  if ( v37 )
  {
    *v42 = *v37;
    **v36 = v42;
  }
  else
  {
    v39 = *((_QWORD *)a1 + 9);
    *v42 = v39;
    *((_QWORD *)a1 + 9) = v42;
    if ( v39 )
    {
      *(_QWORD *)(v34 + 8 * ((unsigned __int64)*(unsigned int *)(v39 + 8) % *((_QWORD *)a1 + 8))) = v42;
      v36 = (_QWORD **)(v35 + *((_QWORD *)a1 + 7));
    }
    *v36 = a1 + 18;
  }
  ++*((_QWORD *)a1 + 10);
LABEL_6:
  v11 = *((_DWORD **)a1 + 15);
  v12 = *((_QWORD *)a1 + 14);
  v13 = v10;
  v14 = ((__int64)v11 - v12) >> 2;
  if ( v10 >= v14 )
  {
    v19 = v10 + 1;
    v45 = -1;
    if ( v14 < v19 )
    {
      sub_424500((__int64)(a1 + 28), v11, v19 - v14, &v45);
      v12 = *((_QWORD *)a1 + 14);
      v13 = v10;
    }
    else if ( v19 < v14 )
    {
      v20 = (_DWORD *)(v12 + 4 * v19);
      if ( v11 != v20 )
        *((_QWORD *)a1 + 15) = v20;
    }
  }
  *(_DWORD *)(v12 + 4 * v13) = a4;
  sub_421400((__int64)(a1 + 36), v10, a2, a3);
  sub_427E80((std::string *)(a1 + 88), a2, a3);
  sub_421400((__int64)(a1 + 62), v10, *(_QWORD *)(*((_QWORD *)a1 + 44) - 24LL), *((_BYTE **)a1 + 44));
  v15 = *((_BYTE **)a1 + 44);
  v16 = v15;
  if ( &_pthread_key_create )
  {
    if ( *((int *)v15 - 2) <= 0 )
    {
      v16 = *((_BYTE **)a1 + 44);
      goto LABEL_10;
    }
    v15 = *((_BYTE **)a1 + 44);
  }
  else if ( *((int *)v15 - 2) <= 0 )
  {
LABEL_10:
    if ( v16 - 24 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
    {
      *((_DWORD *)v16 - 2) = 0;
      *((_QWORD *)v16 - 3) = 0;
      *v16 = 0;
    }
    goto LABEL_12;
  }
  if ( v15 - 24 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v38 = _InterlockedExchangeAdd((volatile signed __int32 *)v15 - 2, 0xFFFFFFFF);
    }
    else
    {
      v38 = *((_DWORD *)v15 - 2);
      *((_DWORD *)v15 - 2) = v38 - 1;
    }
    if ( v38 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  *((_QWORD *)a1 + 44) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
LABEL_12:
  v17 = *(void (**)())(*(_QWORD *)a1 + 40LL);
  if ( v17 != nullsub_36 )
    ((void (__fastcall *)(unsigned int *, _QWORD))v17)(a1, v10);
  ++*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL);
  if ( &_pthread_key_create )
    LODWORD(v18) = pthread_rwlock_unlock(v4);
  else
    return v46 - __readfsqword(0x28u);
  return v18;
}

