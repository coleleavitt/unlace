/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C868
// Address: 0x0006C868

//----- (0006C868) --------------------------------------------------------
int __fastcall sub_6C868(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r7
  int v8; // r0

  result = 0;
  if ( a3 )
  {
    v7 = a3;
    while ( 1 )
    {
      v8 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 32))(a1, a2, v7);
      if ( v8 <= 0 )
        break;
      a2 += v8;
      v7 -= v8;
      if ( !v7 )
        return a3;
    }
    return a3 - v7;
  }
  return result;
}
