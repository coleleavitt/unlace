/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindnext
// Address: 0x0007CE80

//----- (0007CE80) --------------------------------------------------------
int __fastcall qfindnext(_DWORD *a1)
{
  _DWORD *v1; // r6
  int *v2; // r7
  int *v3; // r4
  _DWORD *v4; // r5
  int result; // r0
  int v6; // r1

  v1 = a1 + 2056;
  v2 = a1 + 2058;
  v3 = a1 + 2057;
  v4 = a1 + 1029;
  while ( 1 )
  {
    result = -1;
    v6 = *v3;
    if ( *v3 >= *v2 )
      break;
    *v3 = v6 + 1;
    if ( !sub_7CD80((int)v4, nullptr, (const char *)(*(_DWORD *)(*v1 + 4 * v6) + 19)) )
    {
      *a1 = *v4;
      qustrncpy((unsigned int)(a1 + 1), (int)(a1 + 1030), 4096);
      a1[1027] = 0;
      a1[1026] = a1[2054];
      a1[1028] = a1[2055];
      return 0;
    }
  }
  return result;
}
