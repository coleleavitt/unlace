unsigned __int64 __fastcall sub_28D2D0(QT::QAbstractItemView *this, __int64 a2, __int64 a3)
{
  __int64 *func; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( *((_BYTE *)this + 2496) )
  {
    func = (__int64 *)get_func(a3);
    if ( func )
    {
      v5 = *func;
      if ( *func != *((_QWORD *)this + 311) )
      {
        sub_48EE60(this);
        *((_QWORD *)this + 311) = v5;
      }
    }
  }
  return v6 - __readfsqword(0x28u);
}
