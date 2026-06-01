/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805A170
// Address: 0x0805A170

//----- (0805A170) --------------------------------------------------------
int __cdecl sub_805A170(int a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // [esp+0h] [ebp-24h]

  v2 = ptrace(PTRACE_PEEKUSER, a2[1], 276, 0);
  v3 = 0;
  v4 = v2;
  while ( 1 )
  {
    if ( (v4 & (1 << v3)) != 0 )
    {
      v6 = *(_DWORD *)(a1 + 4 * v3 + 456);
      v9 = v3;
      v7 = ptrace(PTRACE_PEEKUSER, a2[1], 4 * v3 + 252, 0);
      v3 = v9;
      if ( v6 == v7 )
        break;
    }
    if ( ++v3 == 4 )
      return 0;
  }
  sub_80C6150(a2, 5);
  if ( (a2[4] & 0xFFFFFFF) != 5 )
    sub_8054DD0();
  v8 = *(_DWORD *)(a1 + 4 * v9 + 456);
  a2[6] = -1;
  a2[5] = v8;
  ptrace(PTRACE_POKEUSER, a2[1], 276, 0);
  return 1;
}
