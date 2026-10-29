int __fastcall sub_59EDD0(__int64 a1)
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
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
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

  qword_4AFF7C0 = (__int64)&qword_4AFF7D0;
  qword_4AFF790 = 0;
  qword_4AFF798 = 0;
  qword_4AFF780 = (__int64)&off_4A6E058;
  qword_4AFF788 = (unsigned int)qword_4AFF788 & 0x80000000;
  qword_4AFF7D8 = (__int64)&qword_4AFF7F0;
  v24 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB390), (__m128i)(unsigned __int64)nullsub_266);
  v25 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49EB398), (__m128i)(unsigned __int64)nullsub_267);
  qword_4AFF7A0 = 0;
  qword_4AFF7A8 = 0;
  qword_4AFF7B0 = 0;
  qword_4AFF7B8 = 0;
  qword_4AFF7C8 = 0x100000000LL;
  dword_4AFF7E8 = 0;
  qword_4AFF7E0 = 1;
  byte_4AFF7EC = 1;
  v1 = sub_259AC30(a1, &qword_4AFF7D0);
  v2 = (unsigned int)qword_4AFF7C8;
  v3 = (unsigned int)qword_4AFF7C8 + 1LL;
  if ( HIDWORD(qword_4AFF7C8) < v3 )
  {
    sub_25D6060(&qword_4AFF7D0 - 2, &qword_4AFF7D0, v3, 8);
    v2 = (unsigned int)qword_4AFF7C8;
  }
  v4 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4AFF7C0 + 8 * v2) = v1;
  word_4AFF808 = 0;
  xmmword_4AFF818 = 0;
  qword_4AFF800 = (__int64)&off_4A64730;
  xmmword_4AFF828 = (__int128)v4;
  LODWORD(qword_4AFF7C8) = qword_4AFF7C8 + 1;
  qword_4AFF780 = (__int64)off_4A6DFF0;
  byte_4AFF7F8 = 0;
  qword_4AFF810 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFF780, "enable-linkonceodr-outlining", 28);
  qword_4AFF7A8 = 52;
  byte_4AFF7F8 = 0;
  BYTE2(qword_4AFF788) = BYTE2(qword_4AFF788) & 0x9F | 0x20;
  qword_4AFF7A0 = (__int64)"Enable the machine outliner on linkonceodr functions";
  word_4AFF808 = 256;
  sub_259EC40(&qword_4AFF780);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFF780, &off_47CFE00);
  qword_4AFF6D0 = 0;
  qword_4AFF6C0 = (__int64)&off_4A6E058;
  qword_4AFF6C8 = (unsigned int)qword_4AFF6C8 & 0x80000000;
  qword_4AFF700 = (__int64)&qword_4AFF710;
  qword_4AFF6D8 = 0;
  qword_4AFF6E0 = 0;
  qword_4AFF6E8 = 0;
  qword_4AFF6F0 = 0;
  qword_4AFF6F8 = 0;
  qword_4AFF708 = 0x100000000LL;
  qword_4AFF718 = (__int64)&qword_4AFF730;
  qword_4AFF720 = 1;
  dword_4AFF728 = 0;
  byte_4AFF72C = 1;
  v5 = sub_259AC30(sub_1F6C9D0, &qword_4AFF710);
  v6 = (unsigned int)qword_4AFF708;
  v7 = (unsigned int)qword_4AFF708 + 1LL;
  if ( HIDWORD(qword_4AFF708) < v7 )
  {
    sub_25D6060(&qword_4AFF710 - 2, &qword_4AFF710, v7, 8);
    v6 = (unsigned int)qword_4AFF708;
  }
  v8 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4AFF700 + 8 * v6) = v5;
  xmmword_4AFF758 = 0;
  xmmword_4AFF768 = (__int128)v8;
  qword_4AFF740 = (__int64)&off_4A64710;
  LODWORD(qword_4AFF708) = qword_4AFF708 + 1;
  byte_4AFF74C = 0;
  qword_4AFF6C0 = (__int64)off_4A6DEB8;
  dword_4AFF738 = 0;
  dword_4AFF748 = 0;
  qword_4AFF750 = (__int64)off_49D9228;
  sub_259F400(&qword_4AFF6C0, "machine-outliner-reruns", 23);
  dword_4AFF738 = 0;
  byte_4AFF74C = 1;
  dword_4AFF748 = 0;
  qword_4AFF6E8 = 63;
  BYTE2(qword_4AFF6C8) = BYTE2(qword_4AFF6C8) & 0x9F | 0x20;
  qword_4AFF6E0 = (__int64)"Number of times to rerun the outliner after the initial outline";
  sub_259EC40(&qword_4AFF6C0);
  __cxa_atexit(sub_1F6C940, &qword_4AFF6C0, &off_47CFE00);
  qword_4AFF610 = 0;
  qword_4AFF600 = (__int64)&off_4A6E058;
  qword_4AFF608 = (unsigned int)qword_4AFF608 & 0x80000000;
  qword_4AFF640 = (__int64)&qword_4AFF650;
  qword_4AFF618 = 0;
  qword_4AFF620 = 0;
  qword_4AFF628 = 0;
  qword_4AFF630 = 0;
  qword_4AFF638 = 0;
  qword_4AFF648 = 0x100000000LL;
  qword_4AFF658 = (__int64)&qword_4AFF670;
  qword_4AFF660 = 1;
  dword_4AFF668 = 0;
  byte_4AFF66C = 1;
  v9 = sub_259AC30(sub_1F6C940, &qword_4AFF650);
  v10 = (unsigned int)qword_4AFF648;
  if ( HIDWORD(qword_4AFF648) < (unsigned __int64)(unsigned int)qword_4AFF648 + 1 )
  {
    v26 = v9;
    sub_25D6060(&qword_4AFF650 - 2, &qword_4AFF650, (unsigned int)qword_4AFF648 + 1LL, 8);
    v10 = (unsigned int)qword_4AFF648;
    v9 = v26;
  }
  v11 = _mm_load_si128(&v25);
  *(_QWORD *)(qword_4AFF640 + 8 * v10) = v9;
  xmmword_4AFF698 = 0;
  xmmword_4AFF6A8 = (__int128)v11;
  qword_4AFF680 = (__int64)&off_4A64710;
  LODWORD(qword_4AFF648) = qword_4AFF648 + 1;
  byte_4AFF68C = 0;
  qword_4AFF600 = (__int64)off_4A6DEB8;
  dword_4AFF678 = 0;
  dword_4AFF688 = 0;
  qword_4AFF690 = (__int64)off_49D9228;
  sub_259F400(&qword_4AFF600, "outliner-benefit-threshold", 26);
  dword_4AFF678 = 1;
  byte_4AFF68C = 1;
  dword_4AFF688 = 1;
  qword_4AFF628 = 67;
  BYTE2(qword_4AFF608) = BYTE2(qword_4AFF608) & 0x9F | 0x20;
  qword_4AFF620 = (__int64)"The minimum size in bytes before an outlining candidate is accepted";
  sub_259EC40(&qword_4AFF600);
  __cxa_atexit(sub_1F6C940, &qword_4AFF600, &off_47CFE00);
  qword_4AFF550 = 0;
  qword_4AFF540 = (__int64)&off_4A6E058;
  qword_4AFF548 = (unsigned int)qword_4AFF548 & 0x80000000;
  qword_4AFF580 = (__int64)&qword_4AFF590;
  qword_4AFF558 = 0;
  qword_4AFF560 = 0;
  qword_4AFF568 = 0;
  qword_4AFF570 = 0;
  qword_4AFF578 = 0;
  qword_4AFF588 = 0x100000000LL;
  qword_4AFF598 = (__int64)&qword_4AFF5B0;
  qword_4AFF5A0 = 1;
  dword_4AFF5A8 = 0;
  byte_4AFF5AC = 1;
  v12 = sub_259AC30(sub_1F6C940, &qword_4AFF590);
  v13 = (unsigned int)qword_4AFF588;
  v14 = (unsigned int)qword_4AFF588 + 1LL;
  if ( HIDWORD(qword_4AFF588) < v14 )
  {
    sub_25D6060(&qword_4AFF590 - 2, &qword_4AFF590, v14, 8);
    v13 = (unsigned int)qword_4AFF588;
  }
  v15 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4AFF580 + 8 * v13) = v12;
  word_4AFF5C8 = 0;
  xmmword_4AFF5D8 = 0;
  qword_4AFF5C0 = (__int64)&off_4A64730;
  xmmword_4AFF5E8 = (__int128)v15;
  LODWORD(qword_4AFF588) = qword_4AFF588 + 1;
  qword_4AFF540 = (__int64)off_4A6DFF0;
  byte_4AFF5B8 = 0;
  qword_4AFF5D0 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFF540, "outliner-leaf-descendants", 25);
  byte_4AFF5B8 = 1;
  word_4AFF5C8 = 257;
  qword_4AFF568 = 140;
  BYTE2(qword_4AFF548) = BYTE2(qword_4AFF548) & 0x9F | 0x20;
  qword_4AFF560 = (__int64)"Consider all leaf descendants of internal nodes of the suffix tree as candidates for outlinin"
                           "g (if false, only leaf children are considered)";
  sub_259EC40(&qword_4AFF540);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFF540, &off_47CFE00);
  qword_4AFF490 = 0;
  qword_4AFF480 = (__int64)&off_4A6E058;
  qword_4AFF488 = (unsigned int)qword_4AFF488 & 0x80000000;
  qword_4AFF4C0 = (__int64)&qword_4AFF4D0;
  qword_4AFF498 = 0;
  qword_4AFF4A0 = 0;
  qword_4AFF4A8 = 0;
  qword_4AFF4B0 = 0;
  qword_4AFF4B8 = 0;
  qword_4AFF4C8 = 0x100000000LL;
  qword_4AFF4D8 = (__int64)&qword_4AFF4F0;
  qword_4AFF4E0 = 1;
  dword_4AFF4E8 = 0;
  byte_4AFF4EC = 1;
  v16 = sub_259AC30(sub_1F6C9D0, &qword_4AFF4D0);
  v17 = (unsigned int)qword_4AFF4C8;
  if ( HIDWORD(qword_4AFF4C8) < (unsigned __int64)(unsigned int)qword_4AFF4C8 + 1 )
  {
    v25.m128i_i64[0] = v16;
    sub_25D6060(&qword_4AFF4D0 - 2, &qword_4AFF4D0, (unsigned int)qword_4AFF4C8 + 1LL, 8);
    v17 = (unsigned int)qword_4AFF4C8;
    v16 = v25.m128i_i64[0];
  }
  v18 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4AFF4C0 + 8 * v17) = v16;
  word_4AFF508 = 0;
  xmmword_4AFF518 = 0;
  qword_4AFF500 = (__int64)&off_4A64730;
  xmmword_4AFF528 = (__int128)v18;
  LODWORD(qword_4AFF4C8) = qword_4AFF4C8 + 1;
  qword_4AFF480 = (__int64)off_4A6DFF0;
  byte_4AFF4F8 = 0;
  qword_4AFF510 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFF480, "disable-global-outlining", 24);
  qword_4AFF4A8 = 76;
  byte_4AFF4F8 = 0;
  BYTE2(qword_4AFF488) = BYTE2(qword_4AFF488) & 0x9F | 0x20;
  qword_4AFF4A0 = (__int64)"Disable global outlining only by ignoring the codegen data generation or use";
  word_4AFF508 = 256;
  sub_259EC40(&qword_4AFF480);
  __cxa_atexit(sub_1F6C9D0, &qword_4AFF480, &off_47CFE00);
  qword_4AFF408 = 0x100000000LL;
  qword_4AFF3C0 = (__int64)&off_4A6E058;
  qword_4AFF3C8 = (unsigned int)qword_4AFF3C8 & 0x80000000;
  qword_4AFF400 = (__int64)&qword_4AFF410;
  qword_4AFF3D0 = 0;
  qword_4AFF3D8 = 0;
  qword_4AFF3E0 = 0;
  qword_4AFF3E8 = 0;
  qword_4AFF3F0 = 0;
  qword_4AFF3F8 = 0;
  qword_4AFF418 = (__int64)&qword_4AFF430;
  qword_4AFF420 = 1;
  dword_4AFF428 = 0;
  byte_4AFF42C = 1;
  v19 = sub_259AC30(sub_1F6C9D0, &qword_4AFF410);
  v20 = (unsigned int)qword_4AFF408;
  v21 = (unsigned int)qword_4AFF408 + 1LL;
  if ( HIDWORD(qword_4AFF408) < v21 )
  {
    sub_25D6060(&qword_4AFF410 - 2, &qword_4AFF410, v21, 8);
    v20 = (unsigned int)qword_4AFF408;
  }
  v22 = _mm_load_si128(&v24);
  *(_QWORD *)(qword_4AFF400 + 8 * v20) = v19;
  word_4AFF448 = 0;
  xmmword_4AFF458 = 0;
  xmmword_4AFF468 = (__int128)v22;
  qword_4AFF440 = (__int64)&off_4A64730;
  LODWORD(qword_4AFF408) = qword_4AFF408 + 1;
  byte_4AFF438 = 0;
  qword_4AFF3C0 = (__int64)off_4A6DFF0;
  qword_4AFF450 = (__int64)off_49D9168;
  sub_259F400(&qword_4AFF3C0, "append-content-hash-outlined-name", 33);
  word_4AFF448 = 257;
  qword_4AFF3E8 = 173;
  byte_4AFF438 = 1;
  BYTE2(qword_4AFF3C8) = BYTE2(qword_4AFF3C8) & 0x9F | 0x20;
  qword_4AFF3E0 = (__int64)"This appends the content hash to the globally outlined function name. It's beneficial for enh"
                           "ancing the precision of the stable hash and for ordering the outlined functions.";
  sub_259EC40(&qword_4AFF3C0);
  return __cxa_atexit(sub_1F6C9D0, &qword_4AFF3C0, &off_47CFE00);
}

