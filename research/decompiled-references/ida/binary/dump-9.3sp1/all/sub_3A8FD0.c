bool __fastcall sub_3A8FD0(int a1, unsigned int a2)
{
  bool result; // al

  result = 0;
  if ( a2 <= 7 )
    return (dword_42ED80[a2] & a1) != 0;
  return result;
}
