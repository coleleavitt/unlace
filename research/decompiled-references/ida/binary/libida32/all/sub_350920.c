int sub_350920()
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
  qword_2CE4850 = 0;
  v1 = v0;
  qword_2CE4858 = 0;
  qword_2CE4860 = 0;
  qword_2CE4840 = (__int64)&off_2C4B8B0;
  qword_2CE4848 = (unsigned int)qword_2CE4848 & 0x80000000;
  qword_2CE4888 = 0x100000000LL;
  qword_2CE4868 = 0;
  qword_2CE4870 = 0;
  qword_2CE4878 = 0;
  qword_2CE4880 = (__int64)&unk_2CE4890;
  qword_2CE4898 = (__int64)&unk_2CE48B0;
  qword_2CE48A0 = 1;
  dword_2CE48A8 = 0;
  byte_2CE48AC = 1;
  v2 = sub_21ED2B0("Prefixes for functions that don't need to be renamed, separated by a comma");
  v3 = (unsigned int)qword_2CE4888;
  v4 = (unsigned int)qword_2CE4888 + 1LL;
  if ( v4 > HIDWORD(qword_2CE4888) )
  {
    v22 = (char *)v2;
    sub_22134E0((char *)&unk_2CE4890 - 16, &unk_2CE4890, v4, 8);
    v3 = (unsigned int)qword_2CE4888;
    v2 = (__int64)v22;
  }
  v22 = (char *)off_2BC0B48;
  v5 = _mm_loadh_ps((const double *)off_2C4D938);
  *(_QWORD *)(qword_2CE4880 + 8 * v3) = v2;
  qword_2CE48B8 = (__int64)&byte_2CE48C8;
  v23.m128i_i64[0] = (__int64)&byte_2CE48F0;
  qword_2CE4840 = (__int64)off_2C4B7E0;
  xmmword_2CE4920 = (__int128)v5;
  v6 = _mm_loadh_ps((const double *)v23.m128i_i64);
  v23 = (__m128i)v5;
  xmmword_2CE48D8 = (__int128)v6;
  LODWORD(qword_2CE4888) = qword_2CE4888 + 1;
  qword_2CE4908 = (__int64)off_2BC0CB8;
  qword_2CE48C0 = 0;
  byte_2CE48C8 = 0;
  qword_2CE48E8 = 0;
  byte_2CE48F0 = 0;
  byte_2CE4900 = 0;
  sub_21F3510(&qword_2CE4840, "rename-exclude-function-prefixes", 32);
  qword_2CE4868 = v1;
  qword_2CE4860 = (__int64)"Prefixes for functions that don't need to be renamed, separated by a comma";
  BYTE2(qword_2CE4848) = BYTE2(qword_2CE4848) & 0x9F | 0x20;
  sub_21F4400(&qword_2CE4840);
  __cxa_atexit(sub_1FC95A0, &qword_2CE4840, &off_2AFC540);
  v7 = j__strlen("Prefixes for aliases that don't need to be renamed, separated by a comma");
  qword_2CE4780 = (__int64)&unk_2CE4790;
  v8 = v7;
  qword_2CE4750 = 0;
  qword_2CE4740 = (__int64)&off_2C4B8B0;
  qword_2CE4748 = (unsigned int)qword_2CE4748 & 0x80000000;
  qword_2CE4788 = 0x100000000LL;
  qword_2CE4758 = 0;
  qword_2CE4760 = 0;
  qword_2CE4768 = 0;
  qword_2CE4770 = 0;
  qword_2CE4778 = 0;
  qword_2CE4798 = (__int64)&unk_2CE47B0;
  qword_2CE47A0 = 1;
  dword_2CE47A8 = 0;
  byte_2CE47AC = 1;
  v9 = sub_21ED2B0("Prefixes for aliases that don't need to be renamed, separated by a comma");
  v10 = (unsigned int)qword_2CE4788;
  v11 = _mm_load_si128(&v23);
  v12 = (unsigned int)qword_2CE4788 + 1LL;
  if ( v12 > HIDWORD(qword_2CE4788) )
  {
    v24 = v11;
    v23.m128i_i64[0] = v9;
    sub_22134E0((char *)&unk_2CE4790 - 16, &unk_2CE4790, v12, 8);
    v10 = (unsigned int)qword_2CE4788;
    v11 = _mm_load_si128(&v24);
    v9 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE4780 + 8 * v10) = v9;
  qword_2CE47B8 = (__int64)&byte_2CE47C8;
  v22 = &byte_2CE47F0;
  qword_2CE4740 = (__int64)off_2C4B7E0;
  xmmword_2CE4820 = (__int128)v11;
  v13 = _mm_loadh_ps((const double *)&v22);
  qword_2CE4808 = (__int64)off_2BC0CB8;
  xmmword_2CE47D8 = (__int128)v13;
  LODWORD(qword_2CE4788) = qword_2CE4788 + 1;
  qword_2CE47C0 = 0;
  byte_2CE47C8 = 0;
  qword_2CE47E8 = 0;
  byte_2CE47F0 = 0;
  byte_2CE4800 = 0;
  sub_21F3510(&qword_2CE4740, "rename-exclude-alias-prefixes", 29);
  qword_2CE4768 = v8;
  qword_2CE4760 = (__int64)"Prefixes for aliases that don't need to be renamed, separated by a comma";
  BYTE2(qword_2CE4748) = BYTE2(qword_2CE4748) & 0x9F | 0x20;
  sub_21F4400(&qword_2CE4740);
  __cxa_atexit(sub_1FC95A0, &qword_2CE4740, &off_2AFC540);
  v25 = 1;
  v14 = j__strlen("Prefixes for global values that don't need to be renamed, separated by a comma");
  v26 = "Prefixes for global values that don't need to be renamed, separated by a comma";
  v27 = v14;
  sub_22A4620(&unk_2CE4640, "rename-exclude-global-prefixes", &v26, &v25);
  __cxa_atexit(sub_1FC95A0, &unk_2CE4640, &off_2AFC540);
  v25 = 1;
  v15 = j__strlen("Prefixes for structs that don't need to be renamed, separated by a comma");
  v26 = "Prefixes for structs that don't need to be renamed, separated by a comma";
  v27 = v15;
  sub_22A4620(&unk_2CE4540, "rename-exclude-struct-prefixes", &v26, &v25);
  __cxa_atexit(sub_1FC95A0, &unk_2CE4540, &off_2AFC540);
  v16 = j__strlen("only rename the instructions in the function");
  byte_2CE44EC = 1;
  qword_2CE4490 = 0;
  v17 = v16;
  qword_2CE4480 = (__int64)&off_2C4B8B0;
  qword_2CE4488 = (unsigned int)qword_2CE4488 & 0x80000000;
  qword_2CE44C8 = 0x100000000LL;
  qword_2CE4498 = 0;
  qword_2CE44A0 = 0;
  qword_2CE44A8 = 0;
  qword_2CE44B0 = 0;
  qword_2CE44B8 = 0;
  qword_2CE44C0 = (__int64)&unk_2CE44D0;
  qword_2CE44D8 = (__int64)&unk_2CE44F0;
  qword_2CE44E0 = 1;
  dword_2CE44E8 = 0;
  v18 = sub_21ED2B0("only rename the instructions in the function");
  v19 = (unsigned int)qword_2CE44C8;
  v20 = (unsigned int)qword_2CE44C8 + 1LL;
  if ( v20 > HIDWORD(qword_2CE44C8) )
  {
    v22 = (char *)v18;
    sub_22134E0((char *)&unk_2CE44D0 - 16, &unk_2CE44D0, v20, 8);
    v19 = (unsigned int)qword_2CE44C8;
    v18 = (__int64)v22;
  }
  *(_QWORD *)(qword_2CE44C0 + 8 * v19) = v18;
  word_2CE4508 = 0;
  xmmword_2CE4528 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CE44C8) = qword_2CE44C8 + 1;
  qword_2CE4500 = (__int64)off_2C474E8;
  byte_2CE44F8 = 0;
  qword_2CE4480 = (__int64)off_2C4B848;
  qword_2CE4510 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CE4480, "rename-only-inst", 16);
  qword_2CE44A0 = (__int64)"only rename the instructions in the function";
  word_2CE4508 = 256;
  qword_2CE44A8 = v17;
  byte_2CE44F8 = 0;
  BYTE2(qword_2CE4488) = BYTE2(qword_2CE4488) & 0x9F | 0x20;
  sub_21F4400(&qword_2CE4480);
  return __cxa_atexit(sub_1FEA450, &qword_2CE4480, &off_2AFC540);
}

