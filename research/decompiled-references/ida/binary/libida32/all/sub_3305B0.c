int sub_3305B0()
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
  qword_2CD38F0 = 0;
  v1 = v0;
  qword_2CD38F8 = 0;
  qword_2CD3900 = 0;
  qword_2CD38E0 = (__int64)&off_2C4B8B0;
  qword_2CD38E8 = (unsigned int)qword_2CD38E8 & 0x80000000;
  qword_2CD3928 = 0x100000000LL;
  qword_2CD3908 = 0;
  qword_2CD3910 = 0;
  qword_2CD3918 = 0;
  qword_2CD3920 = (__int64)&unk_2CD3930;
  qword_2CD3938 = (__int64)&unk_2CD3950;
  qword_2CD3940 = 1;
  dword_2CD3948 = 0;
  byte_2CD394C = 1;
  v2 = sub_21ED2B0("Propagate attributes in index");
  v3 = (unsigned int)qword_2CD3928;
  v4 = (unsigned int)qword_2CD3928 + 1LL;
  if ( v4 > HIDWORD(qword_2CD3928) )
  {
    *(_QWORD *)&v12 = v2;
    sub_22134E0((char *)&unk_2CD3930 - 16, &unk_2CD3930, v4, 8);
    v3 = (unsigned int)qword_2CD3928;
    v2 = v12;
  }
  *(_QWORD *)(qword_2CD3920 + 8 * v3) = v2;
  qword_2CD3960 = (__int64)off_2C474E8;
  qword_2CD38E0 = (__int64)off_2C4B848;
  word_2CD3968 = 0;
  xmmword_2CD3988 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v12 = xmmword_2CD3988;
  LODWORD(qword_2CD3928) = qword_2CD3928 + 1;
  qword_2CD3970 = (__int64)off_2BC0B68;
  byte_2CD3958 = 0;
  sub_21F3510(&qword_2CD38E0, "propagate-attrs", 15);
  word_2CD3968 = 257;
  qword_2CD3908 = v1;
  byte_2CD3958 = 1;
  BYTE2(qword_2CD38E8) = BYTE2(qword_2CD38E8) & 0x9F | 0x20;
  qword_2CD3900 = (__int64)"Propagate attributes in index";
  sub_21F4400(&qword_2CD38E0);
  __cxa_atexit(sub_1FEA450, &qword_2CD38E0, &off_2AFC540);
  v5 = j__strlen("Import constant global variables with references");
  byte_2CD388C = 1;
  qword_2CD3830 = 0;
  v6 = v5;
  qword_2CD3820 = (__int64)&off_2C4B8B0;
  qword_2CD3828 = (unsigned int)qword_2CD3828 & 0x80000000;
  qword_2CD3868 = 0x100000000LL;
  qword_2CD3838 = 0;
  qword_2CD3840 = 0;
  qword_2CD3848 = 0;
  qword_2CD3850 = 0;
  qword_2CD3858 = 0;
  qword_2CD3860 = (__int64)&unk_2CD3870;
  qword_2CD3878 = (__int64)&unk_2CD3890;
  qword_2CD3880 = 1;
  dword_2CD3888 = 0;
  v7 = sub_21ED2B0("Import constant global variables with references");
  v8 = (unsigned int)qword_2CD3868;
  si128 = _mm_load_si128((const __m128i *)&v12);
  v10 = (unsigned int)qword_2CD3868 + 1LL;
  if ( v10 > HIDWORD(qword_2CD3868) )
  {
    *(_QWORD *)&v12 = v7;
    v13 = si128;
    sub_22134E0((char *)&unk_2CD3870 - 16, &unk_2CD3870, v10, 8);
    v8 = (unsigned int)qword_2CD3868;
    si128 = _mm_load_si128(&v13);
    v7 = v12;
  }
  *(_QWORD *)(qword_2CD3860 + 8 * v8) = v7;
  word_2CD38A8 = 0;
  qword_2CD38A0 = (__int64)off_2C474E8;
  qword_2CD3820 = (__int64)off_2C4B848;
  xmmword_2CD38C8 = (__int128)si128;
  qword_2CD38B0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CD3868) = qword_2CD3868 + 1;
  byte_2CD3898 = 0;
  sub_21F3510(&qword_2CD3820, "import-constants-with-refs", 26);
  word_2CD38A8 = 257;
  byte_2CD3898 = 1;
  qword_2CD3848 = v6;
  BYTE2(qword_2CD3828) = BYTE2(qword_2CD3828) & 0x9F | 0x20;
  qword_2CD3840 = (__int64)"Import constant global variables with references";
  sub_21F4400(&qword_2CD3820);
  __cxa_atexit(sub_1FEA450, &qword_2CD3820, &off_2AFC540);
  ptr[0] = v15;
  ptr[1] = nullptr;
  sub_209AD00(&unk_2CD37A0, ptr);
  if ( ptr[0] != v15 )
    free(ptr[0]);
  return __cxa_atexit(sub_1FF3280, &unk_2CD37A0, &off_2AFC540);
}

