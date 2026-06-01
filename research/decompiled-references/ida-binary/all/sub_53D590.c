__int64 __fastcall sub_53D590(__int64 a1, __int64 *a2, const char *a3)
{
  unsigned int isValid; // ebx
  _DWORD *v6; // rax
  _DWORD *v7; // rdx
  int v8; // r14d
  int v9; // r15d
  void **v10; // rsi
  void **v11; // r8
  size_t v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r13
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rdi
  void *v18; // rdi
  size_t v19; // rdx
  int v20; // eax
  __m128i v21; // [rsp+0h] [rbp-E8h] BYREF
  void **v22; // [rsp+18h] [rbp-D0h]
  void *v23[4]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v25; // [rsp+48h] [rbp-A0h] BYREF
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  void *src; // [rsp+68h] [rbp-80h]
  size_t n; // [rsp+70h] [rbp-78h]
  _BYTE v29[24]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v30; // [rsp+98h] [rbp-50h]
  unsigned __int64 v31; // [rsp+A8h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  QT::QObject::property((QT::QObject *)v29, a3);
  ptr = (void *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
  isValid = QT::QMetaType::isValid((QT::QMetaType *)&ptr);
  if ( !(_BYTE)isValid )
    goto LABEL_3;
  QT::QMetaType::QMetaType((QT::QMetaType *)&ptr, 10);
  v6 = (_DWORD *)QT::QVariant::metaType((QT::QVariant *)v29);
  v7 = ptr;
  if ( v6 == ptr )
  {
LABEL_15:
    if ( a2 )
    {
      QT::QVariant::toString((QT::QVariant *)v23);
      v10 = v23;
      QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v23);
      v11 = (void **)src;
      v12 = n;
      if ( !src )
        v11 = (void **)&QT::QByteArray::_empty;
      v24 = 0;
      v25 = 0;
      if ( n )
      {
        v18 = nullptr;
        v19 = n + 1;
        if ( n != -1 )
        {
          v21.m128i_i64[0] = n + 1;
          v22 = v11;
          v24 = qvector_reserve(&v24, 0, v19, 1);
          v11 = v22;
          v18 = (void *)v24;
          v19 = v12 + 1;
        }
        v25.m128i_i64[0] = v19;
        v10 = v11;
        memmove(v18, v11, v12);
        *(_BYTE *)(v24 + v12) = 0;
      }
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      v13 = *a2;
      v14 = v24;
      v24 = 0;
      v15 = _mm_loadu_si128(&v25);
      v25 = 0;
      if ( v13 )
      {
        a2[1] = 0;
        v21 = v15;
        qfree(v13, (const char *)v10);
        v16 = _mm_load_si128(&v21);
        v17 = v24;
        *a2 = v14;
        *(__m128i *)(a2 + 1) = v16;
        if ( v17 )
        {
          v25.m128i_i64[0] = 0;
          qfree(v17, (const char *)v10);
        }
      }
      else
      {
        *a2 = v14;
        *(__m128i *)(a2 + 1) = v15;
      }
      if ( v23[0] && !_InterlockedSub((volatile signed __int32 *)v23[0], 1u) )
        free(v23[0]);
    }
    goto LABEL_4;
  }
  if ( v6 && ptr )
  {
    v8 = v6[3];
    if ( v8 )
    {
      v9 = v6[3];
    }
    else
    {
      v20 = QT::QMetaType::registerHelper(v6);
      v7 = ptr;
      v9 = v20;
      if ( !ptr )
        goto LABEL_14;
    }
    v8 = v7[3];
    if ( !v8 )
      v8 = QT::QMetaType::registerHelper(ptr);
LABEL_14:
    if ( v8 == v9 )
      goto LABEL_15;
  }
LABEL_3:
  isValid = 0;
LABEL_4:
  QT::QVariant::~QVariant((QT::QVariant *)v29);
  return isValid;
}
