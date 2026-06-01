__int64 __fastcall _base_app_mixin_t::execute_ui_requests(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // rbp
  __int64 v4; // rbp
  __int64 **v6; // r12
  __int64 *v7; // rdi
  __int64 v8; // rax
  double v9; // xmm0_8
  _QWORD *v10; // r12
  __int64 v11; // rdi
  _QWORD *i; // r12
  _QWORD *v13; // rdi
  __int64 v14; // rdi

  v2 = (_QWORD *)a1[3];
  if ( v2[2] )
  {
    v4 = *(_QWORD *)(*v2 + 16LL);
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))v4)(v4) )
    {
      v6 = (__int64 **)a1[3];
      v7 = *v6;
      v8 = **v6;
      *(_QWORD *)(*v6)[1] = v8;
      *(_QWORD *)(v8 + 8) = v7[1];
      v9 = qfree(v7, a2);
      v6[2] = (__int64 *)((char *)v6[2] - 1);
      if ( v4 )
        (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v4 + 16LL))(v4, v9);
    }
    if ( QT::QCoreApplication::self )
      sub_4795B0((__int64)(QT::QCoreApplication::self + 2), (__int64)a1, 6, *(_DWORD *)(a1[4] + 80LL));
    return 0;
  }
  if ( !a1 )
    return 0;
  *a1 = &_base_app_mixin_t::execute_ui_requests;
  if ( v2 )
  {
    v10 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 != v2 )
    {
      do
      {
        v11 = v10[2];
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v2 );
      for ( i = (_QWORD *)*v2; i != v2; --v2[2] )
      {
        v13 = i;
        i = (_QWORD *)*i;
        *(_QWORD *)v13[1] = i;
        i[1] = v13[1];
        qfree(v13, a2);
      }
    }
    qfree(v2, a2);
  }
  v14 = a1[2];
  *a1 = &off_86FF78;
  qsem_free(v14);
  operator delete(a1, 0x28u);
  return 0;
}
