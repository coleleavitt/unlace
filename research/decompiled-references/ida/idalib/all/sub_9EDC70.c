void __fastcall sub_9EDC70(__int64 a1, __int64 a2)
{
  __int64 i; // rbp
  _QWORD *v4; // r14
  __int64 v5; // r12
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi

  if ( a2 )
  {
    for ( i = a2; ; i = v5 )
    {
      sub_9EDC70(a1, *(_QWORD *)(i + 24));
      v4 = *(_QWORD **)(i + 40);
      v5 = *(_QWORD *)(i + 16);
      v6 = &v4[8 * (unsigned __int64)*(unsigned int *)(i + 48)];
      if ( v4 != v6 )
      {
        do
        {
          while ( 1 )
          {
            v6 -= 8;
            v7 = (_QWORD *)v6[3];
            if ( v7 == v6 + 5 )
              break;
            operator delete(v7);
            if ( v4 == v6 )
              goto LABEL_6;
          }
        }
        while ( v4 != v6 );
LABEL_6:
        v6 = *(_QWORD **)(i + 40);
      }
      if ( v6 == (_QWORD *)(i + 56) )
      {
        operator delete((void *)i);
        if ( !v5 )
          return;
      }
      else
      {
        free(v6);
        operator delete((void *)i);
        if ( !v5 )
          return;
      }
    }
  }
}
