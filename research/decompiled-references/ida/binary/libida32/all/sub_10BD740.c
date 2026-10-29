void __fastcall sub_10BD740(__int64 a1, _QWORD *a2)
{
  _QWORD *i; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  _QWORD *v6; // rdi

  if ( a2 )
  {
    for ( i = a2; ; i = v5 )
    {
      sub_10BD740(a1, i[3]);
      v4 = (_QWORD *)i[9];
      v5 = (_QWORD *)i[2];
      if ( v4 != i + 11 )
        free(v4);
      v6 = (_QWORD *)i[5];
      if ( v6 == i + 7 )
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

