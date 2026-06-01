int sub_333970()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v10; // rdx
  __int128 v12; // [rsp+0h] [rbp-58h] BYREF
  __m128i v13; // [rsp+10h] [rbp-48h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF

  v0 = j__strlen("Propagate attributes in index");
  qword_2CFD810 = 0;
  v1 = v0;
  qword_2CFD818 = 0;
  qword_2CFD820 = 0;
  qword_2CFD800 = (__int64)&off_2C758B0;
  qword_2CFD808 = (unsigned int)qword_2CFD808 & 0x80000000;
  qword_2CFD848 = 0x100000000LL;
  qword_2CFD828 = 0;
  qword_2CFD830 = 0;
  qword_2CFD838 = 0;
  qword_2CFD840 = (__int64)&unk_2CFD850;
  qword_2CFD858 = (__int64)&unk_2CFD870;
  qword_2CFD860 = 1;
  dword_2CFD868 = 0;
  byte_2CFD86C = 1;
  v2 = sub_2210FF0("Propagate attributes in index");
  v3 = (unsigned int)qword_2CFD848;
  v4 = (unsigned int)qword_2CFD848 + 1LL;
  if ( v4 > HIDWORD(qword_2CFD848) )
  {
    *(_QWORD *)&v12 = v2;
    sub_2237220((char *)&unk_2CFD850 - 16, &unk_2CFD850, v4, 8);
    v3 = (unsigned int)qword_2CFD848;
    v2 = v12;
  }
  *(_QWORD *)(qword_2CFD840 + 8 * v3) = v2;
  qword_2CFD880 = (__int64)off_2C714E8;
  qword_2CFD800 = (__int64)off_2C75848;
  word_2CFD888 = 0;
  xmmword_2CFD8A8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v12 = xmmword_2CFD8A8;
  LODWORD(qword_2CFD848) = qword_2CFD848 + 1;
  qword_2CFD890 = (__int64)off_2BEAB08;
  byte_2CFD878 = 0;
  sub_2217250(&qword_2CFD800, "propagate-attrs", 15);
  word_2CFD888 = 257;
  qword_2CFD828 = v1;
  byte_2CFD878 = 1;
  BYTE2(qword_2CFD808) = BYTE2(qword_2CFD808) & 0x9F | 0x20;
  qword_2CFD820 = (__int64)"Propagate attributes in index";
  sub_2218140(&qword_2CFD800);
  __cxa_atexit(sub_200E190, &qword_2CFD800, &off_2B25620);
  v5 = j__strlen("Import constant global variables with references");
  byte_2CFD7AC = 1;
  qword_2CFD750 = 0;
  v6 = v5;
  qword_2CFD740 = (__int64)&off_2C758B0;
  qword_2CFD748 = (unsigned int)qword_2CFD748 & 0x80000000;
  qword_2CFD788 = 0x100000000LL;
  qword_2CFD758 = 0;
  qword_2CFD760 = 0;
  qword_2CFD768 = 0;
  qword_2CFD770 = 0;
  qword_2CFD778 = 0;
  qword_2CFD780 = (__int64)&unk_2CFD790;
  qword_2CFD798 = (__int64)&unk_2CFD7B0;
  qword_2CFD7A0 = 1;
  dword_2CFD7A8 = 0;
  v7 = sub_2210FF0("Import constant global variables with references");
  v8 = (unsigned int)qword_2CFD788;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2CFD788 + 1LL;
  if ( v10 > HIDWORD(qword_2CFD788) )
  {
    *(_QWORD *)&v12 = v7;
    v13 = si128;
    sub_2237220((char *)&unk_2CFD790 - 16, &unk_2CFD790, v10, 8);
    v8 = (unsigned int)qword_2CFD788;
    si128 = _mm_load_si128(&v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2CFD780 + 8 * v8) = v7;
  word_2CFD7C8 = 0;
  qword_2CFD7C0 = (__int64)off_2C714E8;
  qword_2CFD740 = (__int64)off_2C75848;
  xmmword_2CFD7E8 = (__int128)si128;
  qword_2CFD7D0 = (__int64)off_2BEAB08;
  LODWORD(qword_2CFD788) = qword_2CFD788 + 1;
  byte_2CFD7B8 = 0;
  sub_2217250(&qword_2CFD740, "import-constants-with-refs", 26);
  word_2CFD7C8 = 257;
  byte_2CFD7B8 = 1;
  qword_2CFD768 = v6;
  BYTE2(qword_2CFD748) = BYTE2(qword_2CFD748) & 0x9F | 0x20;
  qword_2CFD760 = (__int64)"Import constant global variables with references";
  sub_2218140(&qword_2CFD740);
  __cxa_atexit(sub_200E190, &qword_2CFD740, &off_2B25620);
  ptr[0] = v15;
  ptr[1] = nullptr;
  sub_20BEA40(&unk_2CFD6C0, ptr);
  if ( ptr[0] != v15 )
    free(ptr[0]);
  return __cxa_atexit(sub_2016FC0, &unk_2CFD6C0, &off_2B25620);
}
