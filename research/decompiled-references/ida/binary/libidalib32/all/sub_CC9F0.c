__int64 __fastcall sub_CC9F0(__int64 a1, int a2, int a3)
{
  _DWORD *v4; // rdi

  v4 = qword_2515B0;
  *((_DWORD *)qword_2515B0 + 2) = a2;
  *(_QWORD *)v4 = a1;
  v4[3] = a3;
  if ( (int)sub_CC780((__int64)v4, 7) <= 0 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned int *)qword_2515B0 + 4);
}

