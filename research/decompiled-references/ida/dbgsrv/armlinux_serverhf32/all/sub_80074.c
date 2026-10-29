/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80074
// Address: 0x00080074

//----- (00080074) --------------------------------------------------------
char *__fastcall sub_80074(int RegionStart, unsigned __int8 *a2, int a3)
{
  char *v5; // r4
  int v6; // r6
  char *v7; // r0
  int v8; // r3
  char *v9; // r0
  int v10; // r4
  int v11; // r2
  char v12; // t1
  int v13; // r3
  char v14; // r3
  int v15; // r4
  char *result; // r0
  int v17; // r2
  char v18; // t1
  int v19; // r3

  if ( RegionStart )
    RegionStart = Unwind_GetRegionStart();
  *(_DWORD *)a3 = RegionStart;
  v5 = (char *)(a2 + 1);
  v6 = *a2;
  if ( v6 == 255 )
  {
    *(_DWORD *)(a3 + 4) = RegionStart;
  }
  else
  {
    v7 = (char *)sub_8003C(v6);
    v5 = (char *)sub_7FF78(v6, v7, v5, (unsigned int *)(a3 + 4));
  }
  v8 = (unsigned __int8)*v5;
  v9 = v5 + 1;
  *(_BYTE *)(a3 + 20) = v8;
  if ( v8 == 255 )
  {
    *(_DWORD *)(a3 + 12) = 0;
  }
  else
  {
    v10 = 0;
    v11 = 0;
    *(_BYTE *)(a3 + 20) = -112;
    do
    {
      v12 = *v9++;
      v13 = (v12 & 0x7F) << v11;
      v11 += 7;
      v10 |= v13;
    }
    while ( v12 < 0 );
    *(_DWORD *)(a3 + 12) = &v9[v10];
  }
  v14 = *v9;
  v15 = 0;
  result = v9 + 1;
  v17 = 0;
  *(_BYTE *)(a3 + 21) = v14;
  do
  {
    v18 = *result++;
    v19 = (v18 & 0x7F) << v17;
    v17 += 7;
    v15 |= v19;
  }
  while ( v18 < 0 );
  *(_DWORD *)(a3 + 16) = &result[v15];
  return result;
}
// 13D30: using guessed type int Unwind_GetRegionStart(void);
