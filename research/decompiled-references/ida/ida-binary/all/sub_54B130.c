void __fastcall HtmlItemDelegate__::vfunc_3(QT::QStyledItemDelegate *this)
{
  volatile signed __int32 *v2; // rax
  _QWORD *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r13
  void *v7; // rdi
  __int64 v8; // rsi

  *(_QWORD *)this = &HtmlItemDelegate___vtable;
  v2 = *((volatile signed __int32 **)this + 5);
  if ( v2 )
  {
    if ( *v2 != -1 && !_InterlockedSub(v2, 1u) )
    {
      v3 = *((_QWORD **)this + 5);
      if ( v3 )
      {
        v4 = v3[4];
        if ( v4 )
        {
          v5 = v4 + 144LL * *(_QWORD *)(v4 - 8);
          if ( v4 == v5 )
          {
            v8 = 0;
          }
          else
          {
            do
            {
              v6 = v5;
              v7 = *(void **)(v5 - 16);
              v5 -= 144;
              if ( v7 )
                operator delete[](v7);
            }
            while ( v3[4] != v5 );
            v8 = 144LL * *(_QWORD *)(v6 - 152);
          }
          operator delete[]((void *)(v5 - 8), v8 + 8);
        }
        operator delete(v3, 0x28u);
      }
    }
  }
  if ( *((_BYTE *)this + 32) )
  {
    *((_BYTE *)this + 32) = 0;
    QT::QFont::~QFont((QT::QStyledItemDelegate *)((char *)this + 16));
  }
  QT::QStyledItemDelegate::~QStyledItemDelegate(this);
}
