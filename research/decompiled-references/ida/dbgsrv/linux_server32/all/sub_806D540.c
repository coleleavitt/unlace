/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806D540
// Address: 0x0806D540

//----- (0806D540) --------------------------------------------------------
unsigned __int8 __cdecl sub_806D540(int a1, _BYTE *a2)
{
  unsigned __int8 result; // al
  int v3; // ecx
  unsigned int v4; // ecx
  int v5; // eax

  result = 0;
  if ( a2 )
  {
    if ( *a2 == 36 )
    {
      v3 = (unsigned __int8)a2[1];
      if ( (_BYTE)v3 )
      {
        result = a2[2] == 46 || a2[2] == 0;
        if ( result )
        {
          v4 = v3 - 97;
          result = 0;
          if ( (unsigned __int8)v4 <= 0x17u )
          {
            v5 = 8945707;
            return _bittest(&v5, v4);
          }
        }
      }
    }
  }
  return result;
}
