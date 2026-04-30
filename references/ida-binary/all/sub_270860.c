unsigned __int64 __fastcall sub_270860(QT::QAbstractItemView *this, __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rcx
  _DWORD **v4; // rdx
  QT::QAbstractItemView *v6; // rbx
  _DWORD *v7; // rsi
  _DWORD **v8; // rdx
  _DWORD *v9; // rbp

  result = *a2;
  v3 = *a2 + 8 * a2[1];
  if ( v3 != *a2 )
  {
    v4 = (_DWORD **)*a2;
    v6 = this;
    while ( 1 )
    {
      v7 = *v4;
      if ( **v4 == 4 )
        break;
      if ( (_DWORD **)v3 == ++v4 )
        goto LABEL_7;
    }
    if ( v7 )
    {
      sub_26F520(this, (__int64)v7);
      result = *a2;
      v3 = *a2 + 8 * a2[1];
      if ( *a2 == v3 )
        return result;
    }
LABEL_7:
    v8 = (_DWORD **)result;
    while ( **v8 != 7 )
    {
      if ( (_DWORD **)v3 == ++v8 )
        goto LABEL_16;
    }
    if ( !*v8 )
      goto LABEL_16;
    this = (QT::QAbstractItemView *)((char *)this + 40);
    if ( sub_279D70((char *)v6 + 40) )
    {
      this = v6;
      sub_270650(v6);
    }
    result = *a2;
    v3 = *a2 + 8 * a2[1];
    if ( *a2 != v3 )
    {
LABEL_16:
      while ( 1 )
      {
        v9 = *(_DWORD **)result;
        if ( **(_DWORD **)result == 9 )
          break;
        result += 8LL;
        if ( v3 == result )
          return result;
      }
      if ( v9 )
      {
        result = QT::QGuiApplication::keyboardModifiers(this);
        if ( (result & 0x2000000) == 0 )
          return sub_26ED60(v6, (__int64)v9);
      }
    }
  }
  return result;
}
