void __fastcall sub_21BA780(__int64 a1, _QWORD *a2)
{
  _QWORD *i; // rbp
  void **v4; // r12
  void **v5; // rbx
  _QWORD *v6; // r13
  _QWORD *v7; // rdi

  if ( a2 )
  {
    for ( i = a2; ; i = v6 )
    {
      sub_21BA780(a1, i[3]);
      v4 = (void **)i[9];
      v5 = (void **)i[8];
      v6 = (_QWORD *)i[2];
      if ( v4 != v5 )
      {
        do
        {
          while ( *v5 != v5 + 2 )
          {
            operator delete(*v5);
            v5 += 6;
            if ( v4 == v5 )
              goto LABEL_6;
          }
          v5 += 6;
        }
        while ( v4 != v5 );
LABEL_6:
        v5 = (void **)i[8];
      }
      if ( v5 )
        operator delete(v5);
      v7 = (_QWORD *)i[4];
      if ( v7 == i + 6 )
      {
        operator delete(i);
        if ( !v6 )
          return;
      }
      else
      {
        operator delete(v7);
        operator delete(i);
        if ( !v6 )
          return;
      }
    }
  }
}
