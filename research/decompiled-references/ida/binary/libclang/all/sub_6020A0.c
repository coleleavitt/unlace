__int64 __fastcall sub_6020A0(__int64 a1)
{
  unsigned int *v1; // rbx
  unsigned int *v2; // rbp

  v1 = *(unsigned int **)(a1 + 904);
  v2 = &v1[26 * *(unsigned int *)(a1 + 912)];
  if ( v2 == v1 )
    return 0;
  while ( (int)v1[1] <= 3 || (unsigned int)sub_C73000(*v1) != 14 )
  {
    v1 += 26;
    if ( v1 == v2 )
      return 0;
  }
  return 1;
}

