__int64 __fastcall sub_725D80(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  int v3; // eax
  _BYTE v5[48]; // [rsp+8h] [rbp-30h] BYREF

  v1 = sub_186B270(0xC0u);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  sub_180C5A0(v5, "bv");
  v3 = sub_15DA4C0(v2 + 560, v5);
  *(_QWORD *)(v1 + 8) = v2;
  *(_DWORD *)(v1 + 16) = v3;
  *(_QWORD *)v1 = &off_1C53838;
  *(_QWORD *)(v1 + 24) = a1;
  *(_QWORD *)(v1 + 32) = v2;
  *(_QWORD *)(v1 + 40) = v2;
  *(_QWORD *)(v1 + 48) = 0;
  *(_QWORD *)(v1 + 56) = v2;
  *(_QWORD *)(v1 + 64) = 0;
  *(_QWORD *)(v1 + 72) = 0;
  *(_QWORD *)(v1 + 80) = 0;
  *(_QWORD *)(v1 + 88) = 0;
  *(_QWORD *)(v1 + 96) = v2;
  *(_QWORD *)(v1 + 104) = 0;
  *(_QWORD *)(v1 + 112) = v1 + 160;
  *(_QWORD *)(v1 + 120) = 1;
  *(_QWORD *)(v1 + 128) = 0;
  *(_QWORD *)(v1 + 136) = 0;
  *(_DWORD *)(v1 + 144) = 1065353216;
  *(_QWORD *)(v1 + 152) = 0;
  *(_QWORD *)(v1 + 160) = 0;
  sub_16744A0(v1 + 168, v2);
  return v1;
}

