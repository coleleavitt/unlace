__int64 __fastcall sub_23DB30(__int64 a1, int a2, __int64 a3, double a4)
{
  char *v5; // rcx
  _DWORD *v6; // rdi

  v5 = (char *)dbg;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37) & 1) == 0 )
      return 0;
    v6 = qword_8CC600;
    if ( qword_8CC600 )
    {
      *(_DWORD *)qword_8CC600 = a2;
      v6[4] = a3;
      *((_QWORD *)v6 + 3) = a1;
      return sub_23D480((__int64)v6, 10, a3, v5, a4);
    }
  }
  return 0xFFFFFFFFLL;
}
