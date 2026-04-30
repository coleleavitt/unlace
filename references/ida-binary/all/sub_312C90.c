unsigned __int64 __fastcall sub_312C90(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  char *v3; // r14
  size_t v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rax
  const char *v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __m128i v10; // xmm0
  char *v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  void *v16; // r14
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  char *v19; // rax
  void *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // [rsp+0h] [rbp-A8h] BYREF
  void *v25[4]; // [rsp+10h] [rbp-98h] BYREF
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  char *s; // [rsp+38h] [rbp-70h]
  void *v28; // [rsp+50h] [rbp-58h] BYREF
  __m128i v29; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 352);
  if ( a2 )
  {
    QT::QObject::objectName((QT::QObject *)v25);
    QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v25);
    v3 = s;
    v28 = nullptr;
    v29 = 0;
    if ( s )
    {
      v4 = strlen(s);
      v5 = v4 + 1;
    }
    else
    {
      v3 = (char *)&QT::QByteArray::_empty;
      if ( !&QT::QByteArray::_empty )
      {
LABEL_5:
        v6 = v2[16];
        v7 = (const char *)v2[15];
        v8 = v2[17];
        v9 = v6 + 1;
        if ( &v28 >= (void **)v7 && &v28 < (void **)&v7[24 * v8] )
        {
          v16 = v28;
          v17 = _mm_loadl_epi64(&v29);
          v28 = nullptr;
          v18 = _mm_loadl_epi64((const __m128i *)&v29.m128i_u64[1]);
          v29 = 0;
          if ( v8 < v9 )
          {
            v24.m128i_i64[1] = v18.m128i_i64[0];
            v24.m128i_i64[0] = v17.m128i_i64[0];
            v23 = qvector_reserve(v2 + 15, v7, v6 + 1, 24);
            v2[15] = v23;
            v7 = (const char *)v23;
            v18 = _mm_loadl_epi64((const __m128i *)&v24.m128i_u64[1]);
            v6 = v2[16];
            v17 = _mm_loadl_epi64(&v24);
          }
          v19 = (char *)&v7[24 * v6];
          *(_QWORD *)v19 = v16;
          v20 = v28;
          *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v17, v18);
          ++v2[16];
          if ( v20 )
          {
            v29.m128i_i64[0] = 0;
            qfree(v20, v7);
          }
        }
        else
        {
          if ( v8 < v9 )
          {
            v21 = qvector_reserve(v2 + 15, v7, v6 + 1, 24);
            v2[15] = v21;
            v7 = (const char *)v21;
            v6 = v2[16];
          }
          v10 = _mm_loadu_si128(&v29);
          v11 = (char *)&v7[24 * v6];
          *(_QWORD *)v11 = v28;
          *(__m128i *)(v11 + 8) = v10;
          ++v2[16];
        }
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        if ( v25[0] && !_InterlockedSub((volatile signed __int32 *)v25[0], 1u) )
          free(v25[0]);
        return v30 - __readfsqword(0x28u);
      }
      v5 = 1;
      v4 = 0;
    }
    v24.m128i_i64[1] = v5;
    v24.m128i_i64[0] = (__int64)&v28;
    v28 = (void *)qvector_reserve(&v28, 0, v5, 1);
    v29.m128i_i64[0] = v24.m128i_i64[1];
    memmove(v28, v3, v4);
    *((_BYTE *)v28 + v4) = 0;
    goto LABEL_5;
  }
  v13 = v2[16];
  v14 = v2[15];
  if ( v2[17] < (unsigned __int64)(v13 + 1) )
  {
    v22 = qvector_reserve(v2 + 15, v14, v13 + 1, 24);
    v13 = v2[16];
    v2[15] = v22;
    v14 = v22;
  }
  v15 = v14 + 24 * v13;
  *(_QWORD *)v15 = 0;
  *(_OWORD *)(v15 + 8) = 0;
  ++v2[16];
  return v30 - __readfsqword(0x28u);
}
