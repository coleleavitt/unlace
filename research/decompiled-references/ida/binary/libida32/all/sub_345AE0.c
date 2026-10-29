int sub_345AE0()
{
  size_t v0; // rbx
  size_t v1; // rax
  size_t v2; // rbx
  size_t v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v11; // rdx
  size_t v12; // rax
  __int128 v14; // [rsp+0h] [rbp-48h] BYREF
  __m128i v15[3]; // [rsp+10h] [rbp-38h] BYREF

  v0 = j__strlen("Controls which instructions are value numbered");
  v1 = j__strlen("newgvn-vn");
  dword_2CDE718 = sub_21C54A0("newgvn-vn", v1, "Controls which instructions are value numbered", v0);
  v2 = j__strlen("Controls which instructions we create phi of ops for");
  v3 = j__strlen("newgvn-phi");
  sub_21C54A0("newgvn-phi", v3, "Controls which instructions we create phi of ops for", v2);
  qword_2CDE670 = 0;
  qword_2CDE678 = 0;
  qword_2CDE680 = 0;
  qword_2CDE660 = (__int64)&off_2C4B8B0;
  qword_2CDE668 = (unsigned int)qword_2CDE668 & 0x80000000;
  qword_2CDE6A8 = 0x100000000LL;
  qword_2CDE688 = 0;
  qword_2CDE690 = 0;
  qword_2CDE698 = 0;
  qword_2CDE6A0 = (__int64)&unk_2CDE6B0;
  qword_2CDE6B8 = (__int64)&unk_2CDE6D0;
  qword_2CDE6C0 = 1;
  dword_2CDE6C8 = 0;
  byte_2CDE6CC = 1;
  v4 = sub_21ED2B0("newgvn-phi");
  v5 = (unsigned int)qword_2CDE6A8;
  v6 = (unsigned int)qword_2CDE6A8 + 1LL;
  if ( v6 > HIDWORD(qword_2CDE6A8) )
  {
    *(_QWORD *)&v14 = v4;
    sub_22134E0((char *)&unk_2CDE6B0 - 16, &unk_2CDE6B0, v6, 8);
    v5 = (unsigned int)qword_2CDE6A8;
    v4 = v14;
  }
  *(_QWORD *)(qword_2CDE6A0 + 8 * v5) = v4;
  qword_2CDE6E0 = (__int64)off_2C474E8;
  qword_2CDE660 = (__int64)off_2C4B848;
  word_2CDE6E8 = 0;
  xmmword_2CDE708 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v14 = xmmword_2CDE708;
  LODWORD(qword_2CDE6A8) = qword_2CDE6A8 + 1;
  byte_2CDE6D8 = 0;
  qword_2CDE6F0 = (__int64)off_2BC0B68;
  v7 = j__strlen("enable-store-refinement");
  sub_21F3510(&qword_2CDE660, "enable-store-refinement", v7);
  word_2CDE6E8 = 256;
  byte_2CDE6D8 = 0;
  BYTE2(qword_2CDE668) = BYTE2(qword_2CDE668) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDE660);
  __cxa_atexit(sub_1FEA450, &qword_2CDE660, &off_2AFC540);
  qword_2CDE5B0 = 0;
  qword_2CDE5A0 = (__int64)&off_2C4B8B0;
  qword_2CDE5A8 = (unsigned int)qword_2CDE5A8 & 0x80000000;
  qword_2CDE5E8 = 0x100000000LL;
  qword_2CDE5B8 = 0;
  qword_2CDE5C0 = 0;
  qword_2CDE5C8 = 0;
  qword_2CDE5D0 = 0;
  qword_2CDE5D8 = 0;
  qword_2CDE5E0 = (__int64)&unk_2CDE5F0;
  qword_2CDE5F8 = (__int64)&unk_2CDE610;
  qword_2CDE600 = 1;
  dword_2CDE608 = 0;
  byte_2CDE60C = 1;
  v8 = sub_21ED2B0((const char *)sub_1FEA450);
  v9 = (unsigned int)qword_2CDE5E8;
  si128 = _mm_load_si128((const __m128i *)&v14);
  v11 = (unsigned int)qword_2CDE5E8 + 1LL;
  if ( v11 > HIDWORD(qword_2CDE5E8) )
  {
    *(_QWORD *)&v14 = v8;
    v15[0] = si128;
    sub_22134E0((char *)&unk_2CDE5F0 - 16, &unk_2CDE5F0, v11, 8);
    v9 = (unsigned int)qword_2CDE5E8;
    si128 = _mm_load_si128(v15);
    v8 = v14;
  }
  *(_QWORD *)(qword_2CDE5E0 + 8 * v9) = v8;
  word_2CDE628 = 0;
  qword_2CDE620 = (__int64)off_2C474E8;
  qword_2CDE5A0 = (__int64)off_2C4B848;
  xmmword_2CDE648 = (__int128)si128;
  LODWORD(qword_2CDE5E8) = qword_2CDE5E8 + 1;
  byte_2CDE618 = 0;
  qword_2CDE630 = (__int64)off_2BC0B68;
  v12 = j__strlen("enable-phi-of-ops");
  sub_21F3510(&qword_2CDE5A0, "enable-phi-of-ops", v12);
  word_2CDE628 = 257;
  byte_2CDE618 = 1;
  BYTE2(qword_2CDE5A8) = BYTE2(qword_2CDE5A8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CDE5A0);
  return __cxa_atexit(sub_1FEA450, &qword_2CDE5A0, &off_2AFC540);
}

