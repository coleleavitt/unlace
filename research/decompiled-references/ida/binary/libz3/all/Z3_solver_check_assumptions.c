__int64 __fastcall Z3_solver_check_assumptions(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  char v6; // al
  __int64 *v7; // rdx
  unsigned int v8; // r12d
  unsigned __int8 v9; // r14
  __int64 v10; // rax
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r14
  __int64 v16; // rdi
  int v17; // eax
  char v19; // [rsp+17h] [rbp-E1h]
  pthread_mutex_t *mutex; // [rsp+18h] [rbp-E0h]
  int v21; // [rsp+38h] [rbp-C0h]
  unsigned int v22; // [rsp+3Ch] [rbp-BCh]
  __int64 v23; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v24[8]; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-A8h]
  _BYTE v26[8]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v27[16]; // [rsp+60h] [rbp-98h] BYREF
  int *v28; // [rsp+70h] [rbp-88h] BYREF
  int v29; // [rsp+78h] [rbp-80h]
  __int128 v30; // [rsp+80h] [rbp-78h]
  __int128 v31; // [rsp+90h] [rbp-68h]
  __int64 v32; // [rsp+A0h] [rbp-58h]
  __int16 v33; // [rsp+A8h] [rbp-50h]
  __int64 v34; // [rsp+B0h] [rbp-48h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v19 = v6;
  if ( v6 )
    sub_29E220(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !*(_QWORD *)(a2 + 32) )
    sub_2A74C0(a1, a2);
  if ( !a3 )
  {
LABEL_11:
    v25 = a2 + 40;
    sub_17F9A60(v26, "solver");
    v21 = sub_1859960(a2 + 40, "timeout", *(unsigned int *)(a1 + 100));
    if ( (unsigned int)sub_1859980(a2 + 40, "timeout", v26, 0xFFFFFFFFLL) != -1 )
      v21 = sub_1859980(v25, "timeout", v26, 0xFFFFFFFFLL);
    v22 = sub_1859960(a2 + 40, "rlimit", *(unsigned int *)(a1 + 96));
    v9 = sub_1859610(a2 + 40, "ctrl_c", 1);
    v10 = *(_QWORD *)(a1 + 232);
    v29 = 0;
    v34 = v10;
    v28 = &off_1C4C9C8;
    v32 = 0;
    v33 = 0;
    mutex = (pthread_mutex_t *)(a2 + 80);
    v30 = 0;
    v31 = 0;
    if ( &_pthread_key_create )
    {
      v11 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 80));
      if ( v11 )
        std::__throw_system_error(v11);
    }
    *(_QWORD *)(a2 + 120) = &v28;
    if ( &_pthread_key_create )
      pthread_mutex_unlock(mutex);
    sub_24FD10(&v23, a1, (__int64)&v28);
    sub_18086F0(v27, &v28, v9);
    sub_18561B0((unsigned int)v24, v21, (unsigned int)&v28, v12, v13, v14);
    v15 = *(_QWORD *)(a1 + 232);
    sub_1829790(v15, v22);
    v16 = *(_QWORD *)(a2 + 64);
    if ( v16 )
      sub_2A77D0(v16);
    v8 = sub_E60CB0(*(std::ios_base **)(a2 + 32), a3, (int)a4);
    sub_1829100(v15);
    sub_1856400(v24);
    sub_1808900(v27);
    if ( &_pthread_key_create )
    {
      v17 = pthread_mutex_lock(mutex);
      if ( v17 )
        std::__throw_system_error(v17);
    }
    *(_QWORD *)(a2 + 120) = 0;
    if ( &_pthread_key_create )
      pthread_mutex_unlock(mutex);
    if ( !v8 )
    {
      sub_E38C90(*(_QWORD *)(a2 + 32), &v28, "682");
      v8 = 0;
    }
    sub_24E910(&v23);
    v28 = &off_1C4C9C8;
    if ( (_BYTE)v33 )
    {
      sub_18296D0(v34);
      if ( !HIBYTE(v33) )
      {
LABEL_27:
        sub_18572D0(v26);
        if ( !v19 )
          return v8;
        goto LABEL_10;
      }
    }
    else if ( !HIBYTE(v33) )
    {
      goto LABEL_27;
    }
    sub_1829760(v34);
  }
  v7 = a4;
  while ( (unsigned int)*(unsigned __int16 *)(*v7 + 4) - 3 > 1 )
  {
    if ( &a4[a3] == ++v7 )
      goto LABEL_11;
  }
  sub_24EA30(a1, 3u, "assumption is not an expression");
  v8 = 0;
  if ( v19 )
LABEL_10:
    byte_1C7EBA0 = 1;
  return v8;
}

