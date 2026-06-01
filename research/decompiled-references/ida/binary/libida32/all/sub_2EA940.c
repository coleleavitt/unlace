int sub_2EA940()
{
  __m128i *v0; // rax
  __m128i si128; // xmm0
  void *v3[2]; // [rsp+0h] [rbp-2A8h] BYREF
  _QWORD v4[2]; // [rsp+10h] [rbp-298h] BYREF
  void *v5[2]; // [rsp+20h] [rbp-288h] BYREF
  __int64 v6; // [rsp+30h] [rbp-278h] BYREF
  _OWORD v7[36]; // [rsp+60h] [rbp-248h] BYREF

  memset(v7, 0, 0x218u);
  *(_QWORD *)&v7[0] = &v7[1];
  *(_QWORD *)&v7[2] = &v7[3];
  *(_QWORD *)&v7[4] = &v7[5];
  *(_QWORD *)&v7[6] = &v7[7];
  *(_QWORD *)&v7[8] = &v7[9];
  *(_QWORD *)&v7[10] = &v7[11];
  *((_QWORD *)&v7[12] + 1) = (char *)&v7[13] + 8;
  *(_QWORD *)&v7[23] = &v7[24];
  *((_QWORD *)&v7[26] + 1) = (char *)&v7[27] + 8;
  *((_QWORD *)&v7[29] + 1) = (char *)&v7[30] + 8;
  v7[18] = _mm_load_si128((const __m128i *)&xmmword_2384D20);
  *(_OWORD *)((char *)&v7[19] + 8) = v7[18];
  LODWORD(v7[12]) = 1;
  *((_QWORD *)&v7[31] + 1) = (char *)&v7[32] + 8;
  v3[0] = v4;
  v0 = (__m128i *)operator new(0x12u);
  si128 = _mm_load_si128(xmmword_2385740);
  v0[1].m128i_i8[0] = 97;
  v0[1].m128i_i8[1] = 0;
  *v0 = si128;
  v3[0] = v0;
  v4[0] = 17;
  v3[1] = &word_10 + 1;
  sub_2296190(v5, v3);
  if ( v3[0] != v4 )
    operator delete(v3[0]);
  sub_1049290(&unk_2CAE620, v5, v7);
  if ( v5[0] != &v6 )
    operator delete(v5[0]);
  sub_1088210(v7);
  return __cxa_atexit(sub_1045120, &unk_2CAE620, &off_2AFC540);
}

