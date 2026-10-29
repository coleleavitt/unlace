/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1AD44
// Address: 0x0001AD44

//----- (0001AD44) --------------------------------------------------------
int __fastcall sub_1AD44(int a1)
{
  int v2; // r7
  int v3; // r3
  int v4; // r5
  int v5; // r10
  int v6; // r9
  int v7; // r8
  int v8; // r7
  int v9; // r3
  void **v10; // r7
  unsigned int v11; // r11
  void *v12; // t1
  FILE *v13; // r0
  _DWORD *v14; // r1
  int v15; // r2
  int v16; // r2
  int v17; // r2
  void *v18; // r0
  int v19; // r3
  unsigned int v20; // r5
  void *v21; // r0
  void *v22; // r0
  void *v23; // r0
  _DWORD v25[4]; // [sp+Ch] [bp-28h] BYREF
  _DWORD v26[4]; // [sp+1Ch] [bp-18h] BYREF

  if ( *(_DWORD *)(a1 + 1068) != -1 )
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 80))(a1, 0);
  *(_DWORD *)(a1 + 1068) = -1;
  *(_DWORD *)(a1 + 1072) = -1;
  *(_BYTE *)(a1 + 1076) = 0;
  *(_BYTE *)(a1 + 453) = 0;
  *(_BYTE *)(a1 + 1113) = 0;
  *(_BYTE *)(a1 + 1114) = 0;
  sub_19C9C(a1 + 1000, *(_DWORD **)(a1 + 1008));
  *(_DWORD *)(a1 + 1008) = 0;
  *(_DWORD *)(a1 + 1020) = 0;
  *(_DWORD *)(a1 + 1012) = a1 + 1004;
  *(_DWORD *)(a1 + 1016) = a1 + 1004;
  sub_19C44(a1 + 976, *(_DWORD *)(a1 + 984));
  *(_DWORD *)(a1 + 984) = 0;
  *(_DWORD *)(a1 + 996) = 0;
  *(_DWORD *)(a1 + 988) = a1 + 980;
  *(_DWORD *)(a1 + 992) = a1 + 980;
  sub_19C20(a1 + 952, *(_DWORD **)(a1 + 960));
  *(_DWORD *)(a1 + 960) = 0;
  *(_DWORD *)(a1 + 972) = 0;
  v2 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 964) = a1 + 956;
  *(_DWORD *)(a1 + 968) = a1 + 956;
  v3 = *(_DWORD *)(a1 + 84);
  v4 = *(_DWORD *)(a1 + 76);
  v5 = *(_DWORD *)(a1 + 64);
  v6 = *(_DWORD *)(a1 + 68);
  v7 = *(_DWORD *)(a1 + 72);
  v26[0] = v2;
  v26[1] = v3;
  v8 = *(_DWORD *)(a1 + 88);
  v9 = *(_DWORD *)(a1 + 92);
  v25[0] = v5;
  v25[1] = v6;
  v26[2] = v8;
  v10 = (void **)(v4 + 4);
  v26[3] = v9;
  v25[2] = v7;
  v25[3] = v4;
  sub_1A7F0(a1 + 56, v25, v26);
  v11 = *(_DWORD *)(a1 + 92) + 4;
  if ( v4 + 4 < v11 )
  {
    do
    {
      v12 = *v10++;
      sub_809EC(v12);
    }
    while ( v11 > (unsigned int)v10 );
  }
  v13 = *(FILE **)(a1 + 1104);
  *(_DWORD *)(a1 + 80) = v5;
  *(_DWORD *)(a1 + 84) = v6;
  *(_DWORD *)(a1 + 88) = v7;
  *(_DWORD *)(a1 + 92) = v4;
  if ( v13 )
  {
    sub_778BC(v13);
    *(_DWORD *)(a1 + 1104) = 0;
  }
  v14 = *(_DWORD **)(a1 + 272);
  *(_BYTE *)(a1 + 900) = 0;
  sub_18CB8(a1 + 264, v14);
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_BYTE *)(a1 + 1078) = 0;
  *(_BYTE *)(a1 + 1079) = 0;
  *(_DWORD *)(a1 + 276) = a1 + 268;
  *(_DWORD *)(a1 + 280) = a1 + 268;
  sub_19CFC(a1);
  v15 = *(_DWORD *)(a1 + 864);
  if ( v15 )
    (*(void (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v15,
      a1 + 868,
      *(unsigned __int8 *)(a1 + 872));
  v16 = *(_DWORD *)(a1 + 876);
  *(_DWORD *)(a1 + 864) = 0;
  *(_BYTE *)(a1 + 872) = 0;
  if ( v16 )
    (*(void (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v16,
      a1 + 880,
      *(unsigned __int8 *)(a1 + 884));
  v17 = *(_DWORD *)(a1 + 888);
  *(_DWORD *)(a1 + 876) = 0;
  *(_BYTE *)(a1 + 884) = 0;
  if ( v17 )
    (*(void (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v17,
      a1 + 892,
      *(unsigned __int8 *)(a1 + 896));
  v18 = *(void **)(a1 + 1116);
  *(_DWORD *)(a1 + 888) = 0;
  *(_BYTE *)(a1 + 896) = 0;
  *(_DWORD *)(a1 + 1108) = 0;
  if ( v18 )
  {
    *(_DWORD *)(a1 + 1120) = 0;
    sub_77F70(v18);
    *(_DWORD *)(a1 + 1116) = 0;
    *(_DWORD *)(a1 + 1124) = 0;
  }
  v19 = *(_DWORD *)(a1 + 944);
  v20 = 0;
  *(_DWORD *)(a1 + 1132) = 0;
  *(_BYTE *)(a1 + 1077) = 0;
  if ( v19 )
  {
    do
    {
      v21 = *(void **)(*(_DWORD *)(a1 + 940) + 4 * v20++);
      sub_77F70(v21);
    }
    while ( v20 < *(_DWORD *)(a1 + 944) );
  }
  v22 = *(void **)(a1 + 928);
  if ( v22 )
  {
    *(_DWORD *)(a1 + 932) = 0;
    sub_77F70(v22);
    *(_DWORD *)(a1 + 928) = 0;
    *(_DWORD *)(a1 + 936) = 0;
  }
  v23 = *(void **)(a1 + 940);
  if ( v23 )
  {
    *(_DWORD *)(a1 + 944) = 0;
    sub_77F70(v23);
    *(_DWORD *)(a1 + 940) = 0;
    *(_DWORD *)(a1 + 948) = 0;
  }
  return sub_55394(a1);
}
