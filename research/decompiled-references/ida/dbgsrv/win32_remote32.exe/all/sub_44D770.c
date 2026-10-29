/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D770
// Address: 0x0044D770

//----- (0044D770) --------------------------------------------------------
int __cdecl sub_44D770(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // esi
  int v6; // eax

  v3 = a3;
  v4 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 28))(a1, a2, v4);
      if ( v6 <= 0 )
        break;
      a2 += v6;
      v4 -= v6;
      if ( !v4 )
        return a3;
    }
    return a3 - v4;
  }
  return v3;
}
