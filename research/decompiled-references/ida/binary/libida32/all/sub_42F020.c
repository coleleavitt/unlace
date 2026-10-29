unsigned __int64 __fastcall sub_42F020(_QWORD *a1, unsigned __int64 a2, char *a3, unsigned int a4, _WORD *a5)
{
  pthread_rwlock_t *v6; // rdi
  _DWORD *v10; // rax
  char **v11; // r11
  unsigned int v12; // ebx
  unsigned __int64 (__fastcall *v13)(_QWORD *, unsigned int); // rax
  _DWORD *v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  size_t v20; // rdx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  size_t v23; // rdx
  _DWORD *v24; // rsi
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  _WORD *v27; // rsi
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  _BYTE *v30; // rax
  int v31; // eax
  bool v32; // zf
  bool v33; // sf
  bool v34; // dl
  _BYTE *v35; // rdi
  void (*v36)(); // rax
  unsigned __int64 v38; // rdx
  _WORD *v39; // rax
  unsigned __int64 v40; // rdx
  _DWORD *v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  _DWORD *v44; // rax
  int v45; // edx
  __int64 v47; // [rsp+8h] [rbp-70h]
  __int64 v48; // [rsp+8h] [rbp-70h]
  __int16 v49; // [rsp+12h] [rbp-66h] BYREF
  int v50; // [rsp+14h] [rbp-64h] BYREF
  unsigned __int64 v51; // [rsp+18h] [rbp-60h] BYREF
  pthread_rwlock_t *rwlock; // [rsp+20h] [rbp-58h]
  char v53; // [rsp+28h] [rbp-50h]
  unsigned __int64 v54; // [rsp+38h] [rbp-40h]

  v6 = (pthread_rwlock_t *)a1[1];
  v54 = __readfsqword(0x28u);
  rwlock = v6;
  v53 = 0;
  if ( !v6 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(v6) == 35 )
    std::__throw_system_error(35);
  v53 = 1;
  v10 = sub_425910(a1 + 7, a4);
  if ( !v10 )
  {
    v42 = a1[4];
    if ( v42 == a1[3] )
    {
      v12 = *((_DWORD *)a1 + 12);
      *((_DWORD *)a1 + 12) = v12 + 1;
    }
    else
    {
      v12 = *(_DWORD *)(v42 - 4);
      a1[4] = v42 - 4;
    }
    v51 = __PAIR64__(v12, a4);
    sub_424FB0(v11, (__int64 *)&v51);
    goto LABEL_35;
  }
  v12 = v10[3];
  v13 = *(unsigned __int64 (__fastcall **)(_QWORD *, unsigned int))(*a1 + 48LL);
  if ( v13 != sub_4249D0 )
  {
    v13(a1, v12);
LABEL_35:
    v16 = v12;
    goto LABEL_8;
  }
  v14 = (_DWORD *)a1[15];
  v15 = a1[14];
  v16 = v12;
  v17 = ((__int64)v14 - v15) >> 2;
  if ( v12 >= v17 )
  {
    v43 = v12 + 1;
    v50 = -1;
    if ( v17 < v43 )
    {
      sub_424500((__int64)(a1 + 14), v14, v43 - v17, &v50);
      v15 = a1[14];
    }
    else if ( v43 < v17 )
    {
      v44 = (_DWORD *)(v15 + 4 * v43);
      if ( v14 != v44 )
        a1[15] = v44;
    }
  }
  *(_DWORD *)(v15 + 4LL * v12) = -1;
  v18 = a1[26];
  v19 = (_QWORD *)(v18 + 8LL * *(unsigned int *)(a1[30] + 4LL * v12));
  v47 = *(unsigned int *)(a1[30] + 4LL * v12);
  v20 = *(_QWORD *)(v18 + 8LL * (unsigned int)(*(_DWORD *)(a1[30] + 4LL * v12) + 1)) - *v19;
  a1[29] += v20;
  memset((void *)(a1[20] + *v19), 0, v20);
  *(_DWORD *)(a1[23] + 4 * v47) = -1;
  v21 = a1[39];
  v22 = (_QWORD *)(v21 + 8LL * *(unsigned int *)(a1[43] + 4LL * v12));
  v48 = *(unsigned int *)(a1[43] + 4LL * v12);
  v23 = *(_QWORD *)(v21 + 8LL * (unsigned int)(*(_DWORD *)(a1[43] + 4LL * v12) + 1)) - *v22;
  a1[42] += v23;
  memset((void *)(a1[33] + *v22), 0, v23);
  *(_DWORD *)(a1[36] + 4 * v48) = -1;
LABEL_8:
  v24 = (_DWORD *)a1[15];
  v25 = a1[14];
  v26 = ((__int64)v24 - v25) >> 2;
  if ( v16 >= v26 )
  {
    v40 = v12 + 1;
    LODWORD(v51) = -1;
    if ( v26 < v40 )
    {
      sub_424500((__int64)(a1 + 14), v24, v40 - v26, &v51);
      v25 = a1[14];
    }
    else if ( v40 < v26 )
    {
      v41 = (_DWORD *)(v25 + 4 * v40);
      if ( v24 != v41 )
        a1[15] = v41;
    }
  }
  *(_DWORD *)(v25 + 4 * v16) = a4;
  v27 = (_WORD *)a1[18];
  v28 = a1[17];
  v29 = ((__int64)v27 - v28) >> 1;
  if ( v16 >= v29 )
  {
    v38 = v12 + 1;
    v49 = 0;
    if ( v29 < v38 )
    {
      sub_42EC60((__int64)(a1 + 17), v27, v38 - v29, &v49);
      v28 = a1[17];
    }
    else if ( v38 < v29 )
    {
      v39 = (_WORD *)(v28 + 2 * v38);
      if ( v27 != v39 )
        a1[18] = v39;
    }
  }
  *(_WORD *)(v28 + 2 * v16) = *a5;
  sub_421400((__int64)(a1 + 20), v12, a2, a3);
  sub_427E80((std::string *)(a1 + 46), a2, a3);
  sub_421400((__int64)(a1 + 33), v12, *(_QWORD *)(a1[46] - 24LL), (_BYTE *)a1[46]);
  v30 = (_BYTE *)a1[46];
  if ( &_pthread_key_create )
  {
    v31 = *((_DWORD *)v30 - 2);
    v32 = v31 == 0;
    v33 = v31 < 0;
    v30 = (_BYTE *)a1[46];
    v34 = !v33 && !v32;
  }
  else
  {
    v34 = *((_DWORD *)v30 - 2) > 0;
  }
  v35 = v30 - 24;
  if ( v34 )
  {
    if ( v35 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v45 = _InterlockedExchangeAdd((volatile signed __int32 *)v30 - 2, 0xFFFFFFFF);
      }
      else
      {
        v45 = *((_DWORD *)v30 - 2);
        *((_DWORD *)v30 - 2) = v45 - 1;
      }
      if ( v45 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    a1[46] = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  }
  else if ( v35 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
  {
    *((_DWORD *)v30 - 2) = 0;
    *((_QWORD *)v30 - 3) = 0;
    *v30 = 0;
  }
  v36 = *(void (**)())(*a1 + 40LL);
  if ( v36 != nullsub_35 )
    ((void (__fastcall *)(_QWORD *, _QWORD))v36)(a1, v12);
  ++*(_QWORD *)(a1[1] + 56LL);
  if ( rwlock && &_pthread_key_create )
    pthread_rwlock_unlock(rwlock);
  return v54 - __readfsqword(0x28u);
}

