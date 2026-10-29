/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A0FE0
// Address: 0x080A0FE0

//----- (080A0FE0) --------------------------------------------------------
int __cdecl sub_80A0FE0(int a1, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // eax

  v2 = *(_DWORD *)(a2 + 4);
  v3 = (*(int (__cdecl **)(int, int))(*(_DWORD *)a1 + 84))(a1, a2);
  if ( v3 > 0 )
  {
    while ( !(*(int (__cdecl **)(int, int, int))(*(_DWORD *)a1 + 68))(a1, a2, -1) )
      ;
    v4 = *(_DWORD *)(a2 + 4);
    if ( v4 != v2 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 3 )
        sub_8058E20(a1, "unexpected event from thread %d arrived (expected thread %d)\n", v4, v2);
      return -1;
    }
  }
  return v3;
}
