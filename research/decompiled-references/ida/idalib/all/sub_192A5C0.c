unsigned __int64 __fastcall sub_192A5C0(__int64 a1, __int64 a2, unsigned __int64 a3, __m128 a4, __m128 a5)
{
  if ( (*(_WORD *)a3 & 0x1FF) == 0x13 )
    return sub_192A480(a1, a2, a3, a4, a5);
  else
    return a3;
}
