QT::QAbstractItemView *__fastcall watches_desktop_widget_factory_t__::vfunc_3(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        const char *a10,
        __int64 *a11,
        __int64 a12)
{
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rbp
  double v15; // xmm4_8
  double v16; // xmm5_8

  v12 = a11[1];
  if ( !v12 )
  {
LABEL_8:
    if ( under_debugger )
      goto LABEL_12;
    interr(1289, a10, a11, a12, a1);
LABEL_10:
    if ( !under_debugger )
      interr(1277, a10, a11, a12, a1);
LABEL_12:
    BUG();
  }
  v13 = *a11;
  v14 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v13 + 8) )
    {
      a10 = "index";
      if ( !strcmp(*(const char **)v13, "index") )
        break;
    }
    ++v14;
    v13 += 40;
    if ( v12 == v14 )
      goto LABEL_8;
  }
  if ( *(_DWORD *)(v13 + 24) != 1 )
    goto LABEL_10;
  return sub_3E77C0(*(_DWORD *)(v13 + 32), "index", a1, a2, a3, a4, v15, v16, a7, a8);
}
