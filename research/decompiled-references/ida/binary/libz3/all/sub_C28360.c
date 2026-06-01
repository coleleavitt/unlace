__int64 __fastcall sub_C28360(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v11[8]; // [rsp+8h] [rbp-40h] BYREF

  sub_1858590(&v10, a2);
  sub_1862300(&v10, "elim_rem", 1);
  v11[0] = 0;
  sub_1862300(v11, "skolemize", 0);
  v2 = sub_D156B0(a1, a2);
  v3 = sub_186B270(0x28u);
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)v3 = &off_1C58520;
  sub_16669D0(v3 + 16, a1);
  sub_1858590(v3 + 32, a2);
  v4 = sub_D156B0(a1, (unsigned int)&v10);
  v5 = sub_EE8E00(v4, &v10);
  v6 = sub_CEBBB0(a1, v11);
  v7 = sub_EE8E00(v6, v11);
  v8 = sub_EE7B50(v7, v5, v3, v2);
  sub_18572D0(v11);
  sub_18572D0(&v10);
  return v8;
}

