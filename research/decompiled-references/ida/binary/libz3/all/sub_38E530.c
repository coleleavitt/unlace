__int64 __fastcall sub_38E530(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // [rsp+0h] [rbp-C0h]
  int v12; // [rsp+8h] [rbp-B8h]
  int v13; // [rsp+10h] [rbp-B0h]
  int v14; // [rsp+18h] [rbp-A8h]
  __int64 v15; // [rsp+20h] [rbp-A0h]
  int v16; // [rsp+28h] [rbp-98h]
  __int64 v17; // [rsp+50h] [rbp-70h] BYREF
  __int64 v18; // [rsp+58h] [rbp-68h] BYREF
  __int64 v19; // [rsp+60h] [rbp-60h] BYREF
  __int64 v20; // [rsp+68h] [rbp-58h] BYREF
  __int64 v21; // [rsp+70h] [rbp-50h] BYREF
  __int64 v22; // [rsp+78h] [rbp-48h] BYREF
  __int64 v23; // [rsp+80h] [rbp-40h] BYREF
  _QWORD v24[7]; // [rsp+88h] [rbp-38h] BYREF

  v17 = 0;
  sub_1862300(&v17, "pull_cheap_ite", 1);
  sub_1862300(&v17, "local_ctx", 1);
  sub_1862370(&v17, "local_ctx_limit", 10000000);
  v18 = 0;
  sub_1862370(&v18, "max_depth", 30);
  sub_1862370(&v18, "max_steps", 5000000);
  if ( a2 )
  {
    v16 = sub_EE4CD0();
  }
  else
  {
    v24[0] = 0;
    v7 = sub_186B270(0x160u);
    *(_QWORD *)v7 = qword_1C636A0;
    *(_QWORD *)(v7 + 16) = qword_1C63778;
    *(_DWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v7 + 24) = 0;
    *(_BYTE *)(v7 + 28) = 0;
    *(_QWORD *)(v7 + 32) = 0;
    *(_DWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 48) = &off_1C62200;
    *(_QWORD *)(v7 + 64) = 0;
    *(_QWORD *)(v7 + 72) = 0;
    *(_QWORD *)(v7 + 88) = 0;
    *(_QWORD *)(v7 + 96) = 0;
    *(_QWORD *)(v7 + 104) = a1;
    *(_QWORD *)(v7 + 112) = 0;
    *(_QWORD *)(v7 + 120) = 0;
    *(_QWORD *)(v7 + 128) = 0;
    sub_180C0A0(v7 + 136);
    *(_QWORD *)(v7 + 176) = a1;
    *(_QWORD *)v7 = &off_1C4C5D8;
    *(_QWORD *)(v7 + 16) = &off_1C4C6F0;
    sub_1858590(v7 + 184, v24);
    *(_OWORD *)(v7 + 192) = 0;
    sub_180C0A0(v7 + 208);
    v8 = *(_QWORD *)(a1 + 856);
    *(_QWORD *)(v7 + 248) = 0;
    *(_QWORD *)(v7 + 256) = a1;
    *(_QWORD *)(v7 + 264) = v8;
    *(_QWORD *)(v7 + 272) = 0;
    *(_QWORD *)(v7 + 280) = 0;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    *(_QWORD *)(v7 + 312) = a1;
    *(_QWORD *)(v7 + 304) = sub_230350;
    *(_QWORD *)(v7 + 320) = 0;
    *(_QWORD *)(v7 + 328) = 0;
    *(_QWORD *)(v7 + 336) = 0;
    *(_BYTE *)(v7 + 344) = 0;
    *(_OWORD *)(v7 + 288) = 0;
    v9 = sub_EF4320();
    v10 = sub_EF3D00(v9);
    v16 = sub_EE8FB0(v10, v7);
    sub_18572D0(v24);
  }
  v24[0] = 0;
  v15 = sub_D156B0(a1, (unsigned int)v24);
  v23 = 0;
  v14 = sub_CF8250(a1, &v23);
  v22 = 0;
  v2 = sub_D156B0(a1, (unsigned int)&v22);
  v13 = sub_EE8E00(v2, &v17);
  v21 = 0;
  v3 = sub_CCFC80(a1, &v21);
  v12 = sub_EE8E00(v3, &v18);
  v20 = 0;
  v11 = sub_CF56E0(a1, (unsigned int)&v20);
  v19 = 0;
  v4 = sub_D156B0(a1, (unsigned int)&v19);
  v5 = sub_EE7EC0(v4, v11, v12, v13, v16, v14, v15);
  sub_18572D0(&v19);
  sub_18572D0(&v20);
  sub_18572D0(&v21);
  sub_18572D0(&v22);
  sub_18572D0(&v23);
  sub_18572D0(v24);
  sub_18572D0(&v18);
  sub_18572D0(&v17);
  return v5;
}

