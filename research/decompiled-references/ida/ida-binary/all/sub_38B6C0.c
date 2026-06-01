void __fastcall sub_38B6C0(__int64 a1, const char *a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rdi
  __int64 (*v7)(); // rax
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdi

  sub_38B610(a1);
  QT::QComboBox::clear(*(QT::QComboBox **)(*(_QWORD *)(a1 + 72) + 48LL));
  QT::QTreeWidget::clear(*(QT::QTreeWidget **)(a1 + 80));
  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 112);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = *(_QWORD *)(v3 + 8 * i);
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
          v3 = *(_QWORD *)(a1 + 104);
        }
      }
    }
    *(_QWORD *)(a1 + 112) = 0;
    qfree(v3, a2);
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 120) = 0;
  }
  v7 = *(__int64 (**)())(**(_QWORD **)(a1 + 64) + 80LL);
  if ( v7 != struc_stroff_data_t__::vfunc_10 && !(unsigned __int8)v7() )
  {
    v8 = qword_8CF3A0;
    if ( qword_8CF3A0 )
    {
      v9 = xmmword_8CF3A8;
      if ( (_QWORD)xmmword_8CF3A8 )
      {
        v10 = 0;
        do
        {
          v11 = *(_QWORD *)(v8 + 8 * v10);
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
          ++v10;
          v8 = qword_8CF3A0;
        }
        while ( v9 != v10 );
      }
      *(_QWORD *)&xmmword_8CF3A8 = 0;
      qfree(v8, a2);
      qword_8CF3A0 = 0;
      *((_QWORD *)&xmmword_8CF3A8 + 1) = 0;
    }
    qword_8CF398 = 0;
  }
}
