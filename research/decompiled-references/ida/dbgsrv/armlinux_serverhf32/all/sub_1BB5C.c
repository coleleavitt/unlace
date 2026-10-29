/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BB5C
// Address: 0x0001BB5C

//----- (0001BB5C) --------------------------------------------------------
int __fastcall sub_1BB5C(int a1)
{
  int v2; // r10
  int v3; // r8
  int v4; // r4
  int v5; // r6
  int v6; // r7
  int v7; // r0
  int v8; // r6
  int v10; // r3
  int v11; // r3
  _DWORD *v12; // r1
  int v13; // [sp+0h] [bp-30h] BYREF
  int v14; // [sp+4h] [bp-2Ch]
  int v15; // [sp+8h] [bp-28h]
  char v16; // [sp+Ch] [bp-24h]
  int v17; // [sp+10h] [bp-20h]
  int v18; // [sp+14h] [bp-1Ch]
  int v19; // [sp+18h] [bp-18h]
  int v20; // [sp+1Ch] [bp-14h]
  int v21; // [sp+20h] [bp-10h]
  int v22; // [sp+24h] [bp-Ch]
  int v23; // [sp+28h] [bp-8h]

  v2 = a1 + 1004;
  v3 = 0;
  sub_17AF4(a1);
  sub_17A34(a1);
  v4 = *(_DWORD *)(a1 + 1012);
  while ( v2 != v4 )
  {
    v5 = *(_DWORD *)(v4 + 20);
    v6 = *(_DWORD *)(a1 + 1068);
    v7 = ptrace(PTRACE_DETACH, v5, 0);
    if ( v5 == v6 )
      v3 = 1;
    v8 = v7;
    v4 = sub_81290(v4);
    if ( v8 )
      return -1;
  }
  if ( !v3 && ptrace(PTRACE_DETACH, *(_DWORD *)(a1 + 1068), 0, 0) )
    return -1;
  v13 = -1;
  v15 = -1;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  sub_6E3C0(&v13, 12);
  v10 = *(_DWORD *)(a1 + 1068);
  v15 = -1;
  v13 = v10;
  v14 = v10;
  v16 = 1;
  if ( (v17 & 0xFFFFFFF) != 0 )
  {
    v11 = *(_DWORD *)(a1 + 80);
    if ( v11 == *(_DWORD *)(a1 + 88) - 44 )
    {
      sub_1BA70((_DWORD *)(a1 + 56), (int)&v13);
    }
    else
    {
      *(_DWORD *)v11 = -1;
      *(_DWORD *)(v11 + 8) = -1;
      *(_DWORD *)(v11 + 4) = 0;
      *(_BYTE *)(v11 + 12) = 0;
      *(_DWORD *)(v11 + 16) = 0;
      sub_6E4A8(v11, (int)&v13);
      *(_DWORD *)(a1 + 80) += 44;
    }
    *(_BYTE *)(a1 + 1112) = 0;
  }
  v12 = *(_DWORD **)(a1 + 1008);
  *(_BYTE *)(a1 + 1114) = 0;
  *(_BYTE *)(a1 + 1077) = 1;
  sub_19AF8(a1 + 1000, v12);
  *(_DWORD *)(a1 + 1008) = 0;
  *(_DWORD *)(a1 + 1020) = 0;
  *(_BYTE *)(a1 + 1076) = 0;
  *(_DWORD *)(a1 + 1012) = v4;
  *(_DWORD *)(a1 + 1016) = v4;
  *(_DWORD *)(a1 + 1068) = -1;
  sub_6E318(&v13);
  return 1;
}
