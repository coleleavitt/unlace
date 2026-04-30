unsigned __int64 __fastcall sub_4BA010(QT::QMainWindow *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  vars0 = 0;
  vars8 = 0;
  if ( !(unsigned __int8)sub_4B9E20(a2, (__int64)&vars0, a3, a4, 0.0) )
    (*(void (__fastcall **)(QT::QMainWindow *, __int64 *))(*(_QWORD *)this + 424LL))(this, &vars0);
  sub_53EC00(this);
  v4 = vars0;
  if ( vars0 )
  {
    v5 = vars8;
    if ( (_QWORD)vars8 )
    {
      v6 = 0;
      do
      {
        v7 = (__int64 *)(v4 + 24 * v6);
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v8, (const char *)&vars0);
          v4 = vars0;
        }
        ++v6;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&vars8 = 0;
    qfree(v4, (const char *)&vars0);
  }
  return vars18 - __readfsqword(0x28u);
}
