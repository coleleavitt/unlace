__int64 __fastcall sub_23E8E0(unsigned int a1, __int64 a2, __int64 a3, char *a4, __int64 a5, double a6)
{
  _QWORD *v7; // rdi

  v7 = qword_8CC600;
  if ( !qword_8CC600 )
    return sub_20CEA0(dbg, 37, a1, a2, a3, a4, a5, 0);
  *((_QWORD *)qword_8CC600 + 1) = a2;
  *(_DWORD *)v7 = a1;
  v7[2] = a3;
  v7[3] = a4;
  v7[4] = a5;
  return sub_23D480((__int64)v7, 25, a3, a4, a6);
}
