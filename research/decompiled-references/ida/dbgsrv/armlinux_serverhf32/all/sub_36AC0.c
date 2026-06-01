/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36AC0
// Address: 0x00036AC0

//----- (00036AC0) --------------------------------------------------------
int __fastcall sub_36AC0(_DWORD *a1, int a2)
{
  unsigned int v3; // r5
  _BYTE *v5; // r4
  _BYTE *v6; // r5

  v3 = a1[3];
  if ( v3 > 1 )
  {
    v5 = (_BYTE *)a1[2];
    v6 = &v5[v3 - 1];
    do
    {
      *v5 = tolower((unsigned __int8)*v5);
      ++v5;
    }
    while ( v5 != v6 );
  }
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = a1[2];
  *(_DWORD *)(a2 + 12) = a1[3];
  *(_DWORD *)(a2 + 16) = a1[4];
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  return 0;
}
