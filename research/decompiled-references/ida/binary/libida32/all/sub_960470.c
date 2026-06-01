__int64 __fastcall sub_960470(__int64 a1, __int64 a2)
{
  pthread_mutex_t *v3; // rdi
  int v4; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __m128i v9; // xmm0
  __int64 v10; // rsi
  __int64 v11; // r8
  void (__fastcall *v12)(__m128i *, __m128i *, __int64); // rax
  __int64 v13; // rdi
  __m128i v14; // xmm1
  char v15; // cl
  __int64 v16; // rdx
  pthread_mutex_t *mutex; // [rsp+0h] [rbp-98h]
  __m128i v18; // [rsp+10h] [rbp-88h] BYREF
  __int128 v19; // [rsp+20h] [rbp-78h]
  char v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  __m128i v22; // [rsp+40h] [rbp-58h] BYREF
  void (__fastcall *v23)(__m128i *, __m128i *, __int64); // [rsp+50h] [rbp-48h]
  __int64 v24; // [rsp+58h] [rbp-40h]
  char v25; // [rsp+60h] [rbp-38h]
  __int64 v26; // [rsp+68h] [rbp-30h]
  unsigned __int64 v27; // [rsp+78h] [rbp-20h]

  v3 = (pthread_mutex_t *)(a1 + 208);
  v27 = __readfsqword(0x28u);
  mutex = v3;
  if ( &_pthread_key_create )
  {
    v4 = pthread_mutex_lock(v3);
    if ( v4 )
      std::__throw_system_error(v4);
  }
  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( !*(_QWORD *)(a2 + 16) )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64))(a2 + 24))(a2);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 304);
    if ( v6 == *(_QWORD *)(a1 + 312) )
    {
      sub_9602B0(a1 + 296, (const __m128i *)a2);
      v10 = *(_QWORD *)(a1 + 304);
    }
    else
    {
      v7 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(v6 + 16) = 0;
      *(_OWORD *)v6 = 0;
      *(_QWORD *)(v6 + 24) = v7;
      v8 = *(_QWORD *)(a2 + 16);
      if ( v8 )
      {
        v9 = _mm_loadu_si128((const __m128i *)a2);
        *(_QWORD *)(v6 + 16) = v8;
        *(__m128i *)v6 = v9;
        *(_OWORD *)(a2 + 16) = 0;
      }
      *(_BYTE *)(v6 + 32) = *(_BYTE *)(a2 + 32);
      *(_QWORD *)(v6 + 40) = *(_QWORD *)(a2 + 40);
      v10 = *(_QWORD *)(a1 + 304) + 48LL;
      *(_QWORD *)(a1 + 304) = v10;
    }
    v11 = *(_QWORD *)(v10 - 24);
    v12 = *(void (__fastcall **)(__m128i *, __m128i *, __int64))(v10 - 32);
    *(_QWORD *)&v19 = 0;
    v13 = *(_QWORD *)(a1 + 296);
    v18 = 0;
    *((_QWORD *)&v19 + 1) = v11;
    if ( v12 )
    {
      v14 = _mm_loadu_si128((const __m128i *)(v10 - 48));
      *(_QWORD *)&v19 = v12;
      *(_OWORD *)(v10 - 32) = 0;
      v18 = v14;
      v15 = *(_BYTE *)(v10 - 16);
      v16 = *(_QWORD *)(v10 - 8);
      v24 = v11;
      v20 = v15;
      v21 = v16;
      v23 = v12;
      v22 = v14;
      v19 = 0;
    }
    else
    {
      v15 = *(_BYTE *)(v10 - 16);
      v16 = *(_QWORD *)(v10 - 8);
      v24 = v11;
      v23 = nullptr;
      v20 = v15;
      v21 = v16;
      v22 = 0;
    }
    v25 = v15;
    v26 = v16;
    sub_95DF70(v13, 0xAAAAAAAAAAAAAAABLL * ((v10 - v13) >> 4) - 1, 0, (__int64)&v22);
    if ( v23 )
      v23(&v22, &v22, 3);
    if ( (_QWORD)v19 )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v19)(&v18, &v18, 3);
  }
  if ( mutex && &_pthread_key_create )
    pthread_mutex_unlock(mutex);
  return std::condition_variable::notify_one((std::condition_variable *)(a1 + 248));
}

