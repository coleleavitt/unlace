__int64 __fastcall sub_A1AA0(unsigned int a1, char a2)
{
  __m128i *v2; // rax

  if ( !byte_2440DC || dword_2440E4 < a1 || a1 < dword_2440E0 )
    return 0;
  v2 = xmmword_250CE0;
  if ( a2 )
  {
    v2 = xmmword_250B60;
    if ( qword_250BA0 == qword_250BC0 )
      v2 = xmmword_250E60;
  }
  return sub_A1A40((__int64)v2, a1);
}

