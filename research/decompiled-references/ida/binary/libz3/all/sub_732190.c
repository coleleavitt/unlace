__int64 __fastcall sub_732190(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rbx

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C53D18;
  sub_1858590(v2 + 24, a1 + 24);
  v4 = sub_186B270(0x2A8u);
  v5 = v4 + 552;
  *(_QWORD *)v4 = a2;
  *(_BYTE *)(v4 + 8) = 0;
  v6 = v4;
  sub_76DA90(v4 + 16, a2, *(_DWORD *)(a2 + 712) != 0, v4 + 552);
  *(_QWORD *)(v6 + 16) = &off_1C53CF8;
  sub_76A560(v5, a2, a1 + 24);
  *(_QWORD *)(v3 + 16) = v6;
  return v3;
}

