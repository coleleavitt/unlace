/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_398F4
// Address: 0x000398F4

//----- (000398F4) --------------------------------------------------------
void __fastcall sub_398F4(_DWORD *a1)
{
  int v2; // r7
  int v3; // r5
  int i; // r6
  int v5; // r3
  void *v6; // r0
  int v7; // r3
  int v8; // r7
  int v9; // r5
  int j; // r6
  int v11; // r3
  void *v12; // r0
  int v13; // r3
  int v14; // r3
  int v15; // r3

  v2 = a1[18];
  if ( v2 )
  {
    v3 = 0;
    for ( i = 0; i != v2; ++i )
    {
      v5 = a1[17];
      v6 = *(void **)(v5 + v3);
      v7 = v5 + v3;
      if ( v6 )
      {
        *(_DWORD *)(v7 + 4) = 0;
        sub_77E08(v6);
      }
      v3 += 12;
    }
    a1[18] = 0;
  }
  v8 = a1[21];
  if ( v8 )
  {
    v9 = 0;
    for ( j = 0; j != v8; ++j )
    {
      v11 = a1[20];
      v12 = *(void **)(v11 + v9);
      v13 = v11 + v9;
      if ( v12 )
      {
        *(_DWORD *)(v13 + 4) = 0;
        sub_77E08(v12);
      }
      v9 += 12;
    }
    a1[21] = 0;
  }
  v14 = a1[28];
  if ( v14 && *(_DWORD *)(v14 + 4) )
  {
    if ( a1[24] )
    {
      if ( !under_debugger )
        sub_78AFC(262);
      goto LABEL_21;
    }
    if ( a1[34] )
    {
      if ( !under_debugger )
        sub_78AFC(263);
      goto LABEL_21;
    }
    if ( a1[37] )
    {
      if ( !under_debugger )
        sub_78AFC(264);
LABEL_21:
      __und(0xFFu);
    }
    if ( a1[40] )
    {
      if ( !under_debugger )
        sub_78AFC(265);
      goto LABEL_21;
    }
    if ( a1[43] )
    {
      if ( !under_debugger )
        sub_78AFC(266);
      goto LABEL_21;
    }
    if ( a1[46] )
    {
      if ( !under_debugger )
        sub_78AFC(267);
      goto LABEL_21;
    }
    if ( a1[49] )
    {
      if ( !under_debugger )
        sub_78AFC(268);
      goto LABEL_21;
    }
    if ( a1[52] )
    {
      if ( !under_debugger )
        sub_78AFC(269);
      goto LABEL_21;
    }
  }
  v15 = a1[27];
  if ( v15 )
  {
    if ( *(_DWORD *)(v15 + 68) != -1 )
    {
      if ( !under_debugger )
        sub_78AFC(485);
      goto LABEL_21;
    }
    *(_DWORD *)(v15 + 68) = 0;
    a1[27] = 0;
  }
  a1[28] = 0;
  a1[57] = 0;
  a1[29] = -1;
}
// D5C00: using guessed type char under_debugger;
