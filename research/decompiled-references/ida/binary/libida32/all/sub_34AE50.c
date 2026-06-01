int sub_34AE50()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v11; // rdx
  size_t v12; // rax
  __int128 v14; // [rsp+0h] [rbp-48h] BYREF
  __m128i v15[3]; // [rsp+10h] [rbp-38h] BYREF

  v0 = j__strlen("Force whether the StructurizeCFG pass skips uniform regions");
  qword_2CE05F0 = 0;
  v1 = v0;
  qword_2CE05F8 = 0;
  qword_2CE0600 = 0;
  qword_2CE05E0 = (__int64)&off_2C4B8B0;
  qword_2CE05E8 = (unsigned int)qword_2CE05E8 & 0x80000000;
  qword_2CE0628 = 0x100000000LL;
  qword_2CE0608 = 0;
  qword_2CE0610 = 0;
  qword_2CE0618 = 0;
  qword_2CE0620 = (__int64)&unk_2CE0630;
  qword_2CE0638 = (__int64)&unk_2CE0650;
  qword_2CE0640 = 1;
  dword_2CE0648 = 0;
  byte_2CE064C = 1;
  v2 = sub_21ED2B0("Force whether the StructurizeCFG pass skips uniform regions");
  v3 = (unsigned int)qword_2CE0628;
  v4 = (unsigned int)qword_2CE0628 + 1LL;
  if ( v4 > HIDWORD(qword_2CE0628) )
  {
    *(_QWORD *)&v14 = v2;
    sub_22134E0((char *)&unk_2CE0630 - 16, &unk_2CE0630, v4, 8);
    v3 = (unsigned int)qword_2CE0628;
    v2 = v14;
  }
  *(_QWORD *)(qword_2CE0620 + 8 * v3) = v2;
  qword_2CE0660 = (__int64)off_2C474E8;
  qword_2CE05E0 = (__int64)off_2C4B848;
  word_2CE0668 = 0;
  xmmword_2CE0688 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v14 = xmmword_2CE0688;
  LODWORD(qword_2CE0628) = qword_2CE0628 + 1;
  byte_2CE0658 = 0;
  qword_2CE0670 = (__int64)off_2BC0B68;
  v5 = j__strlen("structurizecfg-skip-uniform-regions");
  sub_21F3510(&qword_2CE05E0, "structurizecfg-skip-uniform-regions", v5);
  qword_2CE0608 = v1;
  word_2CE0668 = 256;
  byte_2CE0658 = 0;
  BYTE2(qword_2CE05E8) = BYTE2(qword_2CE05E8) & 0x9F | 0x20;
  qword_2CE0600 = (__int64)"Force whether the StructurizeCFG pass skips uniform regions";
  sub_21F4400(&qword_2CE05E0);
  __cxa_atexit(sub_1FEA450, &qword_2CE05E0, &off_2AFC540);
  v6 = j__strlen("Allow relaxed uniform region checks");
  byte_2CE058C = 1;
  qword_2CE0530 = 0;
  v7 = v6;
  qword_2CE0520 = (__int64)&off_2C4B8B0;
  qword_2CE0528 = (unsigned int)qword_2CE0528 & 0x80000000;
  qword_2CE0568 = 0x100000000LL;
  qword_2CE0538 = 0;
  qword_2CE0540 = 0;
  qword_2CE0548 = 0;
  qword_2CE0550 = 0;
  qword_2CE0558 = 0;
  qword_2CE0560 = (__int64)&unk_2CE0570;
  qword_2CE0578 = (__int64)&unk_2CE0590;
  qword_2CE0580 = 1;
  dword_2CE0588 = 0;
  v8 = sub_21ED2B0("Allow relaxed uniform region checks");
  v9 = (unsigned int)qword_2CE0568;
  si128 = _mm_load_si128((const __m128i *)&v14);
  v11 = (unsigned int)qword_2CE0568 + 1LL;
  if ( v11 > HIDWORD(qword_2CE0568) )
  {
    *(_QWORD *)&v14 = v8;
    v15[0] = si128;
    sub_22134E0((char *)&unk_2CE0570 - 16, &unk_2CE0570, v11, 8);
    v9 = (unsigned int)qword_2CE0568;
    si128 = _mm_load_si128(v15);
    v8 = v14;
  }
  *(_QWORD *)(qword_2CE0560 + 8 * v9) = v8;
  word_2CE05A8 = 0;
  qword_2CE05A0 = (__int64)off_2C474E8;
  qword_2CE0520 = (__int64)off_2C4B848;
  xmmword_2CE05C8 = (__int128)si128;
  LODWORD(qword_2CE0568) = qword_2CE0568 + 1;
  byte_2CE0598 = 0;
  qword_2CE05B0 = (__int64)off_2BC0B68;
  v12 = j__strlen("structurizecfg-relaxed-uniform-regions");
  sub_21F3510(&qword_2CE0520, "structurizecfg-relaxed-uniform-regions", v12);
  qword_2CE0548 = v7;
  word_2CE05A8 = 257;
  byte_2CE0598 = 1;
  BYTE2(qword_2CE0528) = BYTE2(qword_2CE0528) & 0x9F | 0x20;
  qword_2CE0540 = (__int64)"Allow relaxed uniform region checks";
  sub_21F4400(&qword_2CE0520);
  return __cxa_atexit(sub_1FEA450, &qword_2CE0520, &off_2AFC540);
}

