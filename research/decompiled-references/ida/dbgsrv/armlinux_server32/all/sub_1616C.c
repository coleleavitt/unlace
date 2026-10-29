/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1616C
// Address: 0x0001616C

//----- (0001616C) --------------------------------------------------------
int __fastcall sub_1616C(int a1, int a2)
{
  _DWORD *v2; // r3
  int v3; // r5
  _DWORD *v4; // r4
  int v5; // r2
  int *v6; // r3
  int *v7; // r2
  int v8; // r1
  int *v9; // r3
  int v10; // r0
  int v12; // r3

  v2 = *(_DWORD **)(a2 + 1008);
  if ( !v2 )
    goto LABEL_11;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = (_DWORD *)(a2 + 1004);
  do
  {
    v5 = v2[4];
    if ( v5 < v3 )
      v2 = (_DWORD *)v2[3];
    else
      v4 = v2;
    if ( v5 >= v3 )
      v2 = (_DWORD *)v2[2];
  }
  while ( v2 );
  if ( (_DWORD *)(a2 + 1004) != v4 && v3 >= v4[4] )
  {
    if ( *((_BYTE *)v4 + 45) && !*(_BYTE *)(a2 + 1077) && *(_DWORD *)(a1 + 8) << 25 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(30185);
    }
    if ( *((_BYTE *)v4 + 44) && (v12 = *(_DWORD *)(a1 + 8), (unsigned __int8)v12 == 127) && BYTE1(v12) == 19 )
    {
      *((_BYTE *)v4 + 44) = 0;
      v4[10] = 1;
    }
    else
    {
      *((_BYTE *)v4 + 45) = 1;
      v4[12] = *(_DWORD *)(a1 + 8);
      ++*(_DWORD *)(a2 + 1108);
    }
    return 1;
  }
  else
  {
LABEL_11:
    v6 = *(int **)(a2 + 1024);
    v7 = &v6[*(_DWORD *)(a2 + 1028)];
    if ( v6 != v7 )
    {
      v8 = *(_DWORD *)(a1 + 4);
      if ( v8 == *v6 )
      {
LABEL_16:
        ptrace(PTRACE_CONT);
        return 1;
      }
      v9 = v6 + 1;
      while ( v7 != v9 )
      {
        v10 = *v9++;
        if ( v10 == v8 )
          goto LABEL_16;
      }
    }
    return 0;
  }
}
// D6C20: using guessed type char under_debugger;
