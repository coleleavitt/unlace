__int64 __fastcall ColorButton__::vfunc_2(__m128i *this, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  void **v6; // r8
  __int64 v7; // rdx
  int v8; // [rsp+Ch] [rbp-3Ch]
  int v9[2]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  result = QT::QPushButton::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 1 )
      {
        v8 = result;
        if ( (_DWORD)result == 1 )
        {
          sub_4AF5F0(this);
          LODWORD(result) = 1;
        }
        else
        {
          v7 = *(_QWORD *)(a4 + 8);
          *(_QWORD *)v9 = 0;
          v10 = v7;
          QT::QMetaObject::activate((QT::QMetaObject *)this, (QT::QObject *)&off_8979C0, nullptr, (int)v9, v6);
          LODWORD(result) = v8;
        }
      }
      return (unsigned int)(result - 2);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 1 )
        **(_QWORD **)a4 = 0;
      return (unsigned int)(result - 2);
    }
  }
  return result;
}
