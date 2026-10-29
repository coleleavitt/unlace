__int64 __fastcall Z3_solver_check(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // ebp
  unsigned int v4; // r12d
  unsigned __int8 v5; // bl
  __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r13
  __int64 *v16; // rbx
  __int64 v17; // r12
  unsigned int v18; // ebx
  int v19; // eax
  void *v21; // [rsp+0h] [rbp-108h]
  __int64 v22; // [rsp+8h] [rbp-100h]
  __int64 *i; // [rsp+8h] [rbp-100h]
  pthread_mutex_t *mutex; // [rsp+10h] [rbp-F8h]
  int *v25; // [rsp+18h] [rbp-F0h]
  __int64 *v26; // [rsp+20h] [rbp-E8h]
  int v27[2]; // [rsp+28h] [rbp-E0h]
  __int64 *v28; // [rsp+30h] [rbp-D8h]
  int *v29; // [rsp+38h] [rbp-D0h]
  int v30; // [rsp+40h] [rbp-C8h]
  char v31; // [rsp+47h] [rbp-C1h]
  __int64 *v32; // [rsp+48h] [rbp-C0h]
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  int v34; // [rsp+58h] [rbp-B0h] BYREF
  int v35[2]; // [rsp+60h] [rbp-A8h]
  int v36; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v37[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v38; // [rsp+80h] [rbp-88h] BYREF
  int v39; // [rsp+88h] [rbp-80h]
  void *v40[2]; // [rsp+90h] [rbp-78h]
  int v41[4]; // [rsp+A0h] [rbp-68h]
  __int64 v42; // [rsp+B0h] [rbp-58h]
  __int16 v43; // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v31 = v2;
  if ( v2 )
    sub_29E1E0(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !*(_QWORD *)(a2 + 32) )
    sub_2A74C0(a1, a2);
  *(_QWORD *)v35 = a2 + 40;
  v25 = &v36;
  sub_17F9A60(&v36, "solver");
  v3 = sub_1859960(a2 + 40, "timeout", *(unsigned int *)(a1 + 100));
  if ( (unsigned int)sub_1859980(a2 + 40, "timeout", &v36, 0xFFFFFFFFLL) != -1 )
    v3 = sub_1859980(*(_QWORD *)v35, "timeout", &v36, 0xFFFFFFFFLL);
  v4 = sub_1859960(a2 + 40, "rlimit", *(unsigned int *)(a1 + 96));
  v5 = sub_1859610(a2 + 40, "ctrl_c", 1);
  v6 = *(_QWORD *)(a1 + 232);
  v38 = (__int64)&off_1C4C9C8;
  v44 = v6;
  v39 = 0;
  v42 = 0;
  v43 = 0;
  mutex = (pthread_mutex_t *)(a2 + 80);
  *(_OWORD *)v40 = 0;
  *(_OWORD *)v41 = 0;
  if ( &_pthread_key_create )
  {
    v7 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 80));
    if ( v7 )
      std::__throw_system_error(v7);
  }
  v26 = &v38;
  *(_QWORD *)(a2 + 120) = &v38;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(mutex);
  v32 = &v33;
  sub_24FD10(&v33, a1, (__int64)&v38);
  v28 = v37;
  sub_18086F0(v37, &v38, v5);
  v29 = &v34;
  sub_18561B0((unsigned int)&v34, v3, (unsigned int)&v38, v8, v9, v10);
  *(_QWORD *)v27 = *(_QWORD *)(a1 + 232);
  sub_1829790(*(_QWORD *)v27, v4);
  v15 = *(_QWORD *)(a2 + 64);
  if ( v15 )
  {
    sub_168C010(
      *(_QWORD *)(a2 + 64),
      v15 + 704,
      v11,
      v12,
      v13,
      v14,
      v21,
      v22,
      (int)mutex,
      (int)&v36,
      (__int64)&v38,
      v27[0],
      (__int64)v37,
      (int)&v34,
      v30,
      (int)&v33,
      v33,
      v34,
      v35[0],
      v36,
      v37[0],
      v37[1],
      v38,
      v39,
      v40[0],
      (int)v40[1],
      v41[0],
      *(void **)&v41[2]);
    std::__ostream_insert<char,std::char_traits<char>>();
    v16 = *(__int64 **)(v15 + 1224);
    if ( v16 )
    {
      for ( i = &v16[*((unsigned int *)v16 - 1)]; i != v16; ++v16 )
      {
        v17 = *v16;
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_168B5F0(v15, v15 + 704, v17, 1);
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::flush((std::ostream *)(v15 + 704));
  }
  v18 = sub_E60CB0(*(std::ios_base **)(a2 + 32), 0, 0);
  sub_1829100(*(_QWORD *)v27);
  sub_1856400(v29);
  sub_1808900(v28);
  if ( &_pthread_key_create )
  {
    v19 = pthread_mutex_lock(mutex);
    if ( v19 )
      std::__throw_system_error(v19);
  }
  *(_QWORD *)(a2 + 120) = 0;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(mutex);
  if ( !v18 )
  {
    sub_E38C90(*(_QWORD *)(a2 + 32), v26, "682");
    v18 = 0;
  }
  sub_24E910(v32);
  v38 = (__int64)&off_1C4C9C8;
  if ( (_BYTE)v43 )
    sub_18296D0(v44);
  if ( HIBYTE(v43) )
    sub_1829760(v44);
  sub_18572D0(v25);
  if ( v31 )
    byte_1C7EBA0 = 1;
  return v18;
}

