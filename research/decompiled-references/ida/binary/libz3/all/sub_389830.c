__int64 __fastcall sub_389830(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-98h]
  __int64 v12; // [rsp+28h] [rbp-90h]
  __int64 v13; // [rsp+30h] [rbp-88h]
  __int64 v14; // [rsp+48h] [rbp-70h] BYREF
  __int64 v15; // [rsp+50h] [rbp-68h] BYREF
  __int64 v16; // [rsp+58h] [rbp-60h] BYREF
  __int64 v17; // [rsp+60h] [rbp-58h] BYREF
  __int64 v18; // [rsp+68h] [rbp-50h] BYREF
  __int64 v19; // [rsp+70h] [rbp-48h] BYREF
  _QWORD v20[8]; // [rsp+78h] [rbp-40h] BYREF

  v14 = 0;
  sub_1862300(&v14, "elim_and", 1);
  sub_1862300(&v14, "som", 1);
  sub_1862300(&v14, "sort_store", 1);
  v15 = 0;
  sub_1862300(&v15, "array.simplify", 0);
  v20[0] = 0;
  v11 = sub_D156B0(a1, (unsigned int)v20);
  v19 = 0;
  v12 = sub_CF8250(a1, &v19);
  v18 = 0;
  v2 = sub_186B270(0x160u);
  *(_QWORD *)v2 = qword_1C636A0;
  *(_QWORD *)(v2 + 16) = qword_1C63778;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_BYTE *)(v2 + 28) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = &off_1C62200;
  *(_QWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  *(_QWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 104) = a1;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  *(_QWORD *)(v2 + 128) = 0;
  sub_180C0A0(v2 + 136);
  *(_QWORD *)(v2 + 176) = a1;
  *(_QWORD *)v2 = &off_1C4C5D8;
  *(_QWORD *)(v2 + 16) = &off_1C4C6F0;
  sub_1858590(v2 + 184, &v18);
  *(_OWORD *)(v2 + 192) = 0;
  sub_180C0A0(v2 + 208);
  v3 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = a1;
  *(_QWORD *)(v2 + 264) = v3;
  *(_QWORD *)(v2 + 272) = 0;
  *(_QWORD *)(v2 + 280) = 0;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  *(_QWORD *)(v2 + 312) = a1;
  *(_QWORD *)(v2 + 304) = sub_230350;
  *(_QWORD *)(v2 + 320) = 0;
  *(_QWORD *)(v2 + 328) = 0;
  *(_QWORD *)(v2 + 336) = 0;
  *(_BYTE *)(v2 + 344) = 0;
  *(_OWORD *)(v2 + 288) = 0;
  v17 = 0;
  v13 = sub_CF56E0(a1, (unsigned int)&v17);
  v16 = 0;
  v4 = sub_D156B0(a1, (unsigned int)&v16);
  v5 = sub_EE7C20(v4, v13, v2, v12, v11);
  sub_18572D0(&v16);
  sub_18572D0(&v17);
  sub_18572D0(&v18);
  sub_18572D0(&v19);
  sub_18572D0(v20);
  v20[0] = 0;
  v6 = sub_388500(a1, (__int64)v20);
  v7 = sub_EE8E00(v6, &v15);
  v8 = sub_EE8E00(v5, &v14);
  v9 = sub_EE7A70(v8, v7);
  sub_18572D0(v20);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 112LL))(v9, a2);
  sub_18572D0(&v15);
  sub_18572D0(&v14);
  return v9;
}

