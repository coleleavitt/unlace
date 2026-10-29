__int64 __fastcall TChooser__::vfunc_3(QT::QWidget *this, double a2)
{
  _QWORD *v2; // rbp
  const char *v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v9; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v2 = (_QWORD *)((char *)this + 2512);
  v3 = (char *)this + 2512;
  v10 = __readfsqword(0x28u);
  *(_QWORD *)this = &TChooser___vtable;
  *((_QWORD *)this + 2) = TChooser___vtable_at__16;
  *((_QWORD *)this + 5) = TChooser___vtable_at__40;
  *((_QWORD *)this + 13) = TChooser___vtable_at__104;
  *((_QWORD *)this + 314) = TChooser___vtable_at__2512;
  sub_277780(&v9, (__int64)this + 2512);
  sub_4A24E0(this);
  sub_277860(&v9);
  v7 = *((_QWORD *)this + 321);
  if ( v7 )
  {
    *((_QWORD *)this + 322) = 0;
    a2 = qfree(v7, v3);
  }
  sub_277990(v2, v3, a2, v5, v6);
  return chooser_widget_t__::vfunc_3(this);
}
