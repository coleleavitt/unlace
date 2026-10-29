/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A0B0
// Address: 0x0008A0B0

//----- (0008A0B0) --------------------------------------------------------
char __cdecl sub_8A0B0(int a1, _DWORD *a2)
{
  int v2; // ecx
  char result; // al
  int v4; // esi
  int v5; // eax
  int v6; // [esp+8h] [ebp-14h]

  v2 = *(_DWORD *)(a1 + 200);
  if ( v2 == a2[1] )
  {
    result = 1;
    if ( !v2 )
      return result;
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      v6 = v5;
      if ( !sub_8E590(v4 + *(_DWORD *)(a1 + 196), v4 + *a2) )
        break;
      v5 = v6 + 1;
      v4 += 40;
      if ( (unsigned int)(v6 + 1) >= *(_DWORD *)(a1 + 200) )
        return 1;
    }
  }
  return 0;
}
