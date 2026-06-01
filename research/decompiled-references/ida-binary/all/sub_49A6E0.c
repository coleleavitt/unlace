__int64 __fastcall sub_49A6E0(QT::QAbstractItemView *this, char a2)
{
  __int64 result; // rax
  int v3; // ebp
  __int64 v4; // rsi

  result = sub_4A0DB0(*((_QWORD *)this + 5));
  if ( (int)result > 0 )
  {
    v3 = result;
    v4 = (unsigned int)sub_49A5E0(this, 1) + (a2 == 0 ? -1 : 1);
    if ( (int)v4 < 0 )
    {
      v4 = (unsigned int)(v3 - 1);
    }
    else if ( v3 <= (int)v4 )
    {
      v4 = 0;
    }
    return sub_4A0620(*((_QWORD *)this + 5), v4, 0xFFFFFFFFLL, 0);
  }
  return result;
}
