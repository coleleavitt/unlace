void __fastcall sub_1A3A740(__int64 a1, _QWORD *a2)
{
  _QWORD *i; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp

  if ( a2 )
  {
    for ( i = a2; ; i = v5 )
    {
      sub_1A3A740(a1, i[3]);
      v4 = (_QWORD *)i[5];
      v5 = (_QWORD *)i[2];
      if ( v4 == i + 7 )
      {
        operator delete(i);
        if ( !v5 )
          return;
      }
      else
      {
        free(v4);
        operator delete(i);
        if ( !v5 )
          return;
      }
    }
  }
}
