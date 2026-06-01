int __fastcall sub_2FD150(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v12; // rdx
  __int128 v14; // [rsp+0h] [rbp-48h] BYREF
  __m128i v15[3]; // [rsp+10h] [rbp-38h] BYREF

  v2 = j__strlen("The number of instructions to scan in a block in memory dependency analysis (default = 100)");
  qword_2CB6A70 = 0;
  v3 = v2;
  qword_2CB6A78 = 0;
  qword_2CB6A80 = 0;
  qword_2CB6A60 = (__int64)&off_2C4B8B0;
  qword_2CB6A68 = (unsigned int)qword_2CB6A68 & 0x80000000;
  qword_2CB6AA8 = 0x100000000LL;
  qword_2CB6A88 = 0;
  qword_2CB6A90 = 0;
  qword_2CB6A98 = 0;
  qword_2CB6AA0 = (__int64)&unk_2CB6AB0;
  qword_2CB6AB8 = (__int64)&unk_2CB6AD0;
  qword_2CB6AC0 = 1;
  dword_2CB6AC8 = 0;
  byte_2CB6ACC = 1;
  v4 = sub_21ED2B0("The number of instructions to scan in a block in memory dependency analysis (default = 100)", a2);
  v5 = (unsigned int)qword_2CB6AA8;
  v6 = (unsigned int)qword_2CB6AA8 + 1LL;
  if ( v6 > HIDWORD(qword_2CB6AA8) )
  {
    *(_QWORD *)&v14 = v4;
    sub_22134E0((char *)&unk_2CB6AB0 - 16, &unk_2CB6AB0, v6, 8);
    v5 = (unsigned int)qword_2CB6AA8;
    v4 = v14;
  }
  *(_QWORD *)(qword_2CB6AA0 + 8 * v5) = v4;
  qword_2CB6AE0 = (__int64)off_2C472D0;
  qword_2CB6A60 = (__int64)off_2C4B710;
  xmmword_2CB6B08 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  v14 = xmmword_2CB6B08;
  LODWORD(qword_2CB6AA8) = qword_2CB6AA8 + 1;
  qword_2CB6AF0 = (__int64)off_2BC0BF8;
  dword_2CB6AD8 = 0;
  dword_2CB6AE8 = 0;
  byte_2CB6AEC = 0;
  sub_21F3510(&qword_2CB6A60, "memdep-block-scan-limit", 23);
  qword_2CB6A88 = v3;
  dword_2CB6AD8 = 100;
  byte_2CB6AEC = 1;
  dword_2CB6AE8 = 100;
  BYTE2(qword_2CB6A68) = BYTE2(qword_2CB6A68) & 0x9F | 0x20;
  qword_2CB6A80 = (__int64)"The number of instructions to scan in a block in memory dependency analysis (default = 100)";
  sub_21F4400(&qword_2CB6A60);
  __cxa_atexit(sub_1FC9520, &qword_2CB6A60, &off_2AFC540);
  v7 = j__strlen("The number of blocks to scan during memory dependency analysis (default = 200)");
  byte_2CB6A0C = 1;
  qword_2CB69B0 = 0;
  v8 = v7;
  qword_2CB69A0 = (__int64)&off_2C4B8B0;
  qword_2CB69A8 = (unsigned int)qword_2CB69A8 & 0x80000000;
  qword_2CB69E8 = 0x100000000LL;
  qword_2CB69B8 = 0;
  qword_2CB69C0 = 0;
  qword_2CB69C8 = 0;
  qword_2CB69D0 = 0;
  qword_2CB69D8 = 0;
  qword_2CB69E0 = (__int64)&unk_2CB69F0;
  qword_2CB69F8 = (__int64)&unk_2CB6A10;
  qword_2CB6A00 = 1;
  dword_2CB6A08 = 0;
  v9 = sub_21ED2B0("The number of blocks to scan during memory dependency analysis (default = 200)", &qword_2CB6A60);
  v10 = (unsigned int)qword_2CB69E8;
  si128 = _mm_load_si128((const __m128i *)&v14);
  v12 = (unsigned int)qword_2CB69E8 + 1LL;
  if ( v12 > HIDWORD(qword_2CB69E8) )
  {
    *(_QWORD *)&v14 = v9;
    v15[0] = si128;
    sub_22134E0((char *)&unk_2CB69F0 - 16, &unk_2CB69F0, v12, 8);
    v10 = (unsigned int)qword_2CB69E8;
    si128 = _mm_load_si128(v15);
    v9 = v14;
  }
  *(_QWORD *)(qword_2CB69E0 + 8 * v10) = v9;
  qword_2CB6A20 = (__int64)off_2C472D0;
  qword_2CB69A0 = (__int64)off_2C4B710;
  qword_2CB6A30 = (__int64)off_2BC0BF8;
  xmmword_2CB6A48 = (__int128)si128;
  LODWORD(qword_2CB69E8) = qword_2CB69E8 + 1;
  dword_2CB6A18 = 0;
  dword_2CB6A28 = 0;
  byte_2CB6A2C = 0;
  sub_21F3510(&qword_2CB69A0, "memdep-block-number-limit", 25);
  qword_2CB69C8 = v8;
  dword_2CB6A18 = 200;
  byte_2CB6A2C = 1;
  dword_2CB6A28 = 200;
  BYTE2(qword_2CB69A8) = BYTE2(qword_2CB69A8) & 0x9F | 0x20;
  qword_2CB69C0 = (__int64)"The number of blocks to scan during memory dependency analysis (default = 200)";
  sub_21F4400(&qword_2CB69A0);
  return __cxa_atexit(sub_1FC9520, &qword_2CB69A0, &off_2AFC540);
}

