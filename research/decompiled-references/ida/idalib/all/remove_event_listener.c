void __fastcall remove_event_listener(__int64 a1)
{
  __int64 v1; // r13
  bool v2; // cf
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned int i; // ebx
  __int64 v6; // rsi

  v1 = xmmword_2CCB5B8 - 1;
  if ( (__int64)xmmword_2CCB5B8 - 1 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)(qword_2CCB5B0 + 8 * v1);
        if ( v3 )
          break;
        v2 = v1-- == 0;
        if ( v2 )
          return;
      }
      v4 = *(_QWORD *)(v3 + 1672);
      for ( i = 0; i != 9; ++i )
      {
        v6 = i;
        sub_4B41F0(v4, v6, a1);
      }
      v2 = v1-- == 0;
    }
    while ( !v2 );
  }
}
