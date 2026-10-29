unsigned __int64 __fastcall sub_305510(QT::QApplication *this, __int64 a2)
{
  size_t v4; // rbp
  size_t v5; // rbp
  size_t v6; // rbp
  size_t v7; // rbp
  const void *v8; // rbp
  _BYTE *v9; // rbx
  void *v11; // rdi
  void *v12; // rax
  const void *v13; // rsi
  void *v14; // rax
  const void *v15; // rsi
  void *v16; // rax
  const void *v17; // rsi
  void *v18; // rax
  const void *v19; // rsi
  const char *v20; // rsi
  unsigned __int8 v21; // al
  unsigned __int8 v22; // al
  const char *v23; // rax
  const char *v24; // rbp
  unsigned __int64 v25; // rdx
  __m128i si128; // xmm0
  __int64 v27; // rdx
  __int64 v28; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v29; // [rsp+8h] [rbp-E0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  void *src[2]; // [rsp+28h] [rbp-C0h]
  _BYTE v32[24]; // [rsp+40h] [rbp-A8h] BYREF
  void *v33; // [rsp+58h] [rbp-90h]
  __int128 v34; // [rsp+60h] [rbp-88h]
  void *v35; // [rsp+70h] [rbp-78h]
  __int128 v36; // [rsp+78h] [rbp-70h]
  void *v37; // [rsp+88h] [rbp-60h]
  __int128 v38; // [rsp+90h] [rbp-58h]
  unsigned __int64 v39; // [rsp+A8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( dword_8BA8A0 < 0 )
  {
    v20 = (const char *)&v28;
    v28 = 0;
    v29 = 0;
    v21 = qgetenv("IDA_STYLESHEET", &v28);
    dword_8BA8A0 = v21;
    if ( v21 )
    {
      ptr = nullptr;
      v20 = &s1;
      *(_OWORD *)src = 0;
      if ( (_QWORD)v29 )
        v20 = (const char *)v28;
      v22 = sub_52B550(&ptr, v20, 0);
      dword_8BA8A0 = v22;
      if ( v22 )
      {
        if ( src[0] )
        {
          v23 = (char *)src[0] - 1;
          v24 = (const char *)ptr;
          v25 = ((unsigned __int64)src[0] - 1) >> 63;
        }
        else
        {
          LOBYTE(v25) = 0;
          v23 = nullptr;
          v24 = &s1;
        }
        if ( !v24 || (_BYTE)v25 )
        {
          v23 = nullptr;
          if ( v24 )
            v23 = (const char *)strlen(v24);
        }
        v20 = v23;
        QT::QString::fromUtf8(v32, v23, v24);
        si128 = _mm_load_si128((const __m128i *)&xmmword_8CD720);
        v27 = qword_8CD730;
        xmmword_8CD720 = (__int128)_mm_load_si128((const __m128i *)v32);
        qword_8CD730 = *(_QWORD *)&v32[16];
        *(_QWORD *)&v32[16] = v27;
        *(__m128i *)v32 = si128;
        if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
          free(*(void **)v32);
      }
      if ( ptr )
      {
        src[0] = nullptr;
        qfree(ptr, v20);
      }
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28, v20);
    }
  }
  v4 = *(_QWORD *)(a2 + 8);
  memset(v32, 0, sizeof(v32));
  if ( v4 )
  {
    v18 = (void *)qalloc_or_throw(v4);
    v19 = *(const void **)a2;
    *(_QWORD *)&v32[16] = v4;
    *(_QWORD *)v32 = v18;
    memcpy(v18, v19, v4);
    *(_QWORD *)&v32[8] = v4;
  }
  v5 = *(_QWORD *)(a2 + 32);
  v33 = nullptr;
  v34 = 0;
  if ( v5 )
  {
    v16 = (void *)qalloc_or_throw(v5);
    v17 = *(const void **)(a2 + 24);
    v33 = v16;
    *((_QWORD *)&v34 + 1) = v5;
    memcpy(v16, v17, v5);
    *(_QWORD *)&v34 = v5;
  }
  v6 = *(_QWORD *)(a2 + 56);
  v35 = nullptr;
  v36 = 0;
  if ( v6 )
  {
    v14 = (void *)qalloc_or_throw(v6);
    v15 = *(const void **)(a2 + 48);
    v35 = v14;
    *((_QWORD *)&v36 + 1) = v6;
    memcpy(v14, v15, v6);
    *(_QWORD *)&v36 = v6;
  }
  v7 = *(_QWORD *)(a2 + 80);
  v37 = nullptr;
  v38 = 0;
  if ( v7 )
  {
    v12 = (void *)qalloc_or_throw(v7);
    v13 = *(const void **)(a2 + 72);
    v37 = v12;
    *((_QWORD *)&v38 + 1) = v7;
    memcpy(v12, v13, v7);
    *(_QWORD *)&v38 = v7;
  }
  QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)&xmmword_8CD720);
  v8 = src[0];
  v9 = src[1];
  if ( !src[0] )
    v8 = &QT::QByteArray::_empty;
  v28 = 0;
  v29 = 0;
  if ( src[1] )
  {
    v11 = nullptr;
    if ( src[1] != (void *)-1LL )
    {
      v28 = qvector_reserve(&v28, 0, (char *)src[1] + 1, 1);
      v11 = (void *)v28;
    }
    *(_QWORD *)&v29 = v9 + 1;
    memmove(v11, v8, (size_t)v9);
    v9[v28] = 0;
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  sub_52B450(v32, &v28);
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28, (const char *)&v28);
  }
  sub_47C730(this);
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37, v32);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, v32);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33, v32);
  }
  if ( *(_QWORD *)v32 )
  {
    *(_QWORD *)&v32[8] = 0;
    qfree(*(_QWORD *)v32, v32);
  }
  return v39 - __readfsqword(0x28u);
}
