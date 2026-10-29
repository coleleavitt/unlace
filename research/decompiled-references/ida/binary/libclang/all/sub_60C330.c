void __fastcall sub_60C330(pthread_mutex_t *a1, __int64 (*a2)(), __int64 a3, __int64 a4)
{
  pthread_mutex_t *v4; // rbx
  pthread_mutex_t *v5; // r13
  int v6; // eax
  __int64 v7; // rax
  void *v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rdi
  _BYTE *v12; // rax
  __int64 v13; // rdi
  _BYTE *v14; // rax
  __int64 *v15; // rdi
  __int64 *v16; // rdi
  __int64 v17; // rax
  __m128i si128; // xmm0
  __m128i v19; // [rsp+0h] [rbp-78h] BYREF
  double v20; // [rsp+10h] [rbp-68h]
  double v21[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a1;
  if ( !mutex )
  {
    a2 = sub_5F7C70;
    a1 = (pthread_mutex_t *)&mutex;
    sub_25CC930(&mutex, sub_5F7C70, sub_5F7CA0);
  }
  v5 = mutex;
  if ( &_pthread_key_create )
  {
    a1 = mutex;
    v6 = pthread_mutex_lock(mutex);
    if ( v6 )
      std::__throw_system_error(v6);
  }
  if ( !(_BYTE)byte_4AD2088 )
  {
    a1 = (pthread_mutex_t *)&byte_4AD2088;
    if ( __cxa_guard_acquire(&byte_4AD2088) )
    {
      a2 = (__int64 (*)())(&dword_0 + 1);
      sub_25EDE70(&qword_4AD20A0, 1);
      a1 = (pthread_mutex_t *)&byte_4AD2088;
      __cxa_guard_release(&byte_4AD2088);
    }
  }
  v7 = sub_26260E0(a1, a2, a3, a4);
  v8 = *(void **)(v7 + 32);
  v9 = v7;
  if ( *(_QWORD *)(v7 + 24) - (_QWORD)v8 <= 9u )
  {
    v10 = sub_26240F0(v7, "[libclang:", 10);
  }
  else
  {
    v10 = v7;
    qmemcpy(v8, "[libclang:", 10);
    *(_QWORD *)(v7 + 32) += 10LL;
  }
  v11 = sub_26240F0(v10, *(&v4->__align + 1), *(&v4->__align + 2));
  v12 = *(_BYTE **)(v11 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v11 + 24) )
  {
    sub_26239D0(v11, 58);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = v12 + 1;
    *v12 = 58;
  }
  sub_25EDE70(v21, 1);
  v20 = v21[0] - *(double *)&qword_4AD20A0;
  v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_49F4938, (__m128i)(unsigned __int64)"%7.4f] ");
  sub_26248B0(v9, &v19);
  v13 = sub_26240F0(v9, *(&v4[1].__align + 1), *(&v4[1].__align + 2));
  v14 = *(_BYTE **)(v13 + 32);
  if ( (unsigned __int64)v14 >= *(_QWORD *)(v13 + 24) )
  {
    sub_26239D0(v13, 10);
  }
  else
  {
    *(_QWORD *)(v13 + 32) = v14 + 1;
    *v14 = 10;
  }
  if ( v4[1].__size[0] )
  {
    sub_26477B0(v9, 0);
    v17 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v17) <= 0x32 )
    {
      sub_26240F0(v9, "--------------------------------------------------\n", 51);
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E290);
      *(__m128i *)(v17 + 32) = si128;
      *(__m128i *)v17 = si128;
      *(_DWORD *)(v17 + 47) = 170732845;
      *(__m128i *)(v17 + 16) = si128;
      *(_QWORD *)(v9 + 32) += 51LL;
    }
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(v5);
  *(&v4[3].__align + 2) = (__int64)&qword_4A6EA70[2];
  sub_2623770(&v4[3].__align + 2);
  v15 = (__int64 *)*(&v4[1].__align + 1);
  if ( v15 != &v4[1].__align + 4 )
    free(v15);
  v16 = (__int64 *)*(&v4->__align + 1);
  if ( v16 != &v4->__align + 3 )
    operator delete(v16, (unsigned __int64)&v4->__list.__prev->__prev + 1);
}

