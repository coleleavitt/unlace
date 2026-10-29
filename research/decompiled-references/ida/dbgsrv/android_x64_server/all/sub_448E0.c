/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448E0
// Address: 0x00000000000448E0

//----- (00000000000448E0) ----------------------------------------------------
__int64 __fastcall sub_448E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = 0;
  v3 = 0;
  if ( *(_QWORD *)(a1 + 736) != -1 )
    v3 = *(_QWORD *)(a1 + 736);
  if ( !ptrace(PTRACE_POKEUSER, a2, 848, v3) )
  {
    v2 = 0;
    v4 = 0;
    if ( *(_QWORD *)(a1 + 744) != -1 )
      v4 = *(_QWORD *)(a1 + 744);
    if ( !ptrace(PTRACE_POKEUSER, (unsigned int)a2, 856, v4) )
    {
      v2 = 0;
      v5 = 0;
      if ( *(_QWORD *)(a1 + 752) != -1 )
        v5 = *(_QWORD *)(a1 + 752);
      if ( !ptrace(PTRACE_POKEUSER, (unsigned int)a2, 864, v5) )
      {
        v2 = 0;
        v6 = 0;
        if ( *(_QWORD *)(a1 + 760) != -1 )
          v6 = *(_QWORD *)(a1 + 760);
        if ( !ptrace(PTRACE_POKEUSER, (unsigned int)a2, 872, v6) )
        {
          v2 = 0;
          if ( !ptrace(PTRACE_POKEUSER, (unsigned int)a2, 896, 0) )
            LOBYTE(v2) = ptrace(PTRACE_POKEUSER, (unsigned int)a2, 904, *(unsigned int *)(a1 + 788)) == 0;
        }
      }
    }
  }
  return v2;
}
