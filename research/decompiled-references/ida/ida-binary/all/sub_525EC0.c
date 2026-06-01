__int64 *__fastcall sub_525EC0(__int64 *a1, const char *a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  const void *v6; // r12
  void *v7; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r12d
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  size_t v17; // rax
  size_t v18; // r10
  __int64 v19; // rdx
  __int64 v20; // rbx
  const QT::QString *v21; // r12
  const char *v22; // r14
  void *v23; // rdi
  size_t v24; // rdx
  __int64 v25; // rax
  void **v26; // rbx
  __int64 v27; // r12
  unsigned __int64 v28; // r15
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  size_t v35; // [rsp+10h] [rbp-E8h]
  size_t v36; // [rsp+10h] [rbp-E8h]
  size_t v37; // [rsp+18h] [rbp-E0h]
  __m128i v38; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+30h] [rbp-C8h]
  void *ptr; // [rsp+40h] [rbp-B8h] BYREF
  char *s[2]; // [rsp+48h] [rbp-B0h]
  int v42; // [rsp+58h] [rbp-A0h]
  _QWORD v43[2]; // [rsp+60h] [rbp-98h] BYREF
  char v44[72]; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v45; // [rsp+B8h] [rbp-40h]

  v2 = xmmword_8D2528;
  v45 = __readfsqword(0x28u);
  if ( (_QWORD)xmmword_8D2528 )
    goto LABEL_2;
  QT::QColor::colorNames((QT::QColor *)&v38);
  v11 = v39;
  v12 = xmmword_8D2528;
  v13 = (int)v39;
  if ( (int)v39 != (_QWORD)xmmword_8D2528 )
  {
    v42 = 0;
    ptr = nullptr;
    *(_OWORD *)s = 0;
    if ( (int)v39 < (unsigned __int64)xmmword_8D2528 )
    {
      v28 = (int)v39;
      do
      {
        v29 = (__int64 *)(qword_8D2520 + 32 * v28);
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          qfree(v30, a2);
        }
        ++v28;
      }
      while ( v28 < v12 );
    }
    else if ( (unsigned __int64)&ptr < qword_8D2520
           || (unsigned __int64)&ptr >= qword_8D2520 + 32LL * *((_QWORD *)&xmmword_8D2528 + 1) )
    {
      if ( *((_QWORD *)&xmmword_8D2528 + 1) < (unsigned __int64)(int)v39 )
      {
        qword_8D2520 = qvector_reserve(&qword_8D2520, qword_8D2520, (int)v39, 32);
        v12 = xmmword_8D2528;
      }
      if ( v12 < v13 )
      {
        do
        {
          v31 = v12++;
          v32 = qword_8D2520 + 32 * v31;
          *(_QWORD *)v32 = 0;
          *(_DWORD *)(v32 + 24) = 0;
          *(_OWORD *)(v32 + 8) = 0;
        }
        while ( v13 != v12 );
      }
    }
    else
    {
      if ( *((_QWORD *)&xmmword_8D2528 + 1) < (unsigned __int64)(int)v39 )
      {
        qword_8D2520 = qvector_reserve(&qword_8D2520, qword_8D2520, (int)v39, 32);
        v12 = xmmword_8D2528;
      }
      if ( v12 < v13 )
      {
        do
        {
          v14 = v12++;
          v15 = qword_8D2520 + 32 * v14;
          *(_QWORD *)v15 = 0;
          *(_DWORD *)(v15 + 24) = 0;
          *(_OWORD *)(v15 + 8) = 0;
        }
        while ( v13 != v12 );
      }
    }
    *(_QWORD *)&xmmword_8D2528 = v13;
  }
  v16 = (unsigned int)(v11 - 1);
  if ( v11 > 0 )
  {
    while ( 1 )
    {
      v20 = qword_8D2520 + 32 * v2;
      if ( !v38.m128i_i64[0] || *(int *)v38.m128i_i64[0] > 1 )
        sub_1B21C0(&v38, 0, 0, 0, v9, v10);
      v21 = (const QT::QString *)(v38.m128i_i64[1] + 24 * v2);
      QT::QString::toUtf8_helper((QT::QString *)&ptr, v21);
      v22 = s[0];
      if ( !s[0] )
      {
        if ( !&QT::QByteArray::_empty )
        {
LABEL_28:
          *(_QWORD *)(v20 + 8) = 0;
          goto LABEL_29;
        }
        v22 = (const char *)&QT::QByteArray::_empty;
      }
      v17 = strlen(v22);
      v18 = v17;
      if ( !v17 )
        goto LABEL_28;
      v23 = *(void **)v20;
      v24 = v17 + 1;
      if ( *(_QWORD *)(v20 + 16) < v17 + 1 )
      {
        v37 = v17;
        v36 = v17 + 1;
        v25 = qvector_reserve(v20, *(_QWORD *)v20, v24, 1);
        v18 = v37;
        v24 = v36;
        *(_QWORD *)v20 = v25;
        v23 = (void *)v25;
      }
      *(_QWORD *)(v20 + 8) = v24;
      v35 = v18;
      memmove(v23, v22, v18);
      *(_BYTE *)(*(_QWORD *)v20 + v35) = 0;
LABEL_29:
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      v43[0] = QT::QColor::fromString(*((_QWORD *)v21 + 1), *((_QWORD *)v21 + 2) | 0x8000000000000000LL);
      v43[1] = v19;
      *(_DWORD *)(v20 + 24) = __ROR4__(_byteswap_ulong(QT::QColor::rgba((QT::QColor *)v43)), 8);
      if ( v2 == v16 )
        break;
      ++v2;
    }
  }
  if ( !v38.m128i_i64[0] || _InterlockedSub((volatile signed __int32 *)v38.m128i_i64[0], 1u) )
  {
    v2 = xmmword_8D2528;
    if ( (_QWORD)xmmword_8D2528 )
      goto LABEL_2;
  }
  else
  {
    v26 = (void **)v38.m128i_i64[1];
    v27 = v38.m128i_i64[1] + 24 * v39;
    if ( v38.m128i_i64[1] != v27 )
    {
      do
      {
        if ( *v26 && !_InterlockedSub((volatile signed __int32 *)*v26, 1u) )
          free(*v26);
        v26 += 3;
      }
      while ( (void **)v27 != v26 );
    }
    free((void *)v38.m128i_i64[0]);
    v2 = xmmword_8D2528;
    if ( (_QWORD)xmmword_8D2528 )
    {
LABEL_2:
      v3 = qword_8D2520;
      v4 = 0;
      while ( *(_DWORD *)(v3 + 24) != (_DWORD)a2 )
      {
        ++v4;
        v3 += 32;
        if ( v4 == v2 )
          goto LABEL_12;
      }
      if ( (__int64 *)v3 != a1 )
      {
        v5 = *(_QWORD *)(v3 + 8);
        if ( v5 < 2 )
        {
          a1[1] = 0;
        }
        else
        {
          v6 = *(const void **)v3;
          v7 = (void *)*a1;
          if ( a1[2] < v5 )
          {
            v33 = qvector_reserve(a1, *a1, v5, 1);
            *a1 = v33;
            v7 = (void *)v33;
          }
          a1[1] = v5;
          memmove(v7, v6, v5 - 1);
          *(_BYTE *)(*a1 + v5 - 1) = 0;
        }
      }
      return (__int64 *)(v45 - __readfsqword(0x28u));
    }
  }
LABEL_12:
  if ( (unsigned int)a2 >> 24 != 255 )
  {
    qsnprintf(v44, 64, "%f", (double)((unsigned int)a2 >> 24) / 255.0);
    strrpl(v44, 44, 46);
    sub_169A50(a1, (__int64)"rgba(%u, %u, %u, %s)", (unsigned __int8)a2, BYTE1(a2), BYTE2(a2), v44);
    return (__int64 *)(v45 - __readfsqword(0x28u));
  }
  return sub_169A50(a1, (__int64)"#%02X%02X%02X", (unsigned __int8)a2, BYTE1(a2), BYTE2(a2));
}
