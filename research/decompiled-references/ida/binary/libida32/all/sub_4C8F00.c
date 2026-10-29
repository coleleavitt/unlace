unsigned __int64 __fastcall sub_4C8F00(__int64 a1, unsigned int a2, unsigned __int64 a3, char *a4, int a5)
{
  pthread_rwlock_t *v6; // rdi
  _DWORD *v10; // rax
  char **v11; // r11
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  unsigned int v14; // ebx
  _QWORD *v15; // rax
  size_t v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  size_t v19; // rdx
  _DWORD *v20; // rsi
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  _BYTE *v23; // rax
  int v24; // eax
  bool v25; // zf
  bool v26; // sf
  bool v27; // dl
  _BYTE *v28; // rdi
  _DWORD *v29; // rsi
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  _DWORD *v35; // rax
  unsigned __int64 v36; // rdx
  _DWORD *v37; // rax
  int v38; // edx
  __int64 v39; // [rsp+0h] [rbp-78h]
  __int64 v40; // [rsp+0h] [rbp-78h]
  int v42; // [rsp+14h] [rbp-64h] BYREF
  unsigned __int64 v43; // [rsp+18h] [rbp-60h] BYREF
  pthread_rwlock_t *rwlock; // [rsp+20h] [rbp-58h]
  char v45; // [rsp+28h] [rbp-50h]
  unsigned __int64 v46; // [rsp+38h] [rbp-40h]

  v6 = *(pthread_rwlock_t **)a1;
  v46 = __readfsqword(0x28u);
  rwlock = v6;
  v45 = 0;
  if ( !v6 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(v6) == 35 )
    std::__throw_system_error(35);
  v45 = 1;
  v10 = sub_4C7060((_QWORD *)(a1 + 48), a2);
  if ( v10 )
  {
    v12 = (unsigned int)v10[3];
    v13 = *(_QWORD *)(a1 + 200);
    v14 = v10[3];
    v15 = (_QWORD *)(v13 + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 232) + 4 * v12));
    v39 = *(unsigned int *)(*(_QWORD *)(a1 + 232) + 4 * v12);
    v16 = *(_QWORD *)(v13 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 232) + 4 * v12) + 1)) - *v15;
    *(_QWORD *)(a1 + 224) += v16;
    memset((void *)(*(_QWORD *)(a1 + 152) + *v15), 0, v16);
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v39) = -1;
    v17 = *(_QWORD *)(a1 + 304);
    v18 = (_QWORD *)(v17 + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 336) + 4 * v12));
    v40 = *(unsigned int *)(*(_QWORD *)(a1 + 336) + 4 * v12);
    v19 = *(_QWORD *)(v17 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 336) + 4 * v12) + 1)) - *v18;
    *(_QWORD *)(a1 + 328) += v19;
    memset((void *)(*(_QWORD *)(a1 + 256) + *v18), 0, v19);
    *(_DWORD *)(*(_QWORD *)(a1 + 280) + 4 * v40) = -1;
    sub_428E60((_QWORD *)(a1 + 360), v12);
  }
  else
  {
    v33 = *(_QWORD *)(a1 + 24);
    if ( v33 == *(_QWORD *)(a1 + 16) )
    {
      v14 = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 40) = v14 + 1;
    }
    else
    {
      v14 = *(_DWORD *)(v33 - 4);
      *(_QWORD *)(a1 + 24) = v33 - 4;
    }
    v43 = __PAIR64__(v14, a2);
    sub_4C6C90(v11, (__int64 *)&v43);
    v12 = v14;
  }
  v20 = *(_DWORD **)(a1 + 112);
  v21 = *(_QWORD *)(a1 + 104);
  v22 = ((__int64)v20 - v21) >> 2;
  if ( v12 >= v22 )
  {
    v34 = v14 + 1;
    v42 = -1;
    if ( v22 < v34 )
    {
      sub_424500(a1 + 104, v20, v34 - v22, &v42);
      v21 = *(_QWORD *)(a1 + 104);
    }
    else if ( v34 < v22 )
    {
      v35 = (_DWORD *)(v21 + 4 * v34);
      if ( v20 != v35 )
        *(_QWORD *)(a1 + 112) = v35;
    }
  }
  *(_DWORD *)(v21 + 4 * v12) = a2;
  sub_421400(a1 + 152, v14, a3, a4);
  sub_427E80((std::string *)(a1 + 608), a3, a4);
  sub_421400(a1 + 256, v14, *(_QWORD *)(*(_QWORD *)(a1 + 608) - 24LL), *(_BYTE **)(a1 + 608));
  v23 = *(_BYTE **)(a1 + 608);
  if ( &_pthread_key_create )
  {
    v24 = *((_DWORD *)v23 - 2);
    v25 = v24 == 0;
    v26 = v24 < 0;
    v23 = *(_BYTE **)(a1 + 608);
    v27 = !v26 && !v25;
  }
  else
  {
    v27 = *((_DWORD *)v23 - 2) > 0;
  }
  v28 = v23 - 24;
  if ( v27 )
  {
    if ( v28 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v38 = _InterlockedExchangeAdd((volatile signed __int32 *)v23 - 2, 0xFFFFFFFF);
      }
      else
      {
        v38 = *((_DWORD *)v23 - 2);
        *((_DWORD *)v23 - 2) = v38 - 1;
      }
      if ( v38 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    *(_QWORD *)(a1 + 608) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  }
  else if ( v28 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
  {
    *((_DWORD *)v23 - 2) = 0;
    *((_QWORD *)v23 - 3) = 0;
    *v23 = 0;
  }
  sub_42C220(a1 + 360, v14, (__int64)a4);
  v29 = *(_DWORD **)(a1 + 136);
  v30 = *(_QWORD *)(a1 + 128);
  v31 = ((__int64)v29 - v30) >> 2;
  if ( v12 >= v31 )
  {
    v36 = v14 + 1;
    LODWORD(v43) = 0;
    if ( v31 < v36 )
    {
      sub_424500(a1 + 128, v29, v36 - v31, &v43);
      v30 = *(_QWORD *)(a1 + 128);
    }
    else if ( v36 < v31 )
    {
      v37 = (_DWORD *)(v30 + 4 * v36);
      if ( v29 != v37 )
        *(_QWORD *)(a1 + 136) = v37;
    }
  }
  *(_DWORD *)(v30 + 4 * v12) = a5;
  ++*(_QWORD *)(*(_QWORD *)a1 + 56LL);
  if ( rwlock && &_pthread_key_create )
    pthread_rwlock_unlock(rwlock);
  return v46 - __readfsqword(0x28u);
}

