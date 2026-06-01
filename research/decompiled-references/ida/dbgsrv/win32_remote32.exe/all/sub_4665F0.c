/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4665F0
// Address: 0x004665F0

//----- (004665F0) --------------------------------------------------------
unsigned int __cdecl sub_4665F0(unsigned __int8 *a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned int result; // eax
  unsigned __int8 *v4; // edx
  int v5; // ebx
  unsigned __int8 v6; // cl
  bool v7; // cf
  unsigned int v8; // eax
  unsigned __int8 v9; // cl
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx

  result = a3;
  if ( a3 )
  {
    v4 = a1;
    LOBYTE(v5) = a2;
    while ( ((unsigned __int8)v4 & 3) != 0 )
    {
      v6 = *v4++;
      if ( a2 == v6 )
        return (unsigned int)(v4 - 1);
      if ( !--result )
        return result;
    }
    v7 = result < 4;
    v8 = result - 4;
    if ( !v7 )
    {
      v5 = 16843009 * a2;
      do
      {
        v10 = v5 ^ *(_DWORD *)v4;
        v4 += 4;
        if ( (((v10 + 2130640639) ^ ~v10) & 0x81010100) != 0 )
        {
          v11 = *((_DWORD *)v4 - 1);
          LOBYTE(v11) = a2 ^ v11;
          if ( !(_BYTE)v11 )
            return (unsigned int)(v4 - 4);
          BYTE1(v11) ^= a2;
          if ( !BYTE1(v11) )
            return (unsigned int)(v4 - 3);
          v12 = HIWORD(v11);
          if ( a2 == (unsigned __int8)v12 )
            return (unsigned int)(v4 - 2);
          if ( a2 == BYTE1(v12) )
            return (unsigned int)(v4 - 1);
        }
        v7 = v8 < 4;
        v8 -= 4;
      }
      while ( !v7 );
    }
    result = v8 + 4;
    if ( result )
    {
      while ( 1 )
      {
        v9 = *v4++;
        if ( (unsigned __int8)v5 == v9 )
          break;
        if ( !--result )
          return result;
      }
      return (unsigned int)(v4 - 1);
    }
  }
  return result;
}
