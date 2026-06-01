__int64 __fastcall sub_303700(double a1, __int64 a2, const char *a3)
{
  QT::QWidget *v3; // rdi
  const char *v5; // rdi
  _DWORD *v6; // rax
  __int64 v7; // [rsp+0h] [rbp-78h] BYREF
  __int128 v8; // [rsp+8h] [rbp-70h]
  __int64 v9; // [rsp+18h] [rbp-60h]
  __int128 v10; // [rsp+20h] [rbp-58h]
  const char *v11; // [rsp+30h] [rbp-48h]
  __int128 v12; // [rsp+38h] [rbp-40h]
  unsigned __int64 v13; // [rsp+48h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v3 = qword_8CD748;
  if ( *(char *)(*((_QWORD *)qword_8CD748 + 4) + 9LL) >= 0 )
  {
    if ( !sub_1A15A0() )
    {
      if ( !(unsigned __int8)is_debugger_on() )
      {
        if ( !(_BYTE)byte_8CD698 && __cxa_guard_acquire(&byte_8CD698) )
        {
          xmmword_8CD6A8 = 0;
          qword_8CD6A0 = 0;
          v6 = (_DWORD *)qvector_reserve(&qword_8CD6A0, 0, 8, 1);
          qword_8CD6A0 = (__int64)v6;
          *(_QWORD *)&xmmword_8CD6A8 = 8;
          *v6 = 1634100548;
          *(_DWORD *)((char *)v6 + 3) = 1953264993;
          *(_BYTE *)(qword_8CD6A0 + 7) = 0;
          word_8CD6B8 = 256;
          qword_8CD6C0 = 0;
          qword_8CD6D8 = 0;
          xmmword_8CD6C8 = 0;
          xmmword_8CD6E0 = 0;
          qword_8CD6D8 = qvector_reserve(&qword_8CD6D8, 0, 9, 1);
          *(_QWORD *)&xmmword_8CD6E0 = 9;
          a1 = 0.0;
          strcpy((char *)qword_8CD6D8, "Original");
          word_8CD6F0 = 256;
          xmmword_8CD700 = 0;
          qword_8CD6F8 = 0;
          __cxa_atexit((void (*)(void *))sub_2FF170, nullptr, &off_85BC80);
          __cxa_guard_release(&byte_8CD698);
        }
        a3 = (const char *)&qword_8CD6A0;
        v7 = 0;
        *(_QWORD *)&v8 = 0;
        BYTE8(v8) = 0;
        if ( (unsigned __int8)sub_268E90((__int64)&v7, (__int64)&qword_8CD6A0, 2, 0, a1) )
        {
          a3 = (const char *)&v7;
          (*(void (__fastcall **)(_QWORD *, __int64 *))(*QT::QCoreApplication::self + 344LL))(
            QT::QCoreApplication::self,
            &v7);
        }
        jvalue_t_clear(&v7);
      }
      v7 = 0;
      v9 = 0;
      v11 = nullptr;
      v8 = 0;
      v10 = 0;
      v12 = 0;
      if ( !(unsigned __int8)sub_47C810(&v7) )
        goto LABEL_21;
      v5 = &s1;
      if ( (_QWORD)v12 )
        v5 = v11;
      a3 = "GNOME";
      if ( stristr(v5, "GNOME") )
        QT::QWidget::showNormal(qword_8CD748);
      else
LABEL_21:
        QT::QWidget::show(qword_8CD748);
      if ( v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree(v11, a3);
      }
      if ( v9 )
      {
        *(_QWORD *)&v10 = 0;
        qfree(v9, a3);
      }
      if ( v7 )
      {
        *(_QWORD *)&v8 = 0;
        qfree(v7, a3);
      }
    }
    v3 = qword_8CD748;
  }
  sub_30F0E0(v3);
  return sub_47DB70(QT::QCoreApplication::self);
}
