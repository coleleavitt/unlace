__int64 __fastcall sub_515E70(__int64 a1, double a2, double a3)
{
  QT::QAbstractScrollArea *v3; // rdi
  __int64 result; // rax
  bool v5; // zf
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v3 = *(QT::QAbstractScrollArea **)(a1 + 256);
  v6[1] = __readfsqword(0x28u);
  result = 0;
  if ( v3 )
  {
    v5 = *((_QWORD *)v3 + 8) == 0;
    v6[0] = -1;
    if ( !v5 )
      v6[0] = qword_8D2398;
    sub_514C10(v3, (int *)v6, 2, 1, a2, a3);
    return 1;
  }
  return result;
}
