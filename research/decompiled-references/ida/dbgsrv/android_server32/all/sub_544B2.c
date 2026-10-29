/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_544B2
// Address: 0x000544B2

//----- (000544B2) --------------------------------------------------------
int __fastcall sub_544B2(int result, int a2)
{
  unsigned int v2; // r5
  unsigned int v3; // r3
  unsigned int v4; // r6
  unsigned int v5; // r4
  int v6; // r1

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 12);
  v4 = *(_DWORD *)(result + 8);
  v5 = *(_DWORD *)(result + 12);
  if ( !*(_BYTE *)result && !*(_BYTE *)a2 )
  {
    v6 = 1;
    if ( __SPAIR64__(v3, v2) < __SPAIR64__(v5, v4) )
      goto LABEL_5;
    goto LABEL_4;
  }
  v6 = 1;
  if ( __PAIR64__(v3, v2) >= __PAIR64__(v5, v4) )
LABEL_4:
    v6 = 0;
LABEL_5:
  *(_DWORD *)(result + 8) = v6;
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)result = 0;
  return result;
}
