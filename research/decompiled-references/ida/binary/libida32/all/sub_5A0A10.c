__int64 __fastcall sub_5A0A10(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int *v6; // rax
  unsigned int *v7; // rbp

  if ( a4 >= a3 )
  {
    if ( !under_debugger )
      interr(1542);
LABEL_13:
    BUG();
  }
  v6 = sub_59ED40(a1, a2, a3);
  v7 = v6;
  if ( !v6 || *v6 != a3 || a2 != sub_5AFCE0(a1) )
    return 0;
  if ( *(unsigned int **)(a2 + 48) != v7 && *(v7 - 2) >= a4 )
  {
    if ( !under_debugger )
      interr(1543);
    goto LABEL_13;
  }
  *v7 = a4;
  return sub_59FD50((__int64)a1, a2, 0);
}

