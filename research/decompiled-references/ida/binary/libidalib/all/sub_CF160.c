__int64 __fastcall sub_CF160(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // rdi

  v6 = qword_252758;
  if ( !qword_252758 )
    return sub_9E1E0();
  *((_QWORD *)qword_252758 + 1) = a2;
  *(_DWORD *)v6 = a1;
  v6[2] = a3;
  v6[3] = a4;
  v6[4] = a5;
  return sub_CDCF0((__int64)v6, 25);
}

