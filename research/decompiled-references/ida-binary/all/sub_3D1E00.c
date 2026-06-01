unsigned __int64 __fastcall sub_3D1E00(
        QT::QCompleter *this,
        char a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rbp
  void (__fastcall *v12)(_BYTE *, __int64, _BYTE *, _QWORD); // r14
  double v13; // xmm4_8
  double v14; // xmm5_8
  _BYTE v15[32]; // [rsp+0h] [rbp-98h] BYREF
  void *ptr[4]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v17[40]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+68h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( a2 )
  {
    *((_DWORD *)this + 10) = 1;
    if ( !qword_8CCE70 )
    {
      v11 = QT::QCompleter::completionModel(this);
      v12 = *(void (__fastcall **)(_BYTE *, __int64, _BYTE *, _QWORD))(*(_QWORD *)v11 + 144LL);
      QT::QCompleter::currentIndex((QT::QCompleter *)v15);
      v12(v17, v11, v15, 0);
      QT::QVariant::toString((QT::QVariant *)ptr);
      sub_3D1820((QT::QPlainTextEdit **)this, (QT::QString *)ptr, a3, a4, a5, a6, v13, v14, a9, a10);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      QT::QVariant::~QVariant((QT::QVariant *)v17);
    }
  }
  else
  {
    *((_DWORD *)this + 10) = 2;
  }
  return v18 - __readfsqword(0x28u);
}
