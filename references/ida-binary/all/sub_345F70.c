unsigned __int64 __fastcall sub_345F70(QT::QWidget *this)
{
  __int64 v1; // rax
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v6; // rdx
  unsigned __int8 v7; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v1 = sub_534430("navigator:ToggleLegend");
  if ( v1 && (unsigned __int8)sub_533460(v1, 7, (unsigned int)&v7, v2, v3, v4) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 104LL))(*((_QWORD *)this + 6), v7);
    v6 = 0;
    if ( v7 )
      v6 = *(_BYTE *)(*((_QWORD *)this + 87) + 345LL) ^ 1u;
    reg_int_op("BandLegend", 1, v6, 0);
    QT::QWidget::updateGeometry(this);
  }
  return v8 - __readfsqword(0x28u);
}
