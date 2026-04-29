_QWORD *__fastcall sub_23E640(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  *a1 = 0;
  if ( !(unsigned __int8)sub_32DC30(a1, a2, a3, 2 * (unsigned int)a4) )
  {
    if ( !under_debugger )
      sub_3835A0(50396);
    BUG();
  }
  return a1;
}
