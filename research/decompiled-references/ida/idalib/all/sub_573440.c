__int64 __fastcall sub_573440(_QWORD *a1, __int64 a2, char *a3, char a4)
{
  __int16 v6; // ax
  unsigned __int64 *v7; // r14
  __int64 segm_para; // rdx
  __int64 v9; // rax
  unsigned int v10; // r15d
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int8 v15; // [rsp+8h] [rbp-40h]

  if ( a3 == (char *)-1LL )
    return 0;
  if ( *(char **)(a2 + 16) == a3 )
  {
    v6 = *(_WORD *)(a2 + 34);
    if ( (v6 & 1) == 0 || (a4 & 1) == 0 || (v6 & 2) != 0 )
      return *(unsigned __int16 *)(a2 + 26);
  }
  v7 = sub_505D70((__int64)(a1 + 203), (unsigned __int64)a3);
  if ( !v7 )
    return 0;
  if ( (get_aflags(a3) & 0x10000000) != 0 )
  {
    if ( (unsigned int)sub_3A1820((__int64)a1) )
      return 0;
    clr_abits(a3, 0x10000000);
  }
  segm_para = get_segm_para(v7);
  v9 = *(_QWORD *)(a1[3] + 16LL) & (16 * segm_para);
  *(_QWORD *)(a2 + 352) = 0;
  memset(
    (void *)((a2 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a2 - (((_DWORD)a2 + 8) & 0xFFFFFFF8) + 360) >> 3));
  *(_QWORD *)(a2 + 16) = a3;
  *(_QWORD *)a2 = segm_para;
  *(_QWORD *)(a2 + 8) = &a3[-v9];
  *(_BYTE *)(a2 + 44) = 8;
  *(_BYTE *)(a2 + 84) = 8;
  *(_BYTE *)(a2 + 124) = 8;
  *(_BYTE *)(a2 + 164) = 8;
  *(_BYTE *)(a2 + 204) = 8;
  *(_BYTE *)(a2 + 244) = 8;
  *(_BYTE *)(a2 + 284) = 8;
  *(_BYTE *)(a2 + 324) = 8;
  *(_BYTE *)(a2 + 80) = 1;
  *(_BYTE *)(a2 + 120) = 2;
  *(_BYTE *)(a2 + 160) = 3;
  *(_BYTE *)(a2 + 200) = 4;
  *(_BYTE *)(a2 + 240) = 5;
  *(_BYTE *)(a2 + 280) = 6;
  *(_BYTE *)(a2 + 320) = 7;
  if ( (a4 & 1) != 0 )
    *(_WORD *)(a2 + 34) = 2;
  if ( *((_BYTE *)v7 + 43) == 2 )
    *(_WORD *)(a2 + 34) |= 4u;
  v15 = sub_631AD0(*a1, 9);
  v10 = v15;
  if ( v15 && (unsigned __int8)is_spec_segm(*((unsigned __int8 *)v7 + 184)) )
  {
    v14 = *(_DWORD *)(a1[2] + 132LL);
    *(_WORD *)(a2 + 26) = v15;
    *(_WORD *)(a2 + 24) = v14;
    return v10;
  }
  if ( !(unsigned __int8)sub_3C0260(a1, (unsigned __int64)a3) )
    goto LABEL_17;
  *(_QWORD *)(a2 + 16) = a3;
  v12 = sub_3792E0(0xAu, a2);
  *(_BYTE *)(a2 + 40) = 0;
  *(_BYTE *)(a2 + 80) = 1;
  v10 = v12;
  *(_BYTE *)(a2 + 120) = 2;
  *(_BYTE *)(a2 + 160) = 3;
  *(_BYTE *)(a2 + 200) = 4;
  *(_BYTE *)(a2 + 240) = 5;
  *(_BYTE *)(a2 + 280) = 6;
  *(_BYTE *)(a2 + 320) = 7;
  if ( v12 <= 0 )
  {
    if ( v12 )
      return v10;
    goto LABEL_17;
  }
  v13 = 0x100000000LL;
  if ( *(_DWORD *)(a1[3] + 24LL) == 8 )
    v13 = -1;
  if ( v13 - (__int64)a3 < (unsigned __int64)v12 || (a4 & 2) == 0 && v7[1] < (unsigned __int64)&a3[v12] )
  {
LABEL_17:
    *(_DWORD *)(a2 + 24) = 0;
    return 0;
  }
  return v10;
}
