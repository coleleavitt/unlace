__int64 __fastcall sub_CF0A0(__int64 a1, int a2)
{
  _QWORD *v3; // rdi

  v3 = qword_252758;
  if ( qword_252758 )
  {
    *((_DWORD *)qword_252758 + 2) = a2;
    *v3 = a1;
    return sub_CDCF0((__int64)v3, 24);
  }
  else
  {
    sub_9E1E0();
    return 1;
  }
}

