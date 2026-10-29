__int64 __fastcall sub_305090(__int64 a1, __int64 a2)
{
  QT::QWidget *v2; // rdi
  __int64 v3; // rax

  if ( byte_8CD800 || !qword_8CD748 )
    return 0;
  v2 = (QT::QWidget *)sub_30ED70(qword_8CD748);
  if ( v2 && (sub_514550(v2), (v3 = *(_QWORD *)(a2 + 8)) != 0) )
    return v3 - 1;
  else
    return 0;
}
