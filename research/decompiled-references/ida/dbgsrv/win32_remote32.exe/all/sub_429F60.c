/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429F60
// Address: 0x00429F60

//----- (00429F60) --------------------------------------------------------
int __stdcall sub_429F60(int a1)
{
  const char *v1; // eax
  const char *v2; // eax
  const char *v4; // eax

  v1 = MultiByteStr;
  if ( *(_DWORD *)(a1 + 20) )
    v1 = *(const char **)(a1 + 16);
  if ( sub_4278D0(v1) )
  {
    v2 = MultiByteStr;
    if ( *(_DWORD *)(a1 + 20) )
      v2 = *(const char **)(a1 + 16);
    sub_45CB10(0, v2);
    return sub_45CC20(52);
  }
  else
  {
    v4 = MultiByteStr;
    if ( ((*(_DWORD *)(a1 + 20) - 1) & (unsigned int)-(*(_DWORD *)(a1 + 20) != 0)) < 0x80 )
    {
      if ( *(_DWORD *)(a1 + 20) )
        v4 = *(const char **)(a1 + 16);
      return sub_42DDA0(a1, v4);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 20) )
        v4 = *(const char **)(a1 + 16);
      sub_45CB10(0, v4);
      return sub_45CC20(28);
    }
  }
}
