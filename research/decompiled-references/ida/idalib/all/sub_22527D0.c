_QWORD *__fastcall sub_22527D0(_BYTE *src, size_t n, _BYTE *a3, signed __int64 a4)
{
  __int64 v4; // rbx
  int v5; // eax
  pthread_mutex_t *v6; // r12
  unsigned int v7; // eax
  unsigned int v8; // r9d
  __int64 *v9; // r8
  __int64 v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // r9d
  __int64 *v14; // r8
  __int64 v15; // rcx
  __m128i si128; // xmm0
  unsigned int v17; // eax
  unsigned int v19; // [rsp+Ch] [rbp-6Ch]
  __int64 *v20; // [rsp+10h] [rbp-68h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v25[8]; // [rsp+38h] [rbp-40h] BYREF

  if ( !qword_2D0ABB0 )
    sub_2230020(&qword_2D0ABB0, (__int64 (*)(void))sub_224F5D0, (__int64)sub_22522C0);
  v4 = qword_2D0ABB0;
  v25[0] = &v24;
  v24 = qword_2D0ABB0;
  *(_QWORD *)__tls_get_addr(&std::__once_callable) = v25;
  *(_QWORD *)__tls_get_addr(&std::__once_call) = sub_2252E20;
  if ( !&_pthread_key_create )
  {
    v5 = -1;
    goto LABEL_20;
  }
  v5 = pthread_once((pthread_once_t *)(v4 + 784), (void (*)(void))&_once_proxy);
  if ( v5 )
    goto LABEL_20;
  if ( !qword_2D0ABB0 )
    sub_2230020(&qword_2D0ABB0, (__int64 (*)(void))sub_224F5D0, (__int64)sub_22522C0);
  v6 = (pthread_mutex_t *)(qword_2D0ABB0 + 616);
  v5 = pthread_mutex_lock((pthread_mutex_t *)(qword_2D0ABB0 + 616));
  if ( v5 )
LABEL_20:
    std::__throw_system_error(v5);
  v7 = sub_2244B30((__int64)src, n);
  v8 = sub_2244CB0(v4 + 792, src, n, v7);
  v9 = (__int64 *)(*(_QWORD *)(v4 + 792) + 8LL * v8);
  if ( *v9 )
  {
    if ( *v9 != -8 )
    {
      sub_2252280(v25, v9, 0);
      v10 = *v25[0];
      v11 = *(_QWORD **)(*v25[0] + 8);
      if ( v11 )
        goto LABEL_18;
      goto LABEL_11;
    }
    --*(_DWORD *)(v4 + 808);
  }
  v20 = v9;
  v19 = v8;
  v12 = sub_22300B0(n + 41, 8);
  v13 = v19;
  v14 = v20;
  v15 = v12;
  if ( n )
  {
    v23 = v12;
    memcpy((void *)(v12 + 40), src, n);
    v15 = v23;
    v14 = v20;
    v13 = v19;
  }
  si128 = _mm_load_si128(xmmword_23ABC80);
  *(_BYTE *)(v15 + n + 40) = 0;
  *(_QWORD *)v15 = n;
  *(_QWORD *)(v15 + 8) = 0;
  *(_QWORD *)(v15 + 16) = 0;
  *(__m128i *)(v15 + 24) = si128;
  *v14 = v15;
  ++*(_DWORD *)(v4 + 804);
  v17 = sub_22450D0(v4 + 792, v13);
  sub_2252280(v25, (__int64 *)(*(_QWORD *)(v4 + 792) + 8LL * v17), 0);
  v10 = *v25[0];
  v11 = *(_QWORD **)(*v25[0] + 8);
  if ( !v11 )
  {
LABEL_11:
    v11 = (_QWORD *)operator new(0x70u);
    if ( !qword_2D0ABB0 )
      sub_2230020(&qword_2D0ABB0, (__int64 (*)(void))sub_224F5D0, (__int64)sub_22522C0);
    sub_224E610(v11, src, n, a3, a4, (pthread_mutex_t *)(qword_2D0ABB0 + 616));
    *(_QWORD *)(v10 + 8) = v11;
  }
LABEL_18:
  pthread_mutex_unlock(v6);
  return v11;
}
