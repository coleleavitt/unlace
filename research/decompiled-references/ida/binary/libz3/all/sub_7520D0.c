__int64 __fastcall sub_7520D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // rbx
  void *v5; // rdi
  void *v6; // rdi
  __int64 v8; // [rsp+8h] [rbp-40h]

  v2 = sub_186B270(0x88u);
  v8 = a1 + 128;
  *(_QWORD *)v2 = qword_1C6A278;
  *(_QWORD *)(v2 + 16) = &off_1C541F8;
  *(_QWORD *)(v2 + 24) = a2;
  sub_16744A0(v2 + 32, a2);
  *(_QWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 56) = 0;
  v3 = sub_186B270(0x380u);
  v4 = v3;
  do
  {
    *(_QWORD *)v4 = 0;
    memset((void *)(v4 + 8), 0, 0x68u);
    *(_BYTE *)(v4 + 8) = 1;
    v5 = qword_1C7F2C0;
    *(_BYTE *)(v4 + 36) = 1;
    *(_BYTE *)(v4 + 44) = 0;
    *(_DWORD *)(v4 + 56) = 1;
    *(_BYTE *)(v4 + 60) = 0;
    *(_BYTE *)(v4 + 76) = 0;
    *(_DWORD *)(v4 + 88) = 1;
    *(_BYTE *)(v4 + 92) = 0;
    *(_BYTE *)(v4 + 108) = 1;
    sub_182CBA0(v5, v4 + 56);
    *(_BYTE *)(v4 + 60) &= ~1u;
    v6 = qword_1C7F2C0;
    *(_BYTE *)(v4 + 76) &= ~1u;
    *(_DWORD *)(v4 + 56) = 1;
    *(_DWORD *)(v4 + 72) = 0;
    sub_182CBA0(v6, v4 + 88);
    *(_BYTE *)(v4 + 92) &= ~1u;
    v4 += 112;
    *(_DWORD *)(v4 - 24) = 1;
    *(_BYTE *)(v4 - 4) = 1;
  }
  while ( v4 != v3 + 896 );
  *(_QWORD *)(v2 + 80) = v3;
  *(_QWORD *)v2 = &off_1C54218;
  *(_QWORD *)(v2 + 88) = 8;
  *(_DWORD *)(v2 + 96) = 0;
  *(_BYTE *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 16) = off_1C54270;
  *(_OWORD *)(v2 + 112) = 0;
  sub_1858590(v2 + 128, v8);
  *(_BYTE *)(v2 + 104) = sub_1859610(v8, "propagate_eq", 0);
  return v2;
}

