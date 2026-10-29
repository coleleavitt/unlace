__int64 (__fastcall **__fastcall sub_2097270(__int64 a1))()
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbp

  *(_QWORD *)(a1 + 56) = 0x1000000000LL;
  *(_QWORD *)(a1 + 272) = 0x1000000000LL;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &unk_2C72650;
  *(_DWORD *)(a1 + 24) = 5;
  *(_QWORD *)(a1 + 16) = &unk_2CFD459;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 64;
  v2 = a1 + 280;
  v3 = a1 + 240;
  *(_QWORD *)(v3 - 208) = &unk_2C72528;
  *(_QWORD *)(v3 + 24) = v2;
  *(_QWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 168) = 0;
  sub_2096120(v3);
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  v4 = operator new(0x1A0u);
  *(_QWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 32) = &unk_2C72528;
  *(_QWORD *)(v4 + 16) = &unk_2CFD458;
  *(_QWORD *)(v4 + 56) = 0x1000000000LL;
  *(_QWORD *)(v4 + 272) = 0x1000000000LL;
  *(_QWORD *)v4 = &unk_2C726E0;
  *(_QWORD *)(v4 + 48) = v4 + 64;
  *(_QWORD *)(v4 + 264) = v4 + 280;
  *(_DWORD *)(v4 + 24) = 4;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 240) = 0;
  *(_QWORD *)(v4 + 248) = 0;
  *(_DWORD *)(v4 + 256) = 0;
  *(_DWORD *)(v4 + 408) = 0;
  sub_2096120(v4 + 240);
  *(_OWORD *)(v4 + 192) = 0;
  *(_OWORD *)(v4 + 208) = 0;
  *(_QWORD *)v4 = &off_2C72568;
  *(_QWORD *)(v4 + 32) = off_2C72610;
  *(_OWORD *)(v4 + 224) = 0;
  sub_2097090(a1 + 416, v4 + 32);
  *(_BYTE *)(a1 + 1096) = 0;
  *(_QWORD *)a1 = &off_2C723E0;
  *(_QWORD *)(a1 + 32) = off_2C72488;
  *(_QWORD *)(a1 + 416) = off_2C724C8;
  return off_2C724C8;
}
