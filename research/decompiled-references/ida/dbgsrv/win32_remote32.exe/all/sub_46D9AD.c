/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D9AD
// Address: 0x0046D9AD

//----- (0046D9AD) --------------------------------------------------------
int __cdecl sub_46D9AD(char *a1, _DWORD *a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  char v6; // cl
  char v7; // al
  _DWORD v10[3]; // [esp+Ch] [ebp-10h] BYREF
  int v11; // [esp+18h] [ebp-4h]

  v4 = 0;
  v10[2] = &a3;
  v5 = 0;
  v10[0] = a2;
  v10[1] = a1;
  v11 = 0;
  while ( *a1 == byte_4A64F0[v5] || *a1 == byte_4A64F4[v5] )
  {
    v6 = sub_470F48((int)a2);
    v5 = v11 + 1;
    *a1 = v6;
    v11 = v5;
    if ( v5 == 3 )
    {
      sub_4718A2(a2, v6);
      a3 = a2[4];
      a4 = a2[5];
      *a1 = sub_470F48((int)a2);
      while ( *a1 == byte_4A64F8[v4] || *a1 == byte_4A6500[v4] )
      {
        v7 = sub_470F48((int)a2);
        ++v4;
        *a1 = v7;
        if ( v4 == 5 )
        {
          sub_4718A2(a2, v7);
          return 3;
        }
      }
      return 4 * (sub_46E635((int)v10) == 0) + 3;
    }
  }
  sub_46E635((int)v10);
  return 7;
}
