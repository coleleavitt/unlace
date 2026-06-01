__int64 __fastcall sub_ACC6A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  *(_QWORD *)a1 = a2;
  sub_16744A0(a1 + 8, a2);
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  v4 = sub_186B270(0x80u);
  *(_QWORD *)v4 = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 96) = 0;
  *(_DWORD *)(v4 + 104) = 0;
  *(_QWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 120) = 0;
  *(_QWORD *)(a1 + 56) = v4;
  *(_QWORD *)(a1 + 64) = 8;
  *(_DWORD *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 88) = 0;
  sub_1427860(a1, a3);
  sub_157EB00(a1 + 96, a1 + 8);
  sub_16669D0(a1 + 128, a2);
  *(_BYTE *)(a1 + 156) = 0;
  return sub_1409FB0(a1, a3);
}

