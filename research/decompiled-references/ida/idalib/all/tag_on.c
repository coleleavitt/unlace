_BYTE *__fastcall tag_on(_BYTE *a1, unsigned __int64 a2, char a3)
{
  _BYTE *result; // rax

  if ( (__int64)(a2 - (_QWORD)a1) < 0 )
  {
    if ( !under_debugger )
      interr(1225);
LABEL_12:
    BUG();
  }
  if ( (unsigned __int64)a1 >= a2 )
  {
    if ( !under_debugger )
      interr(518);
    goto LABEL_12;
  }
  *a1 = 1;
  if ( (unsigned __int64)(a1 + 1) >= a2 )
  {
    *(_BYTE *)(a2 - 1) = a3;
LABEL_5:
    *(_BYTE *)(a2 - 1) = 0;
    return (_BYTE *)(a2 - 1);
  }
  result = a1 + 2;
  a1[1] = a3;
  if ( (unsigned __int64)(a1 + 2) >= a2 )
    goto LABEL_5;
  return result;
}
