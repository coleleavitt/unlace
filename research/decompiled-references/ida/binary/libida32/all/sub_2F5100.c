int __fastcall sub_2F5100(__int64 a1, __int64 a2)
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
  size_t v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int128 v19; // [rsp+0h] [rbp-58h] BYREF
  __m128i v20[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = j__strlen("Try to delinearize array references.");
  qword_2CB2AF0 = 0;
  v3 = v2;
  qword_2CB2AF8 = 0;
  qword_2CB2B00 = 0;
  qword_2CB2AE0 = (__int64)&off_2C4B8B0;
  qword_2CB2AE8 = (unsigned int)qword_2CB2AE8 & 0x80000000;
  qword_2CB2B28 = 0x100000000LL;
  qword_2CB2B08 = 0;
  qword_2CB2B10 = 0;
  qword_2CB2B18 = 0;
  qword_2CB2B20 = (__int64)&unk_2CB2B30;
  qword_2CB2B38 = (__int64)&unk_2CB2B50;
  qword_2CB2B40 = 1;
  dword_2CB2B48 = 0;
  byte_2CB2B4C = 1;
  v4 = sub_21ED2B0("Try to delinearize array references.", a2);
  v5 = (unsigned int)qword_2CB2B28;
  v6 = (unsigned int)qword_2CB2B28 + 1LL;
  if ( v6 > HIDWORD(qword_2CB2B28) )
  {
    *(_QWORD *)&v19 = v4;
    sub_22134E0((char *)&unk_2CB2B30 - 16, &unk_2CB2B30, v6, 8);
    v5 = (unsigned int)qword_2CB2B28;
    v4 = v19;
  }
  *(_QWORD *)(qword_2CB2B20 + 8 * v5) = v4;
  qword_2CB2B60 = (__int64)off_2C474E8;
  word_2CB2B68 = 0;
  qword_2CB2AE0 = (__int64)off_2C4B848;
  xmmword_2CB2B88 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v19 = xmmword_2CB2B88;
  LODWORD(qword_2CB2B28) = qword_2CB2B28 + 1;
  qword_2CB2B70 = (__int64)off_2BC0B68;
  byte_2CB2B58 = 0;
  sub_21F3510(&qword_2CB2AE0, "da-delinearize", 14);
  word_2CB2B68 = 257;
  qword_2CB2B08 = v3;
  byte_2CB2B58 = 1;
  BYTE2(qword_2CB2AE8) = BYTE2(qword_2CB2AE8) & 0x9F | 0x20;
  qword_2CB2B00 = (__int64)"Try to delinearize array references.";
  sub_21F4400(&qword_2CB2AE0);
  __cxa_atexit(sub_1FEA450, &qword_2CB2AE0, &off_2AFC540);
  v7 = j__strlen(
         "Disable checks that try to statically verify validity of delinearized subscripts. Enabling this option may resu"
         "lt in incorrect dependence vectors for languages that allow the subscript of one dimension to underflow or over"
         "flow into another dimension.");
  qword_2CB2A60 = (__int64)&unk_2CB2A70;
  v8 = v7;
  qword_2CB2A30 = 0;
  qword_2CB2A20 = (__int64)&off_2C4B8B0;
  qword_2CB2A28 = (unsigned int)qword_2CB2A28 & 0x80000000;
  qword_2CB2A68 = 0x100000000LL;
  qword_2CB2A38 = 0;
  qword_2CB2A40 = 0;
  qword_2CB2A48 = 0;
  qword_2CB2A50 = 0;
  qword_2CB2A58 = 0;
  qword_2CB2A78 = (__int64)&unk_2CB2A90;
  qword_2CB2A80 = 1;
  dword_2CB2A88 = 0;
  byte_2CB2A8C = 1;
  v9 = sub_21ED2B0(
         "Disable checks that try to statically verify validity of delinearized subscripts. Enabling this option may resu"
         "lt in incorrect dependence vectors for languages that allow the subscript of one dimension to underflow or over"
         "flow into another dimension.",
         &qword_2CB2AE0);
  v10 = (unsigned int)qword_2CB2A68;
  si128 = _mm_load_si128((const __m128i *)&v19);
  v12 = (unsigned int)qword_2CB2A68 + 1LL;
  if ( v12 > HIDWORD(qword_2CB2A68) )
  {
    *(_QWORD *)&v19 = v9;
    v20[0] = si128;
    sub_22134E0((char *)&unk_2CB2A70 - 16, &unk_2CB2A70, v12, 8);
    v10 = (unsigned int)qword_2CB2A68;
    si128 = _mm_load_si128(v20);
    v9 = v19;
  }
  *(_QWORD *)(qword_2CB2A60 + 8 * v10) = v9;
  word_2CB2AA8 = 0;
  qword_2CB2AA0 = (__int64)off_2C474E8;
  qword_2CB2A20 = (__int64)off_2C4B848;
  xmmword_2CB2AC8 = (__int128)si128;
  qword_2CB2AB0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CB2A68) = qword_2CB2A68 + 1;
  byte_2CB2A98 = 0;
  sub_21F3510(&qword_2CB2A20, "da-disable-delinearization-checks", 33);
  qword_2CB2A48 = v8;
  BYTE2(qword_2CB2A28) = BYTE2(qword_2CB2A28) & 0x9F | 0x20;
  qword_2CB2A40 = (__int64)"Disable checks that try to statically verify validity of delinearized subscripts. Enabling th"
                           "is option may result in incorrect dependence vectors for languages that allow the subscript o"
                           "f one dimension to underflow or overflow into another dimension.";
  sub_21F4400(&qword_2CB2A20);
  __cxa_atexit(sub_1FEA450, &qword_2CB2A20, &off_2AFC540);
  v13 = j__strlen("Maximum depth allowed for the recursive algorithm used to explore MIV direction vectors.");
  byte_2CB29CC = 1;
  qword_2CB2970 = 0;
  v14 = v13;
  qword_2CB2960 = (__int64)&off_2C4B8B0;
  qword_2CB2968 = (unsigned int)qword_2CB2968 & 0x80000000;
  qword_2CB29A8 = 0x100000000LL;
  qword_2CB2978 = 0;
  qword_2CB2980 = 0;
  qword_2CB2988 = 0;
  qword_2CB2990 = 0;
  qword_2CB2998 = 0;
  qword_2CB29A0 = (__int64)&unk_2CB29B0;
  qword_2CB29B8 = (__int64)&unk_2CB29D0;
  qword_2CB29C0 = 1;
  dword_2CB29C8 = 0;
  v15 = sub_21ED2B0(
          "Maximum depth allowed for the recursive algorithm used to explore MIV direction vectors.",
          &qword_2CB2A20);
  v16 = (unsigned int)qword_2CB29A8;
  v17 = (unsigned int)qword_2CB29A8 + 1LL;
  if ( v17 > HIDWORD(qword_2CB29A8) )
  {
    *(_QWORD *)&v19 = v15;
    sub_22134E0((char *)&unk_2CB29B0 - 16, &unk_2CB29B0, v17, 8);
    v16 = (unsigned int)qword_2CB29A8;
    v15 = v19;
  }
  *(_QWORD *)(qword_2CB29A0 + 8 * v16) = v15;
  xmmword_2CB2A08 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CB29A8) = qword_2CB29A8 + 1;
  qword_2CB29E0 = (__int64)off_2C472D0;
  dword_2CB29D8 = 0;
  byte_2CB29EC = 0;
  qword_2CB2960 = (__int64)off_2C4B710;
  dword_2CB29E8 = 0;
  qword_2CB29F0 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CB2960, "da-miv-max-level-threshold", 26);
  qword_2CB2988 = v14;
  dword_2CB29D8 = 7;
  byte_2CB29EC = 1;
  dword_2CB29E8 = 7;
  BYTE2(qword_2CB2968) = BYTE2(qword_2CB2968) & 0x9F | 0x20;
  qword_2CB2980 = (__int64)"Maximum depth allowed for the recursive algorithm used to explore MIV direction vectors.";
  sub_21F4400(&qword_2CB2960);
  return __cxa_atexit(sub_1FC9520, &qword_2CB2960, &off_2AFC540);
}

