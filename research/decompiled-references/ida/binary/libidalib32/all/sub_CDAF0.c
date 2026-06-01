__int64 __fastcall sub_CDAF0(__int64 a1, int a2)
{
  _QWORD *v3; // rdi

  v3 = qword_2515B0;
  if ( qword_2515B0 )
  {
    *((_DWORD *)qword_2515B0 + 2) = a2;
    *v3 = a1;
    return sub_CC780((__int64)v3, 24);
  }
  else
  {
    sub_9E0A0();
    return 1;
  }
}

