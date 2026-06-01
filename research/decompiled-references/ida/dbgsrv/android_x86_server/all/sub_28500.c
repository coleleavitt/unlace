/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28500
// Address: 0x00028500

//----- (00028500) --------------------------------------------------------
int __cdecl sub_28500(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v2 = a1[98];
  if ( v2 == -1 )
    v2 = 0;
  v3 = ptrace(PTRACE_POKEUSER, a2, 252, v2);
  v4 = 0;
  if ( !v3 )
  {
    v5 = a1[99];
    if ( v5 == -1 )
      v5 = 0;
    v6 = ptrace(PTRACE_POKEUSER, a2, 256, v5);
    v4 = 0;
    if ( !v6 )
    {
      v7 = a1[100];
      if ( v7 == -1 )
        v7 = 0;
      v8 = ptrace(PTRACE_POKEUSER, a2, 260, v7);
      v4 = 0;
      if ( !v8 )
      {
        v9 = a1[101];
        if ( v9 == -1 )
          v9 = 0;
        v10 = ptrace(PTRACE_POKEUSER, a2, 264, v9);
        v4 = 0;
        if ( !v10 )
        {
          v11 = ptrace(PTRACE_POKEUSER, a2, 276, 0);
          v4 = 0;
          if ( !v11 )
          {
            if ( a1[107] != -1 )
              v4 = a1[107];
            LOBYTE(v4) = ptrace(PTRACE_POKEUSER, a2, 280, v4) == 0;
          }
        }
      }
    }
  }
  return v4;
}
// 285F3: variable 'v4' is possibly undefined
