__int64 __fastcall sub_341450(QT::QWidget *this, unsigned __int64 a2, unsigned int a3)
{
  __int64 *v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi

  v4 = *((__int64 **)this + 14);
  result = (__int64)&v4[4 * *((_QWORD *)this + 15)];
  if ( v4 == (__int64 *)result )
  {
LABEL_9:
    if ( a2 == -1 )
      return result;
    goto LABEL_13;
  }
  while ( a2 < *v4 || a2 >= v4[1] )
  {
    v4 += 4;
    if ( (__int64 *)result == v4 )
      goto LABEL_9;
  }
  if ( v4 )
  {
    if ( *((_BYTE *)v4 + 24) )
    {
      v8 = *((int *)this + 44);
      if ( (int)v8 <= 0 )
        v8 = 1;
      result = (v4[1] - *v4) / v8;
      v6 = result;
    }
    else
    {
      v6 = *((_QWORD *)this + 21);
    }
    if ( v6 )
    {
      v7 = *v4;
      result = (a2 - v7) / v6;
      a2 -= (a2 - v7) % v6;
      goto LABEL_9;
    }
  }
LABEL_13:
  if ( *((_QWORD *)this + 26) != a2 )
  {
    sub_3412C0(this, a2, 0, a3);
    return QT::QWidget::update(this);
  }
  return result;
}
