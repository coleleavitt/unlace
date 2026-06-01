/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2CDB0
// Address: 0x0002CDB0

//----- (0002CDB0) --------------------------------------------------------
int __cdecl sub_2CDB0(int a1, int a2)
{
  _DWORD *v2; // ecx
  int v3; // esi
  int v4; // edi
  int v5; // edx
  _DWORD *v6; // edx
  int v7; // ecx
  int v8; // edi
  _DWORD *i; // esi

  v2 = (_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 572);
  if ( !v3 )
    goto LABEL_8;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = a2 + 572;
  do
  {
    if ( *(_DWORD *)(v3 + 16) >= v4 )
      v5 = v3;
    v3 = *(_DWORD *)(v3 + 4 * (*(_DWORD *)(v3 + 16) < v4));
  }
  while ( v3 );
  v2 = (_DWORD *)a2;
  if ( v5 != a2 + 572 && v4 >= *(_DWORD *)(v5 + 16) )
  {
    if ( *(_BYTE *)(v5 + 45) && !*(_BYTE *)(a2 + 633) && (*(_BYTE *)(a1 + 8) & 0x7F) != 0 )
    {
      if ( !(_BYTE)under_debugger )
        interr(30185);
      BUG();
    }
    if ( *(_BYTE *)(v5 + 44) && (v2 = (_DWORD *)a2, (*(_DWORD *)(a1 + 8) & 0xFF7F) == 0x137F) )
    {
      *(_BYTE *)(v5 + 44) = 0;
      *(_DWORD *)(v5 + 40) = 1;
    }
    else
    {
      *(_BYTE *)(v5 + 45) = 1;
      *(_DWORD *)(v5 + 48) = *(_DWORD *)(a1 + 8);
      ++v2[168];
    }
  }
  else
  {
LABEL_8:
    v6 = (_DWORD *)v2[145];
    v7 = v2[146];
    v8 = 4 * v7;
    i = v6;
    if ( 4 * v7 )
    {
      for ( i = v6; *(_DWORD *)(a1 + 4) != *i; ++i )
      {
        v8 -= 4;
        if ( !v8 )
          return 0;
      }
    }
    if ( i == &v6[v7] )
      return 0;
    ptrace(PTRACE_CONT, *(_DWORD *)(a1 + 4), 0, 0);
  }
  return 1;
}
// 13E34C: using guessed type int under_debugger;
