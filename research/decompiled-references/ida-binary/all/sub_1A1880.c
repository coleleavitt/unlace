void __fastcall __noreturn sub_1A1880(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD v3[29]; // [rsp+0h] [rbp-E8h] BYREF

  v3[23] = __readfsqword(0x28u);
  v2 = errorexit;
  if ( errorexit > 1 )
  {
    a1 = 2;
    v2 = qexit(2);
  }
  errorexit = v2 + 1;
  if ( !sub_1A15A0() )
    goto LABEL_7;
  while ( 1 )
  {
    if ( QT::QCoreApplication::self )
    {
      sub_4C0490(v3, "Error", 4, 0, &unk_5C2F25, 0, 0, 1, a1, a2);
      sub_4797E0(v3, 0, 0);
      message_box_request_t__::vfunc_1(v3, nullptr);
    }
    else
    {
      qveprintf(a1, a2);
    }
    ++errorexit;
    qexit(1);
LABEL_7:
    if ( (unsigned __int8)qgetenv("IDA_BLOCK_ERROR", 0) )
      batch = 0;
  }
}
