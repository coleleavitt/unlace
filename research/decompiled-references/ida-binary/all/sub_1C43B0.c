void __fastcall sub_1C43B0(_QWORD *a1)
{
  if ( *a1 )
    QT::QReadWriteLock::destroyRecursive();
}
