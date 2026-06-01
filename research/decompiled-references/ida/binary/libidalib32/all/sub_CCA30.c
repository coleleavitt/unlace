__int64 __fastcall sub_CCA30(__int64 a1, int a2)
{
  _QWORD *v3; // rdi

  v3 = qword_2515B0;
  *((_DWORD *)qword_2515B0 + 2) = a2;
  *v3 = a1;
  if ( (int)sub_CC780((__int64)v3, 8) <= 0 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned int *)qword_2515B0 + 3);
}

