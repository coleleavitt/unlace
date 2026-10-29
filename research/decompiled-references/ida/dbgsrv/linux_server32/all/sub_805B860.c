/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805B860
// Address: 0x0805B860

//----- (0805B860) --------------------------------------------------------
bool __cdecl sub_805B860(_DWORD *a1, int a2)
{
  int v2; // eax
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v2 = a1[114];
  if ( v2 == -1 )
    v2 = 0;
  if ( ptrace(PTRACE_POKEUSER, a2, 252, v2) )
    return 0;
  v4 = a1[115];
  if ( v4 == -1 )
    v4 = 0;
  if ( ptrace(PTRACE_POKEUSER, a2, 256, v4) )
    return 0;
  v5 = a1[116];
  if ( v5 == -1 )
    v5 = 0;
  if ( ptrace(PTRACE_POKEUSER, a2, 260, v5) )
    return 0;
  v6 = a1[117];
  if ( v6 == -1 )
    v6 = 0;
  if ( ptrace(PTRACE_POKEUSER, a2, 264, v6) || ptrace(PTRACE_POKEUSER, a2, 276, 0) )
    return 0;
  v7 = a1[123];
  if ( v7 == -1 )
    v7 = 0;
  return ptrace(PTRACE_POKEUSER, a2, 280, v7) == 0;
}
