void __fastcall sub_38B610(__int64 a1)
{
  int v1; // eax
  int v2; // r14d
  int i; // r13d
  __int64 v4; // rax
  _QWORD *v5; // rbp
  _QWORD *v6; // r12
  _QWORD *v7; // rbx

  v1 = QT::QComboBox::count(*(QT::QComboBox **)(*(_QWORD *)(a1 + 72) + 48LL));
  if ( v1 > 0 )
  {
    v2 = v1;
    for ( i = 0; i != v2; ++i )
    {
      v4 = sub_38B570(a1, i);
      v5 = (_QWORD *)v4;
      if ( v4 )
      {
        v6 = *(_QWORD **)(v4 + 8);
        v7 = *(_QWORD **)v4;
        if ( v6 != *(_QWORD **)v4 )
        {
          do
          {
            if ( *v7 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
            ++v7;
          }
          while ( v6 != v7 );
          v7 = (_QWORD *)*v5;
        }
        if ( v7 )
          operator delete(v7, v5[2] - (_QWORD)v7);
        operator delete(v5, 0x18u);
      }
    }
  }
}
