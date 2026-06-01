unsigned __int64 __fastcall sub_204A70(
        QT::QObject *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __m128 v9; // xmm0
  const char *v10; // rsi
  char v11; // r12
  volatile signed __int32 *v12; // rax
  __int64 *v13; // r12
  const __m128i *v14; // r14
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  _BYTE *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  void *ptr[4]; // [rsp+0h] [rbp-C8h] BYREF
  void *v28; // [rsp+20h] [rbp-A8h] BYREF
  const char *v29; // [rsp+28h] [rbp-A0h]
  QT::QObject *v30[2]; // [rsp+40h] [rbp-88h] BYREF
  char v31; // [rsp+50h] [rbp-78h]
  _OWORD v32[2]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+88h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( !QT::QObject::sender(a1) )
    return v33 - __readfsqword(0x28u);
  v9 = 0;
  v31 = 0;
  *(_OWORD *)v30 = 0;
  QT::QAction::data((QT::QAction *)v32);
  QT::QVariant::toString((QT::QVariant *)ptr);
  QT::QString::toUtf8_helper((QT::QString *)&v28, (const QT::QString *)ptr);
  v10 = v29;
  if ( !v29 )
    v10 = (const char *)&QT::QByteArray::_empty;
  v11 = sub_1FAB00((__m128i *)v30, v10);
  if ( v28 && !_InterlockedSub((volatile signed __int32 *)v28, 1u) )
  {
    free(v28);
    v12 = (volatile signed __int32 *)ptr[0];
    if ( !ptr[0] )
    {
LABEL_8:
      QT::QVariant::~QVariant((QT::QVariant *)v32);
      if ( !v11 )
        return v33 - __readfsqword(0x28u);
      goto LABEL_9;
    }
  }
  else
  {
    v12 = (volatile signed __int32 *)ptr[0];
    if ( !ptr[0] )
      goto LABEL_8;
  }
  if ( _InterlockedSub(v12, 1u) )
    goto LABEL_8;
  free(ptr[0]);
  QT::QVariant::~QVariant((QT::QVariant *)v32);
  if ( !v11 )
    return v33 - __readfsqword(0x28u);
LABEL_9:
  if ( LOBYTE(v30[0]) || QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, v30[1]) )
  {
    v13 = (__int64 *)qword_8CB508;
    if ( !qword_8CB508 )
    {
      v26 = operator new(0x18u);
      v9 = 0;
      *(_QWORD *)v26 = 0;
      v13 = (__int64 *)v26;
      qword_8CB508 = v26;
      *(_OWORD *)(v26 + 8) = 0;
    }
    *((_QWORD *)&v32[0] + 1) = a1;
    *(_QWORD *)&v32[0] = 0;
    v14 = (const __m128i *)sub_1E7840(v13, v32);
    if ( !v14 )
    {
      sub_203F40(v13, v32, v30, v9, a3, a4, a5, v15, v16, a8, a9);
      return v33 - __readfsqword(0x28u);
    }
    v20 = sub_1E7840(v13, v30);
    if ( !v20 )
    {
      if ( LOBYTE(v30[0]) )
      {
        v24 = (_BYTE *)v14->m128i_i64[0];
        v25 = v14->m128i_i64[0] + 16 * v14->m128i_i64[1];
        if ( v25 != v14->m128i_i64[0] )
        {
          while ( !*v24 )
          {
            v24 += 16;
            if ( (_BYTE *)v25 == v24 )
              goto LABEL_16;
          }
          *((_QWORD *)&v32[0] + 1) = a1;
          *(_QWORD *)&v32[0] = 0;
          sub_204900(v13, v14, v32, v17, v18, v19, v9, a3, a4, a5, v21, v22, a8, a9);
        }
      }
      goto LABEL_16;
    }
    sub_204900(v13, v14, v32, v17, v18, v19, v9, a3, a4, a5, v21, v22, a8, a9);
    if ( v14 != (const __m128i *)v20 )
    {
LABEL_16:
      *((_QWORD *)&v32[0] + 1) = a1;
      *(_QWORD *)&v32[0] = 0;
      sub_203F40(v13, v32, v30, v9, a3, a4, a5, *(double *)v21.m128_u64, *(double *)v22.m128_u64, a8, a9);
    }
  }
  return v33 - __readfsqword(0x28u);
}
