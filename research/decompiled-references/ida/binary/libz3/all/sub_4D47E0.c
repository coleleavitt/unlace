__int64 __fastcall sub_4D47E0(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // rax
  _OWORD *v12; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  _OWORD *v22; // rax
  _OWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rbx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rbx
  __int64 v32; // [rsp+0h] [rbp-78h]
  __int64 v33; // [rsp+8h] [rbp-70h]
  __int64 v34; // [rsp+10h] [rbp-68h]
  _BYTE v35[88]; // [rsp+20h] [rbp-58h] BYREF

  sub_6440D0(v35, *(_QWORD *)(a1 + 48));
  v1 = (_QWORD *)sub_186B270(0x38u);
  v2 = *(__int64 **)(a1 + 48);
  v1[1] = 45000;
  v1[2] = 0;
  *v1 = &off_1C52468;
  v3 = *v2;
  v1[4] = v2;
  v1[3] = v3;
  v1[5] = 0;
  v1[6] = 0;
  sub_644270(v35, v1);
  v4 = sub_186B270(0x70u);
  sub_5D7540(v4, *(_QWORD *)(a1 + 48));
  sub_644270(v35, v4);
  v5 = sub_186B270(0x28u);
  sub_52CFE0(v5, *(_QWORD *)(a1 + 48));
  sub_644270(v35, v5);
  if ( (unsigned __int8)sub_64B1C0(*(_QWORD *)(a1 + 48)) )
  {
    v6 = sub_186B270(0xD0u);
    sub_5DF5A0(v6, *(_QWORD *)(a1 + 48));
    sub_644270(v35, v6);
  }
  if ( (unsigned __int8)sub_64B200(*(_QWORD *)(a1 + 48)) )
  {
    v7 = sub_186B270(0x60u);
    sub_5617D0(v7, *(_QWORD *)(a1 + 48));
    sub_644270(v35, v7);
  }
  v8 = (_QWORD *)sub_186B270(0x688u);
  v8[1] = 35000;
  v9 = v8;
  v10 = *(__int64 **)(a1 + 48);
  v8[2] = 0;
  v8[5] = v10;
  v8[4] = v10 + 82;
  *v8 = &off_1C527C0;
  v11 = *v10;
  v9[7] = v10 + 82;
  v9[3] = v11;
  v9[6] = v10 + 11;
  v9[8] = 0;
  v12 = (_OWORD *)sub_186B270(0x40u);
  v9[9] = v12;
  *((_DWORD *)v9 + 22) = 0;
  v9[10] = 8;
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v13 = (_OWORD *)sub_186B270(0x40u);
  v9[12] = v13;
  v9[13] = 8;
  *((_DWORD *)v9 + 28) = 0;
  *v13 = 0;
  v13[1] = 0;
  v13[2] = 0;
  v13[3] = 0;
  v14 = (_OWORD *)sub_186B270(0x40u);
  v9[15] = v14;
  v9[16] = 8;
  *((_DWORD *)v9 + 34) = 0;
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  v15 = sub_186B270(0x80u);
  *(_QWORD *)v15 = 0;
  *(_DWORD *)(v15 + 8) = 0;
  *(_QWORD *)(v15 + 16) = 0;
  *(_DWORD *)(v15 + 24) = 0;
  *(_QWORD *)(v15 + 32) = 0;
  *(_DWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 48) = 0;
  *(_DWORD *)(v15 + 56) = 0;
  *(_QWORD *)(v15 + 64) = 0;
  *(_DWORD *)(v15 + 72) = 0;
  *(_QWORD *)(v15 + 80) = 0;
  *(_DWORD *)(v15 + 88) = 0;
  *(_QWORD *)(v15 + 96) = 0;
  *(_DWORD *)(v15 + 104) = 0;
  *(_QWORD *)(v15 + 112) = 0;
  *(_DWORD *)(v15 + 120) = 0;
  v9[18] = v15;
  v9[19] = 8;
  *((_DWORD *)v9 + 40) = 0;
  v16 = sub_186B270(0x80u);
  *(_QWORD *)v16 = 0;
  *(_DWORD *)(v16 + 8) = 0;
  *(_QWORD *)(v16 + 16) = 0;
  *(_DWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 32) = 0;
  *(_DWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 48) = 0;
  *(_DWORD *)(v16 + 56) = 0;
  *(_QWORD *)(v16 + 64) = 0;
  *(_DWORD *)(v16 + 72) = 0;
  *(_QWORD *)(v16 + 80) = 0;
  *(_DWORD *)(v16 + 88) = 0;
  *(_QWORD *)(v16 + 96) = 0;
  *(_DWORD *)(v16 + 104) = 0;
  *(_QWORD *)(v16 + 112) = 0;
  *(_DWORD *)(v16 + 120) = 0;
  v9[21] = v16;
  v9[22] = 8;
  *((_DWORD *)v9 + 46) = 0;
  v17 = sub_186B270(0x80u);
  *(_QWORD *)v17 = 0;
  v18 = v9[5];
  *(_DWORD *)(v17 + 8) = 0;
  *(_QWORD *)(v17 + 16) = 0;
  *(_DWORD *)(v17 + 24) = 0;
  *(_QWORD *)(v17 + 32) = 0;
  *(_DWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 48) = 0;
  *(_DWORD *)(v17 + 56) = 0;
  *(_QWORD *)(v17 + 64) = 0;
  *(_DWORD *)(v17 + 72) = 0;
  *(_QWORD *)(v17 + 80) = 0;
  *(_DWORD *)(v17 + 88) = 0;
  *(_QWORD *)(v17 + 96) = 0;
  *(_DWORD *)(v17 + 104) = 0;
  *(_QWORD *)(v17 + 112) = 0;
  *(_DWORD *)(v17 + 120) = 0;
  v9[24] = v17;
  v9[25] = 8;
  *((_DWORD *)v9 + 52) = 0;
  v32 = (__int64)(v9 + 27);
  sub_63D370(v9 + 27, v18);
  v19 = *v10;
  v9[60] = v10 + 82;
  v9[61] = v10;
  v9[58] = 0;
  v9[59] = v19;
  sub_5C8F60(v9 + 62, v10, 40000);
  sub_FA3A80(v9 + 115, v9[59]);
  v20 = v9[59];
  *((_DWORD *)v9 + 270) = 1;
  v9[136] = 0;
  v21 = v9[3];
  v9[131] = v20;
  *((_WORD *)v9 + 556) = 256;
  *((_DWORD *)v9 + 274) = 1;
  *((_BYTE *)v9 + 1104) = 0;
  *(_OWORD *)(v9 + 133) = 0;
  v33 = (__int64)(v9 + 141);
  sub_FB83C0(v9 + 141, v21);
  v34 = (__int64)(v9 + 158);
  sub_FB83C0(v9 + 158, v9[3]);
  sub_FA3A80(v9 + 175, v9[3]);
  v9[192] = v9 + 175;
  v9[193] = v10;
  v9[194] = 0;
  v9[191] = &off_1C52798;
  v9[195] = 0;
  v9[196] = 0;
  v22 = (_OWORD *)sub_186B270(0x80u);
  v9[197] = v22;
  *v22 = 0;
  v22[1] = 0;
  v22[2] = 0;
  v22[3] = 0;
  v22[4] = 0;
  v22[5] = 0;
  v22[6] = 0;
  v22[7] = 0;
  v9[198] = 8;
  v9[201] = v9 + 175;
  *((_DWORD *)v9 + 398) = 0;
  v9[200] = &off_1C52798;
  v9[202] = v10;
  v9[203] = 0;
  v9[204] = 0;
  v9[205] = 0;
  v23 = (_OWORD *)sub_186B270(0x80u);
  v9[206] = v23;
  v9[207] = 8;
  *((_DWORD *)v9 + 416) = 0;
  *v23 = 0;
  v23[1] = 0;
  v23[2] = 0;
  v23[3] = 0;
  v23[4] = 0;
  v23[5] = 0;
  v23[6] = 0;
  v23[7] = 0;
  sub_644270(v35, v9);
  v24 = sub_186B270(0x1A8u);
  sub_5C8F60(v24, *(_QWORD *)(a1 + 48), 40000);
  sub_644270(v35, v24);
  v25 = sub_186B270(0x60u);
  sub_5EA1A0(v25, *(_QWORD *)(a1 + 48), 21000);
  sub_644270(v35, v25);
  if ( (unsigned __int8)sub_64B350(*(_QWORD *)(a1 + 48)) )
  {
    v26 = sub_186B270(0x20u);
    sub_6067F0(v26, *(_QWORD *)(a1 + 48), 22000, v27, v28, v29, v32, v33, v34);
    sub_644270(v35, v26);
    v30 = sub_186B270(0x1A8u);
    sub_5C8F60(v30, *(_QWORD *)(a1 + 48), 21000);
    sub_644270(v35, v30);
  }
  sub_64C400(*(_QWORD *)(a1 + 48), v35);
  return sub_6440F0(v35);
}

