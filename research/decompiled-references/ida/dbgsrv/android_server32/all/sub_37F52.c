/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37F52
// Address: 0x00037F52

//----- (00037F52) --------------------------------------------------------
int __fastcall sub_37F52(_DWORD *a1, int a2)
{
  unsigned int v3; // r0
  unsigned int v4; // r6
  int v5; // r7
  unsigned int v6; // r5

  v3 = a1[3];
  v4 = v3 - 1;
  if ( v3 >= 2 )
  {
    v5 = a1[2];
    v6 = 0;
    do
    {
      *(_BYTE *)(v5 + v6) = toupper(*(unsigned __int8 *)(v5 + v6));
      ++v6;
    }
    while ( v6 < v4 );
  }
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 8) = a1[2];
  *(_DWORD *)(a2 + 12) = a1[3];
  *(_DWORD *)(a2 + 16) = a1[4];
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  return 0;
}
