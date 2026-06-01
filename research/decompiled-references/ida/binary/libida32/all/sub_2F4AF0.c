int __fastcall sub_2F4AF0(__int64 a1, __int64 a2)
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

  v2 = j__strlen("Simplify DDG by merging nodes that have less interesting edges.");
  qword_2CB26F0 = 0;
  v3 = v2;
  qword_2CB26F8 = 0;
  qword_2CB2700 = 0;
  qword_2CB26E0 = (__int64)&off_2C4B8B0;
  qword_2CB26E8 = (unsigned int)qword_2CB26E8 & 0x80000000;
  qword_2CB2728 = 0x100000000LL;
  qword_2CB2708 = 0;
  qword_2CB2710 = 0;
  qword_2CB2718 = 0;
  qword_2CB2720 = (__int64)&unk_2CB2730;
  qword_2CB2738 = (__int64)&unk_2CB2750;
  qword_2CB2740 = 1;
  dword_2CB2748 = 0;
  byte_2CB274C = 1;
  v4 = sub_21ED2B0("Simplify DDG by merging nodes that have less interesting edges.", a2);
  v5 = (unsigned int)qword_2CB2728;
  v6 = (unsigned int)qword_2CB2728 + 1LL;
  if ( v6 > HIDWORD(qword_2CB2728) )
  {
    *(_QWORD *)&v14 = v4;
    sub_22134E0((char *)&unk_2CB2730 - 16, &unk_2CB2730, v6, 8);
    v5 = (unsigned int)qword_2CB2728;
    v4 = v14;
  }
  *(_QWORD *)(qword_2CB2720 + 8 * v5) = v4;
  qword_2CB2760 = (__int64)off_2C474E8;
  qword_2CB26E0 = (__int64)off_2C4B848;
  word_2CB2768 = 0;
  xmmword_2CB2788 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v14 = xmmword_2CB2788;
  LODWORD(qword_2CB2728) = qword_2CB2728 + 1;
  qword_2CB2770 = (__int64)off_2BC0B68;
  byte_2CB2758 = 0;
  sub_21F3510(&qword_2CB26E0, "ddg-simplify", 12);
  word_2CB2768 = 257;
  qword_2CB2708 = v3;
  byte_2CB2758 = 1;
  BYTE2(qword_2CB26E8) = BYTE2(qword_2CB26E8) & 0x9F | 0x20;
  qword_2CB2700 = (__int64)"Simplify DDG by merging nodes that have less interesting edges.";
  sub_21F4400(&qword_2CB26E0);
  __cxa_atexit(sub_1FEA450, &qword_2CB26E0, &off_2AFC540);
  v7 = j__strlen("Create pi-block nodes.");
  byte_2CB268C = 1;
  qword_2CB2630 = 0;
  v8 = v7;
  qword_2CB2620 = (__int64)&off_2C4B8B0;
  qword_2CB2628 = (unsigned int)qword_2CB2628 & 0x80000000;
  qword_2CB2668 = 0x100000000LL;
  qword_2CB2638 = 0;
  qword_2CB2640 = 0;
  qword_2CB2648 = 0;
  qword_2CB2650 = 0;
  qword_2CB2658 = 0;
  qword_2CB2660 = (__int64)&unk_2CB2670;
  qword_2CB2678 = (__int64)&unk_2CB2690;
  qword_2CB2680 = 1;
  dword_2CB2688 = 0;
  v9 = sub_21ED2B0("Create pi-block nodes.", &qword_2CB26E0);
  v10 = (unsigned int)qword_2CB2668;
  si128 = _mm_load_si128((const __m128i *)&v14);
  v12 = (unsigned int)qword_2CB2668 + 1LL;
  if ( v12 > HIDWORD(qword_2CB2668) )
  {
    *(_QWORD *)&v14 = v9;
    v15[0] = si128;
    sub_22134E0((char *)&unk_2CB2670 - 16, &unk_2CB2670, v12, 8);
    v10 = (unsigned int)qword_2CB2668;
    si128 = _mm_load_si128(v15);
    v9 = v14;
  }
  *(_QWORD *)(qword_2CB2660 + 8 * v10) = v9;
  word_2CB26A8 = 0;
  qword_2CB26A0 = (__int64)off_2C474E8;
  qword_2CB2620 = (__int64)off_2C4B848;
  qword_2CB26B0 = (__int64)off_2BC0B68;
  xmmword_2CB26C8 = (__int128)si128;
  LODWORD(qword_2CB2668) = qword_2CB2668 + 1;
  byte_2CB2698 = 0;
  sub_21F3510(&qword_2CB2620, "ddg-pi-blocks", 13);
  word_2CB26A8 = 257;
  qword_2CB2648 = v8;
  byte_2CB2698 = 1;
  BYTE2(qword_2CB2628) = BYTE2(qword_2CB2628) & 0x9F | 0x20;
  qword_2CB2640 = (__int64)"Create pi-block nodes.";
  sub_21F4400(&qword_2CB2620);
  return __cxa_atexit(sub_1FEA450, &qword_2CB2620, &off_2AFC540);
}

