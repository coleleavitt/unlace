unsigned __int64 __fastcall sub_502210(
        __int64 *a1,
        int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  void (*v12)(); // rdx
  __int64 v13; // rax
  void (*v14)(void); // rax
  __int64 v15; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  void *v24; // rcx
  const char *v25; // r12
  size_t v26; // rax
  const char *v27; // rsi
  const char *v28; // rcx
  char v29; // r12
  QT::QComboBox *v30; // [rsp+0h] [rbp-10C8h]
  _BYTE v31[8]; // [rsp+18h] [rbp-10B0h] BYREF
  void *v32[4]; // [rsp+20h] [rbp-10A8h] BYREF
  void *v33; // [rsp+40h] [rbp-1088h] BYREF
  __int128 v34; // [rsp+48h] [rbp-1080h]
  void *ptr[2]; // [rsp+60h] [rbp-1068h] BYREF
  __int64 v36; // [rsp+70h] [rbp-1058h]
  char v37[4104]; // [rsp+80h] [rbp-1048h] BYREF
  unsigned __int64 v38; // [rsp+1088h] [rbp-40h]

  v12 = nullsub_293;
  v13 = *a1;
  v38 = __readfsqword(0x28u);
  v14 = *(void (**)(void))(v13 + 424);
  if ( v14 != nullsub_293 )
    v14();
  if ( a2 >= (unsigned __int64)a1[6] )
  {
    if ( !under_debugger )
      interr(40145, a2, v12, a12, *(double *)a3.m128_u64);
    goto LABEL_39;
  }
  v15 = 72LL * a2 + a1[5];
  if ( !(unsigned __int8)sub_500EB0(
                           (__int64)a1,
                           *(const QT::QObject **)v15,
                           *(_BYTE *)(v15 + 52),
                           v37,
                           &stru_1000,
                           v15,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           1u,
                           nullptr) )
    return v38 - __readfsqword(0x28u);
  v30 = *(QT::QComboBox **)(a1[5] + 72LL * a2);
  QT::QLabel::text((QT::QLabel *)v32);
  QT::QString::fromUtf8(&v33, 17, "(</?.[^>]*>)|(\\&)");
  QT::QRegularExpression::QRegularExpression(v31, &v33, 0);
  *(_OWORD *)ptr = 0;
  v36 = 0;
  QT::QString::replace((QT::QString *)v32, (const QT::QRegularExpression *)v31, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QRegularExpression::~QRegularExpression((QT::QRegularExpression *)v31);
  if ( v33 && !_InterlockedSub((volatile signed __int32 *)v33, 1u) )
    free(v33);
  v33 = nullptr;
  v34 = 0;
  v19 = *(_BYTE *)(v15 + 52);
  if ( v19 != 70 )
  {
    if ( v19 == 102 )
    {
      QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)v32);
      v24 = ptr[1];
      if ( !ptr[1] )
        v24 = &QT::QByteArray::_empty;
      v25 = (const char *)sub_17CD60(
                            *(_DWORD *)(v15 + 48) != 0,
                            (int)v37,
                            (int)"%s",
                            (__int64)v24,
                            v20,
                            v21,
                            (__m128)0LL,
                            a4,
                            a5,
                            a6,
                            v22,
                            v23,
                            a9,
                            a10,
                            (char)v30);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      goto LABEL_19;
    }
    if ( !under_debugger )
      interr(40146, v31, v17, v18, 0.0);
LABEL_39:
    BUG();
  }
  QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)v32);
  v28 = (const char *)ptr[1];
  if ( !ptr[1] )
    v28 = (const char *)&QT::QByteArray::_empty;
  v29 = sub_484320((__int64)&v33, v37, (__int64)"%s", v28);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( !v29 )
    goto LABEL_23;
  v25 = (const char *)v33;
LABEL_19:
  if ( v25 )
  {
    v26 = strlen(v25);
    QT::QString::fromUtf8(ptr, v26, v25);
    QT::QComboBox::setEditText(v30, (const QT::QString *)ptr);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
LABEL_23:
  v27 = (const char *)*(unsigned int *)(v15 + 56);
  sub_4F9A60(a1, (unsigned int)v27);
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33, v27);
  }
  if ( v32[0] && !_InterlockedSub((volatile signed __int32 *)v32[0], 1u) )
    free(v32[0]);
  return v38 - __readfsqword(0x28u);
}
