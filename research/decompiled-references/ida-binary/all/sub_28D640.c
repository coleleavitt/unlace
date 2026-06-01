unsigned __int64 __fastcall sub_28D640(QT::QAbstractItemView *this, char a2)
{
  __int64 *func; // rax
  __int64 v4; // rbp
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  *((_BYTE *)this + 2496) = a2;
  if ( a2 )
  {
    func = (__int64 *)get_func(xmmword_8CC810);
    if ( func )
    {
      v4 = *func;
      if ( *func != *((_QWORD *)this + 311) )
      {
        sub_48EE60(this);
        *((_QWORD *)this + 311) = v4;
      }
    }
  }
  return v5 - __readfsqword(0x28u);
}
