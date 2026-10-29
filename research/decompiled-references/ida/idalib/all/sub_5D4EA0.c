int __fastcall sub_5D4EA0(unsigned int *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4)
{
  pthread_rwlock_t *v4; // r14
  _QWORD *v8; // rax
  unsigned int v9; // r12d
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  _BYTE *v13; // rax
  _BYTE *v14; // rdx
  void (*v15)(); // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  _QWORD *v22; // r15
  unsigned __int64 v23; // rsi
  _QWORD *v24; // r11
  unsigned __int64 v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // rdi
  _QWORD *v28; // rax
  char v29; // al
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD **v35; // rax
  _QWORD *v36; // rdx
  int v37; // edx
  __int64 v38; // rdx
  __int64 v41; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+10h] [rbp-58h]
  __int64 v43; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+28h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v4 = *((pthread_rwlock_t **)a1 + 1);
  if ( !v4 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(*((pthread_rwlock_t **)a1 + 1)) == 35 )
    std::__throw_system_error(35);
  v41 = (__int64)(a1 + 14);
  v8 = sub_5C4B20((_QWORD *)a1 + 7, a4);
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 + 4);
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, v9);
    goto LABEL_6;
  }
  v19 = *((_QWORD *)a1 + 4);
  if ( v19 == *((_QWORD *)a1 + 3) )
  {
    v9 = a1[12];
    a1[12] = v9 + 1;
  }
  else
  {
    v9 = *(_DWORD *)(v19 - 4);
    *((_QWORD *)a1 + 4) = v19 - 4;
  }
  v20 = operator new(0x18u);
  v21 = *((_QWORD *)a1 + 10);
  *(_QWORD *)v20 = 0;
  v22 = (_QWORD *)v20;
  *(_QWORD *)(v20 + 8) = a4;
  *(_DWORD *)(v20 + 16) = v9;
  if ( v21 )
  {
    v23 = *((_QWORD *)a1 + 8);
    v24 = *(_QWORD **)(*((_QWORD *)a1 + 7) + 8 * (a4 % v23));
    v25 = a4 % v23;
    if ( v24 )
    {
      v26 = (_QWORD *)*v24;
      if ( *(_QWORD *)(*v24 + 8LL) != a4 )
      {
        do
        {
          v27 = (_QWORD *)*v26;
          if ( !*v26 )
            goto LABEL_41;
          v24 = v26;
          if ( v27[1] % v23 != a4 % v23 )
            goto LABEL_41;
          v26 = (_QWORD *)*v26;
        }
        while ( v27[1] != a4 );
      }
      if ( v24 && *v24 )
      {
LABEL_34:
        if ( v22 )
          operator delete(v22, 0x18u);
        goto LABEL_6;
      }
    }
  }
  else
  {
    v28 = *((_QWORD **)a1 + 9);
    if ( v28 )
    {
      while ( v28[1] != a4 )
      {
        v28 = (_QWORD *)*v28;
        if ( !v28 )
          goto LABEL_40;
      }
      goto LABEL_34;
    }
LABEL_40:
    v23 = *((_QWORD *)a1 + 8);
    v25 = a4 % v23;
  }
LABEL_41:
  v42 = v25;
  v29 = std::__detail::_Prime_rehash_policy::_M_need_rehash(
          (std::__detail::_Prime_rehash_policy *)(a1 + 22),
          v23,
          v21,
          1u);
  v32 = v42;
  if ( v29 )
  {
    sub_5C43C0(v41, v30, v30, v31, v42);
    v32 = a4 % *((_QWORD *)a1 + 8);
  }
  v33 = *((_QWORD *)a1 + 7);
  v34 = 8 * v32;
  v35 = (_QWORD **)(v33 + v34);
  v36 = *(_QWORD **)(v33 + v34);
  if ( v36 )
  {
    *v22 = *v36;
    **v35 = v22;
  }
  else
  {
    v38 = *((_QWORD *)a1 + 9);
    *((_QWORD *)a1 + 9) = v22;
    *v22 = v38;
    if ( v38 )
    {
      *(_QWORD *)(v33 + 8LL * (*(_QWORD *)(v38 + 8) % *((_QWORD *)a1 + 8))) = v22;
      v35 = (_QWORD **)(v34 + *((_QWORD *)a1 + 7));
    }
    *v35 = a1 + 18;
  }
  ++*((_QWORD *)a1 + 10);
LABEL_6:
  v10 = *((_QWORD **)a1 + 15);
  v11 = *((_QWORD *)a1 + 14);
  v12 = ((__int64)v10 - v11) >> 3;
  if ( v9 >= v12 )
  {
    v43 = -1;
    v17 = v9 + 1;
    if ( v12 < v17 )
    {
      sub_438420((__int64)(a1 + 28), v10, v17 - v12, &v43);
      v11 = *((_QWORD *)a1 + 14);
    }
    else if ( v17 < v12 )
    {
      v18 = (_QWORD *)(v11 + 8 * v17);
      if ( v10 != v18 )
        *((_QWORD *)a1 + 15) = v18;
    }
  }
  *(_QWORD *)(v11 + 8LL * v9) = a4;
  sub_4352D0((__int64)(a1 + 36), v9, a2, a3);
  sub_43BD80((std::string *)(a1 + 88), a2, a3);
  sub_4352D0((__int64)(a1 + 62), v9, *(_QWORD *)(*((_QWORD *)a1 + 44) - 24LL), *((_BYTE **)a1 + 44));
  v13 = *((_BYTE **)a1 + 44);
  v14 = v13;
  if ( &_pthread_key_create )
  {
    if ( *((int *)v13 - 2) <= 0 )
    {
      v14 = *((_BYTE **)a1 + 44);
      goto LABEL_10;
    }
    v13 = *((_BYTE **)a1 + 44);
  }
  else if ( *((int *)v13 - 2) <= 0 )
  {
LABEL_10:
    if ( v14 - 24 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
    {
      *((_DWORD *)v14 - 2) = 0;
      *((_QWORD *)v14 - 3) = 0;
      *v14 = 0;
    }
    goto LABEL_12;
  }
  if ( v13 - 24 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v37 = _InterlockedExchangeAdd((volatile signed __int32 *)v13 - 2, 0xFFFFFFFF);
    }
    else
    {
      v37 = *((_DWORD *)v13 - 2);
      *((_DWORD *)v13 - 2) = v37 - 1;
    }
    if ( v37 <= 0 )
      std::string::_Rep::_M_destroy(v13 - 24, &v43);
  }
  *((_QWORD *)a1 + 44) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
LABEL_12:
  v15 = *(void (**)())(*(_QWORD *)a1 + 40LL);
  if ( v15 != nullsub_57 )
    ((void (__fastcall *)(unsigned int *, _QWORD))v15)(a1, v9);
  ++*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL);
  if ( &_pthread_key_create )
    LODWORD(v16) = pthread_rwlock_unlock(v4);
  else
    return v44 - __readfsqword(0x28u);
  return v16;
}
