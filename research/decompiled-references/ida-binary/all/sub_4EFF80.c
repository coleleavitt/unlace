void __fastcall sub_4EFF80(QT::QStyleOption *this)
{
  volatile signed __int32 *v1; // rax

  QT::QBrush::~QBrush((QT::QStyleOption *)((char *)this + 200));
  v1 = *((volatile signed __int32 **)this + 21);
  if ( v1 && !_InterlockedSub(v1, 1u) )
    free(*((void **)this + 21));
  QT::QIcon::~QIcon((QT::QStyleOption *)((char *)this + 160));
  QT::QLocale::~QLocale((QT::QStyleOption *)((char *)this + 112));
  QT::QFont::~QFont((QT::QStyleOption *)((char *)this + 88));
  QT::QStyleOption::~QStyleOption(this);
}
