__int64 __fastcall sub_44D860(QT::QTreeView *this)
{
  __int64 result; // rax
  unsigned __int8 v2; // [rsp+Fh] [rbp-9h]

  result = sub_524420(this);
  if ( (_BYTE)result )
  {
    if ( !*((_BYTE *)this + 2532) )
    {
      v2 = result;
      QT::QTreeView::expandAll(this);
      return v2;
    }
  }
  return result;
}
