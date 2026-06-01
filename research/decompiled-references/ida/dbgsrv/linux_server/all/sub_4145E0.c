/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4145E0
// Address: 0x00000000004145E0

//----- (00000000004145E0) ----------------------------------------------------
bool __fastcall sub_4145E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 864);
  if ( v2 == -1 )
    v2 = 0;
  if ( ptrace(PTRACE_POKEUSER, a2, 848, v2) )
    return 0;
  v4 = *(_QWORD *)(a1 + 872);
  if ( v4 == -1 )
    v4 = 0;
  if ( ptrace(PTRACE_POKEUSER, (unsigned int)a2, 856, v4) )
    return 0;
  v5 = *(_QWORD *)(a1 + 880);
  if ( v5 == -1 )
    v5 = 0;
  if ( ptrace(PTRACE_POKEUSER, (unsigned int)a2, 864, v5) )
    return 0;
  v6 = *(_QWORD *)(a1 + 888);
  if ( v6 == -1 )
    v6 = 0;
  return !ptrace(PTRACE_POKEUSER, (unsigned int)a2, 872, v6)
      && !ptrace(PTRACE_POKEUSER, (unsigned int)a2, 896, 0)
      && ptrace(PTRACE_POKEUSER, (unsigned int)a2, 904, *(unsigned int *)(a1 + 916)) == 0;
}
