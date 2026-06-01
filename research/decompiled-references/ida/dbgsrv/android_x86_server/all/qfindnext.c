/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindnext
// Address: 0x000ADF50

//----- (000ADF50) --------------------------------------------------------
int __cdecl qfindnext(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax

  while ( 1 )
  {
    v1 = a1[2056];
    if ( v1 >= a1[2057] )
      break;
    a1[2056] = v1 + 1;
    if ( !sub_ADE00((int)(a1 + 1028), nullptr, (char *)(*(_DWORD *)(a1[2055] + 4 * v1) + 19)) )
    {
      *a1 = a1[1028];
      qustrncpy((unsigned int)(a1 + 1), (int)(a1 + 1029), 4096);
      v2 = a1[2053];
      a1[1027] = a1[2054];
      a1[1025] = v2;
      a1[1026] = 0;
      return 0;
    }
  }
  return -1;
}
