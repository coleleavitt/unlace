int __fastcall sub_2F7EB0(__int64 a1, __int64 a2)
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
  qword_2CDC610 = 0;
  v3 = v2;
  qword_2CDC618 = 0;
  qword_2CDC620 = 0;
  qword_2CDC600 = (__int64)&off_2C758B0;
  qword_2CDC608 = (unsigned int)qword_2CDC608 & 0x80000000;
  qword_2CDC648 = 0x100000000LL;
  qword_2CDC628 = 0;
  qword_2CDC630 = 0;
  qword_2CDC638 = 0;
  qword_2CDC640 = (__int64)&unk_2CDC650;
  qword_2CDC658 = (__int64)&unk_2CDC670;
  qword_2CDC660 = 1;
  dword_2CDC668 = 0;
  byte_2CDC66C = 1;
  v4 = sub_2210FF0("Simplify DDG by merging nodes that have less interesting edges.", a2);
  v5 = (unsigned int)qword_2CDC648;
  v6 = (unsigned int)qword_2CDC648 + 1LL;
  if ( v6 > HIDWORD(qword_2CDC648) )
  {
    *(_QWORD *)&v14 = v4;
    sub_2237220((char *)&unk_2CDC650 - 16, &unk_2CDC650, v6, 8);
    v5 = (unsigned int)qword_2CDC648;
    v4 = v14;
  }
  *(_QWORD *)(qword_2CDC640 + 8 * v5) = v4;
  qword_2CDC680 = (__int64)off_2C714E8;
  qword_2CDC600 = (__int64)off_2C75848;
  word_2CDC688 = 0;
  xmmword_2CDC6A8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v14 = xmmword_2CDC6A8;
  LODWORD(qword_2CDC648) = qword_2CDC648 + 1;
  qword_2CDC690 = (__int64)off_2BEAB08;
  byte_2CDC678 = 0;
  sub_2217250(&qword_2CDC600, "ddg-simplify", 12);
  word_2CDC688 = 257;
  qword_2CDC628 = v3;
  byte_2CDC678 = 1;
  BYTE2(qword_2CDC608) = BYTE2(qword_2CDC608) & 0x9F | 0x20;
  qword_2CDC620 = (__int64)"Simplify DDG by merging nodes that have less interesting edges.";
  sub_2218140(&qword_2CDC600);
  __cxa_atexit(sub_200E190, &qword_2CDC600, &off_2B25620);
  v7 = j__strlen("Create pi-block nodes.");
  byte_2CDC5AC = 1;
  qword_2CDC550 = 0;
  v8 = v7;
  qword_2CDC540 = (__int64)&off_2C758B0;
  qword_2CDC548 = (unsigned int)qword_2CDC548 & 0x80000000;
  qword_2CDC588 = 0x100000000LL;
  qword_2CDC558 = 0;
  qword_2CDC560 = 0;
  qword_2CDC568 = 0;
  qword_2CDC570 = 0;
  qword_2CDC578 = 0;
  qword_2CDC580 = (__int64)&unk_2CDC590;
  qword_2CDC598 = (__int64)&unk_2CDC5B0;
  qword_2CDC5A0 = 1;
  dword_2CDC5A8 = 0;
  v9 = sub_2210FF0("Create pi-block nodes.", &qword_2CDC600);
  v10 = (unsigned int)qword_2CDC588;
  si128 = _mm_load_si128((const __m128i *)&v14);
  v12 = (unsigned int)qword_2CDC588 + 1LL;
  if ( v12 > HIDWORD(qword_2CDC588) )
  {
    *(_QWORD *)&v14 = v9;
    v15[0] = si128;
    sub_2237220((char *)&unk_2CDC590 - 16, &unk_2CDC590, v12, 8);
    v10 = (unsigned int)qword_2CDC588;
    si128 = _mm_load_si128(v15);
    v9 = v14;
  }
  *(_QWORD *)(qword_2CDC580 + 8 * v10) = v9;
  word_2CDC5C8 = 0;
  qword_2CDC5C0 = (__int64)off_2C714E8;
  qword_2CDC540 = (__int64)off_2C75848;
  qword_2CDC5D0 = (__int64)off_2BEAB08;
  xmmword_2CDC5E8 = (__int128)si128;
  LODWORD(qword_2CDC588) = qword_2CDC588 + 1;
  byte_2CDC5B8 = 0;
  sub_2217250(&qword_2CDC540, "ddg-pi-blocks", 13);
  word_2CDC5C8 = 257;
  qword_2CDC568 = v8;
  byte_2CDC5B8 = 1;
  BYTE2(qword_2CDC548) = BYTE2(qword_2CDC548) & 0x9F | 0x20;
  qword_2CDC560 = (__int64)"Create pi-block nodes.";
  sub_2218140(&qword_2CDC540);
  return __cxa_atexit(sub_200E190, &qword_2CDC540, &off_2B25620);
}
