/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4195D0
// Address: 0x004195D0

//----- (004195D0) --------------------------------------------------------
bool __cdecl sub_4195D0(_DWORD *a1, unsigned int a2, int a3, int a4, int a5)
{
  int v5; // esi
  unsigned int v6; // eax
  int v8; // eax

  v5 = a1[7];
  if ( !v5 )
    return 0;
  v6 = a1[5];
  if ( a2 < v6 || a2 > v5 + v6 - 1 )
    return 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      return (a1[12] & 1) != 0;
    }
    else
    {
      if ( a3 != 8 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(623);
      }
      return (a1[12] & 8) != 0;
    }
  }
  else
  {
    v8 = 2;
    if ( a5 != 1 && a1[12] == 8 && a4 == a2 )
      v8 = 10;
    return (v8 & a1[12]) != 0;
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
