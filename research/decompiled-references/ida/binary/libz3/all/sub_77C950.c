__int64 __fastcall sub_77C950(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  void *v26; // [rsp+0h] [rbp-80h]
  void *v27; // [rsp+8h] [rbp-78h]
  __int64 v28; // [rsp+10h] [rbp-70h]
  int v29; // [rsp+10h] [rbp-70h]
  int v30; // [rsp+10h] [rbp-70h]
  int v31; // [rsp+18h] [rbp-68h]
  int v32; // [rsp+18h] [rbp-68h]
  int v33; // [rsp+20h] [rbp-60h]
  int v34; // [rsp+20h] [rbp-60h]
  int v35; // [rsp+28h] [rbp-58h]
  int v36; // [rsp+28h] [rbp-58h]
  __int64 v37; // [rsp+30h] [rbp-50h]
  __int64 v38; // [rsp+30h] [rbp-50h]
  int v39; // [rsp+38h] [rbp-48h]
  __int64 v40; // [rsp+38h] [rbp-48h]
  _BYTE v41[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v42[56]; // [rsp+48h] [rbp-38h] BYREF

  sub_1858590(v41, a2);
  sub_1862300(v41, "elim_and", 1);
  sub_1862300(v41, "blast_distinct", 1);
  sub_1858590(v42, a2);
  sub_1862300(v42, "complete", 0);
  if ( (unsigned __int8)sub_1859610(a2, "factor", 1) )
    v6 = sub_C63D40(a1, a2, v2, v3, v4, v5, (__int64)v26, v27, v28);
  else
    v6 = sub_EE4CD0();
  v39 = v6;
  v37 = sub_77FD80(a1, a2);
  v7 = sub_D156B0(a1, a2);
  v35 = sub_EE8E00(v7, v41);
  v33 = sub_D16060(a1, a2);
  v8 = sub_D156B0(a1, a2);
  v31 = sub_EE8E00(v8, v41);
  v9 = sub_C28360(a1, a2);
  v29 = sub_EE8E00(v9, v42);
  v10 = sub_186B270(0x160u);
  *(_QWORD *)v10 = qword_1C636A0;
  *(_QWORD *)(v10 + 16) = qword_1C63778;
  *(_DWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 24) = 0;
  *(_BYTE *)(v10 + 28) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  *(_DWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = &off_1C62200;
  *(_QWORD *)(v10 + 64) = 0;
  *(_QWORD *)(v10 + 72) = 0;
  *(_QWORD *)(v10 + 88) = 0;
  *(_QWORD *)(v10 + 96) = 0;
  *(_QWORD *)(v10 + 104) = a1;
  *(_QWORD *)(v10 + 112) = 0;
  *(_QWORD *)(v10 + 120) = 0;
  *(_QWORD *)(v10 + 128) = 0;
  sub_180C0A0(v10 + 136);
  *(_QWORD *)(v10 + 176) = a1;
  *(_QWORD *)v10 = &off_1C4C5D8;
  *(_QWORD *)(v10 + 16) = &off_1C4C6F0;
  sub_1858590(v10 + 184, a2);
  *(_OWORD *)(v10 + 192) = 0;
  sub_180C0A0(v10 + 208);
  v11 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v10 + 248) = 0;
  *(_QWORD *)(v10 + 256) = a1;
  *(_QWORD *)(v10 + 264) = v11;
  *(_QWORD *)(v10 + 272) = 0;
  *(_QWORD *)(v10 + 280) = 0;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  *(_QWORD *)(v10 + 312) = a1;
  *(_QWORD *)(v10 + 304) = sub_230350;
  *(_QWORD *)(v10 + 320) = 0;
  *(_QWORD *)(v10 + 328) = 0;
  *(_QWORD *)(v10 + 336) = 0;
  *(_BYTE *)(v10 + 344) = 0;
  *(_OWORD *)(v10 + 288) = 0;
  v40 = sub_EE7EC0(v39, v10, v29, v31, v33, v35, v37);
  v12 = sub_C28360(a1, a2);
  v38 = sub_EE8E00(v12, v42);
  v36 = sub_D47320(a1, a2, v13, v14, v15, v16, v26);
  v34 = sub_CF8250(a1, a2);
  v17 = sub_186B270(0x160u);
  *(_QWORD *)v17 = qword_1C636A0;
  *(_QWORD *)(v17 + 16) = qword_1C63778;
  *(_DWORD *)(v17 + 8) = 0;
  *(_DWORD *)(v17 + 24) = 0;
  *(_BYTE *)(v17 + 28) = 0;
  *(_QWORD *)(v17 + 32) = 0;
  *(_DWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 48) = &off_1C62200;
  *(_QWORD *)(v17 + 64) = 0;
  *(_QWORD *)(v17 + 72) = 0;
  *(_QWORD *)(v17 + 88) = 0;
  *(_QWORD *)(v17 + 96) = 0;
  *(_QWORD *)(v17 + 104) = a1;
  *(_QWORD *)(v17 + 112) = 0;
  *(_QWORD *)(v17 + 120) = 0;
  *(_QWORD *)(v17 + 128) = 0;
  sub_180C0A0(v17 + 136);
  *(_QWORD *)(v17 + 176) = a1;
  *(_QWORD *)v17 = &off_1C4C5D8;
  *(_QWORD *)(v17 + 16) = &off_1C4C6F0;
  sub_1858590(v17 + 184, a2);
  *(_OWORD *)(v17 + 192) = 0;
  sub_180C0A0(v17 + 208);
  v18 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v17 + 248) = 0;
  *(_QWORD *)(v17 + 256) = a1;
  *(_QWORD *)(v17 + 264) = v18;
  *(_QWORD *)(v17 + 272) = 0;
  *(_QWORD *)(v17 + 280) = 0;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  *(_QWORD *)(v17 + 312) = a1;
  *(_QWORD *)(v17 + 304) = sub_230350;
  *(_QWORD *)(v17 + 320) = 0;
  *(_QWORD *)(v17 + 328) = 0;
  *(_QWORD *)(v17 + 336) = 0;
  *(_BYTE *)(v17 + 344) = 0;
  *(_OWORD *)(v17 + 288) = 0;
  v32 = sub_CF56E0(a1, a2);
  v19 = sub_C28360(a1, a2);
  v30 = sub_EE8E00(v19, v42);
  v20 = sub_D156B0(a1, a2);
  v21 = sub_EE8E00(v20, v41);
  v22 = sub_EE7EC0(v21, v30, v32, v17, v34, v36, v38);
  v23 = sub_EE4E50("(qfnra-nlsat-tactic)", 10);
  v24 = sub_EE7AC0(v23, v22, v40);
  sub_18572D0(v42);
  sub_18572D0(v41);
  return v24;
}

