__int64 __fastcall sub_CDFA0(__int64 a1, int a2)
{
  _QWORD *v3; // rdi

  v3 = qword_252758;
  *((_DWORD *)qword_252758 + 2) = a2;
  *v3 = a1;
  if ( (int)sub_CDCF0((__int64)v3, 8) <= 0 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned int *)qword_252758 + 3);
}

