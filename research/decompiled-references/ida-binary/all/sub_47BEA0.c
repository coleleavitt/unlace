void __fastcall sub_47BEA0(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r13

  if ( !*(_BYTE *)(a1 + 528) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 128LL))(a1 + 16, 0);
    QT::QCoreApplication::processEvents(a3, a2);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 128LL))(a1 + 16, v4);
  }
}
