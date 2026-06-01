__int64 __fastcall sub_23D6F0(__int64 a1, int a2, __int64 a3, char *a4, double a5)
{
  _DWORD *v6; // rdi

  v6 = qword_8CC600;
  *((_DWORD *)qword_8CC600 + 2) = a2;
  *(_QWORD *)v6 = a1;
  v6[3] = a3;
  if ( (int)sub_23D480((__int64)v6, 7, a3, a4, a5) <= 0 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned int *)qword_8CC600 + 4);
}
