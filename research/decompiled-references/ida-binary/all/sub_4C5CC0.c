__int64 __fastcall sub_4C5CC0(QT::QWidget *this, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)result == *((_DWORD *)this + 12) )
  {
    if ( *((_QWORD *)this + 5) )
    {
      result = QT::QBasicTimer::stop((QT::QWidget *)((char *)this + 48));
      if ( !*((_BYTE *)this + 56) )
        return sub_4C4810(this);
    }
  }
  else if ( *((_DWORD *)this + 13) == (_DWORD)result )
  {
    return sub_4C5BA0((__int64)this);
  }
  return result;
}
