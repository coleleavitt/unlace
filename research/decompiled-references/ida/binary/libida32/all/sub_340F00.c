int sub_340F00()
{
  size_t v0; // rax
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  size_t v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm2
  size_t v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm3
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Limit on the cost of instructions that can be repeated due to loop flattening");
  qword_2CDB630 = 0;
  v1 = v0;
  qword_2CDB638 = 0;
  qword_2CDB640 = 0;
  qword_2CDB620 = (__int64)&off_2C4B8B0;
  qword_2CDB628 = (unsigned int)qword_2CDB628 & 0x80000000;
  qword_2CDB668 = 0x100000000LL;
  qword_2CDB648 = 0;
  qword_2CDB650 = 0;
  qword_2CDB658 = 0;
  qword_2CDB660 = (__int64)&unk_2CDB670;
  qword_2CDB678 = (__int64)&unk_2CDB690;
  qword_2CDB680 = 1;
  dword_2CDB688 = 0;
  byte_2CDB68C = 1;
  v2 = sub_21ED2B0("Limit on the cost of instructions that can be repeated due to loop flattening");
  v3 = (unsigned int)qword_2CDB668;
  v4 = (unsigned int)qword_2CDB668 + 1LL;
  if ( v4 > HIDWORD(qword_2CDB668) )
  {
    v23.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CDB670 - 16, &unk_2CDB670, v4, 8);
    v3 = (unsigned int)qword_2CDB668;
    v2 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDB660 + 8 * v3) = v2;
  xmmword_2CDB6C8 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CDB668) = qword_2CDB668 + 1;
  qword_2CDB6A0 = (__int64)off_2C472D0;
  dword_2CDB698 = 0;
  byte_2CDB6AC = 0;
  qword_2CDB620 = (__int64)off_2C4B710;
  dword_2CDB6A8 = 0;
  qword_2CDB6B0 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CDB620, "loop-flatten-cost-threshold", 27);
  dword_2CDB698 = 2;
  byte_2CDB6AC = 1;
  qword_2CDB648 = v1;
  dword_2CDB6A8 = 2;
  BYTE2(qword_2CDB628) = BYTE2(qword_2CDB628) & 0x9F | 0x20;
  qword_2CDB640 = (__int64)"Limit on the cost of instructions that can be repeated due to loop flattening";
  sub_21F4400(&qword_2CDB620);
  __cxa_atexit(sub_1FC9520, &qword_2CDB620, &off_2AFC540);
  v5 = j__strlen("Assume that the product of the two iteration trip counts will never overflow");
  qword_2CDB5A0 = (__int64)&unk_2CDB5B0;
  v6 = v5;
  qword_2CDB570 = 0;
  qword_2CDB560 = (__int64)&off_2C4B8B0;
  qword_2CDB568 = (unsigned int)qword_2CDB568 & 0x80000000;
  qword_2CDB5A8 = 0x100000000LL;
  qword_2CDB578 = 0;
  qword_2CDB580 = 0;
  qword_2CDB588 = 0;
  qword_2CDB590 = 0;
  qword_2CDB598 = 0;
  qword_2CDB5B8 = (__int64)&unk_2CDB5D0;
  qword_2CDB5C0 = 1;
  dword_2CDB5C8 = 0;
  byte_2CDB5CC = 1;
  v7 = sub_21ED2B0("Assume that the product of the two iteration trip counts will never overflow");
  v8 = (unsigned int)qword_2CDB5A8;
  v9 = (unsigned int)qword_2CDB5A8 + 1LL;
  if ( v9 > HIDWORD(qword_2CDB5A8) )
  {
    v23.m128i_i64[0] = v7;
    sub_22134E0((char *)&unk_2CDB5B0 - 16, &unk_2CDB5B0, v9, 8);
    v8 = (unsigned int)qword_2CDB5A8;
    v7 = v23.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CDB5A0 + 8 * v8) = v7;
  qword_2CDB5E0 = (__int64)off_2C474E8;
  word_2CDB5E8 = 0;
  qword_2CDB560 = (__int64)off_2C4B848;
  v23 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CDB608 = (__int128)v23;
  qword_2CDB5F0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDB5A8) = qword_2CDB5A8 + 1;
  byte_2CDB5D8 = 0;
  sub_21F3510(&qword_2CDB560, "loop-flatten-assume-no-overflow", 31);
  word_2CDB5E8 = 256;
  qword_2CDB588 = v6;
  byte_2CDB5D8 = 0;
  BYTE2(qword_2CDB568) = BYTE2(qword_2CDB568) & 0x9F | 0x20;
  qword_2CDB580 = (__int64)"Assume that the product of the two iteration trip counts will never overflow";
  sub_21F4400(&qword_2CDB560);
  __cxa_atexit(sub_1FEA450, &qword_2CDB560, &off_2AFC540);
  v10 = j__strlen("Widen the loop induction variables, if possible, so overflow checks won't reject flattening");
  qword_2CDB4E0 = (__int64)&unk_2CDB4F0;
  v11 = v10;
  qword_2CDB4B0 = 0;
  qword_2CDB4A0 = (__int64)&off_2C4B8B0;
  qword_2CDB4A8 = (unsigned int)qword_2CDB4A8 & 0x80000000;
  qword_2CDB4E8 = 0x100000000LL;
  qword_2CDB4B8 = 0;
  qword_2CDB4C0 = 0;
  qword_2CDB4C8 = 0;
  qword_2CDB4D0 = 0;
  qword_2CDB4D8 = 0;
  qword_2CDB4F8 = (__int64)&unk_2CDB510;
  qword_2CDB500 = 1;
  dword_2CDB508 = 0;
  byte_2CDB50C = 1;
  v12 = sub_21ED2B0("Widen the loop induction variables, if possible, so overflow checks won't reject flattening");
  v13 = (unsigned int)qword_2CDB4E8;
  v14 = (unsigned int)qword_2CDB4E8 + 1LL;
  if ( v14 > HIDWORD(qword_2CDB4E8) )
  {
    v24 = v12;
    sub_22134E0((char *)&unk_2CDB4F0 - 16, &unk_2CDB4F0, v14, 8);
    v13 = (unsigned int)qword_2CDB4E8;
    v12 = v24;
  }
  v15 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2CDB4E0 + 8 * v13) = v12;
  qword_2CDB520 = (__int64)off_2C474E8;
  qword_2CDB4A0 = (__int64)off_2C4B848;
  word_2CDB528 = 0;
  xmmword_2CDB548 = (__int128)v15;
  qword_2CDB530 = (__int64)off_2BC0B68;
  LODWORD(qword_2CDB4E8) = qword_2CDB4E8 + 1;
  byte_2CDB518 = 0;
  sub_21F3510(&qword_2CDB4A0, "loop-flatten-widen-iv", 21);
  word_2CDB528 = 257;
  qword_2CDB4C8 = v11;
  byte_2CDB518 = 1;
  BYTE2(qword_2CDB4A8) = BYTE2(qword_2CDB4A8) & 0x9F | 0x20;
  qword_2CDB4C0 = (__int64)"Widen the loop induction variables, if possible, so overflow checks won't reject flattening";
  sub_21F4400(&qword_2CDB4A0);
  __cxa_atexit(sub_1FEA450, &qword_2CDB4A0, &off_2AFC540);
  v16 = j__strlen("Version loops if flattened loop could overflow");
  byte_2CDB44C = 1;
  qword_2CDB3F0 = 0;
  v17 = v16;
  qword_2CDB3E0 = (__int64)&off_2C4B8B0;
  qword_2CDB3E8 = (unsigned int)qword_2CDB3E8 & 0x80000000;
  qword_2CDB428 = 0x100000000LL;
  qword_2CDB3F8 = 0;
  qword_2CDB400 = 0;
  qword_2CDB408 = 0;
  qword_2CDB410 = 0;
  qword_2CDB418 = 0;
  qword_2CDB420 = (__int64)&unk_2CDB430;
  qword_2CDB438 = (__int64)&unk_2CDB450;
  qword_2CDB440 = 1;
  dword_2CDB448 = 0;
  v18 = sub_21ED2B0("Version loops if flattened loop could overflow");
  v19 = (unsigned int)qword_2CDB428;
  v20 = (unsigned int)qword_2CDB428 + 1LL;
  if ( v20 > HIDWORD(qword_2CDB428) )
  {
    v24 = v18;
    sub_22134E0((char *)&unk_2CDB430 - 16, &unk_2CDB430, v20, 8);
    v19 = (unsigned int)qword_2CDB428;
    v18 = v24;
  }
  v21 = _mm_load_si128(&v23);
  *(_QWORD *)(qword_2CDB420 + 8 * v19) = v18;
  word_2CDB468 = 0;
  qword_2CDB460 = (__int64)off_2C474E8;
  qword_2CDB3E0 = (__int64)off_2C4B848;
  qword_2CDB470 = (__int64)off_2BC0B68;
  xmmword_2CDB488 = (__int128)v21;
  LODWORD(qword_2CDB428) = qword_2CDB428 + 1;
  byte_2CDB458 = 0;
  sub_21F3510(&qword_2CDB3E0, "loop-flatten-version-loops", 26);
  word_2CDB468 = 257;
  qword_2CDB408 = v17;
  byte_2CDB458 = 1;
  BYTE2(qword_2CDB3E8) = BYTE2(qword_2CDB3E8) & 0x9F | 0x20;
  qword_2CDB400 = (__int64)"Version loops if flattened loop could overflow";
  sub_21F4400(&qword_2CDB3E0);
  return __cxa_atexit(sub_1FEA450, &qword_2CDB3E0, &off_2AFC540);
}

