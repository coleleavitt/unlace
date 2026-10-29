int sub_2EE650()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __m128i v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __m128i v10; // xmm2
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __m128i v14; // xmm3
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm4
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm5
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __m128i v26; // xmm6
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __m128i v30; // xmm7
  __m128i v32; // [rsp+0h] [rbp-58h] BYREF
  __int64 v33; // [rsp+18h] [rbp-40h]
  _DWORD v34[11]; // [rsp+2Ch] [rbp-2Ch] BYREF

  qword_2CAFD90 = 0;
  qword_2CAFD98 = 0;
  qword_2CAFDA0 = 0;
  qword_2CAFD80 = (__int64)&off_2C4B8B0;
  qword_2CAFD88 = (unsigned int)qword_2CAFD88 & 0x80000000;
  qword_2CAFDC8 = 0x100000000LL;
  qword_2CAFDA8 = 0;
  qword_2CAFDB0 = 0;
  qword_2CAFDB8 = 0;
  qword_2CAFDC0 = (__int64)&unk_2CAFDD0;
  qword_2CAFDD8 = (__int64)&unk_2CAFDF0;
  qword_2CAFDE0 = 1;
  dword_2CAFDE8 = 0;
  byte_2CAFDEC = 1;
  v0 = ((__int64 (*)(void))sub_21ED2B0)();
  v1 = (unsigned int)qword_2CAFDC8;
  v2 = (unsigned int)qword_2CAFDC8 + 1LL;
  if ( v2 > HIDWORD(qword_2CAFDC8) )
  {
    v32.m128i_i64[0] = v0;
    sub_22134E0((char *)&unk_2CAFDD0 - 16, &unk_2CAFDD0, v2, 8);
    v1 = (unsigned int)qword_2CAFDC8;
    v0 = v32.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CAFDC0 + 8 * v1) = v0;
  qword_2CAFE00 = (__int64)off_2C474E8;
  qword_2CAFD80 = (__int64)off_2C4B848;
  v32 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  word_2CAFE08 = 0;
  xmmword_2CAFE28 = (__int128)v32;
  qword_2CAFE10 = (__int64)off_2BC0B68;
  LODWORD(qword_2CAFDC8) = qword_2CAFDC8 + 1;
  byte_2CAFDF8 = 0;
  sub_21F3510(&qword_2CAFD80, "print-all-alias-modref-info", 27);
  BYTE2(qword_2CAFD88) = BYTE2(qword_2CAFD88) & 0x9F | 0x40;
  sub_21F4400(&qword_2CAFD80);
  __cxa_atexit(sub_1FEA450, &qword_2CAFD80, &off_2AFC540);
  qword_2CAFCD0 = 0;
  qword_2CAFCC0 = (__int64)&off_2C4B8B0;
  qword_2CAFCC8 = (unsigned int)qword_2CAFCC8 & 0x80000000;
  qword_2CAFD08 = 0x100000000LL;
  qword_2CAFCD8 = 0;
  qword_2CAFCE0 = 0;
  qword_2CAFCE8 = 0;
  qword_2CAFCF0 = 0;
  qword_2CAFCF8 = 0;
  qword_2CAFD00 = (__int64)&unk_2CAFD10;
  qword_2CAFD18 = (__int64)&unk_2CAFD30;
  qword_2CAFD20 = 1;
  dword_2CAFD28 = 0;
  byte_2CAFD2C = 1;
  v3 = sub_21ED2B0(sub_1FEA450, &qword_2CAFD80);
  v4 = (unsigned int)qword_2CAFD08;
  v5 = (unsigned int)qword_2CAFD08 + 1LL;
  if ( v5 > HIDWORD(qword_2CAFD08) )
  {
    v33 = v3;
    sub_22134E0((char *)&unk_2CAFD10 - 16, &unk_2CAFD10, v5, 8);
    v4 = (unsigned int)qword_2CAFD08;
    v3 = v33;
  }
  v6 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CAFD00 + 8 * v4) = v3;
  qword_2CAFD40 = (__int64)off_2C474E8;
  qword_2CAFCC0 = (__int64)off_2C4B848;
  word_2CAFD48 = 0;
  xmmword_2CAFD68 = (__int128)v6;
  qword_2CAFD50 = (__int64)off_2BC0B68;
  LODWORD(qword_2CAFD08) = qword_2CAFD08 + 1;
  byte_2CAFD38 = 0;
  sub_21F3510(&qword_2CAFCC0, "print-no-aliases", 16);
  BYTE2(qword_2CAFCC8) = BYTE2(qword_2CAFCC8) & 0x9F | 0x40;
  sub_21F4400(&qword_2CAFCC0);
  __cxa_atexit(sub_1FEA450, &qword_2CAFCC0, &off_2AFC540);
  qword_2CAFC10 = 0;
  qword_2CAFC00 = (__int64)&off_2C4B8B0;
  qword_2CAFC08 = (unsigned int)qword_2CAFC08 & 0x80000000;
  qword_2CAFC48 = 0x100000000LL;
  qword_2CAFC18 = 0;
  qword_2CAFC20 = 0;
  qword_2CAFC28 = 0;
  qword_2CAFC30 = 0;
  qword_2CAFC38 = 0;
  qword_2CAFC40 = (__int64)&unk_2CAFC50;
  qword_2CAFC58 = (__int64)&unk_2CAFC70;
  qword_2CAFC60 = 1;
  dword_2CAFC68 = 0;
  byte_2CAFC6C = 1;
  v7 = sub_21ED2B0(sub_1FEA450, &qword_2CAFCC0);
  v8 = (unsigned int)qword_2CAFC48;
  v9 = (unsigned int)qword_2CAFC48 + 1LL;
  if ( v9 > HIDWORD(qword_2CAFC48) )
  {
    v33 = v7;
    sub_22134E0((char *)&unk_2CAFC50 - 16, &unk_2CAFC50, v9, 8);
    v8 = (unsigned int)qword_2CAFC48;
    v7 = v33;
  }
  v10 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CAFC40 + 8 * v8) = v7;
  qword_2CAFC80 = (__int64)off_2C474E8;
  qword_2CAFC00 = (__int64)off_2C4B848;
  word_2CAFC88 = 0;
  xmmword_2CAFCA8 = (__int128)v10;
  qword_2CAFC90 = (__int64)off_2BC0B68;
  LODWORD(qword_2CAFC48) = qword_2CAFC48 + 1;
  byte_2CAFC78 = 0;
  sub_21F3510(&qword_2CAFC00, "print-may-aliases", 17);
  BYTE2(qword_2CAFC08) = BYTE2(qword_2CAFC08) & 0x9F | 0x40;
  sub_21F4400(&qword_2CAFC00);
  __cxa_atexit(sub_1FEA450, &qword_2CAFC00, &off_2AFC540);
  qword_2CAFB50 = 0;
  qword_2CAFB40 = (__int64)&off_2C4B8B0;
  qword_2CAFB48 = (unsigned int)qword_2CAFB48 & 0x80000000;
  qword_2CAFB88 = 0x100000000LL;
  qword_2CAFB58 = 0;
  qword_2CAFB60 = 0;
  qword_2CAFB68 = 0;
  qword_2CAFB70 = 0;
  qword_2CAFB78 = 0;
  qword_2CAFB80 = (__int64)&unk_2CAFB90;
  qword_2CAFB98 = (__int64)&unk_2CAFBB0;
  qword_2CAFBA0 = 1;
  dword_2CAFBA8 = 0;
  byte_2CAFBAC = 1;
  v11 = sub_21ED2B0(sub_1FEA450, &qword_2CAFC00);
  v12 = (unsigned int)qword_2CAFB88;
  v13 = (unsigned int)qword_2CAFB88 + 1LL;
  if ( v13 > HIDWORD(qword_2CAFB88) )
  {
    v33 = v11;
    sub_22134E0((char *)&unk_2CAFB90 - 16, &unk_2CAFB90, v13, 8);
    v12 = (unsigned int)qword_2CAFB88;
    v11 = v33;
  }
  v14 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CAFB80 + 8 * v12) = v11;
  qword_2CAFBC0 = (__int64)off_2C474E8;
  word_2CAFBC8 = 0;
  qword_2CAFB40 = (__int64)off_2C4B848;
  xmmword_2CAFBE8 = (__int128)v14;
  qword_2CAFBD0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CAFB88) = qword_2CAFB88 + 1;
  byte_2CAFBB8 = 0;
  sub_21F3510(&qword_2CAFB40, "print-partial-aliases", 21);
  BYTE2(qword_2CAFB48) = BYTE2(qword_2CAFB48) & 0x9F | 0x40;
  sub_21F4400(&qword_2CAFB40);
  __cxa_atexit(sub_1FEA450, &qword_2CAFB40, &off_2AFC540);
  qword_2CAFA90 = 0;
  qword_2CAFA80 = (__int64)&off_2C4B8B0;
  qword_2CAFA88 = (unsigned int)qword_2CAFA88 & 0x80000000;
  qword_2CAFAC8 = 0x100000000LL;
  qword_2CAFA98 = 0;
  qword_2CAFAA0 = 0;
  qword_2CAFAA8 = 0;
  qword_2CAFAB0 = 0;
  qword_2CAFAB8 = 0;
  qword_2CAFAC0 = (__int64)&unk_2CAFAD0;
  qword_2CAFAD8 = (__int64)&unk_2CAFAF0;
  qword_2CAFAE0 = 1;
  dword_2CAFAE8 = 0;
  byte_2CAFAEC = 1;
  v15 = sub_21ED2B0(sub_1FEA450, &qword_2CAFB40);
  v16 = (unsigned int)qword_2CAFAC8;
  v17 = (unsigned int)qword_2CAFAC8 + 1LL;
  if ( v17 > HIDWORD(qword_2CAFAC8) )
  {
    v33 = v15;
    sub_22134E0((char *)&unk_2CAFAD0 - 16, &unk_2CAFAD0, v17, 8);
    v16 = (unsigned int)qword_2CAFAC8;
    v15 = v33;
  }
  v18 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CAFAC0 + 8 * v16) = v15;
  qword_2CAFB00 = (__int64)off_2C474E8;
  word_2CAFB08 = 0;
  qword_2CAFA80 = (__int64)off_2C4B848;
  xmmword_2CAFB28 = (__int128)v18;
  qword_2CAFB10 = (__int64)off_2BC0B68;
  LODWORD(qword_2CAFAC8) = qword_2CAFAC8 + 1;
  byte_2CAFAF8 = 0;
  sub_21F3510(&qword_2CAFA80, "print-must-aliases", 18);
  BYTE2(qword_2CAFA88) = BYTE2(qword_2CAFA88) & 0x9F | 0x40;
  sub_21F4400(&qword_2CAFA80);
  __cxa_atexit(sub_1FEA450, &qword_2CAFA80, &off_2AFC540);
  qword_2CAF9D0 = 0;
  qword_2CAF9C0 = (__int64)&off_2C4B8B0;
  qword_2CAF9C8 = (unsigned int)qword_2CAF9C8 & 0x80000000;
  qword_2CAFA08 = 0x100000000LL;
  qword_2CAF9D8 = 0;
  qword_2CAF9E0 = 0;
  qword_2CAF9E8 = 0;
  qword_2CAF9F0 = 0;
  qword_2CAF9F8 = 0;
  qword_2CAFA00 = (__int64)&unk_2CAFA10;
  qword_2CAFA18 = (__int64)&unk_2CAFA30;
  qword_2CAFA20 = 1;
  dword_2CAFA28 = 0;
  byte_2CAFA2C = 1;
  v19 = sub_21ED2B0(sub_1FEA450, &qword_2CAFA80);
  v20 = (unsigned int)qword_2CAFA08;
  v21 = (unsigned int)qword_2CAFA08 + 1LL;
  if ( v21 > HIDWORD(qword_2CAFA08) )
  {
    v33 = v19;
    sub_22134E0((char *)&unk_2CAFA10 - 16, &unk_2CAFA10, v21, 8);
    v20 = (unsigned int)qword_2CAFA08;
    v19 = v33;
  }
  v22 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CAFA00 + 8 * v20) = v19;
  qword_2CAFA40 = (__int64)off_2C474E8;
  qword_2CAF9C0 = (__int64)off_2C4B848;
  word_2CAFA48 = 0;
  xmmword_2CAFA68 = (__int128)v22;
  qword_2CAFA50 = (__int64)off_2BC0B68;
  LODWORD(qword_2CAFA08) = qword_2CAFA08 + 1;
  byte_2CAFA38 = 0;
  sub_21F3510(&qword_2CAF9C0, "print-no-modref", 15);
  BYTE2(qword_2CAF9C8) = BYTE2(qword_2CAF9C8) & 0x9F | 0x40;
  sub_21F4400(&qword_2CAF9C0);
  __cxa_atexit(sub_1FEA450, &qword_2CAF9C0, &off_2AFC540);
  v34[0] = 2;
  sub_1FEA700(&unk_2CAF900, "print-ref", v34);
  __cxa_atexit(sub_1FEA450, &unk_2CAF900, &off_2AFC540);
  v34[0] = 2;
  sub_1FEA700(&unk_2CAF840, "print-mod", v34);
  __cxa_atexit(sub_1FEA450, &unk_2CAF840, &off_2AFC540);
  qword_2CAF790 = 0;
  qword_2CAF780 = (__int64)&off_2C4B8B0;
  qword_2CAF788 = (unsigned int)qword_2CAF788 & 0x80000000;
  qword_2CAF7C8 = 0x100000000LL;
  qword_2CAF798 = 0;
  qword_2CAF7A0 = 0;
  qword_2CAF7A8 = 0;
  qword_2CAF7B0 = 0;
  qword_2CAF7B8 = 0;
  qword_2CAF7C0 = (__int64)&unk_2CAF7D0;
  qword_2CAF7D8 = (__int64)&unk_2CAF7F0;
  qword_2CAF7E0 = 1;
  dword_2CAF7E8 = 0;
  byte_2CAF7EC = 1;
  v23 = sub_21ED2B0(sub_1FEA450, &unk_2CAF840);
  v24 = (unsigned int)qword_2CAF7C8;
  v25 = (unsigned int)qword_2CAF7C8 + 1LL;
  if ( v25 > HIDWORD(qword_2CAF7C8) )
  {
    v33 = v23;
    sub_22134E0((char *)&unk_2CAF7D0 - 16, &unk_2CAF7D0, v25, 8);
    v24 = (unsigned int)qword_2CAF7C8;
    v23 = v33;
  }
  v26 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CAF7C0 + 8 * v24) = v23;
  qword_2CAF800 = (__int64)off_2C474E8;
  word_2CAF808 = 0;
  qword_2CAF780 = (__int64)off_2C4B848;
  xmmword_2CAF828 = (__int128)v26;
  qword_2CAF810 = (__int64)off_2BC0B68;
  LODWORD(qword_2CAF7C8) = qword_2CAF7C8 + 1;
  byte_2CAF7F8 = 0;
  sub_21F3510(&qword_2CAF780, "print-modref", 12);
  BYTE2(qword_2CAF788) = BYTE2(qword_2CAF788) & 0x9F | 0x40;
  sub_21F4400(&qword_2CAF780);
  __cxa_atexit(sub_1FEA450, &qword_2CAF780, &off_2AFC540);
  qword_2CAF6D0 = 0;
  qword_2CAF6C0 = (__int64)&off_2C4B8B0;
  qword_2CAF6C8 = (unsigned int)qword_2CAF6C8 & 0x80000000;
  qword_2CAF708 = 0x100000000LL;
  qword_2CAF6D8 = 0;
  qword_2CAF6E0 = 0;
  qword_2CAF6E8 = 0;
  qword_2CAF6F0 = 0;
  qword_2CAF6F8 = 0;
  qword_2CAF700 = (__int64)&unk_2CAF710;
  qword_2CAF718 = (__int64)&unk_2CAF730;
  qword_2CAF720 = 1;
  dword_2CAF728 = 0;
  byte_2CAF72C = 1;
  v27 = sub_21ED2B0(sub_1FEA450, &qword_2CAF780);
  v28 = (unsigned int)qword_2CAF708;
  v29 = (unsigned int)qword_2CAF708 + 1LL;
  if ( v29 > HIDWORD(qword_2CAF708) )
  {
    v33 = v27;
    sub_22134E0((char *)&unk_2CAF710 - 16, &unk_2CAF710, v29, 8);
    v28 = (unsigned int)qword_2CAF708;
    v27 = v33;
  }
  v30 = _mm_load_si128(&v32);
  *(_QWORD *)(qword_2CAF700 + 8 * v28) = v27;
  word_2CAF748 = 0;
  qword_2CAF740 = (__int64)off_2C474E8;
  qword_2CAF6C0 = (__int64)off_2C4B848;
  xmmword_2CAF768 = (__int128)v30;
  qword_2CAF750 = (__int64)off_2BC0B68;
  LODWORD(qword_2CAF708) = qword_2CAF708 + 1;
  byte_2CAF738 = 0;
  sub_21F3510(&qword_2CAF6C0, "evaluate-aa-metadata", 20);
  BYTE2(qword_2CAF6C8) = BYTE2(qword_2CAF6C8) & 0x9F | 0x40;
  sub_21F4400(&qword_2CAF6C0);
  return __cxa_atexit(sub_1FEA450, &qword_2CAF6C0, &off_2AFC540);
}

