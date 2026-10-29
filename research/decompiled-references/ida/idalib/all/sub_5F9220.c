bool __fastcall sub_5F9220(__int64 a1, __int64 a2, char a3, unsigned int a4, __m128i a5, double a6)
{
  if ( (a3 & 8) == 0 && sub_5E95A0(a1, a2) )
  {
    set_qerrno(77);
    return 0;
  }
  else
  {
    return !(unsigned int)sub_5F4DE0(a1, a2, a3) && (unsigned int)sub_5F90B0(a1, a2, a4, a5, a6) == 0;
  }
}
