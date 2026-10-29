int sub_353CE0()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  size_t v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128i v11; // xmm1
  unsigned __int64 v12; // rdx
  __m128 v13; // xmm0
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  char *v22; // [rsp+8h] [rbp-70h] BYREF
  __m128i v23; // [rsp+10h] [rbp-68h] BYREF
  __m128i v24; // [rsp+20h] [rbp-58h] BYREF
  int v25; // [rsp+3Ch] [rbp-3Ch] BYREF
  const char *v26; // [rsp+40h] [rbp-38h] BYREF
  size_t v27; // [rsp+48h] [rbp-30h]

  v0 = j__strlen("Prefixes for functions that don't need to be renamed, separated by a comma");
  qword_2D0E770 = 0;
  v1 = v0;
  qword_2D0E778 = 0;
  qword_2D0E780 = 0;
  qword_2D0E760 = (__int64)&off_2C758B0;
  qword_2D0E768 = (unsigned int)qword_2D0E768 & 0x80000000;
  qword_2D0E7A8 = 0x100000000LL;
  qword_2D0E788 = 0;
  qword_2D0E790 = 0;
  qword_2D0E798 = 0;
  qword_2D0E7A0 = (__int64)&unk_2D0E7B0;
  qword_2D0E7B8 = (__int64)&unk_2D0E7D0;
  qword_2D0E7C0 = 1;
  dword_2D0E7C8 = 0;
  byte_2D0E7CC = 1;
  v2 = sub_2210FF0("Prefixes for functions that don't need to be renamed, separated by a comma");
  v3 = (unsigned int)qword_2D0E7A8;
  v4 = (unsigned int)qword_2D0E7A8 + 1LL;
  if ( v4 > HIDWORD(qword_2D0E7A8) )
  {
    v22 = (char *)v2;
    sub_2237220((char *)&unk_2D0E7B0 - 16, &unk_2D0E7B0, v4, 8);
    v3 = (unsigned int)qword_2D0E7A8;
    v2 = (__int64)v22;
  }
  v22 = (char *)off_2BEAAE8;
  v5 = _mm_loadh_ps((const double *)off_2C77938);
  *(_QWORD *)(qword_2D0E7A0 + 8 * v3) = v2;
  qword_2D0E7D8 = (__int64)&byte_2D0E7E8;
  v23.m128i_i64[0] = (__int64)&byte_2D0E810;
  qword_2D0E760 = (__int64)off_2C757E0;
  xmmword_2D0E840 = (__int128)v5;
  v6 = _mm_loadh_ps((const double *)v23.m128i_i64);
  v23 = (__m128i)v5;
  xmmword_2D0E7F8 = (__int128)v6;
  LODWORD(qword_2D0E7A8) = qword_2D0E7A8 + 1;
  qword_2D0E828 = (__int64)off_2BEAC58;
  qword_2D0E7E0 = 0;
  byte_2D0E7E8 = 0;
  qword_2D0E808 = 0;
  byte_2D0E810 = 0;
  byte_2D0E820 = 0;
  sub_2217250(&qword_2D0E760, "rename-exclude-function-prefixes", 32);
  qword_2D0E788 = v1;
  qword_2D0E780 = (__int64)"Prefixes for functions that don't need to be renamed, separated by a comma";
  BYTE2(qword_2D0E768) = BYTE2(qword_2D0E768) & 0x9F | 0x20;
  sub_2218140(&qword_2D0E760);
  __cxa_atexit(sub_1FED2E0, &qword_2D0E760, &off_2B25620);
  v7 = j__strlen("Prefixes for aliases that don't need to be renamed, separated by a comma");
  qword_2D0E6A0 = (__int64)&unk_2D0E6B0;
  v8 = v7;
  qword_2D0E670 = 0;
  qword_2D0E660 = (__int64)&off_2C758B0;
  qword_2D0E668 = (unsigned int)qword_2D0E668 & 0x80000000;
  qword_2D0E6A8 = 0x100000000LL;
  qword_2D0E678 = 0;
  qword_2D0E680 = 0;
  qword_2D0E688 = 0;
  qword_2D0E690 = 0;
  qword_2D0E698 = 0;
  qword_2D0E6B8 = (__int64)&unk_2D0E6D0;
  qword_2D0E6C0 = 1;
  dword_2D0E6C8 = 0;
  byte_2D0E6CC = 1;
  v9 = sub_2210FF0("Prefixes for aliases that don't need to be renamed, separated by a comma");
  v10 = (unsigned int)qword_2D0E6A8;
  v11 = _mm_load_si128(&v23);
  v12 = (unsigned int)qword_2D0E6A8 + 1LL;
  if ( v12 > HIDWORD(qword_2D0E6A8) )
  {
    v24 = v11;
    v23.m128i_i64[0] = v9;
    sub_2237220((char *)&unk_2D0E6B0 - 16, &unk_2D0E6B0, v12, 8);
    v10 = (unsigned int)qword_2D0E6A8;
    v11 = _mm_load_si128(&v24);
    v9 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2D0E6A0 + 8 * v10) = v9;
  qword_2D0E6D8 = (__int64)&byte_2D0E6E8;
  v22 = &byte_2D0E710;
  qword_2D0E660 = (__int64)off_2C757E0;
  xmmword_2D0E740 = (__int128)v11;
  v13 = _mm_loadh_ps((const double *)&v22);
  qword_2D0E728 = (__int64)off_2BEAC58;
  xmmword_2D0E6F8 = (__int128)v13;
  LODWORD(qword_2D0E6A8) = qword_2D0E6A8 + 1;
  qword_2D0E6E0 = 0;
  byte_2D0E6E8 = 0;
  qword_2D0E708 = 0;
  byte_2D0E710 = 0;
  byte_2D0E720 = 0;
  sub_2217250(&qword_2D0E660, "rename-exclude-alias-prefixes", 29);
  qword_2D0E688 = v8;
  qword_2D0E680 = (__int64)"Prefixes for aliases that don't need to be renamed, separated by a comma";
  BYTE2(qword_2D0E668) = BYTE2(qword_2D0E668) & 0x9F | 0x20;
  sub_2218140(&qword_2D0E660);
  __cxa_atexit(sub_1FED2E0, &qword_2D0E660, &off_2B25620);
  v25 = 1;
  v14 = j__strlen("Prefixes for global values that don't need to be renamed, separated by a comma");
  v26 = "Prefixes for global values that don't need to be renamed, separated by a comma";
  v27 = v14;
  sub_22C8360(&unk_2D0E560, "rename-exclude-global-prefixes", &v26, &v25);
  __cxa_atexit(sub_1FED2E0, &unk_2D0E560, &off_2B25620);
  v25 = 1;
  v15 = j__strlen("Prefixes for structs that don't need to be renamed, separated by a comma");
  v26 = "Prefixes for structs that don't need to be renamed, separated by a comma";
  v27 = v15;
  sub_22C8360(&unk_2D0E460, "rename-exclude-struct-prefixes", &v26, &v25);
  __cxa_atexit(sub_1FED2E0, &unk_2D0E460, &off_2B25620);
  v16 = j__strlen("only rename the instructions in the function");
  byte_2D0E40C = 1;
  qword_2D0E3B0 = 0;
  v17 = v16;
  qword_2D0E3A0 = (__int64)&off_2C758B0;
  qword_2D0E3A8 = (unsigned int)qword_2D0E3A8 & 0x80000000;
  qword_2D0E3E8 = 0x100000000LL;
  qword_2D0E3B8 = 0;
  qword_2D0E3C0 = 0;
  qword_2D0E3C8 = 0;
  qword_2D0E3D0 = 0;
  qword_2D0E3D8 = 0;
  qword_2D0E3E0 = (__int64)&unk_2D0E3F0;
  qword_2D0E3F8 = (__int64)&unk_2D0E410;
  qword_2D0E400 = 1;
  dword_2D0E408 = 0;
  v18 = sub_2210FF0("only rename the instructions in the function");
  v19 = (unsigned int)qword_2D0E3E8;
  v20 = (unsigned int)qword_2D0E3E8 + 1LL;
  if ( v20 > HIDWORD(qword_2D0E3E8) )
  {
    v22 = (char *)v18;
    sub_2237220((char *)&unk_2D0E3F0 - 16, &unk_2D0E3F0, v20, 8);
    v19 = (unsigned int)qword_2D0E3E8;
    v18 = (__int64)v22;
  }
  *(_QWORD *)(qword_2D0E3E0 + 8 * v19) = v18;
  word_2D0E428 = 0;
  xmmword_2D0E448 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D0E3E8) = qword_2D0E3E8 + 1;
  qword_2D0E420 = (__int64)off_2C714E8;
  byte_2D0E418 = 0;
  qword_2D0E3A0 = (__int64)off_2C75848;
  qword_2D0E430 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0E3A0, "rename-only-inst", 16);
  qword_2D0E3C0 = (__int64)"only rename the instructions in the function";
  word_2D0E428 = 256;
  qword_2D0E3C8 = v17;
  byte_2D0E418 = 0;
  BYTE2(qword_2D0E3A8) = BYTE2(qword_2D0E3A8) & 0x9F | 0x20;
  sub_2218140(&qword_2D0E3A0);
  return __cxa_atexit(sub_200E190, &qword_2D0E3A0, &off_2B25620);
}
