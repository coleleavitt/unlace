void __fastcall sub_2D7580(_QWORD *a1)
{
  if ( *((_BYTE *)a1 + 16) )
    QT::QMetaType::unregisterConverterFunction(*a1, a1[1]);
}
