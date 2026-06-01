int __fastcall sub_58BC80(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm5
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __m128i v8; // xmm6
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm7
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm3
  __int64 v15; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm4
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm5
  __m128i v24; // [rsp+0h] [rbp-68h] BYREF
  __m128i v25; // [rsp+10h] [rbp-58h] BYREF
  __int64 v26; // [rsp+28h] [rbp-40h]

  qword_4AF5720 = (__int64)&qword_4AF5730;
  qword_4AF56F0 = 0;
  qword_4AF56F8 = 0;
  qword_4AF56E0 = (__int64)&off_4A6E058;
  qword_4AF56E8 = (unsigned int)qword_4AF56E8 & 0x80000000;
  qword_4AF5738 = (__int64)&qword_4AF5750;
  v25 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E9FD8), (__m128i)(unsigned __int64)nullsub_267);
  v24 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49E9FE0), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AF5700 = 0;
  qword_4AF5708 = 0;
  qword_4AF5710 = 0;
  qword_4AF5718 = 0;
  qword_4AF5728 = 0x100000000LL;
  dword_4AF5748 = 0;
  qword_4AF5740 = 1;
  byte_4AF574C = 1;
  v1 = sub_259AC30(a1, &qword_4AF5730);
  v2 = (unsigned int)qword_4AF5728;
  v3 = (unsigned int)qword_4AF5728 + 1LL;
  if ( HIDWORD(qword_4AF5728) < v3 )
  {
    sub_25D6060(&qword_4AF5730 - 2, &qword_4AF5730, v3, 8);
    v2 = (unsigned int)qword_4AF5728;
  }
  v4 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4AF5720 + 8 * v2) = v1;
  word_4AF5768 = 0;
  xmmword_4AF5778 = 0;
  qword_4AF5760 = (__int64)&off_4A64730;
  xmmword_4AF5788 = (__int128)v4;
  LODWORD(qword_4AF5728) = qword_4AF5728 + 1;
  qword_4AF56E0 = (__int64)off_4A6DFF0;
  byte_4AF5758 = 0;
  qword_4AF5770 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF56E0, "aggressive-ext-opt", 18);
  qword_4AF5708 = 33;
  BYTE2(qword_4AF56E8) = BYTE2(qword_4AF56E8) & 0x9F | 0x20;
  qword_4AF5700 = (__int64)"Aggressive extension optimization";
  sub_259EC40(&qword_4AF56E0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF56E0, &off_47CFE00);
  qword_4AF5630 = 0;
  qword_4AF5620 = (__int64)&off_4A6E058;
  qword_4AF5628 = (unsigned int)qword_4AF5628 & 0x80000000;
  qword_4AF5660 = (__int64)&qword_4AF5670;
  qword_4AF5638 = 0;
  qword_4AF5640 = 0;
  qword_4AF5648 = 0;
  qword_4AF5650 = 0;
  qword_4AF5658 = 0;
  qword_4AF5668 = 0x100000000LL;
  qword_4AF5678 = (__int64)&qword_4AF5690;
  qword_4AF5680 = 1;
  dword_4AF5688 = 0;
  byte_4AF568C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AF5670);
  v6 = (unsigned int)qword_4AF5668;
  v7 = (unsigned int)qword_4AF5668 + 1LL;
  if ( HIDWORD(qword_4AF5668) < v7 )
  {
    sub_25D6060(&qword_4AF5670 - 2, &qword_4AF5670, v7, 8);
    v6 = (unsigned int)qword_4AF5668;
  }
  v8 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4AF5660 + 8 * v6) = v5;
  word_4AF56A8 = 0;
  xmmword_4AF56B8 = 0;
  qword_4AF56A0 = (__int64)&off_4A64730;
  xmmword_4AF56C8 = (__int128)v8;
  LODWORD(qword_4AF5668) = qword_4AF5668 + 1;
  qword_4AF5620 = (__int64)off_4A6DFF0;
  byte_4AF5698 = 0;
  qword_4AF56B0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF5620, "disable-peephole", 16);
  byte_4AF5698 = 0;
  word_4AF56A8 = 256;
  qword_4AF5648 = 30;
  BYTE2(qword_4AF5628) = BYTE2(qword_4AF5628) & 0x9F | 0x20;
  qword_4AF5640 = (__int64)"Disable the peephole optimizer";
  sub_259EC40(&qword_4AF5620);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF5620, &off_47CFE00);
  qword_4AF5570 = 0;
  qword_4AF5560 = (__int64)&off_4A6E058;
  qword_4AF5568 = (unsigned int)qword_4AF5568 & 0x80000000;
  qword_4AF55A0 = (__int64)&qword_4AF55B0;
  qword_4AF5578 = 0;
  qword_4AF5580 = 0;
  qword_4AF5588 = 0;
  qword_4AF5590 = 0;
  qword_4AF5598 = 0;
  qword_4AF55A8 = 0x100000000LL;
  qword_4AF55B8 = (__int64)&qword_4AF55D0;
  qword_4AF55C0 = 1;
  dword_4AF55C8 = 0;
  byte_4AF55CC = 1;
  v9 = sub_259AC30(sub_1F6C9D0, &qword_4AF55B0);
  v10 = (unsigned int)qword_4AF55A8;
  if ( HIDWORD(qword_4AF55A8) < (unsigned __int64)(unsigned int)qword_4AF55A8 + 1 )
  {
    v26 = v9;
    sub_25D6060(&qword_4AF55B0 - 2, &qword_4AF55B0, (unsigned int)qword_4AF55A8 + 1LL, 8);
    v10 = (unsigned int)qword_4AF55A8;
    v9 = v26;
  }
  v11 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4AF55A0 + 8 * v10) = v9;
  word_4AF55E8 = 0;
  xmmword_4AF55F8 = 0;
  qword_4AF55E0 = (__int64)&off_4A64730;
  xmmword_4AF5608 = (__int128)v11;
  LODWORD(qword_4AF55A8) = qword_4AF55A8 + 1;
  qword_4AF5560 = (__int64)off_4A6DFF0;
  byte_4AF55D8 = 0;
  qword_4AF55F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF5560, "disable-adv-copy-opt", 20);
  byte_4AF55D8 = 0;
  word_4AF55E8 = 256;
  qword_4AF5588 = 34;
  BYTE2(qword_4AF5568) = BYTE2(qword_4AF5568) & 0x9F | 0x20;
  qword_4AF5580 = (__int64)"Disable advanced copy optimization";
  sub_259EC40(&qword_4AF5560);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF5560, &off_47CFE00);
  qword_4AF54B0 = 0;
  qword_4AF54A0 = (__int64)&off_4A6E058;
  qword_4AF54A8 = (unsigned int)qword_4AF54A8 & 0x80000000;
  qword_4AF54E0 = (__int64)&qword_4AF54F0;
  qword_4AF54B8 = 0;
  qword_4AF54C0 = 0;
  qword_4AF54C8 = 0;
  qword_4AF54D0 = 0;
  qword_4AF54D8 = 0;
  qword_4AF54E8 = 0x100000000LL;
  qword_4AF54F8 = (__int64)&qword_4AF5510;
  qword_4AF5500 = 1;
  dword_4AF5508 = 0;
  byte_4AF550C = 1;
  v12 = sub_259AC30(sub_1F6C9D0, &qword_4AF54F0);
  v13 = (unsigned int)qword_4AF54E8;
  if ( HIDWORD(qword_4AF54E8) < (unsigned __int64)(unsigned int)qword_4AF54E8 + 1 )
  {
    v26 = v12;
    sub_25D6060(&qword_4AF54F0 - 2, &qword_4AF54F0, (unsigned int)qword_4AF54E8 + 1LL, 8);
    v13 = (unsigned int)qword_4AF54E8;
    v12 = v26;
  }
  v14 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4AF54E0 + 8 * v13) = v12;
  word_4AF5528 = 0;
  xmmword_4AF5538 = 0;
  xmmword_4AF5548 = (__int128)v14;
  qword_4AF5520 = (__int64)&off_4A64730;
  LODWORD(qword_4AF54E8) = qword_4AF54E8 + 1;
  byte_4AF5518 = 0;
  qword_4AF54A0 = (__int64)off_4A6DFF0;
  qword_4AF5530 = (__int64)off_49D9168;
  sub_259F400(&qword_4AF54A0, "disable-non-allocatable-phys-copy-opt", 37);
  word_4AF5528 = 256;
  byte_4AF5518 = 0;
  qword_4AF54C8 = 59;
  BYTE2(qword_4AF54A8) = BYTE2(qword_4AF54A8) & 0x9F | 0x20;
  qword_4AF54C0 = (__int64)"Disable non-allocatable physical register copy optimization";
  sub_259EC40(&qword_4AF54A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AF54A0, &off_47CFE00);
  qword_4AF53F0 = 0;
  qword_4AF53E0 = (__int64)&off_4A6E058;
  qword_4AF53E8 = (unsigned int)qword_4AF53E8 & 0x80000000;
  qword_4AF5420 = (__int64)&qword_4AF5430;
  qword_4AF53F8 = 0;
  qword_4AF5400 = 0;
  qword_4AF5408 = 0;
  qword_4AF5410 = 0;
  qword_4AF5418 = 0;
  qword_4AF5428 = 0x100000000LL;
  qword_4AF5438 = (__int64)&qword_4AF5450;
  qword_4AF5440 = 1;
  dword_4AF5448 = 0;
  byte_4AF544C = 1;
  v15 = sub_259AC30(sub_1F6C9D0, &qword_4AF5430);
  v16 = (unsigned int)qword_4AF5428;
  v17 = (unsigned int)qword_4AF5428 + 1LL;
  if ( HIDWORD(qword_4AF5428) < v17 )
  {
    sub_25D6060(&qword_4AF5430 - 2, &qword_4AF5430, v17, 8);
    v16 = (unsigned int)qword_4AF5428;
  }
  v18 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4AF5420 + 8 * v16) = v15;
  xmmword_4AF5478 = 0;
  xmmword_4AF5488 = (__int128)v18;
  qword_4AF5460 = (__int64)&off_4A64710;
  LODWORD(qword_4AF5428) = qword_4AF5428 + 1;
  byte_4AF546C = 0;
  qword_4AF53E0 = (__int64)off_4A6DEB8;
  dword_4AF5458 = 0;
  dword_4AF5468 = 0;
  qword_4AF5470 = (__int64)off_49D9228;
  sub_259F400(&qword_4AF53E0, "rewrite-phi-limit", 17);
  dword_4AF5458 = 10;
  byte_4AF546C = 1;
  dword_4AF5468 = 10;
  qword_4AF5408 = 40;
  BYTE2(qword_4AF53E8) = BYTE2(qword_4AF53E8) & 0x9F | 0x20;
  qword_4AF5400 = (__int64)"Limit the length of PHI chains to lookup";
  sub_259EC40(&qword_4AF53E0);
  __cxa_atexit(sub_1F6C940, &qword_4AF53E0, &off_47CFE00);
  qword_4AF5368 = 0x100000000LL;
  qword_4AF5320 = (__int64)&off_4A6E058;
  qword_4AF5328 = (unsigned int)qword_4AF5328 & 0x80000000;
  qword_4AF5360 = (__int64)&qword_4AF5370;
  qword_4AF5330 = 0;
  qword_4AF5338 = 0;
  qword_4AF5340 = 0;
  qword_4AF5348 = 0;
  qword_4AF5350 = 0;
  qword_4AF5358 = 0;
  qword_4AF5378 = (__int64)&qword_4AF5390;
  qword_4AF5380 = 1;
  dword_4AF5388 = 0;
  byte_4AF538C = 1;
  v19 = sub_259AC30(sub_1F6C940, &qword_4AF5370);
  v20 = (unsigned int)qword_4AF5368;
  v21 = (unsigned int)qword_4AF5368 + 1LL;
  if ( HIDWORD(qword_4AF5368) < v21 )
  {
    sub_25D6060(&qword_4AF5370 - 2, &qword_4AF5370, v21, 8);
    v20 = (unsigned int)qword_4AF5368;
  }
  v22 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4AF5360 + 8 * v20) = v19;
  qword_4AF53A0 = (__int64)&off_4A64710;
  xmmword_4AF53B8 = 0;
  xmmword_4AF53C8 = (__int128)v22;
  qword_4AF5320 = (__int64)off_4A6DEB8;
  LODWORD(qword_4AF5368) = qword_4AF5368 + 1;
  byte_4AF53AC = 0;
  qword_4AF53B0 = (__int64)off_49D9228;
  dword_4AF5398 = 0;
  dword_4AF53A8 = 0;
  sub_259F400(&qword_4AF5320, "recurrence-chain-limit", 22);
  dword_4AF5398 = 3;
  byte_4AF53AC = 1;
  dword_4AF53A8 = 3;
  qword_4AF5348 = 84;
  BYTE2(qword_4AF5328) = BYTE2(qword_4AF5328) & 0x9F | 0x20;
  qword_4AF5340 = (__int64)"Maximum length of recurrence chain when evaluating the benefit of commuting operands";
  sub_259EC40(&qword_4AF5320);
  return __cxa_atexit(sub_1F6C940, &qword_4AF5320, &off_47CFE00);
}

