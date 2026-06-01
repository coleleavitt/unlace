void __fastcall sub_5DC8A0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  _OWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v9[6]; // [rsp+8h] [rbp-30h] BYREF

  *(_QWORD *)a1 = &off_1C52608;
  v3 = *a2;
  *(_DWORD *)(a1 + 8) = a3;
  v4 = a2[2];
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 40) = a2 + 82;
  v5 = a2[1];
  *(_BYTE *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = v3;
  v9[0] = 0;
  sub_64C8D0(a1 + 48, v3, v5, v4, v9);
  sub_18572D0(v9);
  sub_16669D0(a1 + 3080, *(_QWORD *)(a1 + 32));
  v6 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 3096) = v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v7 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 3104) = 8;
  *(_DWORD *)(a1 + 3112) = 0;
  *(_QWORD *)(a1 + 3120) = v7;
  *(_QWORD *)(a1 + 3128) = 0;
  v8 = 0;
  sub_180C5A0(v9, "karr_relation");
  sub_18625B0(&v8, "default_relation", v9);
  sub_180C5A0(v9, "datalog");
  sub_18625B0(&v8, "engine", v9);
  sub_1862300(&v8, "karr", 0);
  sub_64C4C0(a1 + 48, &v8);
  sub_18572D0(&v8);
}

