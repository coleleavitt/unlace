bool __fastcall sub_5DD360(__int64 a1, __int64 a2, char a3, unsigned int a4, __m128i a5, double a6)
{
  if ( (a3 & 8) == 0 && sub_5CD7B0(a1, a2) )
  {
    set_qerrno(77, a2);
    return 0;
  }
  else
  {
    return !(unsigned int)sub_5D8F60(a1, a2, a3) && (unsigned int)sub_5DD1F0(a1, a2, a4, a5, a6) == 0;
  }
}

