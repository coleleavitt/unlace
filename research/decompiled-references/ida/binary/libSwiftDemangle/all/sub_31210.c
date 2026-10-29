_QWORD *__fastcall sub_31210(_QWORD *a1, __int64 a2)
{
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  vars0[0] = &std::string::_Rep::_S_empty_rep_storage + 3;
  sub_30F80((std::string *)vars0, a2, 0);
  *a1 = vars0[0];
  return a1;
}

