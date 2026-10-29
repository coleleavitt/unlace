void __fastcall sub_FB17E0(__int64 a1, _QWORD *a2)
{
  _QWORD *i; // rbx
  void *v4; // rdi
  _QWORD *v5; // rbp

  if ( a2 )
  {
    for ( i = a2; ; i = v5 )
    {
      sub_FB17E0(a1, i[3]);
      v4 = (void *)i[5];
      v5 = (_QWORD *)i[2];
      if ( v4 )
      {
        operator delete(v4);
        operator delete(i);
        if ( !v5 )
          return;
      }
      else
      {
        operator delete(i);
        if ( !v5 )
          return;
      }
    }
  }
}

