__int64 __fastcall DockArea__::vfunc_5(
        QT::QWidget *this,
        QT::QEvent *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  void *v20; // rsi
  __int64 v21; // rax
  _DWORD *v22; // rbp
  int v23; // eax
  unsigned int v24; // r12d
  int v25; // r13d
  _DWORD *v26; // rdi
  __int64 v27; // rax
  void *v28[4]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  void *v30; // [rsp+28h] [rbp-40h]
  unsigned __int64 v31; // [rsp+38h] [rbp-30h]

  v10 = *((unsigned __int16 *)a2 + 4);
  v31 = __readfsqword(0x28u);
  if ( v10 == 2007 )
  {
    v21 = *((_QWORD *)this + 5);
    if ( !*(_BYTE *)(v21 + 81) )
    {
      v22 = *(_DWORD **)v21;
      if ( *(_QWORD *)v21 )
      {
        v23 = v22[10];
        if ( v23 == 2 )
        {
          sub_4CFFD0(v22);
          v23 = v22[10];
        }
        if ( v23 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 504LL))(v22);
        v24 = 0;
        v25 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 464LL))(v22);
        if ( v25 > 0 )
        {
          do
          {
            v26 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v22 + 456LL))(v22, v24);
            if ( v26[10] )
            {
              sub_4C4EA0(v26);
            }
            else
            {
              v27 = sub_4CD6A0(v26);
              sub_4D2F60(v27);
            }
            ++v24;
          }
          while ( v25 != v24 );
        }
        if ( QT::QMetaObject::cast(
               (QT::QMetaObject *)&off_898320,
               *(const QT::QObject **)(*((_QWORD *)this + 1) + 16LL)) )
        {
          (*(void (__fastcall **)(void **, _DWORD *))(*(_QWORD *)v22 + 416LL))(&ptr, v22);
          QT::QWidget::setWindowTitle(this, (const QT::QString *)&ptr);
          if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            free(ptr);
          (*(void (__fastcall **)(void **, _DWORD *))(*(_QWORD *)v22 + 424LL))(&ptr, v22);
          QT::QWidget::setWindowIcon(this, (const QT::QIcon *)&ptr);
          QT::QIcon::~QIcon((QT::QIcon *)&ptr);
        }
        v21 = *((_QWORD *)this + 5);
      }
      *(_BYTE *)(v21 + 81) = 1;
    }
    return 1;
  }
  else
  {
    if ( v10 == 105 )
    {
      QT::QWidget::windowTitle((QT::QWidget *)v28);
      QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v28);
      v20 = v30;
      if ( !v30 )
        v20 = &QT::QByteArray::_empty;
      sub_169700(
        (int)"WindowStateChange %s\n",
        (__int64)v20,
        v14,
        v15,
        v16,
        v17,
        a3,
        a4,
        a5,
        a6,
        v18,
        v19,
        a9,
        a10,
        (char)v28[0]);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      if ( v28[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v28[0], 1u) )
          free(v28[0]);
      }
    }
    return QT::QWidget::event(this, a2);
  }
}
