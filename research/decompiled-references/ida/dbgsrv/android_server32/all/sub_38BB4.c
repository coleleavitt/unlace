/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38BB4
// Address: 0x00038BB4

//----- (00038BB4) --------------------------------------------------------
int __fastcall sub_38BB4(int *a1, const char *a2)
{
  unsigned int v2; // r6
  int v3; // r7
  int v4; // r4
  const char *v5; // r0

  v2 = a1[1];
  v3 = -1;
  if ( v2 )
  {
    v4 = *a1;
    v3 = 0;
    while ( 1 )
    {
      v5 = &byte_B3CBE;
      if ( *(_DWORD *)(v4 + 4) )
        v5 = *(const char **)v4;
      if ( !strcmp(v5, a2) )
        break;
      v4 += 12;
      if ( ++v3 >= v2 )
        return -1;
    }
  }
  return v3;
}
// B3CBE: using guessed type char byte_B3CBE;
