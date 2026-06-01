/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A5E0
// Address: 0x0042A5E0

//----- (0042A5E0) --------------------------------------------------------
int __stdcall sub_42A5E0(_DWORD *a1)
{
  int v1; // esi
  int v2; // ecx
  unsigned int v3; // eax
  int v4; // ecx
  _BYTE *v5; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // [esp-4h] [ebp-38h]
  char v11[8]; // [esp+Ch] [ebp-28h] BYREF
  __int128 v12; // [esp+14h] [ebp-20h]
  int v13; // [esp+24h] [ebp-10h]
  int v14; // [esp+30h] [ebp-4h]

  v13 = 0;
  v1 = a1[25] + 32;
  v2 = *(_DWORD *)(a1[25] + 36);
  if ( v2 )
  {
    if ( v2 + a1[59] + 1 != a1[19] )
      return sub_45CC20(1268);
  }
  else
  {
    a1[59] = a1[19] - 1;
  }
  v3 = *(_DWORD *)(v1 + 4) + 1;
  if ( v3 > *(_DWORD *)(v1 + 8) )
    *(_DWORD *)v1 = sub_453B00(v1, *(void **)v1, v3, 0x18u);
  v4 = 3 * *(_DWORD *)(v1 + 4);
  v5 = *(_BYTE **)v1;
  v5[8 * v4] = 2;
  *(_OWORD *)&v5[8 * v4 + 8] = 0;
  ++*(_DWORD *)(v1 + 4);
  if ( a1[57] != 1 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1437);
  }
  sub_425AF0((__int128 *)&v5[8 * v4], (__int128 *)(a1[56] + 24 * a1[57] - 24));
  v7 = a1[57];
  v14 = 1;
  v11[0] = 2;
  v12 = 0;
  sub_423670(v11, (char *)(a1[56] + 24 * v7 - 24));
  v8 = a1[57];
  v13 = 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    a1[57] = v9;
    v10 = a1[56] + 24 * v9;
    LOBYTE(v14) = 2;
    sub_423B70(v10);
  }
  v14 = 3;
  sub_423B70((int)v11);
  return 0;
}
// 4B70F0: using guessed type char byte_4B70F0;
