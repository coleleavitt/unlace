__int64 __fastcall sub_383BE0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // eax
  int v6; // r12d
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbx
  int v11; // [rsp+8h] [rbp-B8h]
  int v12; // [rsp+10h] [rbp-B0h]
  __int64 v13; // [rsp+18h] [rbp-A8h]
  __int64 v14; // [rsp+48h] [rbp-78h]
  __int64 v15; // [rsp+58h] [rbp-68h] BYREF
  __int64 v16; // [rsp+60h] [rbp-60h] BYREF
  __int64 v17; // [rsp+68h] [rbp-58h] BYREF
  __int64 v18; // [rsp+70h] [rbp-50h] BYREF
  __int64 v19; // [rsp+78h] [rbp-48h] BYREF
  __int64 v20; // [rsp+80h] [rbp-40h] BYREF
  _QWORD v21[7]; // [rsp+88h] [rbp-38h] BYREF

  v15 = 0;
  sub_1862300(&v15, "flat", 0);
  sub_1862300(&v15, "som", 0);
  sub_180C5A0(v21, "dyn_psm");
  sub_18625B0(&v15, "gc", v21);
  v13 = sub_7844E0(a1, &v15);
  v21[0] = 0;
  v12 = sub_DAFDA0(v21);
  v20 = 0;
  v11 = sub_769490(a1, &v20);
  v19 = 0;
  v1 = sub_186B270(0x160u);
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)v1 = qword_1C636A0;
  *(_QWORD *)(v1 + 16) = qword_1C63778;
  *(_DWORD *)(v1 + 24) = 0;
  *(_BYTE *)(v1 + 28) = 0;
  *(_QWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 40) = 0;
  v14 = v1;
  *(_QWORD *)(v1 + 64) = 0;
  *(_QWORD *)(v1 + 72) = 0;
  *(_QWORD *)(v1 + 48) = &off_1C62200;
  *(_QWORD *)(v1 + 88) = 0;
  *(_QWORD *)(v1 + 96) = 0;
  *(_QWORD *)(v1 + 104) = a1;
  *(_QWORD *)(v1 + 112) = 0;
  *(_QWORD *)(v1 + 120) = 0;
  *(_QWORD *)(v1 + 128) = 0;
  sub_180C0A0(v1 + 136);
  *(_QWORD *)v14 = &off_1C4C5D8;
  *(_QWORD *)(v14 + 16) = &off_1C4C6F0;
  *(_QWORD *)(v14 + 176) = a1;
  sub_1858590(v14 + 184, &v19);
  *(_OWORD *)(v14 + 192) = 0;
  sub_180C0A0(v14 + 208);
  v2 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v14 + 248) = 0;
  *(_QWORD *)(v14 + 256) = a1;
  *(_QWORD *)(v14 + 264) = v2;
  *(_QWORD *)(v14 + 272) = 0;
  *(_QWORD *)(v14 + 280) = 0;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v18 = 0;
  *(_QWORD *)(v14 + 304) = sub_F72960;
  *(_QWORD *)(v14 + 312) = a1;
  *(_QWORD *)(v14 + 320) = 0;
  *(_QWORD *)(v14 + 328) = 0;
  *(_QWORD *)(v14 + 336) = 0;
  *(_BYTE *)(v14 + 344) = 0;
  *(_OWORD *)(v14 + 288) = 0;
  v3 = sub_186B270(0x160u);
  *(_QWORD *)v3 = qword_1C636A0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 16) = qword_1C63778;
  *(_DWORD *)(v3 + 24) = 0;
  *(_BYTE *)(v3 + 28) = 0;
  *(_QWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 64) = 0;
  *(_QWORD *)(v3 + 72) = 0;
  *(_QWORD *)(v3 + 48) = &off_1C62200;
  *(_QWORD *)(v3 + 88) = 0;
  *(_QWORD *)(v3 + 96) = 0;
  *(_QWORD *)(v3 + 104) = a1;
  *(_QWORD *)(v3 + 112) = 0;
  *(_QWORD *)(v3 + 120) = 0;
  *(_QWORD *)(v3 + 128) = 0;
  sub_180C0A0(v3 + 136);
  *(_QWORD *)(v3 + 16) = &off_1C4C6F0;
  *(_QWORD *)v3 = &off_1C4C5D8;
  *(_QWORD *)(v3 + 176) = a1;
  sub_1858590(v3 + 184, &v18);
  *(_OWORD *)(v3 + 192) = 0;
  sub_180C0A0(v3 + 208);
  v4 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = a1;
  *(_QWORD *)(v3 + 264) = v4;
  *(_QWORD *)(v3 + 272) = 0;
  *(_QWORD *)(v3 + 280) = 0;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  *(_QWORD *)(v3 + 312) = a1;
  *(_QWORD *)(v3 + 304) = sub_230350;
  *(_QWORD *)(v3 + 320) = 0;
  *(_QWORD *)(v3 + 328) = 0;
  *(_QWORD *)(v3 + 336) = 0;
  *(_BYTE *)(v3 + 344) = 0;
  *(_OWORD *)(v3 + 288) = 0;
  v17 = 0;
  v5 = sub_CF56E0(a1, (unsigned int)&v17);
  v16 = 0;
  v6 = v5;
  v7 = sub_D156B0(a1, (unsigned int)&v16);
  v8 = sub_EE7EC0(v7, v6, v3, v14, v11, v12, v13);
  v9 = sub_EE8E00(v8, &v15);
  sub_18572D0(&v16);
  sub_18572D0(&v17);
  sub_18572D0(&v18);
  sub_18572D0(&v19);
  sub_18572D0(&v20);
  sub_18572D0(v21);
  sub_18572D0(&v15);
  return v9;
}

