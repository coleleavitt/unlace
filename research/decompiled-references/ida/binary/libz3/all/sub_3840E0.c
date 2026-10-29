__int64 __fastcall sub_3840E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // r15d
  __int64 v8; // rdi
  int v9; // r14d
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  int v14; // [rsp+8h] [rbp-A8h]
  int v15; // [rsp+10h] [rbp-A0h]
  __int64 v16; // [rsp+18h] [rbp-98h]
  __int64 v17; // [rsp+20h] [rbp-90h]
  __int64 v18; // [rsp+28h] [rbp-88h]
  __int64 v19; // [rsp+50h] [rbp-60h] BYREF
  __int64 v20; // [rsp+58h] [rbp-58h] BYREF
  __int64 v21; // [rsp+60h] [rbp-50h] BYREF
  __int64 v22; // [rsp+68h] [rbp-48h] BYREF
  __int64 v23; // [rsp+70h] [rbp-40h] BYREF
  _QWORD v24[7]; // [rsp+78h] [rbp-38h] BYREF

  v19 = 0;
  sub_1862370(&v19, "pb2bv_all_clauses_limit", 8);
  v20 = 0;
  sub_1862300(&v20, "ite_extra", 1);
  v1 = sub_383BE0(a1);
  v18 = sub_EE8E00(v1, &v20);
  v2 = sub_EF4120();
  v17 = sub_EE9040(v2);
  v24[0] = 0;
  v3 = sub_C9F310(a1, v24);
  v16 = sub_EE8E00(v3, &v19);
  v23 = 0;
  v15 = sub_CBF8F0(a1, &v23);
  v22 = 0;
  v14 = sub_C88A90(a1, &v22);
  v21 = 0;
  v4 = sub_186B270(0x160u);
  *(_QWORD *)v4 = qword_1C636A0;
  *(_QWORD *)(v4 + 16) = qword_1C63778;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_BYTE *)(v4 + 28) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = &off_1C62200;
  *(_QWORD *)(v4 + 64) = 0;
  *(_QWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 104) = a1;
  *(_QWORD *)(v4 + 112) = 0;
  *(_QWORD *)(v4 + 120) = 0;
  *(_QWORD *)(v4 + 128) = 0;
  sub_180C0A0(v4 + 136);
  *(_QWORD *)(v4 + 176) = a1;
  *(_QWORD *)v4 = &off_1C4C5D8;
  *(_QWORD *)(v4 + 16) = &off_1C4C6F0;
  sub_1858590(v4 + 184, &v21);
  *(_OWORD *)(v4 + 192) = 0;
  sub_180C0A0(v4 + 208);
  v5 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v4 + 248) = 0;
  *(_QWORD *)(v4 + 256) = a1;
  *(_QWORD *)(v4 + 264) = v5;
  *(_QWORD *)(v4 + 272) = 0;
  *(_QWORD *)(v4 + 280) = 0;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  *(_QWORD *)(v4 + 312) = a1;
  *(_QWORD *)(v4 + 304) = sub_2339C0;
  *(_QWORD *)(v4 + 320) = 0;
  *(_QWORD *)(v4 + 328) = 0;
  *(_QWORD *)(v4 + 336) = 0;
  *(_BYTE *)(v4 + 344) = 0;
  *(_OWORD *)(v4 + 288) = 0;
  v6 = sub_EF42F0();
  v7 = sub_EE9010(v6);
  v8 = sub_EF4290();
  v9 = sub_EE9010(v8);
  v10 = sub_C80E20();
  v11 = sub_EE9010(v10);
  sub_EE82D0(v11, v9, v7, v4, v14, v15, v16, v17, v18);
  v12 = sub_EE8E80("lia2sat-tactic");
  sub_18572D0(&v21);
  sub_18572D0(&v22);
  sub_18572D0(&v23);
  sub_18572D0(v24);
  sub_18572D0(&v20);
  sub_18572D0(&v19);
  return v12;
}

