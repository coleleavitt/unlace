unsigned __int64 __fastcall sub_522FB0(QT::QAbstractItemView *this)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(QT::QAbstractItemView *); // rax
  const char *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  __int64 vars18; // [rsp+18h] [rbp+18h] BYREF
  __int128 vars20; // [rsp+20h] [rbp+20h]
  __int64 vars30; // [rsp+30h] [rbp+30h]
  unsigned __int64 vars38; // [rsp+38h] [rbp+38h]

  v1 = *(_QWORD *)this;
  vars38 = __readfsqword(0x28u);
  vars0 = 0;
  v2 = *(__int64 (__fastcall **)(QT::QAbstractItemView *))(v1 + 968);
  LOBYTE(vars30) = 0;
  vars18 = 0;
  vars8 = 0;
  vars20 = 0;
  if ( v2 == sub_51F1D0 )
    sub_4962F0(this, (__int64)&vars0, 7);
  else
    ((void (__fastcall *)(QT::QAbstractItemView *, __int64 *, __int64))v2)(this, &vars0, 7);
  v3 = (const char *)(*(__int64 (__fastcall **)(QT::QAbstractItemView *, __int64 *, __int64))(*(_QWORD *)this + 1032LL))(
                       this,
                       &vars0,
                       263);
  sub_4E0B20((__int64)this + 304, (__int64)v3, 0);
  sub_4DE2C0(&vars18);
  v8 = vars0;
  if ( vars0 )
  {
    v9 = vars8;
    if ( (_QWORD)vars8 )
    {
      v10 = 0;
      do
      {
        v11 = v10++;
        sub_4DE2C0((__int64 *)(32 * v11 + v8));
        v8 = vars0;
      }
      while ( v9 != v10 );
    }
    qfree(v8, v3, v4, v5, v6, v7, vars0, 0, *((_QWORD *)&vars8 + 1), vars18, vars20, vars30);
  }
  return vars38 - __readfsqword(0x28u);
}
