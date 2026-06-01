void *__fastcall sub_2334C0(double a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *result; // rax
  __int64 v6; // rdx

  result = qword_8CC600;
  if ( !qword_8CC600 || *((_QWORD *)qword_8CC600 + 8) )
  {
    if ( under_debugger )
      goto LABEL_11;
    interr(40191, a3, a4, a5, a1);
LABEL_9:
    if ( !under_debugger )
    {
      interr(40192, a3, v6, a5, a1);
      return (void *)sub_233530();
    }
LABEL_11:
    BUG();
  }
  if ( *((_DWORD *)qword_8CC600 + 22) == 8 )
    return result;
  v6 = *((unsigned int *)qword_8CC600 + 22);
  if ( (_DWORD)v6 != 4 )
    goto LABEL_9;
  *((_DWORD *)qword_8CC600 + 22) = 2;
  return result;
}
