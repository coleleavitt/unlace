/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A35C
// Address: 0x0047A35C

//----- (0047A35C) --------------------------------------------------------
int __cdecl sub_47A35C(int a1, unsigned __int8 a2, _BYTE *a3, unsigned int a4, unsigned __int8 a5)
{
  int v5; // edx
  int result; // eax
  _BYTE *v7; // ecx
  int v8; // ebx
  int v9; // edi

  v5 = a4;
  if ( a4 >= (unsigned int)a2 + 4 )
  {
    v7 = a3;
    if ( a2 )
    {
      *a3 = 45;
      v7 = a3 + 1;
      a3[1] = 0;
      if ( a4 != -1 )
        v5 = a4 - 1;
    }
    v8 = 4 * a1 - 4;
    v9 = 2 * (a5 ^ 1);
    result = sub_46C78C(
               v8 + 1,
               v9,
               v7,
               v5,
               off_4A79F8[v9
                        + ((__PAIR64__(v8 + 1, strlen((const char *)off_4A79F8[v8 + v9])) - (unsigned int)v5) >> 32)]);
    if ( result )
    {
      sub_467F04(v8, v9);
      __debugbreak();
    }
  }
  else
  {
    *a3 = 0;
    return 12;
  }
  return result;
}
// 4A79F8: using guessed type int off_4A79F8[8];
