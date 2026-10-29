__int64 *__fastcall sub_56B510(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm5
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm6
  __m128i v13; // [rsp+0h] [rbp-88h] BYREF
  char *v14; // [rsp+10h] [rbp-78h]
  int *v15; // [rsp+18h] [rbp-70h]
  char **v16; // [rsp+20h] [rbp-68h]
  const char **v17; // [rsp+28h] [rbp-60h]
  char v18; // [rsp+33h] [rbp-55h] BYREF
  int v19; // [rsp+34h] [rbp-54h] BYREF
  char *v20; // [rsp+38h] [rbp-50h] BYREF
  const char *v21; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-40h]

  qword_4AE0620 = (__int64)&qword_4AE0630;
  qword_4AE05F0 = 0;
  qword_4AE05F8 = 0;
  qword_4AE05E0 = (__int64)&off_4A6E058;
  qword_4AE05E8 = (unsigned int)qword_4AE05E8 & 0x80000000;
  qword_4AE0638 = (__int64)&qword_4AE0650;
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_49CBFA8), (__m128i)(unsigned __int64)nullsub_266);
  qword_4AE0600 = 0;
  qword_4AE0608 = 0;
  qword_4AE0610 = 0;
  qword_4AE0618 = 0;
  qword_4AE0628 = 0x100000000LL;
  qword_4AE0640 = 1;
  dword_4AE0648 = 0;
  byte_4AE064C = 1;
  v1 = sub_259AC30(a1, &qword_4AE0630);
  v2 = (unsigned int)qword_4AE0628;
  v3 = (unsigned int)qword_4AE0628 + 1LL;
  if ( HIDWORD(qword_4AE0628) < v3 )
  {
    sub_25D6060(&qword_4AE0630 - 2, &qword_4AE0630, v3, 8);
    v2 = (unsigned int)qword_4AE0628;
  }
  *(_QWORD *)(qword_4AE0620 + 8 * v2) = v1;
  qword_4AE0658 = &byte_4AE0668;
  LODWORD(qword_4AE0628) = qword_4AE0628 + 1;
  qword_4AE0660 = 0;
  qword_4AE05E0 = (__int64)&off_4A6DF88;
  xmmword_4AE0678 = (__int128)_mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)&off_49D9118,
                                (__m128i)(unsigned __int64)&byte_4AE0690);
  xmmword_4AE06B0 = 0;
  qword_4AE06A8 = (__int64)off_49D92E8;
  byte_4AE0668 = 0;
  byte_4AE0690 = 0;
  xmmword_4AE06C0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49CBFB8),
                                (__m128i)(unsigned __int64)nullsub_294);
  qword_4AE0688 = 0;
  byte_4AE06A0 = 0;
  sub_259F400(&qword_4AE05E0, "x86-lvi-load-opt-plugin", 23);
  qword_4AE0608 = 45;
  qword_4AE0600 = (__int64)"Specify a plugin to optimize LFENCE insertion";
  BYTE2(qword_4AE05E8) = BYTE2(qword_4AE05E8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE05E0);
  __cxa_atexit(sub_2283FB0, &qword_4AE05E0, &off_47CFE00);
  v19 = 1;
  v14 = &v18;
  v20 = &v18;
  v21 = "Don't treat conditional branches as disclosure gadgets. This may improve performance, at the cost of security.";
  v16 = &v20;
  v15 = &v19;
  v17 = &v21;
  v18 = 0;
  v22 = 110;
  sub_22CB120(qword_4AE0520, "x86-lvi-load-no-cbranch", &v21);
  __cxa_atexit(sub_1F6C9D0, qword_4AE0520, &off_47CFE00);
  qword_4AE0470 = 0;
  qword_4AE04A0 = (__int64)&qword_4AE04B0;
  qword_4AE0478 = 0;
  qword_4AE0460 = (__int64)&off_4A6E058;
  qword_4AE0468 = (unsigned int)qword_4AE0468 & 0x80000000;
  qword_4AE0480 = 0;
  qword_4AE0488 = 0;
  qword_4AE0490 = 0;
  qword_4AE0498 = 0;
  qword_4AE04A8 = 0x100000000LL;
  qword_4AE04B8 = (__int64)&qword_4AE04D0;
  qword_4AE04C0 = 1;
  dword_4AE04C8 = 0;
  byte_4AE04CC = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4AE04B0);
  v5 = (unsigned int)qword_4AE04A8;
  v6 = (unsigned int)qword_4AE04A8 + 1LL;
  if ( HIDWORD(qword_4AE04A8) < v6 )
  {
    sub_25D6060(&qword_4AE04B0 - 2, &qword_4AE04B0, v6, 8);
    v5 = (unsigned int)qword_4AE04A8;
  }
  v7 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4AE04A0 + 8 * v5) = v4;
  word_4AE04E8 = 0;
  qword_4AE04E0 = (__int64)&off_4A64730;
  qword_4AE0460 = (__int64)off_4A6DFF0;
  xmmword_4AE04F8 = 0;
  xmmword_4AE0508 = (__int128)v7;
  LODWORD(qword_4AE04A8) = qword_4AE04A8 + 1;
  qword_4AE04F0 = (__int64)off_49D9168;
  byte_4AE04D8 = 0;
  sub_259F400(&qword_4AE0460, "x86-lvi-load-dot", 16);
  qword_4AE0480 = (__int64)"For each function, emit a dot graph depicting potential LVI gadgets";
  qword_4AE0488 = 67;
  byte_4AE04D8 = 0;
  word_4AE04E8 = 256;
  BYTE2(qword_4AE0468) = BYTE2(qword_4AE0468) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE0460);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE0460, &off_47CFE00);
  qword_4AE03E8 = 0x100000000LL;
  qword_4AE03E0 = (__int64)&qword_4AE03F0;
  qword_4AE03B0 = 0;
  qword_4AE03A0 = (__int64)&off_4A6E058;
  qword_4AE03A8 = (unsigned int)qword_4AE03A8 & 0x80000000;
  qword_4AE03B8 = 0;
  qword_4AE03C0 = 0;
  qword_4AE03C8 = 0;
  qword_4AE03D0 = 0;
  qword_4AE03D8 = 0;
  qword_4AE03F8 = (__int64)&qword_4AE0410;
  qword_4AE0400 = 1;
  dword_4AE0408 = 0;
  byte_4AE040C = 1;
  v8 = sub_259AC30(sub_1F6C9D0, &qword_4AE03F0);
  v9 = (unsigned int)qword_4AE03E8;
  v10 = (unsigned int)qword_4AE03E8 + 1LL;
  if ( HIDWORD(qword_4AE03E8) < v10 )
  {
    sub_25D6060(&qword_4AE03F0 - 2, &qword_4AE03F0, v10, 8);
    v9 = (unsigned int)qword_4AE03E8;
  }
  v11 = _mm_load_si128(&v13);
  *(_QWORD *)(qword_4AE03E0 + 8 * v9) = v8;
  word_4AE0428 = 0;
  xmmword_4AE0438 = 0;
  xmmword_4AE0448 = (__int128)v11;
  qword_4AE03A0 = (__int64)off_4A6DFF0;
  qword_4AE0420 = (__int64)&off_4A64730;
  LODWORD(qword_4AE03E8) = qword_4AE03E8 + 1;
  qword_4AE0430 = (__int64)off_49D9168;
  byte_4AE0418 = 0;
  sub_259F400(&qword_4AE03A0, "x86-lvi-load-dot-only", 21);
  word_4AE0428 = 256;
  qword_4AE03C0 = (__int64)"For each function, emit a dot graph depicting potential LVI gadgets, and do not insert any fences";
  qword_4AE03C8 = 97;
  byte_4AE0418 = 0;
  BYTE2(qword_4AE03A8) = BYTE2(qword_4AE03A8) & 0x9F | 0x20;
  sub_259EC40(&qword_4AE03A0);
  __cxa_atexit(sub_1F6C9D0, &qword_4AE03A0, &off_47CFE00);
  v20 = v14;
  v21 = "For each function, emit a dot graph to stdout depicting potential LVI gadgets, used for testing purposes only";
  v19 = 1;
  v18 = 0;
  v22 = 109;
  sub_22CB120(qword_4AE02E0, "x86-lvi-load-dot-verify", v17);
  __cxa_atexit(sub_1F6C9D0, qword_4AE02E0, &off_47CFE00);
  qword_4AE02D0 = (__int64)&qword_4AE5470;
  return &qword_4AE5470;
}

