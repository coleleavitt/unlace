void __fastcall xref_filter_proxy_model_t__::vfunc_3(QT::QSortFilterProxyModel *this)
{
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rax
  void **v4; // rbx
  void **i; // r12
  QT::QRegularExpression *v6; // rbx
  QT::QRegularExpression *v7; // r12
  QT::QRegularExpression *v8; // rdi

  *(_QWORD *)this = &xref_filter_proxy_model_t___vtable;
  v2 = *((volatile signed __int32 **)this + 5);
  if ( v2 && !_InterlockedSub(v2, 1u) )
  {
    v6 = *((QT::QRegularExpression **)this + 6);
    v7 = (QT::QRegularExpression *)((char *)v6 + 8 * *((_QWORD *)this + 7));
    while ( v7 != v6 )
    {
      v8 = v6;
      v6 = (QT::QRegularExpression *)((char *)v6 + 8);
      QT::QRegularExpression::~QRegularExpression(v8);
    }
    free(*((void **)this + 5));
  }
  v3 = *((volatile signed __int32 **)this + 2);
  if ( v3 && !_InterlockedSub(v3, 1u) )
  {
    v4 = *((void ***)this + 3);
    for ( i = &v4[4 * *((_QWORD *)this + 4)]; i != v4; v4 += 4 )
    {
      if ( *v4 && !_InterlockedSub((volatile signed __int32 *)*v4, 1u) )
        free(*v4);
    }
    free(*((void **)this + 2));
  }
  QT::QSortFilterProxyModel::~QSortFilterProxyModel(this);
}
