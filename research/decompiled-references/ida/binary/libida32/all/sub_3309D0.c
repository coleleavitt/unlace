int sub_3309D0()
{
  size_t v0; // rax
  __m128i si128; // xmm0
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __m128i v6; // xmm2
  __m128i *v7; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm0
  __m128i v10; // xmm3
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(); // rax
  __int64 (__fastcall *v14)(); // rdx
  __m128i v15; // xmm0
  void (__fastcall *v16)(_QWORD, _QWORD, _QWORD); // rcx
  size_t v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __m128 v23; // [rsp+0h] [rbp-C8h] BYREF
  _BYTE v24[16]; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v25; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v26[16]; // [rsp+30h] [rbp-98h] BYREF
  __m128i v27; // [rsp+40h] [rbp-88h]
  __m128i v28; // [rsp+50h] [rbp-78h] BYREF
  __m128i v29; // [rsp+60h] [rbp-68h]
  _QWORD v30[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+80h] [rbp-48h]
  __int64 (__fastcall *v32)(); // [rsp+88h] [rbp-40h]
  __m128i v33; // [rsp+90h] [rbp-38h] BYREF
  void (__fastcall *v34)(_QWORD, _QWORD, _QWORD); // [rsp+A0h] [rbp-28h]
  __int64 (__fastcall *v35)(); // [rsp+A8h] [rbp-20h]

  v23.m128_u64[0] = (unsigned __int64)sub_209B4E0;
  v23 = _mm_loadh_ps((const double *)v23.m128_u64);
  v0 = j__strlen("Maximum optimization to perform");
  si128 = _mm_load_si128((const __m128i *)&v23);
  qword_2CD3A70 = 0;
  v2 = v0;
  qword_2CD3A78 = 0;
  v27 = si128;
  qword_2CD3A60 = (__int64)&off_2C4B8B0;
  qword_2CD3A68 = (unsigned int)qword_2CD3A68 & 0x80000000;
  qword_2CD3AA8 = 0x100000000LL;
  v25 = si128;
  qword_2CD3A80 = 0;
  qword_2CD3A88 = 0;
  qword_2CD3A90 = 0;
  qword_2CD3A98 = 0;
  qword_2CD3AA0 = (__int64)&unk_2CD3AB0;
  qword_2CD3AB8 = (__int64)&unk_2CD3AD0;
  qword_2CD3AC0 = 1;
  dword_2CD3AC8 = 0;
  byte_2CD3ACC = 1;
  v3 = sub_21ED2B0("Maximum optimization to perform");
  v4 = (unsigned int)qword_2CD3AA8;
  v5 = (unsigned int)qword_2CD3AA8 + 1LL;
  if ( v5 > HIDWORD(qword_2CD3AA8) )
  {
    v23.m128_u64[0] = v3;
    sub_22134E0((char *)&unk_2CD3AB0 - 16, &unk_2CD3AB0, v5, 8);
    v4 = (unsigned int)qword_2CD3AA8;
    v3 = v23.m128_u64[0];
  }
  *(_QWORD *)(qword_2CD3AA0 + 8 * v4) = v3;
  LODWORD(qword_2CD3AA8) = qword_2CD3AA8 + 1;
  byte_2CD3AEC = 0;
  qword_2CD3AE0 = (__int64)off_2C47BB0;
  dword_2CD3AD8 = 0;
  xmmword_2CD3B08 = (__int128)_mm_loadh_ps((const double *)&off_2C4D900);
  qword_2CD3A60 = (__int64)off_2C4B778;
  dword_2CD3AE8 = 0;
  qword_2CD3AF0 = (__int64)off_2BC0BC8;
  sub_21F3510(&qword_2CD3A60, "opt-bisect-limit", 16);
  dword_2CD3AD8 = 0x7FFFFFFF;
  byte_2CD3AEC = 1;
  dword_2CD3AE8 = 0x7FFFFFFF;
  v29.m128i_i64[0] = 0;
  BYTE2(qword_2CD3A68) = BYTE2(qword_2CD3A68) & 0x98 | 0x20;
  if ( v25.m128i_i64[0] )
  {
    ((void (__fastcall *)(__m128i *, _BYTE *, __int64))v25.m128i_i64[0])(&v28, v24, 2);
    v6 = _mm_load_si128(&v25);
    v31 = nullptr;
    v29 = v6;
    if ( v25.m128i_i64[0] )
    {
      v7 = (__m128i *)operator new(0x20u);
      v8 = v29.m128i_i64[0];
      v9 = _mm_load_si128(&v28);
      v29.m128i_i64[0] = 0;
      v10 = _mm_loadu_si128(v7);
      v11 = v7[1].m128i_i64[1];
      v30[0] = v7;
      v7[1].m128i_i64[0] = v8;
      v12 = v29.m128i_i64[1];
      *v7 = v9;
      v7[1].m128i_i64[1] = v12;
      v29.m128i_i64[1] = v11;
      v32 = sub_209B4B0;
      v28 = v10;
      v31 = sub_209B540;
    }
  }
  else
  {
    v31 = nullptr;
  }
  v13 = v31;
  v14 = v35;
  v34 = nullptr;
  if ( v31 )
  {
    ((void (__fastcall *)(__m128i *, _QWORD *, __int64))v31)(&v33, v30, 2);
    v14 = v32;
    v13 = v31;
  }
  v15 = _mm_load_si128(&v33);
  v16 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))xmmword_2CD3B08;
  *(_QWORD *)&xmmword_2CD3B08 = v13;
  v33 = _mm_loadu_si128((const __m128i *)&xmmword_2CD3AF8);
  xmmword_2CD3AF8 = (__int128)v15;
  v34 = v16;
  v35 = *((__int64 (__fastcall **)())&xmmword_2CD3B08 + 1);
  *((_QWORD *)&xmmword_2CD3B08 + 1) = v14;
  if ( v16 )
    v16(&v33, &v33, 3);
  if ( v31 )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v31)(v30, v30, 3);
  if ( v29.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v29.m128i_i64[0])(&v28, &v28, 3);
  qword_2CD3A88 = v2;
  qword_2CD3A80 = (__int64)"Maximum optimization to perform";
  sub_21F4400(&qword_2CD3A60);
  if ( v25.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v25.m128i_i64[0])(v24, v24, 3);
  if ( v27.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v27.m128i_i64[0])(v26, v26, 3);
  __cxa_atexit(sub_1FF0490, &qword_2CD3A60, &off_2AFC540);
  v17 = j__strlen("Show verbose output when opt-bisect-limit is set");
  byte_2CD3A0C = 1;
  qword_2CD39B0 = 0;
  v18 = v17;
  qword_2CD39A0 = (__int64)&off_2C4B8B0;
  qword_2CD39A8 = (unsigned int)qword_2CD39A8 & 0x80000000;
  qword_2CD39E8 = 0x100000000LL;
  qword_2CD39B8 = 0;
  qword_2CD39C0 = 0;
  qword_2CD39C8 = 0;
  qword_2CD39D0 = 0;
  qword_2CD39D8 = 0;
  qword_2CD39E0 = (__int64)&unk_2CD39F0;
  qword_2CD39F8 = (__int64)&unk_2CD3A10;
  qword_2CD3A00 = 1;
  dword_2CD3A08 = 0;
  v19 = sub_21ED2B0("Show verbose output when opt-bisect-limit is set");
  v20 = (unsigned int)qword_2CD39E8;
  v21 = (unsigned int)qword_2CD39E8 + 1LL;
  if ( v21 > HIDWORD(qword_2CD39E8) )
  {
    v23.m128_u64[0] = v19;
    sub_22134E0((char *)&unk_2CD39F0 - 16, &unk_2CD39F0, v21, 8);
    v20 = (unsigned int)qword_2CD39E8;
    v19 = v23.m128_u64[0];
  }
  *(_QWORD *)(qword_2CD39E0 + 8 * v20) = v19;
  word_2CD3A28 = 0;
  xmmword_2CD3A48 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD39E8) = qword_2CD39E8 + 1;
  qword_2CD3A20 = (__int64)off_2C474E8;
  byte_2CD3A18 = 0;
  qword_2CD39A0 = (__int64)off_2C4B848;
  qword_2CD3A30 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD39A0, "opt-bisect-verbose", 18);
  qword_2CD39C0 = (__int64)"Show verbose output when opt-bisect-limit is set";
  qword_2CD39C8 = v18;
  word_2CD3A28 = 257;
  byte_2CD3A18 = 1;
  BYTE2(qword_2CD39A8) = BYTE2(qword_2CD39A8) & 0x98 | 0x20;
  sub_21F4400(&qword_2CD39A0);
  return __cxa_atexit(sub_1FEA450, &qword_2CD39A0, &off_2AFC540);
}

