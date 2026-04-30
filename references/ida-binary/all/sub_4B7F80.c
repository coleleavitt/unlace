void __fastcall sub_4B7F80(__int64 a1, double a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx

  v2 = qword_8D1D20;
  v3 = (_QWORD *)(qword_8D1D20 + 8 * xmmword_8D1D28);
  if ( (_QWORD *)qword_8D1D20 == v3 )
    goto LABEL_6;
  v4 = (_QWORD *)qword_8D1D20;
  while ( *v4 != a1 )
  {
    if ( v3 == ++v4 )
      goto LABEL_6;
  }
  if ( v3 == v4 )
  {
LABEL_6:
    if ( *((_QWORD *)&xmmword_8D1D28 + 1) < (unsigned __int64)(xmmword_8D1D28 + 1) )
    {
      qword_8D1D20 = qvector_reserve(&qword_8D1D20, qword_8D1D20, xmmword_8D1D28 + 1, 8);
      *(_QWORD *)(qword_8D1D20 + 8 * xmmword_8D1D28) = a1;
    }
    else
    {
      *v3 = a1;
    }
    *(_QWORD *)&xmmword_8D1D28 = xmmword_8D1D28 + 1;
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(40612, qword_8D1D20, xmmword_8D1D28, v3, a2);
    sub_4B8020(40612, v2, v5);
  }
}
