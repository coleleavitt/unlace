/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450C0
// Address: 0x000450C0

//----- (000450C0) --------------------------------------------------------
int __cdecl sub_450C0(_DWORD *a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // edi
  unsigned int v6; // [esp+4h] [ebp-18h]
  int v7; // [esp+8h] [ebp-14h]

  v2 = a1[2];
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v7 = a1[1];
      v4 = 0;
      v6 = v3;
      do
      {
        *(_BYTE *)(v7 + v4) = tolower(*(unsigned __int8 *)(v7 + v4));
        ++v4;
      }
      while ( v4 < v6 );
    }
  }
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 4) = a1[1];
  *(_DWORD *)(a2 + 8) = a1[2];
  *(_DWORD *)(a2 + 12) = a1[3];
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return 0;
}
