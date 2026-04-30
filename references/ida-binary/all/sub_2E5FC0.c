__int64 __fastcall sub_2E5FC0(__int64 a1)
{
  const QT::QObject *v1; // rax
  QT::QAbstractItemView *v2; // rax
  QT::QAbstractItemView *v3; // rbx
  QT::QWidget *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // [rsp+0h] [rbp-98h] BYREF
  __int128 v13; // [rsp+8h] [rbp-90h]
  __int64 v14; // [rsp+18h] [rbp-80h]
  __int128 v15; // [rsp+20h] [rbp-78h]
  __m128i si128; // [rsp+30h] [rbp-68h]
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+50h] [rbp-48h]
  int v19; // [rsp+58h] [rbp-40h]
  unsigned __int64 v20; // [rsp+68h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v1 = (const QT::QObject *)sub_2DC6E0((__int64)"Imports");
  v2 = (QT::QAbstractItemView *)QT::QMetaObject::cast((QT::QMetaObject *)&off_8894E0, v1);
  if ( v2 )
  {
    v3 = v2;
    sub_2E5340(v2);
    sub_479090(QT::QCoreApplication::self + 2, v3, 1);
    return 1;
  }
  sub_2E5390("Imports", a1);
  v5 = sub_2DBE50();
  if ( v5 )
  {
    v14 = 0;
    v19 = 4194308;
    v18 = 0;
    v13 = 0;
    v15 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
    *(_OWORD *)ptr = 0;
    v6 = QT::QCoreApplication::self[2];
    v12 = 0;
    (*(void (__fastcall **)(_QWORD *, QT::QWidget *, __int64 *))(v6 + 120))(QT::QCoreApplication::self + 2, v5, &v12);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v7 = v14;
    if ( v14 )
    {
      v8 = v15;
      if ( (_QWORD)v15 )
      {
        v9 = 0;
        do
        {
          v10 = (__int64 *)(v7 + 40 * v9);
          jvalue_t_clear(v10 + 3);
          v11 = *v10;
          if ( *v10 )
          {
            v10[1] = 0;
            qfree(v11, (const char *)v5);
          }
          ++v9;
          v7 = v14;
        }
        while ( v8 != v9 );
      }
      *(_QWORD *)&v15 = 0;
      qfree(v7, (const char *)v5);
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12, (const char *)v5);
    }
    return 1;
  }
  return 0;
}
