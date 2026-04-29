_QWORD *__fastcall sub_239A00(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  *a1 = 0;
  if ( !(unsigned __int8)sub_3289D0(a1, a2, a3, 2 * (unsigned int)a4) )
  {
    if ( !under_debugger )
      sub_37E160(50396);
    BUG();
  }
  return a1;
}
