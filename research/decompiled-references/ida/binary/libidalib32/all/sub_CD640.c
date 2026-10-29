__int64 __fastcall sub_CD640(int a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi

  v4 = qword_2515B0;
  if ( !qword_2515B0 )
    return -1;
  *((_QWORD *)qword_2515B0 + 1) = a2;
  *(_DWORD *)v4 = a1;
  v4[2] = a3;
  if ( (int)sub_CC780((__int64)v4, 19) <= 0 )
    return -1;
  else
    return *((_QWORD *)qword_2515B0 + 2);
}

