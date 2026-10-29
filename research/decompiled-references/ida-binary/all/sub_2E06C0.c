__int64 __fastcall sub_2E06C0(const char *a1, __m128i *a2)
{
  char *v3; // rbx
  signed __int64 v4; // rax
  const char *v5; // rsi
  __m128i v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v14; // rax
  char *v16; // rax
  char *v17; // rax
  char v18; // r12
  char *v19; // rax
  char *s; // [rsp+0h] [rbp-58h] BYREF
  __int128 v21; // [rsp+8h] [rbp-50h]
  void *ptr[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+30h] [rbp-28h]
  unsigned __int64 v24; // [rsp+38h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  if ( a1 && *a1 )
  {
    s = nullptr;
    v21 = 0;
    sub_27D840((__int64 *)&s, a1, "IDA View-");
    v3 = s;
    if ( (unsigned __int64)v21 <= 1 )
    {
      if ( s )
      {
        *(_QWORD *)&v21 = 0;
        qfree(s, a1);
      }
      return (unsigned int)-1;
    }
    v4 = v21 - 1;
    if ( !s || v4 < 0 )
    {
      v4 = 0;
      if ( s )
        v4 = strlen(s);
    }
    v5 = (const char *)v4;
    QT::QString::fromUtf8(ptr, v4, v3);
    v6 = _mm_loadu_si128(a2);
    v7 = a2[1].m128i_i64[0];
    v8 = v23;
    *a2 = _mm_load_si128((const __m128i *)ptr);
    a2[1].m128i_i64[0] = v8;
    v23 = v7;
    *(__m128i *)ptr = v6;
    if ( v6.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v6.m128i_i64[0], 1u) )
      free(ptr[0]);
    if ( s )
    {
      *(_QWORD *)&v21 = 0;
      qfree(s, v5);
    }
  }
  v9 = a2[1].m128i_i64[0];
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)a2);
      v16 = (char *)ptr[1];
      if ( !ptr[1] )
        v16 = (char *)&QT::QByteArray::_empty;
      if ( *v16 > 64 )
      {
        QT::QString::toUtf8_helper((QT::QString *)&s, (const QT::QString *)a2);
        v17 = (char *)v21;
        if ( !(_QWORD)v21 )
          v17 = (char *)&QT::QByteArray::_empty;
        v18 = *v17;
        if ( s && !_InterlockedSub((volatile signed __int32 *)s, 1u) )
          free(s);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        if ( v18 <= 90 )
        {
          QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)a2);
          v19 = (char *)ptr[1];
          if ( !ptr[1] )
            v19 = (char *)&QT::QByteArray::_empty;
          v11 = *v19 - 65;
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          return v11;
        }
      }
      else if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      {
        free(ptr[0]);
      }
    }
    v14 = 25;
    while ( qword_8CD320[v14] )
    {
      if ( v14-- == 0 )
        return (unsigned int)-1;
    }
    return (unsigned int)v14;
  }
  else
  {
    v10 = 0;
    while ( qword_8CD320[v10] )
    {
      if ( ++v10 == 26 )
        return (unsigned int)-1;
    }
    v11 = v10;
    v12 = (unsigned int)(v10 + 65);
    LOWORD(v12) = (char)v12;
    QT::QString::operator=(a2, v12, qword_8CD320);
  }
  return v11;
}
