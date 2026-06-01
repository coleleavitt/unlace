void __fastcall sub_1392D90(__int64 a1)
{
  void *v2; // rdi
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  int v8; // eax
  char *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r12
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  __int64 **v14; // rbp
  __int64 *v15; // r15
  __int64 *v16; // r14
  int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  __int64 *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  volatile signed __int32 *v25; // rbp
  signed __int32 v26; // eax
  signed __int32 v27; // eax
  __int64 *v28; // [rsp+8h] [rbp-70h]
  _QWORD *v29; // [rsp+8h] [rbp-70h]
  __int64 *v30[4]; // [rsp+10h] [rbp-68h] BYREF
  __int16 v31; // [rsp+30h] [rbp-48h]

  v2 = *(void **)(a1 + 56);
  if ( v2 )
    operator delete(v2);
  v3 = *(char **)(a1 + 32);
  if ( *(_DWORD *)(a1 + 44) )
  {
    v4 = *(_DWORD *)(a1 + 40);
    if ( v4 )
    {
      v5 = 0;
      v6 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        v7 = *(_QWORD **)&v3[v5];
        if ( v7 && v7 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v3[v5], *v7 + 9LL, 8);
          v3 = *(char **)(a1 + 32);
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  if ( *(_DWORD *)(a1 + 20) )
  {
    v8 = *(_DWORD *)(a1 + 16);
    v9 = *(char **)(a1 + 8);
    if ( v8 )
    {
      v10 = 0;
      v11 = 8LL * (unsigned int)(v8 - 1) + 8;
      do
      {
        v12 = *(_QWORD **)&v9[v10];
        if ( v12 != (_QWORD *)-8LL && v12 )
        {
          operator delete(*(_QWORD *)&v9[v10], *v12 + 41LL, 8);
          v9 = *(char **)(a1 + 8);
        }
        v10 += 8;
      }
      while ( v10 != v11 );
    }
  }
  else
  {
    v9 = *(char **)(a1 + 8);
  }
  free(v9);
  v13 = *(_QWORD **)a1;
  if ( v13 )
  {
    v14 = (__int64 **)v13[2];
    if ( v14 )
    {
      if ( !(_BYTE)byte_2CD8A40 && __cxa_guard_acquire(&byte_2CD8A40) )
      {
        stru_2CD8A60.__list.__next = nullptr;
        *(_OWORD *)&stru_2CD8A60.__lock = 0;
        *((_OWORD *)&stru_2CD8A60.__align + 1) = 0;
        qword_2CD8A88 = 0;
        xmmword_2CD8A90 = (__int128)_mm_load_si128((const __m128i *)&xmmword_23A8DB0);
        __cxa_atexit((void (*)(void *))sub_1392C20, &stru_2CD8A60, &off_2B25620);
        __cxa_guard_release(&byte_2CD8A40);
      }
      v15 = *v14;
      v16 = v14[1];
      if ( &_pthread_key_create )
      {
        v17 = pthread_mutex_lock(&stru_2CD8A60);
        if ( v17 )
          std::__throw_system_error(v17);
      }
      v18 = sub_2244B30(v15, v16);
      v19 = sub_2244E60(&qword_2CD8A88, v15, v16, v18);
      if ( v19 == -1 )
        v20 = (__int64 *)(qword_2CD8A88 + 8LL * (unsigned int)xmmword_2CD8A90);
      else
        v20 = (__int64 *)(qword_2CD8A88 + 8LL * v19);
      sub_A45C10(v30, v20, 1);
      v28 = v30[0];
      sub_A45C10(v30, (__int64 *)(qword_2CD8A88 + 8LL * (unsigned int)xmmword_2CD8A90), 1);
      if ( v30[0] != v28 )
      {
        v29 = (_QWORD *)*v28;
        sub_2244F90(&qword_2CD8A88, v29, v21, v22, v23, v24);
        operator delete(v29, *v29 + 9LL, 8);
      }
      v30[0] = v15;
      v31 = 261;
      v30[1] = v16;
      sub_228BF70(v30, 1);
      if ( &_pthread_key_create )
        pthread_mutex_unlock(&stru_2CD8A60);
      if ( *v14 != (__int64 *)(v14 + 2) )
        operator delete(*v14);
      operator delete(v14, 0x20u);
    }
    v25 = (volatile signed __int32 *)v13[1];
    if ( v25 )
    {
      if ( &_pthread_key_create )
      {
        v26 = _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF);
      }
      else
      {
        v26 = *((_DWORD *)v25 + 2);
        *((_DWORD *)v25 + 2) = v26 - 1;
      }
      if ( v26 == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        if ( &_pthread_key_create )
        {
          v27 = _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF);
        }
        else
        {
          v27 = *((_DWORD *)v25 + 3);
          *((_DWORD *)v25 + 3) = v27 - 1;
        }
        if ( v27 == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 24LL))(v25);
      }
    }
    operator delete(v13, 0x18u);
  }
}
