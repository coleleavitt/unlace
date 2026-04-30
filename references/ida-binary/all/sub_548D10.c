unsigned __int64 __fastcall sub_548D10(__m128i *this, int a2, int a3, __int64 a4, void **a5)
{
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v6 = *(_QWORD *)(a4 + 8);
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v6 == sub_548AA0
        && !*(_QWORD *)(v6 + 8) )
      {
        **(_DWORD **)a4 = 0;
      }
    }
    return v9 - __readfsqword(0x28u);
  }
  if ( !a3 )
  {
    v7 = *(_QWORD *)(a4 + 8);
    v8[0] = 0;
    v8[1] = v7;
    QT::QMetaObject::activate((QT::QMetaObject *)this, (QT::QObject *)&off_8979C0, nullptr, (int)v8, a5);
    return v9 - __readfsqword(0x28u);
  }
  if ( a3 != 1 )
    return v9 - __readfsqword(0x28u);
  return sub_4AF5F0(this);
}
