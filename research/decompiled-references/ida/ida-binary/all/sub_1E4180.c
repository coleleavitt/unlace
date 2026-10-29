__int64 __fastcall sub_1E4180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rax

  if ( *(_DWORD *)(a1 + 8) == 38 )
  {
    v5 = QT::QMetaObject::cast((QT::QMetaObject *)&off_882B40, *(const QT::QObject **)a1);
    reg_int_op("CpuregsShowAnnotations", 1, (*(_DWORD *)(v5 + 1056) & 1) == 0, "Debugger");
    sub_1E40D0();
    return 1;
  }
  else
  {
    sub_1DEEE0(a5, a1, a2, a3, a4);
    return dbgreg_place_t__::vfunc_0();
  }
}
