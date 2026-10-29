__int64 __fastcall sub_23E370(__int64 a1, __int64 a2, __int64 a3, char *a4, double a5)
{
  _QWORD *v6; // rdi

  v6 = qword_8CC600;
  if ( !qword_8CC600 )
    return -1;
  *((_QWORD *)qword_8CC600 + 1) = a2;
  *v6 = a1;
  v6[2] = a3;
  if ( (int)sub_23D480((__int64)v6, 19, a3, a4, a5) <= 0 )
    return -1;
  else
    return *((_QWORD *)qword_8CC600 + 2);
}
