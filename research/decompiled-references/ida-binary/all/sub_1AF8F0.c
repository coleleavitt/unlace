unsigned __int64 __fastcall sub_1AF8F0(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __m128 si128; // xmm0
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  void *v17; // rdx
  __int64 (*v18)(void); // r15
  char v19; // r15
  QT::QLineEdit *v20; // rbx
  void *v22; // rdi
  __int64 v23; // rsi
  volatile signed __int32 *v24; // rax
  void **v25; // r12
  void **v26; // r15
  void *v27[2]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+10h] [rbp-C8h]
  void *v29[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-A8h]
  char v31[16]; // [rsp+40h] [rbp-98h] BYREF
  QT::QLineEdit *v32; // [rsp+50h] [rbp-88h]
  char v33; // [rsp+58h] [rbp-80h]
  void *ptr; // [rsp+60h] [rbp-78h] BYREF
  __int128 v35; // [rsp+68h] [rbp-70h]
  void *v36[2]; // [rsp+78h] [rbp-60h]
  __int64 v37; // [rsp+88h] [rbp-50h]
  unsigned __int64 v38; // [rsp+98h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  QT::QObject::QObject((QT::QObject *)v31, nullptr);
  v32 = nullptr;
  *(_QWORD *)v31 = &object_lifecycle_monitor_t___vtable;
  sub_478D00(v31, (__int64)v27[0]);
  QT::QLineEdit::text((QT::QLineEdit *)&ptr);
  sub_1C7C40(v27, &ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  si128 = (__m128)_mm_load_si128((const __m128i *)v27);
  v11 = v28;
  v30 = v28;
  *(__m128 *)v29 = si128;
  if ( si128.m128_u64[0] )
  {
    _InterlockedAdd((volatile signed __int32 *)si128.m128_u64[0], 1u);
    v11 = v28;
  }
  if ( v11 )
  {
    si128 = 0;
    v23 = *(_QWORD *)(*a1 + 16LL);
    v35 = 0;
    ptr = nullptr;
    v37 = 0;
    *(_OWORD *)v36 = 0;
    sub_4F65D0(&ptr, v23);
    sub_4F6A20(&ptr, v27);
    v24 = (volatile signed __int32 *)v36[0];
    *((_DWORD *)a1 + 30) = -1;
    if ( v24 && !_InterlockedSub(v24, 1u) )
    {
      v25 = (void **)v36[1];
      v26 = (void **)((char *)v36[1] + 24 * v37);
      if ( v36[1] != v26 )
      {
        do
        {
          if ( *v25 && !_InterlockedSub((volatile signed __int32 *)*v25, 1u) )
            free(*v25);
          v25 += 3;
        }
        while ( v26 != v25 );
      }
      free(v36[0]);
    }
    if ( ptr )
    {
      *(_QWORD *)&v35 = 0;
      qfree(ptr, (const char *)v27);
    }
  }
  if ( a1[14] )
  {
    if ( (unsigned __int8)QT::QString::endsWith(a1 + 12, 92, 1) )
      QT::QString::resize((QT::QString *)(a1 + 12), a1[14] - 1LL);
    QT::QString::append(a1 + 12, 10);
    QT::QString::append((QT::QString *)(a1 + 12), (const QT::QString *)v27);
    QT::QString::operator=(v29, a1 + 12);
  }
  QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v27);
  v17 = (void *)v35;
  if ( !(_QWORD)v35 )
    v17 = &QT::QByteArray::_empty;
  sub_169700(
    (int)"%s>%s\n",
    *(_QWORD *)(*a1 + 16LL),
    (__int64)v17,
    v12,
    v13,
    v14,
    si128,
    a3,
    a4,
    a5,
    v15,
    v16,
    a8,
    a9,
    (char)v27[0]);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  v18 = *(__int64 (**)(void))(*a1 + 40LL);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v29);
  v19 = v18();
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( v19 )
  {
    if ( a1[13] )
    {
      v22 = (void *)a1[12];
      a1[14] = 0;
      *((_OWORD *)a1 + 6) = 0;
      if ( v22 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v22, 1u) )
          free(v22);
      }
    }
  }
  else
  {
    QT::QString::operator=(a1 + 12, v29);
  }
  if ( !v33 )
  {
    v20 = v32;
    if ( v32 )
    {
      QT::QString::fromUtf8(&ptr, 0, (const char *)&unk_5C2F25);
      QT::QLineEdit::setText(v20, (const QT::QString *)&ptr);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      QT::QWidget::setFocus(v20, 7);
    }
  }
  if ( v29[0] && !_InterlockedSub((volatile signed __int32 *)v29[0], 1u) )
    free(v29[0]);
  if ( v27[0] && !_InterlockedSub((volatile signed __int32 *)v27[0], 1u) )
    free(v27[0]);
  *(_QWORD *)v31 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)v31);
  return v38 - __readfsqword(0x28u);
}
