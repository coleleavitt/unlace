/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40994
// Address: 0x00040994

//----- (00040994) --------------------------------------------------------
int __fastcall sub_40994(_DWORD *a1, const char *a2)
{
  int v2; // r6
  int v3; // r7
  _DWORD *v4; // r4
  int v5; // r1
  const char *v6; // r0
  bool v7; // zf

  v2 = -1;
  if ( a2 )
  {
    v2 = a1[1];
    v3 = 4 * v2 - 4;
    while ( --v2 >= 0 )
    {
      v4 = a1;
      v5 = *(_DWORD *)(*a1 + v3);
      v6 = &byte_B3CBE;
      if ( *(_DWORD *)(v5 + 4) )
        v6 = *(const char **)v5;
      v3 -= 4;
      v7 = strcmp(v6, a2) == 0;
      a1 = v4;
      if ( v7 )
        return v2;
    }
    return -1;
  }
  return v2;
}
// B3CBE: using guessed type char byte_B3CBE;
