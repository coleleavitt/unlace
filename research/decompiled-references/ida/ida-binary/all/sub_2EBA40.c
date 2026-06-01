unsigned __int64 __fastcall sub_2EBA40(_QWORD *a1, const QT::QString *a2)
{
  const QT::QString *v3; // rbx
  const QT::QString *v4; // r13
  size_t v5; // r13
  bool v6; // zf
  __int64 v7; // rdi
  __int64 v8; // rdi
  _BYTE *v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rax
  volatile signed __int32 *v12; // rdx
  signed __int32 v13; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  __m128i *v16; // rax
  __m128i v17; // xmm0
  void *v18; // r15
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rcx
  const char *v22; // rsi
  __m128i v23; // xmm0
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rdx
  signed __int32 v26; // eax
  void *v28; // rdi
  void *v29; // r14
  void *v30; // rdi
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  void *v37; // rdi
  __int64 v38; // rax
  __m128i n; // [rsp+10h] [rbp-D0h] BYREF
  char v40[8]; // [rsp+28h] [rbp-B8h] BYREF
  __m128i v41; // [rsp+30h] [rbp-B0h] BYREF
  void *src; // [rsp+40h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+48h] [rbp-98h]
  void *ptr; // [rsp+60h] [rbp-80h] BYREF
  void *v45; // [rsp+68h] [rbp-78h]
  __int64 v46; // [rsp+70h] [rbp-70h]
  __int128 v47; // [rsp+80h] [rbp-60h] BYREF
  __m128i v48; // [rsp+90h] [rbp-50h]
  unsigned __int64 v49; // [rsp+A8h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  v3 = a2;
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
  v4 = (const QT::QString *)v45;
  n.m128i_i64[1] = v46;
  if ( !v45 )
    v4 = (const QT::QString *)&QT::QByteArray::_empty;
  src = nullptr;
  v43 = 0;
  if ( n.m128i_i64[1] )
  {
    v28 = nullptr;
    if ( n.m128i_i64[1] != -1 )
    {
      src = (void *)qvector_reserve(&src, 0, n.m128i_i64[1] + 1, 1);
      v28 = src;
    }
    *(_QWORD *)&v43 = n.m128i_i64[1] + 1;
    a2 = v4;
    memmove(v28, v4, n.m128i_u64[1]);
    *((_BYTE *)src + n.m128i_i64[1]) = 0;
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  n.m128i_i64[1] = v43;
  if ( !(_QWORD)v43 || (v5 = n.m128i_i64[1] - 1, n.m128i_i64[1] == 1) )
  {
    v6 = a1[27] == 0;
    a1[22] = 0;
    if ( v6 )
      goto LABEL_14;
    goto LABEL_10;
  }
  v29 = src;
  v30 = (void *)a1[21];
  if ( a1[23] < n.m128i_i64[1] )
  {
    v38 = qvector_reserve(a1 + 21, a1[21], n.m128i_i64[1], 1);
    a1[21] = v38;
    v30 = (void *)v38;
  }
  a1[22] = n.m128i_i64[1];
  memmove(v30, v29, v5);
  *(_BYTE *)(a1[21] + n.m128i_i64[1] - 1) = 0;
  v31 = a1[27];
  a2 = (const QT::QString *)a1[22];
  if ( (unsigned __int64)a2 < v31 )
    goto LABEL_10;
  if ( a2 && v31 )
  {
    v32 = 0;
    v33 = 0;
    do
    {
      if ( *(_BYTE *)(a1[26] + v33) == *(_BYTE *)(a1[21] + v32) )
        ++v33;
      ++v32;
    }
    while ( v33 < v31 && v32 < (unsigned __int64)a2 );
  }
  else
  {
    v33 = 0;
  }
  if ( v31 != v33 )
  {
LABEL_10:
    v7 = a1[26];
    if ( v7 )
    {
      a1[27] = 0;
      qfree(v7, (const char *)a2);
      a1[26] = 0;
      a1[28] = 0;
    }
    v8 = a1[29];
    if ( v8 )
    {
      a1[30] = 0;
      qfree(v8, (const char *)a2);
      a1[29] = 0;
      a1[31] = 0;
    }
  }
LABEL_14:
  if ( *((_QWORD *)v3 + 2) )
  {
    if ( !(_BYTE)byte_8CD480 && __cxa_guard_acquire(&byte_8CD480) )
    {
      dword_8CD488 = 1;
      qword_8CD48C = 0x1F400000028LL;
      __cxa_guard_release(&byte_8CD480);
    }
    dword_8CD488 = 0;
    v9 = (_BYTE *)a1[24];
    qword_8CD48C = _mm_unpacklo_epi32(_mm_cvtsi32_si128(dword_8CD47C), _mm_cvtsi32_si128(dword_8CD474)).m128i_u64[0];
    if ( v9 )
      *v9 = 1;
    v10 = (volatile signed __int32 *)operator new(0x18u);
    *(_QWORD *)v10 = std::_Sp_counted_ptr_inplace_cancellation_source_t__std::allocator_void______gnu_cxx::_Lock_policy_2____vtable;
    v11 = a1[25];
    *((_QWORD *)v10 + 1) = 0x100000001LL;
    *((_BYTE *)v10 + 16) = 0;
    a1[24] = v10 + 4;
    n.m128i_i64[1] = v11;
    if ( v10 != (volatile signed __int32 *)v11 )
    {
      if ( v10 )
      {
        if ( &_pthread_key_create )
        {
          _InterlockedAdd(v10 + 2, 1u);
          n.m128i_i64[1] = a1[25];
        }
        else
        {
          *((_DWORD *)v10 + 2) = 2;
        }
      }
      if ( n.m128i_i64[1] )
      {
        v12 = (volatile signed __int32 *)(n.m128i_i64[1] + 8);
        if ( *(_QWORD *)(n.m128i_i64[1] + 8) == 0x100000001LL )
        {
          v34 = n.m128i_i64[1];
          v35 = *(_QWORD *)n.m128i_i64[1];
          *(_QWORD *)(n.m128i_i64[1] + 8) = 0;
          (*(void (__fastcall **)(__int64, const QT::QString *, volatile signed __int32 *))(v35 + 16))(v34, a2, v12);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)n.m128i_i64[1] + 24LL))(n.m128i_i64[1]);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v13 = _InterlockedExchangeAdd(v12, 0xFFFFFFFF);
          }
          else
          {
            v13 = *(_DWORD *)(n.m128i_i64[1] + 8);
            *(_DWORD *)(n.m128i_i64[1] + 8) = v13 - 1;
          }
          if ( v13 == 1 )
            sub_28E9C0((volatile signed __int32 *)n.m128i_i64[1]);
        }
      }
      a1[25] = v10;
    }
    v14 = (_QWORD *)operator new(0x20u);
    v14[1] = 0x100000001LL;
    v15 = v14 + 2;
    *v14 = std::_Sp_counted_ptr_inplace_JumpAnywhereSearchOp__std::allocator_void______gnu_cxx::_Lock_policy_2____vtable;
    *((_OWORD *)v14 + 1) = 0;
    n.m128i_i64[1] = (__int64)v14;
    QT::QObject::QObject((QT::QObject *)(v14 + 2), nullptr);
    v41.m128i_i64[1] = 0;
    v45 = nullptr;
    *(_QWORD *)(n.m128i_i64[1] + 16) = &JumpAnywhereSearchOp___vtable;
    v41.m128i_i64[0] = (__int64)sub_2EA480;
    ptr = sub_468FD0;
    v16 = (__m128i *)operator new(0x20u);
    v16->m128i_i32[0] = 1;
    v17 = _mm_load_si128(&v41);
    v16->m128i_i64[1] = (__int64)&sub_2EC5B0;
    v16[1] = v17;
    n.m128i_i64[0] = (__int64)v40;
    QT::QObject::connectImpl(v40, v15, &ptr, a1, &v41, v16, 0, 0, &off_889E00);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v40);
    ptr = (void *)(v10 + 4);
    v45 = (void *)v10;
    if ( v10 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd(v10 + 2, 1u);
      else
        ++*((_DWORD *)v10 + 2);
    }
    v18 = nullptr;
    n.m128i_i64[0] = v43;
    if ( (_QWORD)v43 )
    {
      v18 = (void *)qalloc_or_throw(v43);
      memcpy(v18, src, n.m128i_u64[0]);
    }
    v48 = 0u;
    v47 = 0;
    v19 = operator new(0x38u);
    v20 = _mm_loadl_epi64(&n);
    v21 = n.m128i_i64[1];
    *(_QWORD *)(v19 + 24) = v10;
    *(_QWORD *)v19 = v15;
    v22 = (const char *)&dword_8CD488;
    *(_QWORD *)(v19 + 8) = v21;
    *(__m128i *)(v19 + 40) = _mm_unpacklo_epi64(v20, v20);
    v23 = _mm_loadl_epi64((const __m128i *)&off_8624B0);
    *(_QWORD *)(v19 + 16) = v10 + 4;
    *(_QWORD *)(v19 + 32) = v18;
    *(_QWORD *)&v47 = v19;
    v48 = _mm_unpacklo_epi64(v23, (__m128i)(unsigned __int64)sub_2E68A0);
    indexer_match_all_async(&src, &dword_8CD488, &v47, &ptr);
    if ( v48.m128i_i64[0] )
    {
      v22 = (const char *)&v47;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v48.m128i_i64[0])(&v47, &v47, 3);
    }
    v24 = (volatile signed __int32 *)v45;
    if ( v45 )
    {
      v25 = (volatile signed __int32 *)((char *)v45 + 8);
      if ( *((_QWORD *)v45 + 1) == 0x100000001LL )
      {
        v36 = *(_QWORD *)v45;
        v37 = v45;
        *((_QWORD *)v45 + 1) = 0;
        (*(void (__fastcall **)(void *, const char *, volatile signed __int32 *))(v36 + 16))(v37, v22, v25);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 24LL))(v24);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v26 = _InterlockedExchangeAdd(v25, 0xFFFFFFFF);
        }
        else
        {
          v26 = *((_DWORD *)v45 + 2);
          *((_DWORD *)v45 + 2) = v26 - 1;
        }
        if ( v26 == 1 )
          sub_28E9C0(v24);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v43 = 0;
      qfree(src, v22);
    }
  }
  else
  {
    sub_2EA290((__int64)a1, 0);
    if ( src )
    {
      *(_QWORD *)&v43 = 0;
      qfree(src, nullptr);
    }
  }
  return v49 - __readfsqword(0x28u);
}
