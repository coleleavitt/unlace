__int64 __fastcall sub_310CD0(__int64 a1, char a2)
{
  QT::QBasicTimer *v3; // rdi

  v3 = (QT::QBasicTimer *)(*(_QWORD *)(a1 + 352) + 100LL);
  if ( a2 )
    return QT::QBasicTimer::start(v3, 500, a1);
  else
    return QT::QBasicTimer::stop(v3);
}
