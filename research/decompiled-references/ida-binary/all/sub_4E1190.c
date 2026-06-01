__int64 __fastcall sub_4E1190(double a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v5; // rax
  bool v6; // r8
  __int64 v7; // rdi

  if ( a3 )
  {
    a5 = qword_8D1E60;
    a4 = (_QWORD *)(qword_8D1E60 + 16 * xmmword_8D1E68);
    do
    {
      if ( (_QWORD *)qword_8D1E60 == a4 )
        goto LABEL_7;
      v5 = (_QWORD *)qword_8D1E60;
      while ( a3 != *v5 )
      {
        v5 += 2;
        if ( a4 == v5 )
          goto LABEL_7;
      }
      if ( !v5 )
      {
LABEL_7:
        v6 = 1;
        v7 = 0;
      }
      else
      {
        v7 = v5[1];
        v6 = v7 == 0;
      }
      a3 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
    }
    while ( a3 && v6 );
    if ( v7 )
      return v7;
  }
  if ( under_debugger )
    BUG();
  interr(40915, a3, a4, a5, a1);
  return sub_4E1220();
}
