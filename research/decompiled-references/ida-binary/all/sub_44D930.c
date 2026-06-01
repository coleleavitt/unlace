__int64 __fastcall opened_files_chooser_t__::vfunc_11(__int64 a1, const char *a2)
{
  const char *v3; // r12
  _QWORD *v4; // rbp
  char *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi

  v3 = a2;
  do
  {
    v4 = *(_QWORD **)(a1 + 184);
    v5 = (char *)(*v4 + 88LL * *(_QWORD *)(*(_QWORD *)v3 + 8LL * *((_QWORD *)v3 + 1) - 8));
    v6 = *((_QWORD *)v5 + 6);
    if ( v6 )
    {
      *((_QWORD *)v5 + 7) = 0;
      qfree(v6, a2);
    }
    v7 = *((_QWORD *)v5 + 3);
    if ( v7 )
    {
      *((_QWORD *)v5 + 4) = 0;
      qfree(v7, a2);
    }
    v8 = *(_QWORD *)v5;
    if ( *(_QWORD *)v5 )
    {
      *((_QWORD *)v5 + 1) = 0;
      qfree(v8, a2);
    }
    a2 = v5 + 88;
    memmove(v5, v5 + 88, *v4 + 88LL * v4[1]-- - (_QWORD)v5 - 88);
  }
  while ( (unsigned __int8)sub_49F220(v3) );
  sub_49F270(a1, v3, **(_QWORD **)v3);
  return 1;
}
