void __fastcall _base_app_mixin_t::execute_ui_requests(_QWORD *a1, const char *a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  _QWORD *i; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rdi

  v3 = (_QWORD *)a1[3];
  *a1 = &_base_app_mixin_t::execute_ui_requests;
  if ( v3 )
  {
    v4 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 != v3 )
    {
      do
      {
        v5 = v4[2];
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        v4 = (_QWORD *)*v4;
      }
      while ( v4 != v3 );
      for ( i = (_QWORD *)*v3; v3 != i; --v3[2] )
      {
        v7 = i;
        i = (_QWORD *)*i;
        *(_QWORD *)v7[1] = i;
        i[1] = v7[1];
        qfree(v7, a2);
      }
    }
    qfree(v3, a2);
  }
  v8 = a1[2];
  *a1 = &off_86FF78;
  qsem_free(v8);
  operator delete(a1, 0x28u);
}
