void sub_164BF0()
{
  _QWORD *v0; // r12
  _QWORD *v1; // r14
  __int64 v2; // r15
  _QWORD *v3; // r13
  __int64 v4; // rbp
  __int64 i; // rbx

  v0 = (_QWORD *)qword_2544E0;
  v1 = (_QWORD *)(qword_2544E0 + 8 * xmmword_2544E8);
  if ( v1 != (_QWORD *)qword_2544E0 )
  {
    do
    {
      v2 = *v0;
      v3 = (_QWORD *)(*v0 + 648LL);
      if ( *v3 )
      {
        v4 = *(_QWORD *)(v2 + 656);
        if ( v4 )
        {
          for ( i = 0; i != v4; ++i )
            qfree();
        }
        *(_QWORD *)(v2 + 656) = 0;
        qfree();
        *(_QWORD *)(v2 + 648) = 0;
        *(_QWORD *)(v2 + 664) = 0;
      }
      *(_BYTE *)(v2 + 672) = 0;
      ++v0;
      sub_15BD20((__int64)v3, 1);
    }
    while ( v1 != v0 );
  }
}

