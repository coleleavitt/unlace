/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408BA0
// Address: 0x0000000000408BA0

//----- (0000000000408BA0) ----------------------------------------------------
__int64 __fastcall sub_408BA0(__int64 a1, __int64 a2)
{
  __int64 v2; // x2
  int v3; // w4
  __int64 v4; // x5
  _DWORD *v5; // x2
  _DWORD *v6; // x3
  __int64 v7; // x1
  int v9; // w3

  v2 = *(_QWORD *)(a2 + 1928);
  if ( !v2 )
    goto LABEL_7;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2 + 1920;
  do
  {
    while ( *(_DWORD *)(v2 + 32) >= v3 )
    {
      v4 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        goto LABEL_5;
    }
    v2 = *(_QWORD *)(v2 + 24);
  }
  while ( v2 );
LABEL_5:
  if ( a2 + 1920 != v4 && v3 >= *(_DWORD *)(v4 + 32) )
  {
    if ( *(_BYTE *)(v4 + 65) && !*(_BYTE *)(a2 + 2053) && (*(_DWORD *)(a1 + 12) & 0x7FLL) != 0 )
    {
      a1 = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(30185);
      __break(0x3E8u);
    }
    if ( *(_BYTE *)(v4 + 64) && (v9 = *(_DWORD *)(a1 + 12), (unsigned __int8)v9 == 127) && BYTE1(v9) == 19 )
    {
      *(_BYTE *)(v4 + 64) = 0;
      *(_DWORD *)(v4 + 60) = 1;
    }
    else
    {
      *(_BYTE *)(v4 + 65) = 1;
      *(_DWORD *)(v4 + 68) = *(_DWORD *)(a1 + 12);
      ++*(_DWORD *)(a2 + 2112);
    }
    return 1;
  }
  else
  {
LABEL_7:
    v5 = *(_DWORD **)(a2 + 1960);
    v6 = &v5[*(_QWORD *)(a2 + 1968)];
    if ( v5 != v6 )
    {
      v7 = *(unsigned int *)(a1 + 8);
      if ( (_DWORD)v7 == *v5 )
      {
LABEL_11:
        ptrace(PTRACE_CONT, v7, 0, 0);
        return 1;
      }
      while ( v6 != ++v5 )
      {
        if ( *v5 == (_DWORD)v7 )
          goto LABEL_11;
      }
    }
    return 0;
  }
}
// 52451C: using guessed type char under_debugger;
