int __fastcall sub_300990(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  size_t v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v13; // rdx
  size_t v14; // rax
  __int128 v16; // [rsp+0h] [rbp-48h] BYREF
  __m128i v17[3]; // [rsp+10h] [rbp-38h] BYREF

  qword_2CB8EB0 = 0;
  qword_2CB8EB8 = 0;
  qword_2CB8EC0 = 0;
  qword_2CB8EA0 = (__int64)&off_2C4B8B0;
  qword_2CB8EA8 = (unsigned int)qword_2CB8EA8 & 0x80000000;
  qword_2CB8EE8 = 0x100000000LL;
  qword_2CB8EC8 = 0;
  qword_2CB8ED0 = 0;
  qword_2CB8ED8 = 0;
  qword_2CB8EE0 = (__int64)&unk_2CB8EF0;
  qword_2CB8EF8 = (__int64)&unk_2CB8F10;
  qword_2CB8F00 = 1;
  dword_2CB8F08 = 0;
  byte_2CB8F0C = 1;
  v2 = sub_21ED2B0(a1, a2);
  v3 = (unsigned int)qword_2CB8EE8;
  v4 = (unsigned int)qword_2CB8EE8 + 1LL;
  if ( v4 > HIDWORD(qword_2CB8EE8) )
  {
    *(_QWORD *)&v16 = v2;
    sub_22134E0((char *)&unk_2CB8EF0 - 16, &unk_2CB8EF0, v4, 8);
    v3 = (unsigned int)qword_2CB8EE8;
    v2 = v16;
  }
  *(_QWORD *)(qword_2CB8EE0 + 8 * v3) = v2;
  xmmword_2CB8F48 = (__int128)_mm_loadh_ps((const double *)&off_2C4D900);
  LODWORD(qword_2CB8EE8) = qword_2CB8EE8 + 1;
  qword_2CB8F20 = (__int64)off_2C47BB0;
  dword_2CB8F18 = 0;
  byte_2CB8F2C = 0;
  qword_2CB8EA0 = (__int64)off_2C4B778;
  dword_2CB8F28 = 0;
  qword_2CB8F30 = (__int64)off_2BC0BC8;
  v5 = j__strlen("stack-safety-max-iterations");
  sub_21F3510(&qword_2CB8EA0, "stack-safety-max-iterations", v5);
  dword_2CB8F18 = 20;
  byte_2CB8F2C = 1;
  dword_2CB8F28 = 20;
  BYTE2(qword_2CB8EA8) = BYTE2(qword_2CB8EA8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CB8EA0);
  __cxa_atexit(sub_1FF0490, &qword_2CB8EA0, &off_2AFC540);
  qword_2CB8DF0 = 0;
  qword_2CB8DE0 = (__int64)&off_2C4B8B0;
  qword_2CB8DE8 = (unsigned int)qword_2CB8DE8 & 0x80000000;
  qword_2CB8E28 = 0x100000000LL;
  qword_2CB8DF8 = 0;
  qword_2CB8E00 = 0;
  qword_2CB8E08 = 0;
  qword_2CB8E10 = 0;
  qword_2CB8E18 = 0;
  qword_2CB8E20 = (__int64)&unk_2CB8E30;
  qword_2CB8E38 = (__int64)&unk_2CB8E50;
  qword_2CB8E40 = 1;
  dword_2CB8E48 = 0;
  byte_2CB8E4C = 1;
  v6 = sub_21ED2B0(sub_1FF0490, &qword_2CB8EA0);
  v7 = (unsigned int)qword_2CB8E28;
  v8 = (unsigned int)qword_2CB8E28 + 1LL;
  if ( v8 > HIDWORD(qword_2CB8E28) )
  {
    *(_QWORD *)&v16 = v6;
    sub_22134E0((char *)&unk_2CB8E30 - 16, &unk_2CB8E30, v8, 8);
    v7 = (unsigned int)qword_2CB8E28;
    v6 = v16;
  }
  *(_QWORD *)(qword_2CB8E20 + 8 * v7) = v6;
  qword_2CB8E60 = (__int64)off_2C474E8;
  qword_2CB8DE0 = (__int64)off_2C4B848;
  word_2CB8E68 = 0;
  xmmword_2CB8E88 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v16 = xmmword_2CB8E88;
  LODWORD(qword_2CB8E28) = qword_2CB8E28 + 1;
  byte_2CB8E58 = 0;
  qword_2CB8E70 = (__int64)off_2BC0B68;
  v9 = j__strlen("stack-safety-print");
  sub_21F3510(&qword_2CB8DE0, "stack-safety-print", v9);
  word_2CB8E68 = 256;
  byte_2CB8E58 = 0;
  BYTE2(qword_2CB8DE8) = BYTE2(qword_2CB8DE8) & 0x9F | 0x20;
  sub_21F4400(&qword_2CB8DE0);
  __cxa_atexit(sub_1FEA450, &qword_2CB8DE0, &off_2AFC540);
  qword_2CB8D30 = 0;
  qword_2CB8D20 = (__int64)&off_2C4B8B0;
  qword_2CB8D28 = (unsigned int)qword_2CB8D28 & 0x80000000;
  qword_2CB8D68 = 0x100000000LL;
  qword_2CB8D38 = 0;
  qword_2CB8D40 = 0;
  qword_2CB8D48 = 0;
  qword_2CB8D50 = 0;
  qword_2CB8D58 = 0;
  qword_2CB8D60 = (__int64)&unk_2CB8D70;
  qword_2CB8D78 = (__int64)&unk_2CB8D90;
  qword_2CB8D80 = 1;
  dword_2CB8D88 = 0;
  byte_2CB8D8C = 1;
  v10 = sub_21ED2B0(sub_1FEA450, &qword_2CB8DE0);
  v11 = (unsigned int)qword_2CB8D68;
  si128 = _mm_load_si128((const __m128i *)&v16);
  v13 = (unsigned int)qword_2CB8D68 + 1LL;
  if ( v13 > HIDWORD(qword_2CB8D68) )
  {
    *(_QWORD *)&v16 = v10;
    v17[0] = si128;
    sub_22134E0((char *)&unk_2CB8D70 - 16, &unk_2CB8D70, v13, 8);
    v11 = (unsigned int)qword_2CB8D68;
    si128 = _mm_load_si128(v17);
    v10 = v16;
  }
  *(_QWORD *)(qword_2CB8D60 + 8 * v11) = v10;
  word_2CB8DA8 = 0;
  qword_2CB8DA0 = (__int64)off_2C474E8;
  qword_2CB8D20 = (__int64)off_2C4B848;
  xmmword_2CB8DC8 = (__int128)si128;
  LODWORD(qword_2CB8D68) = qword_2CB8D68 + 1;
  byte_2CB8D98 = 0;
  qword_2CB8DB0 = (__int64)off_2BC0B68;
  v14 = j__strlen("stack-safety-run");
  sub_21F3510(&qword_2CB8D20, "stack-safety-run", v14);
  word_2CB8DA8 = 256;
  byte_2CB8D98 = 0;
  BYTE2(qword_2CB8D28) = BYTE2(qword_2CB8D28) & 0x9F | 0x20;
  sub_21F4400(&qword_2CB8D20);
  return __cxa_atexit(sub_1FEA450, &qword_2CB8D20, &off_2AFC540);
}

