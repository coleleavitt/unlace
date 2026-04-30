QT::QWidget *__fastcall sub_3047E0(__int64 a1, __int64 a2, __int64 a3)
{
  QT::QWidget *v3; // r12

  if ( !*(_BYTE *)(get_current_config(a1, a2, a3) + 569) )
    return nullptr;
  v3 = *(QT::QWidget **)(a1 + 1048);
  if ( (_BYTE)a2 )
  {
    if ( !v3 )
    {
      v3 = (QT::QWidget *)operator new(0x100u);
      sub_2E8DE0(v3, a1);
      *(_QWORD *)(a1 + 1048) = v3;
    }
  }
  return v3;
}
