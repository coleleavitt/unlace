/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_cp_graphical
// Address: 0x0009BC80

//----- (0009BC80) --------------------------------------------------------
bool __cdecl is_cp_graphical(unsigned int a1)
{
  bool result; // al
  _DWORD v2[4]; // [esp+8h] [ebp-10h] BYREF

  v2[1] = __readgsdword(0x14u);
  sub_9BB00(v2, a1);
  result = 0;
  if ( (a1 | 1) != 0x2029 && BYTE2(v2[0]) >= 2u )
  {
    result = 0;
    if ( LOWORD(v2[0]) != 270 && LOWORD(v2[0]) != 290 )
    {
      result = 0;
      if ( a1 - 8206 >= 2 && a1 != 1564 )
        return a1 - 8234 >= 5 && BYTE2(v2[0]) != 5;
    }
  }
  return result;
}
