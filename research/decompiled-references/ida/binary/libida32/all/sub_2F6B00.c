int __fastcall sub_2F6B00(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm2
  size_t v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm3
  size_t v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  __m128i v27; // xmm4
  __m128i v29; // [rsp+0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+18h] [rbp-40h]

  v2 = j__strlen("The percentage threshold against remaining unpromoted indirect call count for the promotion");
  qword_2CB3B70 = 0;
  v3 = v2;
  qword_2CB3B78 = 0;
  qword_2CB3B80 = 0;
  qword_2CB3B60 = (__int64)&off_2C4B8B0;
  qword_2CB3B68 = (unsigned int)qword_2CB3B68 & 0x80000000;
  qword_2CB3BA8 = 0x100000000LL;
  qword_2CB3B88 = 0;
  qword_2CB3B90 = 0;
  qword_2CB3B98 = 0;
  qword_2CB3BA0 = (__int64)&unk_2CB3BB0;
  qword_2CB3BB8 = (__int64)&unk_2CB3BD0;
  qword_2CB3BC0 = 1;
  dword_2CB3BC8 = 0;
  byte_2CB3BCC = 1;
  v4 = sub_21ED2B0("The percentage threshold against remaining unpromoted indirect call count for the promotion", a2);
  v5 = (unsigned int)qword_2CB3BA8;
  v6 = (unsigned int)qword_2CB3BA8 + 1LL;
  if ( v6 > HIDWORD(qword_2CB3BA8) )
  {
    v29.m128i_i64[0] = v4;
    sub_22134E0((char *)&unk_2CB3BB0 - 16, &unk_2CB3BB0, v6, 8);
    v5 = (unsigned int)qword_2CB3BA8;
    v4 = v29.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB3BA0 + 8 * v5) = v4;
  qword_2CB3BE0 = (__int64)off_2C472D0;
  qword_2CB3B60 = (__int64)off_2C4B710;
  v29 = (__m128i)_mm_loadh_ps((const double *)off_2C4E4F8);
  xmmword_2CB3C08 = (__int128)v29;
  qword_2CB3BF0 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CB3BA8) = qword_2CB3BA8 + 1;
  dword_2CB3BD8 = 0;
  dword_2CB3BE8 = 0;
  byte_2CB3BEC = 0;
  sub_21F3510(&qword_2CB3B60, "icp-remaining-percent-threshold", 31);
  qword_2CB3B88 = v3;
  dword_2CB3BD8 = 30;
  byte_2CB3BEC = 1;
  dword_2CB3BE8 = 30;
  BYTE2(qword_2CB3B68) = BYTE2(qword_2CB3B68) & 0x9F | 0x20;
  qword_2CB3B80 = (__int64)"The percentage threshold against remaining unpromoted indirect call count for the promotion";
  sub_21F4400(&qword_2CB3B60);
  __cxa_atexit(sub_1FC9520, &qword_2CB3B60, &off_2AFC540);
  v7 = j__strlen("The percentage threshold against total count for the promotion");
  qword_2CB3AE0 = (__int64)&unk_2CB3AF0;
  v8 = v7;
  qword_2CB3AB0 = 0;
  qword_2CB3AA0 = (__int64)&off_2C4B8B0;
  qword_2CB3AA8 = (unsigned int)qword_2CB3AA8 & 0x80000000;
  qword_2CB3AE8 = 0x100000000LL;
  qword_2CB3AB8 = 0;
  qword_2CB3AC0 = 0;
  qword_2CB3AC8 = 0;
  qword_2CB3AD0 = 0;
  qword_2CB3AD8 = 0;
  qword_2CB3AF8 = (__int64)&unk_2CB3B10;
  qword_2CB3B00 = 1;
  dword_2CB3B08 = 0;
  byte_2CB3B0C = 1;
  v9 = sub_21ED2B0("The percentage threshold against total count for the promotion", &qword_2CB3B60);
  v10 = (unsigned int)qword_2CB3AE8;
  v11 = (unsigned int)qword_2CB3AE8 + 1LL;
  if ( v11 > HIDWORD(qword_2CB3AE8) )
  {
    v30 = v9;
    sub_22134E0((char *)&unk_2CB3AF0 - 16, &unk_2CB3AF0, v11, 8);
    v10 = (unsigned int)qword_2CB3AE8;
    v9 = v30;
  }
  *(_QWORD *)(qword_2CB3AE0 + 8 * v10) = v9;
  xmmword_2CB3B50 = (__int128)_mm_loadh_ps((const double *)off_2C4EC90);
  LODWORD(qword_2CB3AE8) = qword_2CB3AE8 + 1;
  qword_2CB3B20 = (__int64)off_2C47B28;
  qword_2CB3B18 = 0;
  byte_2CB3B30 = 0;
  qword_2CB3AA0 = (__int64)off_2C47B48;
  qword_2CB3B28 = 0;
  qword_2CB3B38 = (__int64)off_2BC0C28;
  sub_21F3510(&qword_2CB3AA0, "icp-total-percent-threshold", 27);
  qword_2CB3AC8 = v8;
  qword_2CB3B18 = 5;
  byte_2CB3B30 = 1;
  qword_2CB3B28 = 5;
  BYTE2(qword_2CB3AA8) = BYTE2(qword_2CB3AA8) & 0x9F | 0x20;
  qword_2CB3AC0 = (__int64)"The percentage threshold against total count for the promotion";
  sub_21F4400(&qword_2CB3AA0);
  __cxa_atexit(sub_1FF02C0, &qword_2CB3AA0, &off_2AFC540);
  v12 = j__strlen("Minimum absolute count for promotion candidate");
  qword_2CB3A20 = (__int64)&unk_2CB3A30;
  v13 = v12;
  qword_2CB39F0 = 0;
  qword_2CB39E0 = (__int64)&off_2C4B8B0;
  qword_2CB39E8 = (unsigned int)qword_2CB39E8 & 0x80000000;
  qword_2CB3A28 = 0x100000000LL;
  qword_2CB39F8 = 0;
  qword_2CB3A00 = 0;
  qword_2CB3A08 = 0;
  qword_2CB3A10 = 0;
  qword_2CB3A18 = 0;
  qword_2CB3A38 = (__int64)&unk_2CB3A50;
  qword_2CB3A40 = 1;
  dword_2CB3A48 = 0;
  byte_2CB3A4C = 1;
  v14 = sub_21ED2B0("Minimum absolute count for promotion candidate", &qword_2CB3AA0);
  v15 = (unsigned int)qword_2CB3A28;
  v16 = (unsigned int)qword_2CB3A28 + 1LL;
  if ( v16 > HIDWORD(qword_2CB3A28) )
  {
    v30 = v14;
    sub_22134E0((char *)&unk_2CB3A30 - 16, &unk_2CB3A30, v16, 8);
    v15 = (unsigned int)qword_2CB3A28;
    v14 = v30;
  }
  v17 = _mm_load_si128(&v29);
  *(_QWORD *)(qword_2CB3A20 + 8 * v15) = v14;
  qword_2CB3A60 = (__int64)off_2C472D0;
  qword_2CB39E0 = (__int64)off_2C4B710;
  xmmword_2CB3A88 = (__int128)v17;
  qword_2CB3A70 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CB3A28) = qword_2CB3A28 + 1;
  dword_2CB3A58 = 0;
  dword_2CB3A68 = 0;
  byte_2CB3A6C = 0;
  sub_21F3510(&qword_2CB39E0, "icp-minimum-count-threshold", 27);
  qword_2CB3A08 = v13;
  dword_2CB3A58 = 0;
  byte_2CB3A6C = 1;
  dword_2CB3A68 = 0;
  BYTE2(qword_2CB39E8) = BYTE2(qword_2CB39E8) & 0x9F | 0x20;
  qword_2CB3A00 = (__int64)"Minimum absolute count for promotion candidate";
  sub_21F4400(&qword_2CB39E0);
  __cxa_atexit(sub_1FC9520, &qword_2CB39E0, &off_2AFC540);
  v18 = j__strlen("Max number of promotions for a single indirect call callsite");
  qword_2CB3960 = (__int64)&unk_2CB3970;
  v19 = v18;
  qword_2CB3930 = 0;
  qword_2CB3920 = (__int64)&off_2C4B8B0;
  qword_2CB3928 = (unsigned int)qword_2CB3928 & 0x80000000;
  qword_2CB3968 = 0x100000000LL;
  qword_2CB3938 = 0;
  qword_2CB3940 = 0;
  qword_2CB3948 = 0;
  qword_2CB3950 = 0;
  qword_2CB3958 = 0;
  qword_2CB3978 = (__int64)&unk_2CB3990;
  qword_2CB3980 = 1;
  dword_2CB3988 = 0;
  byte_2CB398C = 1;
  v20 = sub_21ED2B0("Max number of promotions for a single indirect call callsite", &qword_2CB39E0);
  v21 = (unsigned int)qword_2CB3968;
  v22 = (unsigned int)qword_2CB3968 + 1LL;
  if ( v22 > HIDWORD(qword_2CB3968) )
  {
    v30 = v20;
    sub_22134E0((char *)&unk_2CB3970 - 16, &unk_2CB3970, v22, 8);
    v21 = (unsigned int)qword_2CB3968;
    v20 = v30;
  }
  v23 = _mm_load_si128(&v29);
  *(_QWORD *)(qword_2CB3960 + 8 * v21) = v20;
  qword_2CB39A0 = (__int64)off_2C472D0;
  qword_2CB3920 = (__int64)off_2C4B710;
  xmmword_2CB39C8 = (__int128)v23;
  qword_2CB39B0 = (__int64)off_2BC0BF8;
  LODWORD(qword_2CB3968) = qword_2CB3968 + 1;
  dword_2CB3998 = 0;
  dword_2CB39A8 = 0;
  byte_2CB39AC = 0;
  sub_21F3510(&qword_2CB3920, "icp-max-prom", 12);
  qword_2CB3948 = v19;
  dword_2CB3998 = 3;
  byte_2CB39AC = 1;
  dword_2CB39A8 = 3;
  BYTE2(qword_2CB3928) = BYTE2(qword_2CB3928) & 0x9F | 0x20;
  qword_2CB3940 = (__int64)"Max number of promotions for a single indirect call callsite";
  sub_21F4400(&qword_2CB3920);
  __cxa_atexit(sub_1FC9520, &qword_2CB3920, &off_2AFC540);
  v24 = j__strlen("Max number of vtables annotated for a vtable load instruction.");
  qword_2CB3860 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB3868 = dword_2CB3868 & 0x80000000;
  qword_2CB38A0[1] = 0x100000000LL;
  unk_2CB3870 = 0;
  unk_2CB3878 = 0;
  unk_2CB3880 = 0;
  unk_2CB3888 = 0;
  unk_2CB3890 = 0;
  unk_2CB3898 = 0;
  qword_2CB38A0[0] = &qword_2CB38A0[2];
  qword_2CB38A0[3] = &qword_2CB38A0[6];
  qword_2CB38A0[4] = 1;
  LODWORD(qword_2CB38A0[5]) = 0;
  BYTE4(qword_2CB38A0[5]) = 1;
  v25 = sub_21ED2B0("Max number of vtables annotated for a vtable load instruction.", &qword_2CB3920);
  v26 = LODWORD(qword_2CB38A0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CB38A0[1]) + 1 > HIDWORD(qword_2CB38A0[1]) )
  {
    v30 = v25;
    sub_22134E0(qword_2CB38A0, &qword_2CB38A0[2], LODWORD(qword_2CB38A0[1]) + 1LL, 8);
    v26 = LODWORD(qword_2CB38A0[1]);
    v25 = v30;
  }
  v27 = _mm_load_si128(&v29);
  *(_QWORD *)(qword_2CB38A0[0] + 8 * v26) = v25;
  qword_2CB38A0[8] = off_2C472D0;
  qword_2CB3860 = off_2C4B710;
  ++LODWORD(qword_2CB38A0[1]);
  qword_2CB38A0[10] = off_2BC0BF8;
  LODWORD(qword_2CB38A0[7]) = 0;
  LODWORD(qword_2CB38A0[9]) = 0;
  BYTE4(qword_2CB38A0[9]) = 0;
  *(__m128i *)&qword_2CB38A0[13] = v27;
  sub_21F3510(&qword_2CB3860, "icp-max-num-vtables", 19);
  unk_2CB3888 = v24;
  LODWORD(qword_2CB38A0[7]) = 6;
  BYTE4(qword_2CB38A0[9]) = 1;
  LODWORD(qword_2CB38A0[9]) = 6;
  BYTE2(dword_2CB3868) = BYTE2(dword_2CB3868) & 0x9F | 0x20;
  unk_2CB3880 = "Max number of vtables annotated for a vtable load instruction.";
  sub_21F4400(&qword_2CB3860);
  return __cxa_atexit(sub_1FC9520, &qword_2CB3860, &off_2AFC540);
}

