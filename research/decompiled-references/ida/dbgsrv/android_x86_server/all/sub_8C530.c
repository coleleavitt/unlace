/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C530
// Address: 0x0008C530

//----- (0008C530) --------------------------------------------------------
int __cdecl sub_8C530(int a1, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // [esp+4h] [ebp-18h]
  int v5; // [esp+8h] [ebp-14h]

  result = (*(int (__cdecl **)(int, _DWORD, int))(*(_DWORD *)a1 + 108))(a1, *(_DWORD *)(a2 + 4), 1);
  if ( result > 0 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    result = (*(int (__cdecl **)(int, int))(*(_DWORD *)a1 + 84))(a1, a2);
    if ( result > 0 )
    {
      v5 = result;
      while ( !(*(int (__cdecl **)(int, int, int))(*(_DWORD *)a1 + 68))(a1, a2, -1) )
        ;
      v3 = *(_DWORD *)(a2 + 4);
      result = v5;
      if ( v4 != v3 )
      {
        result = -1;
        if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 3 )
        {
          sub_1C9D0(a1, "unexpected event from thread %d arrived (expected thread %d)\n", v3, v4);
          return -1;
        }
      }
    }
  }
  return result;
}
