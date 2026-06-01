__int64 __fastcall sub_ADD30(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // r10
  __int64 v13; // rbx
  unsigned __int64 v14; // r12
  int v15; // eax
  unsigned int *v16; // rbx
  unsigned int *v17; // rcx
  unsigned __int64 v18; // r8
  unsigned int v19; // esi
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r10
  unsigned int v23; // eax
  int v24; // eax
  unsigned __int64 v26; // [rsp+8h] [rbp-120h]
  unsigned __int64 v27; // [rsp+10h] [rbp-118h]
  unsigned __int64 v28; // [rsp+18h] [rbp-110h]
  unsigned int v29; // [rsp+24h] [rbp-104h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-100h] BYREF
  unsigned int v31; // [rsp+2Ch] [rbp-FCh] BYREF
  _WORD v32[32]; // [rsp+30h] [rbp-F8h] BYREF
  _WORD v33[60]; // [rsp+70h] [rbp-B8h] BYREF
  unsigned __int64 v34; // [rsp+E8h] [rbp-40h]

  v6 = a3 + 8;
  v34 = __readfsqword(0x28u);
  v29 = 31;
  a1[514] = 1;
  v30 = 255;
  v31 = 1;
  v7 = sub_11C1C0(a1, &v30, a3 + 8, a4 - 8, &v31);
  if ( !v31 && v30 == 255 )
    a1[514] = 2;
  if ( v7 > 0xFFFFFFFFFFFFFF88LL )
    return -30;
  v8 = v7 + v6;
  v26 = a3 + a4;
  v27 = sub_115080(v32, &v29, &v31, v8, a3 + a4 - v8);
  if ( v27 > 0xFFFFFFFFFFFFFF88LL )
    return -30;
  if ( v31 > 8 )
    return -30;
  if ( (unsigned __int64)sub_1187C0(a1 + 516, v32, 31, v31, a2, 8704) > 0xFFFFFFFFFFFFFF88LL )
    return -30;
  v30 = 52;
  v9 = v27 + v8;
  v10 = sub_115080(v33, &v30, &v31, v9, v26 - v9);
  if ( v10 > 0xFFFFFFFFFFFFFF88LL )
    return -30;
  v28 = v10;
  if ( v31 > 9 || (unsigned __int64)sub_1187C0(a1 + 709, v33, v30, v31, a2, 8704) > 0xFFFFFFFFFFFFFF88LL )
    return -30;
  v11 = 1;
  v12 = v28;
  if ( v30 > 0x33 )
  {
    v11 = sub_A86B0(v33, 52);
    v12 = v28;
  }
  v13 = v12 + v9;
  a1[1402] = v11;
  v30 = 35;
  v14 = sub_115080(v33, &v30, &v31, v13, v26 - v13);
  if ( v14 > 0xFFFFFFFFFFFFFF88LL
    || v31 > 9
    || (unsigned __int64)sub_1187C0(a1 + 1072, v33, v30, v31, a2, 8704) > 0xFFFFFFFFFFFFFF88LL )
  {
    return -30;
  }
  v15 = 1;
  if ( v30 > 0x22 )
    v15 = sub_A86B0(v33, 35);
  v16 = (unsigned int *)(v14 + v13);
  a1[1403] = v15;
  v17 = v16 + 3;
  if ( (unsigned __int64)(v16 + 3) > v26 )
    return -30;
  v18 = *v16;
  v19 = 31;
  a1[1404] = v18;
  v20 = v16[1];
  v21 = v26 - (_QWORD)v17;
  a1[1405] = v20;
  v22 = v16[2];
  a1[1406] = v22;
  if ( v26 - (unsigned __int64)v17 <= 0xFFFDFFFF )
  {
    _BitScanReverse(&v23, (unsigned int)&loc_20000 + v21);
    v19 = 31 - (v23 ^ 0x1F);
  }
  v24 = 1;
  if ( v29 >= v19 )
    v24 = sub_A86B0(v32, v19);
  a1[1401] = v24;
  if ( (_DWORD)v18 && v21 >= v18 && (_DWORD)v20 && v21 >= v20 && (_DWORD)v22 && v22 <= v21 )
    return (__int64)v17 - a3;
  else
    return -30;
}

