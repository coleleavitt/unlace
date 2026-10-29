unsigned __int64 __fastcall type_flag(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 result; // rax

  sub_3C3D00(*(__int64 **)(qword_2CA1698 + 1480), a1, a4, a2);
  if ( (~(_BYTE)a4 & 0xF) == 0 )
    return a3 & 0xFFFFFF0FF00000LL | a2 & 0xFF000000F00FFFFFLL;
  result = a2;
  if ( a4 <= 7 )
    return (a2 ^ a3) & (15LL << (4 * ((unsigned __int8)a4 + (a4 > 1) + 5))) ^ a2;
  return result;
}

