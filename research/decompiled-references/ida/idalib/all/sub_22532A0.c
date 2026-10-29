int __fastcall sub_22532A0(__int64 a1, _BYTE *a2, size_t a3, _BYTE *a4, size_t a5)
{
  __int64 v8; // rbp
  pthread_mutex_t *v9; // r12
  int v10; // eax
  __int64 v11; // rax
  int result; // eax

  if ( !qword_2D0ABB0 )
    sub_2230020(&qword_2D0ABB0, (__int64 (*)(void))sub_224F5D0, (__int64)sub_22522C0);
  v8 = qword_2D0ABB0;
  sub_99BDC0((_QWORD *)(a1 + 80), 0, *(_QWORD *)(a1 + 88), a2, a3);
  sub_99BDC0((_QWORD *)(a1 + 112), 0, *(_QWORD *)(a1 + 120), a4, a5);
  *(_WORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = v8 + 664;
  if ( !qword_2D0ABB0 )
    sub_2230020(&qword_2D0ABB0, (__int64 (*)(void))sub_224F5D0, (__int64)sub_22522C0);
  v9 = (pthread_mutex_t *)(qword_2D0ABB0 + 616);
  if ( &_pthread_key_create )
  {
    v10 = pthread_mutex_lock((pthread_mutex_t *)(qword_2D0ABB0 + 616));
    if ( v10 )
      std::__throw_system_error(v10);
  }
  v11 = *(_QWORD *)(v8 + 728);
  if ( v11 )
    *(_QWORD *)(v11 + 160) = a1 + 168;
  *(_QWORD *)(a1 + 168) = v11;
  result = v8 + 728;
  *(_QWORD *)(a1 + 160) = v8 + 728;
  *(_QWORD *)(v8 + 728) = a1;
  if ( &_pthread_key_create )
    return pthread_mutex_unlock(v9);
  return result;
}
