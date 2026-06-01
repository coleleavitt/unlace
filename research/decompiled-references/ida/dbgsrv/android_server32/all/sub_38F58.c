/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38F58
// Address: 0x00038F58

//----- (00038F58) --------------------------------------------------------
int __fastcall sub_38F58(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0

  sub_38EEC((int)(a1 + 17), 0);
  sub_38EEC((int)(a1 + 20), 0);
  v2 = a1[28];
  if ( v2 && *(_DWORD *)(v2 + 4) )
  {
    if ( a1[24] )
    {
      if ( !under_debugger )
        interr(262);
      goto LABEL_33;
    }
    if ( a1[34] )
    {
      if ( !under_debugger )
        interr(263);
      goto LABEL_33;
    }
    if ( a1[37] )
    {
      if ( !under_debugger )
        interr(264);
      goto LABEL_33;
    }
    if ( a1[40] )
    {
      if ( !under_debugger )
        interr(265);
      goto LABEL_33;
    }
    if ( a1[43] )
    {
      if ( !under_debugger )
        interr(266);
      goto LABEL_33;
    }
    if ( a1[46] )
    {
      if ( !under_debugger )
        interr(267);
      goto LABEL_33;
    }
    if ( a1[49] )
    {
      if ( !under_debugger )
        interr(268);
      goto LABEL_33;
    }
    if ( a1[52] )
    {
      if ( !under_debugger )
        interr(269);
      goto LABEL_33;
    }
  }
  v3 = a1[27];
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 68) == -1 )
    {
      *(_DWORD *)(v3 + 68) = 0;
      a1[27] = 0;
      goto LABEL_14;
    }
    if ( !under_debugger )
      interr(485);
LABEL_33:
    __debugbreak();
  }
LABEL_14:
  a1[57] = 0;
  a1[28] = 0;
  a1[29] = -1;
  return -1;
}
// E0550: using guessed type char under_debugger;
