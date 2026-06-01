__int64 __fastcall sub_CEBF0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi

  v4 = qword_252758;
  if ( !qword_252758 )
    return -1;
  *((_QWORD *)qword_252758 + 1) = a2;
  *v4 = a1;
  v4[2] = a3;
  if ( (int)sub_CDCF0((__int64)v4, 19) <= 0 )
    return -1;
  else
    return *((_QWORD *)qword_252758 + 2);
}

