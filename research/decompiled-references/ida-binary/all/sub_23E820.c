__int64 __fastcall sub_23E820(__int64 a1, unsigned int a2, double a3, __int64 a4, char *a5)
{
  __int64 *v6; // rdi

  v6 = (__int64 *)qword_8CC600;
  if ( qword_8CC600 )
  {
    *((_DWORD *)qword_8CC600 + 2) = a2;
    *v6 = a1;
    return sub_23D480((__int64)v6, 24, a1, a5, a3);
  }
  else
  {
    sub_20CEA0(dbg, 13, a1, a2);
    return 1;
  }
}
