__int64 __fastcall sub_6DBE80(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  int v3; // eax
  __int64 v4; // rax
  _BYTE v6[48]; // [rsp+8h] [rbp-30h] BYREF

  v1 = sub_186B270(0xF0u);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  sub_180C5A0(v6, "datalog_relation");
  v3 = sub_15DA4C0(v2 + 560, v6);
  *(_QWORD *)(v1 + 8) = v2;
  *(_DWORD *)(v1 + 16) = v3;
  *(_QWORD *)v1 = &off_1C53230;
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
  sub_1624F90(v1 + 168, v2);
  *(_QWORD *)(v1 + 200) = v2;
  *(_QWORD *)(v1 + 208) = 0;
  v4 = sub_186B270(0x100u);
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_DWORD *)(v4 + 120) = 0;
  *(_DWORD *)(v4 + 152) = 0;
  *(_DWORD *)(v4 + 184) = 0;
  *(_DWORD *)(v4 + 216) = 0;
  *(_DWORD *)(v4 + 248) = 0;
  *(_QWORD *)(v1 + 216) = v4;
  *(_OWORD *)v4 = 0;
  *(_OWORD *)(v4 + 32) = 0;
  *(_OWORD *)(v4 + 64) = 0;
  *(_OWORD *)(v4 + 96) = 0;
  *(_OWORD *)(v4 + 128) = 0;
  *(_OWORD *)(v4 + 160) = 0;
  *(_OWORD *)(v4 + 192) = 0;
  *(_OWORD *)(v4 + 224) = 0;
  *(_QWORD *)(v1 + 224) = 8;
  *(_DWORD *)(v1 + 232) = 0;
  return v1;
}

