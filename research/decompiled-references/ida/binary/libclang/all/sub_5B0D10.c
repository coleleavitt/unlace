int __fastcall sub_5B0D10(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __m128i v4; // xmm5
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __m128i v8; // xmm6
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __m128i v12; // xmm7
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm3
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm4
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm5
  __m128i v24; // [rsp+0h] [rbp-68h] BYREF
  __m128i v25; // [rsp+10h] [rbp-58h] BYREF
  __int64 v26; // [rsp+28h] [rbp-40h]

  qword_4B07660 = (__int64)&qword_4B07670;
  qword_4B07630 = 0;
  qword_4B07638 = 0;
  qword_4B07620 = (__int64)&off_4A6E058;
  qword_4B07628 = (unsigned int)qword_4B07628 & 0x80000000;
  qword_4B07678 = (__int64)&qword_4B07690;
  v24 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EBB58), (__m128i)(unsigned __int64)nullsub_266);
  v25 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EBB60), (__m128i)(unsigned __int64)nullsub_267);
  qword_4B07640 = 0;
  qword_4B07648 = 0;
  qword_4B07650 = 0;
  qword_4B07658 = 0;
  qword_4B07668 = 0x100000000LL;
  dword_4B07688 = 0;
  qword_4B07680 = 1;
  byte_4B0768C = 1;
  v1 = sub_259AC30(a1, &qword_4B07670);
  v2 = (unsigned int)qword_4B07668;
  v3 = (unsigned int)qword_4B07668 + 1LL;
  if ( HIDWORD(qword_4B07668) < v3 )
  {
    sub_25D6060(&qword_4B07670 - 2, &qword_4B07670, v3, 8);
    v2 = (unsigned int)qword_4B07668;
  }
  v4 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4B07660 + 8 * v2) = v1;
  xmmword_4B076B8 = 0;
  xmmword_4B076C8 = (__int128)v4;
  qword_4B076A0 = (__int64)&off_4A64710;
  LODWORD(qword_4B07668) = qword_4B07668 + 1;
  byte_4B076AC = 0;
  qword_4B07620 = (__int64)off_4A6DEB8;
  dword_4B07698 = 0;
  dword_4B076A8 = 0;
  qword_4B076B0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B07620, "unroll-peel-count", 17);
  qword_4B07648 = 50;
  BYTE2(qword_4B07628) = BYTE2(qword_4B07628) & 0x9F | 0x20;
  qword_4B07640 = (__int64)"Set the unroll peeling count, for testing purposes";
  sub_259EC40(&qword_4B07620);
  __cxa_atexit(sub_1F6C940, &qword_4B07620, &off_47CFE00);
  qword_4B07570 = 0;
  qword_4B07560 = (__int64)&off_4A6E058;
  qword_4B07568 = (unsigned int)qword_4B07568 & 0x80000000;
  qword_4B075A0 = (__int64)&qword_4B075B0;
  qword_4B07578 = 0;
  qword_4B07580 = 0;
  qword_4B07588 = 0;
  qword_4B07590 = 0;
  qword_4B07598 = 0;
  qword_4B075A8 = 0x100000000LL;
  qword_4B075B8 = (__int64)&qword_4B075D0;
  qword_4B075C0 = 1;
  dword_4B075C8 = 0;
  byte_4B075CC = 1;
  v5 = sub_259AC30(sub_1F6C940, &qword_4B075B0);
  v6 = (unsigned int)qword_4B075A8;
  v7 = (unsigned int)qword_4B075A8 + 1LL;
  if ( HIDWORD(qword_4B075A8) < v7 )
  {
    sub_25D6060(&qword_4B075B0 - 2, &qword_4B075B0, v7, 8);
    v6 = (unsigned int)qword_4B075A8;
  }
  v8 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4B075A0 + 8 * v6) = v5;
  word_4B075E8 = 0;
  xmmword_4B075F8 = 0;
  qword_4B075E0 = (__int64)&off_4A64730;
  xmmword_4B07608 = (__int128)v8;
  LODWORD(qword_4B075A8) = qword_4B075A8 + 1;
  qword_4B07560 = (__int64)off_4A6DFF0;
  byte_4B075D8 = 0;
  qword_4B075F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B07560, "unroll-allow-peeling", 20);
  word_4B075E8 = 257;
  byte_4B075D8 = 1;
  qword_4B07588 = 73;
  BYTE2(qword_4B07568) = BYTE2(qword_4B07568) & 0x9F | 0x20;
  qword_4B07580 = (__int64)"Allows loops to be peeled when the dynamic trip count is known to be low.";
  sub_259EC40(&qword_4B07560);
  __cxa_atexit(sub_1F6C9D0, &qword_4B07560, &off_47CFE00);
  qword_4B074B0 = 0;
  qword_4B074A0 = (__int64)&off_4A6E058;
  qword_4B074A8 = (unsigned int)qword_4B074A8 & 0x80000000;
  qword_4B074E0 = (__int64)&qword_4B074F0;
  qword_4B074B8 = 0;
  qword_4B074C0 = 0;
  qword_4B074C8 = 0;
  qword_4B074D0 = 0;
  qword_4B074D8 = 0;
  qword_4B074E8 = 0x100000000LL;
  qword_4B074F8 = (__int64)&qword_4B07510;
  qword_4B07500 = 1;
  dword_4B07508 = 0;
  byte_4B0750C = 1;
  v9 = sub_259AC30(sub_1F6C9D0, &qword_4B074F0);
  v10 = (unsigned int)qword_4B074E8;
  v11 = (unsigned int)qword_4B074E8 + 1LL;
  if ( HIDWORD(qword_4B074E8) < v11 )
  {
    sub_25D6060(&qword_4B074F0 - 2, &qword_4B074F0, v11, 8);
    v10 = (unsigned int)qword_4B074E8;
  }
  v12 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4B074E0 + 8 * v10) = v9;
  word_4B07528 = 0;
  xmmword_4B07538 = 0;
  qword_4B07520 = (__int64)&off_4A64730;
  xmmword_4B07548 = (__int128)v12;
  LODWORD(qword_4B074E8) = qword_4B074E8 + 1;
  qword_4B074A0 = (__int64)off_4A6DFF0;
  byte_4B07518 = 0;
  qword_4B07530 = (__int64)off_49D9168;
  sub_259F400(&qword_4B074A0, "unroll-allow-loop-nests-peeling", 31);
  byte_4B07518 = 0;
  word_4B07528 = 256;
  qword_4B074C8 = 31;
  BYTE2(qword_4B074A8) = BYTE2(qword_4B074A8) & 0x9F | 0x20;
  qword_4B074C0 = (__int64)"Allows loop nests to be peeled.";
  sub_259EC40(&qword_4B074A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B074A0, &off_47CFE00);
  qword_4B073F0 = 0;
  qword_4B073E0 = (__int64)&off_4A6E058;
  qword_4B073E8 = (unsigned int)qword_4B073E8 & 0x80000000;
  qword_4B07420 = (__int64)&qword_4B07430;
  qword_4B073F8 = 0;
  qword_4B07400 = 0;
  qword_4B07408 = 0;
  qword_4B07410 = 0;
  qword_4B07418 = 0;
  qword_4B07428 = 0x100000000LL;
  qword_4B07438 = (__int64)&qword_4B07450;
  qword_4B07440 = 1;
  dword_4B07448 = 0;
  byte_4B0744C = 1;
  v13 = sub_259AC30(sub_1F6C9D0, &qword_4B07430);
  v14 = (unsigned int)qword_4B07428;
  if ( HIDWORD(qword_4B07428) < (unsigned __int64)(unsigned int)qword_4B07428 + 1 )
  {
    v26 = v13;
    sub_25D6060(&qword_4B07430 - 2, &qword_4B07430, (unsigned int)qword_4B07428 + 1LL, 8);
    v14 = (unsigned int)qword_4B07428;
    v13 = v26;
  }
  v15 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4B07420 + 8 * v14) = v13;
  xmmword_4B07478 = 0;
  xmmword_4B07488 = (__int128)v15;
  qword_4B07460 = (__int64)&off_4A64710;
  LODWORD(qword_4B07428) = qword_4B07428 + 1;
  byte_4B0746C = 0;
  qword_4B073E0 = (__int64)off_4A6DEB8;
  dword_4B07458 = 0;
  dword_4B07468 = 0;
  qword_4B07470 = (__int64)off_49D9228;
  sub_259F400(&qword_4B073E0, "unroll-peel-max-count", 21);
  dword_4B07458 = 7;
  byte_4B0746C = 1;
  dword_4B07468 = 7;
  qword_4B07408 = 53;
  BYTE2(qword_4B073E8) = BYTE2(qword_4B073E8) & 0x9F | 0x20;
  qword_4B07400 = (__int64)"Max average trip count which will cause loop peeling.";
  sub_259EC40(&qword_4B073E0);
  __cxa_atexit(sub_1F6C940, &qword_4B073E0, &off_47CFE00);
  qword_4B07330 = 0;
  qword_4B07320 = (__int64)&off_4A6E058;
  qword_4B07328 = (unsigned int)qword_4B07328 & 0x80000000;
  qword_4B07360 = (__int64)&qword_4B07370;
  qword_4B07338 = 0;
  qword_4B07340 = 0;
  qword_4B07348 = 0;
  qword_4B07350 = 0;
  qword_4B07358 = 0;
  qword_4B07368 = 0x100000000LL;
  qword_4B07378 = (__int64)&qword_4B07390;
  qword_4B07380 = 1;
  dword_4B07388 = 0;
  byte_4B0738C = 1;
  v16 = sub_259AC30(sub_1F6C940, &qword_4B07370);
  v17 = (unsigned int)qword_4B07368;
  if ( HIDWORD(qword_4B07368) < (unsigned __int64)(unsigned int)qword_4B07368 + 1 )
  {
    v26 = v16;
    sub_25D6060(&qword_4B07370 - 2, &qword_4B07370, (unsigned int)qword_4B07368 + 1LL, 8);
    v17 = (unsigned int)qword_4B07368;
    v16 = v26;
  }
  v18 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4B07360 + 8 * v17) = v16;
  xmmword_4B073B8 = 0;
  xmmword_4B073C8 = (__int128)v18;
  qword_4B073A0 = (__int64)&off_4A64710;
  LODWORD(qword_4B07368) = qword_4B07368 + 1;
  byte_4B073AC = 0;
  qword_4B07320 = (__int64)off_4A6DEB8;
  dword_4B07398 = 0;
  dword_4B073A8 = 0;
  qword_4B073B0 = (__int64)off_49D9228;
  sub_259F400(&qword_4B07320, "unroll-force-peel-count", 23);
  dword_4B07398 = 0;
  byte_4B073AC = 1;
  dword_4B073A8 = 0;
  qword_4B07348 = 55;
  BYTE2(qword_4B07328) = BYTE2(qword_4B07328) & 0x9F | 0x20;
  qword_4B07340 = (__int64)"Force a peel count regardless of profiling information.";
  sub_259EC40(&qword_4B07320);
  __cxa_atexit(sub_1F6C940, &qword_4B07320, &off_47CFE00);
  qword_4B072A8 = 0x100000000LL;
  qword_4B07260 = (__int64)&off_4A6E058;
  qword_4B07268 = (unsigned int)qword_4B07268 & 0x80000000;
  qword_4B072A0 = (__int64)&qword_4B072B0;
  qword_4B07270 = 0;
  qword_4B07278 = 0;
  qword_4B07280 = 0;
  qword_4B07288 = 0;
  qword_4B07290 = 0;
  qword_4B07298 = 0;
  qword_4B072B8 = (__int64)&qword_4B072D0;
  qword_4B072C0 = 1;
  dword_4B072C8 = 0;
  byte_4B072CC = 1;
  v19 = sub_259AC30(sub_1F6C940, &qword_4B072B0);
  v20 = (unsigned int)qword_4B072A8;
  v21 = (unsigned int)qword_4B072A8 + 1LL;
  if ( HIDWORD(qword_4B072A8) < v21 )
  {
    sub_25D6060(&qword_4B072B0 - 2, &qword_4B072B0, v21, 8);
    v20 = (unsigned int)qword_4B072A8;
  }
  v22 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4B072A0 + 8 * v20) = v19;
  word_4B072E8 = 0;
  xmmword_4B072F8 = 0;
  xmmword_4B07308 = (__int128)v22;
  qword_4B072E0 = (__int64)&off_4A64730;
  LODWORD(qword_4B072A8) = qword_4B072A8 + 1;
  byte_4B072D8 = 0;
  qword_4B07260 = (__int64)off_4A6DFF0;
  qword_4B072F0 = (__int64)off_49D9168;
  sub_259F400(&qword_4B07260, "disable-advanced-peeling", 24);
  word_4B072E8 = 256;
  byte_4B072D8 = 0;
  qword_4B07288 = 65;
  BYTE2(qword_4B07268) = BYTE2(qword_4B07268) & 0x9F | 0x20;
  qword_4B07280 = (__int64)"Disable advance peeling. Issues for convergent targets (D134803).";
  sub_259EC40(&qword_4B07260);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B07260, &off_47CFE00);
}

