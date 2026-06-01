__int64 __fastcall sub_CDF60(__int64 a1, int a2, int a3)
{
  _DWORD *v4; // rdi

  v4 = qword_252758;
  *((_DWORD *)qword_252758 + 2) = a2;
  *(_QWORD *)v4 = a1;
  v4[3] = a3;
  if ( (int)sub_CDCF0((__int64)v4, 7) <= 0 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned int *)qword_252758 + 4);
}

