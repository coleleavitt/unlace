__int64 __fastcall sub_559920(_QWORD *a1, __int64 a2, unsigned int a3, char a4)
{
  __int16 v6; // ax
  unsigned int *v7; // r14
  int segm_para; // eax
  unsigned int v9; // r15d
  int v11; // eax
  int v12; // eax
  unsigned __int8 v13; // [rsp+8h] [rbp-40h]

  if ( a3 == -1 )
    return 0;
  if ( *(_DWORD *)(a2 + 8) == a3 )
  {
    v6 = *(_WORD *)(a2 + 22);
    if ( (v6 & 1) == 0 || (a4 & 1) == 0 || (v6 & 2) != 0 )
      return *(unsigned __int16 *)(a2 + 14);
  }
  v7 = sub_4EE820((__int64)(a1 + 194), a3);
  if ( !v7 )
    return 0;
  if ( (get_aflags(a3) & 0x10000000) != 0 )
  {
    if ( (unsigned int)sub_39CC50((__int64)a1) )
      return 0;
    clr_abits(a3, 0x10000000);
  }
  segm_para = get_segm_para(v7);
  *(_QWORD *)(a2 + 12) = 0;
  *(_QWORD *)(a2 + 208) = 0;
  memset(
    (void *)((a2 + 20) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a2 - (((_DWORD)a2 + 20) & 0xFFFFFFF8) + 216) >> 3));
  *(_DWORD *)a2 = segm_para;
  *(_DWORD *)(a2 + 8) = a3;
  *(_DWORD *)(a2 + 4) = a3 - 16 * segm_para;
  *(_BYTE *)(a2 + 28) = 8;
  *(_BYTE *)(a2 + 52) = 8;
  *(_BYTE *)(a2 + 76) = 8;
  *(_BYTE *)(a2 + 100) = 8;
  *(_BYTE *)(a2 + 124) = 8;
  *(_BYTE *)(a2 + 148) = 8;
  *(_BYTE *)(a2 + 172) = 8;
  *(_BYTE *)(a2 + 196) = 8;
  *(_BYTE *)(a2 + 48) = 1;
  *(_BYTE *)(a2 + 72) = 2;
  *(_BYTE *)(a2 + 96) = 3;
  *(_BYTE *)(a2 + 120) = 4;
  *(_BYTE *)(a2 + 144) = 5;
  *(_BYTE *)(a2 + 168) = 6;
  *(_BYTE *)(a2 + 192) = 7;
  if ( (a4 & 1) != 0 )
    *(_WORD *)(a2 + 22) = 2;
  if ( *((_BYTE *)v7 + 23) == 2 )
    *(_WORD *)(a2 + 22) |= 4u;
  v13 = sub_614FB0(*a1, 9);
  v9 = v13;
  if ( v13 && (unsigned __int8)is_spec_segm(*((unsigned __int8 *)v7 + 96)) )
  {
    v12 = *(_DWORD *)(a1[2] + 132LL);
    *(_WORD *)(a2 + 14) = v13;
    *(_WORD *)(a2 + 12) = v12;
    return v9;
  }
  if ( !(unsigned __int8)sub_3BB2F0((__int64)a1, a3) )
    goto LABEL_17;
  *(_DWORD *)(a2 + 8) = a3;
  v11 = sub_375980(0xAu, a2);
  *(_BYTE *)(a2 + 24) = 0;
  *(_BYTE *)(a2 + 48) = 1;
  v9 = v11;
  *(_BYTE *)(a2 + 72) = 2;
  *(_BYTE *)(a2 + 96) = 3;
  *(_BYTE *)(a2 + 120) = 4;
  *(_BYTE *)(a2 + 144) = 5;
  *(_BYTE *)(a2 + 168) = 6;
  *(_BYTE *)(a2 + 192) = 7;
  if ( v11 <= 0 )
  {
    if ( v11 )
      return v9;
    goto LABEL_17;
  }
  if ( __CFADD__(v11, a3) || (a4 & 2) == 0 && v7[1] < v11 + a3 )
  {
LABEL_17:
    *(_DWORD *)(a2 + 12) = 0;
    return 0;
  }
  return v9;
}

