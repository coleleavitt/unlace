/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_856EC
// Address: 0x000856EC

//----- (000856EC) --------------------------------------------------------
int __fastcall sub_856EC(_DWORD *a1, unsigned int a2, int a3, int a4, int a5, unsigned int a6, _BYTE *a7, int a8)
{
  int result; // r0
  void *(__fastcall *v10)(int, int, int); // r5
  int v11; // r1
  int v12; // r6
  int v13; // r5
  int v14; // r1
  int v15; // r0
  int v16; // r1
  int v17; // [sp+Ch] [bp-10h]
  unsigned int v18; // [sp+14h] [bp-8h]

  result = -6;
  if ( !a7 || a8 != 56 || *a7 != 49 )
    return result;
  if ( !a1 )
    return -2;
  a1[6] = 0;
  v10 = (void *(__fastcall *)(int, int, int))a1[8];
  if ( !v10 )
  {
    a1[10] = 0;
    v10 = sub_8EA1C;
    a1[8] = sub_8EA1C;
  }
  if ( !a1[9] )
    a1[9] = sub_8EA28;
  v18 = 6;
  if ( a2 != -1 )
    v18 = a2;
  if ( a4 >= 0 )
  {
    v11 = 2;
    if ( a4 <= 15 )
      v11 = 1;
    v17 = v11;
    v12 = a4 - 16;
    if ( a4 <= 15 )
      v12 = a4;
    goto LABEL_19;
  }
  if ( a4 < -15 )
    return -2;
  v12 = -a4;
  v17 = 0;
LABEL_19:
  if ( a6 > 4 || v18 > 9 || a3 != 8 || (unsigned int)(a5 - 1) > 8 || (v12 & 0xFFFFFFF8) != 8 || v12 == 8 && v17 != 1 )
    return -2;
  v13 = (int)v10(a1[10], 1, 5828);
  v14 = 9;
  if ( v12 != 8 )
    v14 = v12;
  result = -4;
  if ( v13 )
  {
    a1[7] = v13;
    *(_DWORD *)v13 = a1;
    *(_DWORD *)(v13 + 4) = 42;
    *(_DWORD *)(v13 + 24) = v17;
    *(_DWORD *)(v13 + 28) = 0;
    *(_DWORD *)(v13 + 44) = 1 << v14;
    *(_DWORD *)(v13 + 48) = v14;
    *(_DWORD *)(v13 + 52) = (1 << v14) - 1;
    *(_DWORD *)(v13 + 76) = 1 << (a5 + 7);
    *(_DWORD *)(v13 + 80) = a5 + 7;
    *(_DWORD *)(v13 + 84) = (1 << (a5 + 7)) - 1;
    *(_DWORD *)(v13 + 88) = (unsigned __int8)(a5 + 9) / 3u;
    *(_DWORD *)(v13 + 56) = ((int (__fastcall *)(_DWORD, int))a1[8])(a1[10], 1 << v14);
    *(_DWORD *)(v13 + 64) = ((int (__fastcall *)(_DWORD, _DWORD, int))a1[8])(a1[10], *(_DWORD *)(v13 + 44), 2);
    *(_DWORD *)(v13 + 68) = ((int (__fastcall *)(_DWORD, _DWORD, int))a1[8])(a1[10], *(_DWORD *)(v13 + 76), 2);
    *(_DWORD *)(v13 + 5788) = 1 << (a5 + 6);
    *(_DWORD *)(v13 + 5824) = 0;
    v15 = ((int (__fastcall *)(_DWORD, int, int))a1[8])(a1[10], 1 << (a5 + 6), 4);
    *(_DWORD *)(v13 + 8) = v15;
    v16 = *(_DWORD *)(v13 + 5788);
    *(_DWORD *)(v13 + 12) = 4 * v16;
    if ( *(_DWORD *)(v13 + 56) && *(_DWORD *)(v13 + 64) && v15 && *(_DWORD *)(v13 + 68) )
    {
      *(_DWORD *)(v13 + 5784) = v15 + v16;
      *(_DWORD *)(v13 + 5796) = 3 * v16 - 3;
      *(_DWORD *)(v13 + 136) = a6;
      *(_DWORD *)(v13 + 132) = v18;
      *(_BYTE *)(v13 + 36) = 8;
      return sub_859D0(a1);
    }
    else
    {
      *(_DWORD *)(v13 + 4) = 666;
      a1[6] = "insufficient memory";
      sub_858EC(a1);
      return -4;
    }
  }
  return result;
}
