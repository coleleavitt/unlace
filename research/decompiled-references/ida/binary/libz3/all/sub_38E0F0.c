__int64 __fastcall sub_38E0F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v12; // [rsp+0h] [rbp-58h]
  __int64 v13; // [rsp+8h] [rbp-50h]
  _QWORD v14[8]; // [rsp+18h] [rbp-40h] BYREF

  v14[0] = 0;
  sub_1862300(v14, "pull_cheap_ite", 1);
  sub_1862300(v14, "local_ctx", 1);
  sub_1862370(v14, "local_ctx_limit", 10000000);
  v2 = sub_388500(a1, a2);
  v3 = sub_CD7980(a1, a2);
  v4 = sub_EE90C0(v3);
  v12 = sub_EE9080(v4);
  v5 = sub_D156B0(a1, a2);
  v13 = sub_EE8E00(v5, v14);
  v6 = sub_186B270(0x160u);
  *(_QWORD *)v6 = qword_1C636A0;
  *(_QWORD *)(v6 + 16) = qword_1C63778;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  *(_BYTE *)(v6 + 28) = 0;
  *(_QWORD *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = &off_1C62200;
  *(_QWORD *)(v6 + 64) = 0;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)(v6 + 88) = 0;
  *(_QWORD *)(v6 + 96) = 0;
  *(_QWORD *)(v6 + 104) = a1;
  *(_QWORD *)(v6 + 112) = 0;
  *(_QWORD *)(v6 + 120) = 0;
  *(_QWORD *)(v6 + 128) = 0;
  sub_180C0A0(v6 + 136);
  *(_QWORD *)(v6 + 176) = a1;
  *(_QWORD *)v6 = &off_1C4C5D8;
  *(_QWORD *)(v6 + 16) = &off_1C4C6F0;
  sub_1858590(v6 + 184, a2);
  *(_OWORD *)(v6 + 192) = 0;
  sub_180C0A0(v6 + 208);
  v7 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v6 + 248) = 0;
  *(_QWORD *)(v6 + 256) = a1;
  *(_QWORD *)(v6 + 264) = v7;
  *(_QWORD *)(v6 + 272) = 0;
  *(_QWORD *)(v6 + 280) = 0;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  *(_QWORD *)(v6 + 312) = a1;
  *(_QWORD *)(v6 + 304) = sub_230350;
  *(_QWORD *)(v6 + 320) = 0;
  *(_QWORD *)(v6 + 328) = 0;
  *(_QWORD *)(v6 + 336) = 0;
  *(_BYTE *)(v6 + 344) = 0;
  *(_OWORD *)(v6 + 288) = 0;
  v8 = sub_CF56E0(a1, a2);
  v9 = sub_D156B0(a1, a2);
  v10 = sub_EE7D40(v9, v8, v6, v13, v12, v2);
  sub_18572D0(v14);
  return v10;
}

