__int64 __fastcall sub_1B888F0(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int16 v4; // dx

  v4 = *(_WORD *)a2 & 0x1FF;
  if ( v4 == 252 || v4 == 243 )
    return sub_1B87850(a1, a2, a3, a4);
  else
    return a2;
}
