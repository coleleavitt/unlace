void __fastcall sub_225F260(__int64 a1, _QWORD *a2)
{
  _QWORD *i; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rbp
  _QWORD *v6; // rdi

  if ( a2 )
  {
    for ( i = a2; ; i = v5 )
    {
      sub_225F260(a1, i[3]);
      v4 = i[8];
      v5 = (_QWORD *)i[2];
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v6 = (_QWORD *)i[4];
      if ( v6 == i + 6 )
      {
        operator delete(i);
        if ( !v5 )
          return;
      }
      else
      {
        operator delete(v6);
        operator delete(i);
        if ( !v5 )
          return;
      }
    }
  }
}
