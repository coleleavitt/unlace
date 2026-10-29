__int64 __fastcall sub_448710(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx

  v2 = (_QWORD *)sub_40FB00(24);
  *v2 = a1;
  v2[1] = a2;
  v3 = (__int64)v2;
  sub_4AE1A0(&qword_65A828);
  *(_QWORD *)(v3 + 16) = qword_65A808;
  qword_65A808 = v3;
  return sub_4AE230(&qword_65A828);
}

