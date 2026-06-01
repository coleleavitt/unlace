_DWORD *__fastcall sub_341240(QT::QWidget *this, unsigned __int64 a2)
{
  _DWORD *result; // rax
  int v3; // ebp
  unsigned __int64 v4; // rax

  result = *((_DWORD **)this + 4);
  if ( *((_BYTE *)this + 345) )
  {
    v3 = result[8] + 1 - result[6];
    if ( !*((_QWORD *)this + 21) )
      return result;
  }
  else
  {
    v3 = result[7] + 1 - result[5];
    if ( !*((_QWORD *)this + 21) )
      return result;
  }
  v4 = sub_33FA20((__int64)this, a2);
  result = (_DWORD *)sub_3411C0((__int64)this, v4 - (v3 - *((_DWORD *)this + 44)));
  if ( result != (_DWORD *)-1LL )
    return (_DWORD *)sub_33FA70(this, (unsigned __int64)result);
  return result;
}
