__int64 __fastcall sub_273610(QT::QObject *a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = sub_4CF3F0(a1);
  if ( result )
  {
    if ( a2 )
      sub_4CB2D0(qword_8CD8B8);
    else
      sub_4C9900(qword_8CD8B8, result);
    v3 = sub_277DF0();
    return sub_278D20(v3, a1, a2);
  }
  return result;
}
