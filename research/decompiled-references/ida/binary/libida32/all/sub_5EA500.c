__int64 __fastcall sub_5EA500(unsigned int a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rdi
  _BYTE *v4; // rax
  __int64 result; // rax

  v3 = a2 + a1;
  v4 = (_BYTE *)a2;
  while ( (unsigned __int64)v4 < v3 )
  {
    if ( !*v4++ )
      goto LABEL_5;
  }
  a2 = 0;
LABEL_5:
  if ( a3 )
  {
    result = sub_5EA3C0(qword_2CA1698, a2, 0);
    if ( (_BYTE)result )
      return result;
LABEL_9:
    if ( !under_debugger )
      interr(1745);
    BUG();
  }
  result = sub_5E9D80(*(_QWORD *)(qword_2CA1698 + 1480), nullptr, a2, 0);
  if ( (_DWORD)result != 1 )
    goto LABEL_9;
  return result;
}

