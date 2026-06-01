/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8077B70
// Address: 0x08077B70

//----- (08077B70) --------------------------------------------------------
int __cdecl sub_8077B70(_DWORD *a1)
{
  int v1; // eax
  int result; // eax
  int v3; // [esp-14h] [ebp-18h]
  int v4; // [esp-10h] [ebp-14h]
  int v5; // [esp-Ch] [ebp-10h]

  if ( a1[17] )
    sub_8075940(a1 + 16);
  if ( a1[20] )
    sub_8075940(a1 + 19);
  v1 = a1[27];
  if ( v1 && *(_DWORD *)(v1 + 4) )
  {
    if ( a1[23] )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(262, v3, v4, v5);
      goto LABEL_37;
    }
    if ( a1[33] )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(263, v3, v4, v5);
      goto LABEL_37;
    }
    if ( a1[36] )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(264, v3, v4, v5);
      goto LABEL_37;
    }
    if ( a1[39] )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(265, v3, v4, v5);
      goto LABEL_37;
    }
    if ( a1[42] )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(266, v3, v4, v5);
      goto LABEL_37;
    }
    if ( a1[45] )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(267, v3, v4, v5);
      goto LABEL_37;
    }
    if ( a1[48] )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(268, v3, v4, v5);
      goto LABEL_37;
    }
    if ( a1[51] )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(269, v3, v4, v5);
      goto LABEL_37;
    }
  }
  result = a1[26];
  if ( result )
  {
    if ( *(_DWORD *)(result + 68) == -1 )
    {
      *(_DWORD *)(result + 68) = 0;
      a1[26] = 0;
      goto LABEL_18;
    }
    if ( !byte_811F8A1 )
      sub_80CFF40(485, v3, v4, v5);
LABEL_37:
    JUMPOUT(0x804D988);
  }
LABEL_18:
  a1[27] = 0;
  a1[28] = -1;
  a1[56] = 0;
  return result;
}
// 8077C5B: control flows out of bounds to 804D988
// 8077C6B: variable 'v3' is possibly undefined
// 8077C6B: variable 'v4' is possibly undefined
// 8077C6B: variable 'v5' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
