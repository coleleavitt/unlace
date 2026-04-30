__int64 __fastcall sub_180640(__int64 a1, const QT::QString *a2)
{
  volatile signed __int32 *v2; // rbx
  size_t v3; // r13
  size_t v4; // r14
  const char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  size_t v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  size_t v13; // rbx
  __int64 v14; // rsi
  void *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rax
  char *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  void *v25; // rax
  void *src; // [rsp+0h] [rbp-B8h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-B0h]
  __int64 v28; // [rsp+20h] [rbp-98h] BYREF
  __int128 v29; // [rsp+28h] [rbp-90h]
  volatile signed __int32 *s[15]; // [rsp+40h] [rbp-78h] BYREF

  s[9] = (volatile signed __int32 *)__readfsqword(0x28u);
  QT::QString::toUtf8_helper((QT::QString *)s, a2);
  v2 = s[1];
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( s[1] )
  {
    v3 = strlen((const char *)s[1]);
    v4 = v3 + 1;
  }
  else
  {
    v2 = (volatile signed __int32 *)&QT::QByteArray::_empty;
    if ( !&QT::QByteArray::_empty )
      goto LABEL_4;
    v4 = 1;
    v3 = 0;
  }
  a2 = (const QT::QString *)v2;
  src = (void *)qvector_reserve(&src, 0, v4, 1);
  n[0] = v4;
  memmove(src, (const void *)v2, v3);
  *((_BYTE *)src + v3) = 0;
LABEL_4:
  if ( s[0] && !_InterlockedSub(s[0], 1u) )
    free((void *)s[0]);
  LODWORD(s[0]) = 64;
  v5 = &s1;
  memset((char *)&s[4] + 4, 0, 28);
  *(_OWORD *)((char *)&s[2] + 4) = 0;
  s[4] = &dword_0 + 2;
  LODWORD(s[7]) = -1;
  *(_OWORD *)((char *)s + 4) = 0;
  if ( n[0] )
    v5 = (const char *)src;
  *(__m128i *)&s[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)v5);
  v6 = qalloc_or_throw(40);
  *(_DWORD *)(v6 + 8) = 1;
  v7 = v6;
  *(_QWORD *)v6 = add_idc_func_shortcut;
  v8 = n[0];
  *(_QWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 24) = 0;
  if ( v8 )
  {
    v25 = (void *)qalloc_or_throw(v8);
    *(_QWORD *)(v7 + 16) = v25;
    a2 = (const QT::QString *)src;
    *(_QWORD *)(v7 + 32) = v8;
    memcpy(v25, a2, v8);
    *(_QWORD *)(v7 + 24) = v8;
  }
  s[3] = (volatile signed __int32 *)v7;
  v9 = sub_538360(s);
  if ( v9 )
  {
    *(_DWORD *)(v9 + 124) = 3;
    v13 = *(_QWORD *)(a1 + 8);
    v28 = 0;
    v29 = 0;
    if ( v13 )
    {
      v15 = (void *)qalloc_or_throw(v13);
      memcpy(v15, *(const void **)a1, v13);
      v17 = v29;
      v14 = v28;
      v16 = v29 + 1;
      if ( *((_QWORD *)&v29 + 1) >= (unsigned __int64)(v29 + 1) )
        goto LABEL_15;
    }
    else
    {
      v14 = 0;
      v15 = nullptr;
      v16 = 1;
    }
    v28 = qvector_reserve(&v28, v14, v16, 24);
    v14 = v28;
    v17 = v29;
LABEL_15:
    v18 = (char *)&s1;
    v19 = v14 + 24 * v17;
    *(_QWORD *)v19 = v15;
    *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
    *(_QWORD *)&v29 = v29 + 1;
    if ( n[0] )
      v18 = (char *)src;
    a2 = (const QT::QString *)&v28;
    sub_4B5050(v18);
    v10 = v28;
    if ( v28 )
    {
      v20 = v29;
      if ( (_QWORD)v29 )
      {
        v21 = 0;
        do
        {
          v22 = (__int64 *)(v10 + 24 * v21);
          v23 = *v22;
          if ( *v22 )
          {
            v22[1] = 0;
            qfree(v23, &v28, v10, v11, v12);
            v10 = v28;
          }
          ++v21;
        }
        while ( v20 != v21 );
      }
      *(_QWORD *)&v29 = 0;
      qfree(v10, &v28, v10, v11, v12);
    }
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, a2, v10, v11, v12);
  }
  return 1;
}
