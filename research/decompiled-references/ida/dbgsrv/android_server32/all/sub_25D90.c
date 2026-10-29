/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_25D90
// Address: 0x00025D90

//----- (00025D90) --------------------------------------------------------
int __fastcall sub_25D90(int a1, int a2)
{
  _DWORD *v2; // r5
  int v3; // r2
  _DWORD *v4; // r3
  int v5; // r6
  _DWORD *v6; // r7
  _DWORD *v7; // r3
  int v8; // r2
  _DWORD *v9; // r1
  int v10; // r4
  int v11; // r2

  v2 = *(_DWORD **)(a2 + 916);
  if ( !v2 )
    goto LABEL_10;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = (_DWORD *)(a2 + 916);
  do
  {
    v5 = v2[4];
    if ( v5 >= v3 )
      v4 = v2;
    v6 = v2 + 1;
    if ( v5 >= v3 )
      v6 = v2;
    v2 = (_DWORD *)*v6;
  }
  while ( *v6 );
  if ( v4 != (_DWORD *)(a2 + 916) && v3 >= v4[4] )
  {
    if ( *((_BYTE *)v4 + 45) && !*(_BYTE *)(a2 + 977) && *(unsigned __int8 *)(a1 + 8) << 25 )
    {
      if ( !under_debugger )
        interr(30185);
      __debugbreak();
    }
    if ( *((_BYTE *)v4 + 44) && (*(_DWORD *)(a1 + 8) & 0xFF7F) == 0x137F )
    {
      *((_BYTE *)v4 + 44) = 0;
      v11 = 1;
      v4[10] = 1;
    }
    else
    {
      v11 = 1;
      *((_BYTE *)v4 + 45) = 1;
      v4[12] = *(_DWORD *)(a1 + 8);
      ++*(_DWORD *)(a2 + 1016);
    }
  }
  else
  {
LABEL_10:
    v7 = *(_DWORD **)(a2 + 924);
    v8 = *(_DWORD *)(a2 + 928);
    v9 = &v7[v8];
    if ( 4 * v8 )
    {
      v10 = 4 * v8;
      while ( *(_DWORD *)(a1 + 4) != *v7 )
      {
        v10 -= 4;
        ++v7;
        v11 = 0;
        if ( !v10 )
          return v11;
      }
    }
    v11 = 0;
    if ( v7 != v9 )
    {
      ptrace(PTRACE_CONT, *(_DWORD *)(a1 + 4), 0, 0);
      return 1;
    }
  }
  return v11;
}
// E0550: using guessed type char under_debugger;
