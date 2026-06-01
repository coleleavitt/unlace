/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452E70
// Address: 0x00452E70

//----- (00452E70) --------------------------------------------------------
int __cdecl sub_452E70(unsigned int a1)
{
  int v3; // ebp
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // [esp+8h] [ebp+4h]

  if ( a1 < 0x80 )
    return dword_490990[a1];
  if ( a1 < 0x110000 )
  {
    v3 = 0;
    v4 = 3200;
    while ( v3 < 3200 )
    {
      if ( v4 > 3200 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(1520);
      }
      v5 = (v4 + v3) / 2;
      v12 = v5;
      v6 = v5 + 1;
      v7 = 3 * v5;
      if ( v5 < 0xC80 )
      {
        v8 = &dword_497ED8[3 * v5];
        if ( v6 >= 0xC80 )
          v9 = 1114112;
        else
          v9 = dword_497EE4[v7];
        if ( a1 >= *v8 && a1 < v9 && v8 )
        {
          v11 = v8[1];
          if ( !v8[2] )
            v11 += a1 - *v8;
          if ( v11 >= 0x1D52 )
          {
            if ( byte_4B70F0 )
              __debugbreak();
            sub_4533F0(1519);
          }
          return dword_490990[v11];
        }
        v5 = v12;
      }
      v10 = v5 - 1;
      if ( dword_497ED8[v7] >= a1 )
      {
        v6 = v3;
        v4 = v10;
      }
      v3 = v6;
      if ( (int)v6 > v4 )
        return 0;
    }
  }
  return 0;
}
// 490990: using guessed type int dword_490990[];
// 497ED8: using guessed type int dword_497ED8[];
// 497EE4: using guessed type int dword_497EE4[];
// 4B70F0: using guessed type char byte_4B70F0;
