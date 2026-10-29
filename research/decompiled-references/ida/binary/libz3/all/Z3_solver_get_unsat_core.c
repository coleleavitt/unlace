_QWORD *__fastcall Z3_solver_get_unsat_core(__int64 a1, pthread_mutex_t *a2)
{
  char **exception; // rbx
  char v3; // al
  __int64 v4; // rax
  int v5; // r12d
  unsigned __int8 v6; // bp
  __int64 v7; // rax
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbp
  _QWORD *v16; // rbx
  __int64 *v17; // rbp
  __int64 *v18; // r13
  __int64 v19; // r12
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  int v22; // eax
  _QWORD *v23; // rcx
  unsigned int v24; // eax
  __int64 *v25; // rbp
  __int64 *v26; // r12
  __int64 v27; // rsi
  unsigned int v30; // r14d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rcx
  char v34; // [rsp+2Bh] [rbp-DDh]
  unsigned int v35; // [rsp+2Ch] [rbp-DCh]
  _BYTE v36[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v38; // [rsp+48h] [rbp-C0h]
  pthread_mutex_t *v39; // [rsp+50h] [rbp-B8h]
  _BYTE v40[8]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41[4]; // [rsp+60h] [rbp-A8h] BYREF
  int *v42; // [rsp+80h] [rbp-88h] BYREF
  int v43; // [rsp+88h] [rbp-80h]
  __int128 v44; // [rsp+90h] [rbp-78h]
  __int128 v45; // [rsp+A0h] [rbp-68h]
  __int64 v46; // [rsp+B0h] [rbp-58h]
  __int16 v47; // [rsp+B8h] [rbp-50h]
  __int64 v48; // [rsp+C0h] [rbp-48h]

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v34 = v3;
  if ( v3 )
    sub_29E460(a1, (__int64)a2);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2->__list.__next )
    sub_2A74C0(a1, (__int64)a2);
  v4 = *(_QWORD *)(a1 + 232);
  v38 = nullptr;
  v39 = a2 + 1;
  v37 = v4;
  sub_17F9A60(v40, "solver");
  v5 = sub_1859960(&a2[1], "timeout", *(unsigned int *)(a1 + 100));
  if ( (unsigned int)sub_1859980(&a2[1], "timeout", v40, 0xFFFFFFFFLL) != -1 )
    v5 = sub_1859980(v39, "timeout", v40, 0xFFFFFFFFLL);
  v35 = sub_1859960(&a2[1], "rlimit", *(unsigned int *)(a1 + 96));
  v6 = sub_1859610(&a2[1], "ctrl_c", 1);
  v7 = *(_QWORD *)(a1 + 232);
  v43 = 0;
  v42 = &off_1C4C9C8;
  v46 = 0;
  v47 = 0;
  v48 = v7;
  v44 = 0;
  v45 = 0;
  if ( &_pthread_key_create )
  {
    v8 = pthread_mutex_lock(a2 + 2);
    if ( v8 )
      std::__throw_system_error(v8);
  }
  a2[3].__align = (__int64)&v42;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(a2 + 2);
  sub_18086F0(v41, &v42, v6);
  sub_18561B0((unsigned int)v36, v5, (unsigned int)&v42, v9, v10, v11);
  v12 = *(_QWORD *)(a1 + 232);
  sub_1829790(v12, v35);
  ((void (__fastcall *)(struct __pthread_internal_list *, __int64 *))a2->__list.__next->__prev[1].__next)(
    a2->__list.__next,
    &v37);
  sub_1829100(v12);
  sub_1856400(v36);
  sub_1808900(v41);
  if ( &_pthread_key_create )
  {
    v13 = pthread_mutex_lock(a2 + 2);
    if ( v13 )
      std::__throw_system_error(v13);
  }
  a2[3].__align = 0;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(a2 + 2);
  v14 = sub_186B270(0x28u);
  v15 = *(_QWORD *)(a1 + 232);
  v16 = (_QWORD *)v14;
  sub_2518F0(v14, a1);
  v16[3] = v15;
  *v16 = &off_1C4CA20;
  v16[4] = 0;
  sub_24FBE0(a1, (__int64)v16);
  v17 = v38;
  if ( v38 )
  {
    v18 = &v38[*((unsigned int *)v38 - 1)];
    if ( v38 != v18 )
    {
      v19 = *v38;
      v20 = (_QWORD *)v16[4];
      if ( *v38 )
        ++*(_DWORD *)(v19 + 8);
      if ( v20 )
        goto LABEL_24;
      v21 = (_QWORD *)sub_186B270(0x18u);
      v20 = v21 + 1;
      *v21 = 2;
      v22 = 1;
      v16[4] = v20;
      v23 = v20;
      while ( 1 )
      {
        ++v17;
        *v23 = v19;
        *((_DWORD *)v20 - 1) = v22;
        if ( v18 == v17 )
          break;
        while ( 1 )
        {
          v19 = *v17;
          if ( *v17 )
            ++*(_DWORD *)(v19 + 8);
LABEL_24:
          v24 = *((_DWORD *)v20 - 1);
          if ( v24 == *((_DWORD *)v20 - 2) )
            break;
          ++v17;
          v20[v24] = v19;
          *((_DWORD *)v20 - 1) = v24 + 1;
          if ( v18 == v17 )
            goto LABEL_26;
        }
        v30 = (3 * v24 + 1) >> 1;
        v31 = 8 * v30 + 8;
        if ( 8 * v24 + 8 >= (unsigned int)v31 || v24 >= v30 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v41, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v41);
          sub_233E40((__int64)v41);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (unsigned int *)sub_186B300(v20 - 1, v31);
        v33 = v32[1];
        v20 = v32 + 2;
        *v32 = v30;
        v16[4] = v32 + 2;
        LODWORD(v32) = v33;
        v23 = &v20[v33];
        v22 = (_DWORD)v32 + 1;
      }
    }
  }
LABEL_26:
  if ( v34 )
    sub_2BB620(v16);
  v42 = &off_1C4C9C8;
  if ( (_BYTE)v47 )
    sub_18296D0(v48);
  if ( HIBYTE(v47) )
    sub_1829760(v48);
  sub_18572D0(v40);
  v25 = v38;
  if ( v38 )
  {
    v26 = &v38[*((unsigned int *)v38 - 1)];
    if ( v38 >= v26 )
      goto LABEL_39;
    do
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 )
        {
          if ( (*(_DWORD *)(v27 + 8))-- == 1 )
            break;
        }
        if ( ++v25 >= v26 )
          goto LABEL_38;
      }
      sub_15D7BC0(v37, v27);
      ++v25;
    }
    while ( v25 < v26 );
LABEL_38:
    v25 = v38;
    if ( v38 )
LABEL_39:
      sub_186B220(v25 - 1);
  }
  if ( v34 )
    byte_1C7EBA0 = 1;
  return v16;
}

