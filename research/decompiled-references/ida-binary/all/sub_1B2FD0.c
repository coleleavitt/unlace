__int64 *__fastcall sub_1B2FD0(unsigned __int8 a1)
{
  (*(void (__fastcall **)(_QWORD *, void **))(*QT::QCoreApplication::self + 232LL))(
    QT::QCoreApplication::self,
    &qword_8CAE60);
  if ( (unsigned __int8)netnode_inited() )
  {
    reg_int_op("GraphOverviewGradient", 1, a1, 0);
    if ( (_QWORD)xmmword_8CAE68 )
      reg_str_set("ThemeName", 0, qword_8CAE60);
    else
      reg_str_set("ThemeName", 0, &s1);
  }
  return sub_1B2EE0();
}
