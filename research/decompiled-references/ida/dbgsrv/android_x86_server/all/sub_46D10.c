/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D10
// Address: 0x00046D10

//----- (00046D10) --------------------------------------------------------
unsigned int __cdecl sub_46D10(unsigned int *a1)
{
  unsigned int v1; // eax
  unsigned int result; // eax

  sub_46C30(a1 + 16, 0);
  sub_46C30(a1 + 19, 0);
  v1 = a1[27];
  if ( v1 && *(_DWORD *)(v1 + 4) )
  {
    if ( a1[23] )
    {
      if ( !(_BYTE)under_debugger )
        interr(262);
      goto LABEL_33;
    }
    if ( a1[33] )
    {
      if ( !(_BYTE)under_debugger )
        interr(263);
      goto LABEL_33;
    }
    if ( a1[36] )
    {
      if ( !(_BYTE)under_debugger )
        interr(264);
      goto LABEL_33;
    }
    if ( a1[39] )
    {
      if ( !(_BYTE)under_debugger )
        interr(265);
      goto LABEL_33;
    }
    if ( a1[42] )
    {
      if ( !(_BYTE)under_debugger )
        interr(266);
      goto LABEL_33;
    }
    if ( a1[45] )
    {
      if ( !(_BYTE)under_debugger )
        interr(267);
      goto LABEL_33;
    }
    if ( a1[48] )
    {
      if ( !(_BYTE)under_debugger )
        interr(268);
      goto LABEL_33;
    }
    if ( a1[51] )
    {
      if ( !(_BYTE)under_debugger )
        interr(269);
      goto LABEL_33;
    }
  }
  result = a1[26];
  if ( result )
  {
    if ( *(_DWORD *)(result + 68) == -1 )
    {
      *(_DWORD *)(result + 68) = 0;
      a1[26] = 0;
      goto LABEL_14;
    }
    if ( !(_BYTE)under_debugger )
      interr(485);
LABEL_33:
    BUG();
  }
LABEL_14:
  a1[27] = 0;
  a1[28] = -1;
  a1[56] = 0;
  return result;
}
// 13E34C: using guessed type int under_debugger;
