int __fastcall sub_5A2890(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  const __m128i *v4; // r14
  _QWORD *v5; // rax
  char *v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rbx
  char *v12; // rax
  _QWORD *v13; // rsi
  char *v14; // rdi
  signed __int64 v15; // r12
  __m128i si128; // xmm0
  size_t v17; // r12
  void *v18; // rdi
  _BYTE *v19; // r15
  __int64 v20; // rax
  signed __int64 v21; // rax
  signed __int64 v22; // r15
  __int64 v23; // rax
  char *v24; // rbx
  void *v25; // rdi
  char *v26; // rdi
  char v28; // [rsp+15h] [rbp-193h] BYREF
  char v29; // [rsp+16h] [rbp-192h] BYREF
  char v30; // [rsp+17h] [rbp-191h] BYREF
  size_t v31; // [rsp+18h] [rbp-190h]
  _BYTE v32[32]; // [rsp+20h] [rbp-188h] BYREF
  _BYTE v33[32]; // [rsp+40h] [rbp-168h] BYREF
  void *v34[2]; // [rsp+60h] [rbp-148h] BYREF
  char *v35; // [rsp+70h] [rbp-138h]
  _BYTE v36[80]; // [rsp+80h] [rbp-128h] BYREF
  char v37[80]; // [rsp+D0h] [rbp-D8h] BYREF
  char v38[16]; // [rsp+120h] [rbp-88h] BYREF
  char v39; // [rsp+130h] [rbp-78h] BYREF
  char v40; // [rsp+170h] [rbp-38h] BYREF

  qword_4B016B0 = 0;
  qword_4B016B8 = 0;
  qword_4B016C0 = 0;
  qword_4B016A0 = (__int64)&off_4A6E058;
  qword_4B016A8 = (unsigned int)qword_4B016A8 & 0x80000000;
  qword_4B016C8 = 0;
  qword_4B016E8 = 0x100000000LL;
  qword_4B016D0 = 0;
  qword_4B016D8 = 0;
  qword_4B016E0 = (__int64)&qword_4B016F0;
  qword_4B016F8 = (__int64)&qword_4B01710;
  qword_4B01700 = 1;
  dword_4B01708 = 0;
  byte_4B0170C = 1;
  v1 = sub_259AC30(a1, &qword_4B016F0);
  v2 = (unsigned int)qword_4B016E8;
  v3 = (unsigned int)qword_4B016E8 + 1LL;
  if ( HIDWORD(qword_4B016E8) < v3 )
  {
    sub_25D6060(&qword_4B016F0 - 2, &qword_4B016F0, v3, 8);
    v2 = (unsigned int)qword_4B016E8;
  }
  v4 = (const __m128i *)v36;
  *(_QWORD *)(qword_4B016E0 + 8 * v2) = v1;
  qword_4B01718 = (__int64)&byte_4B01728;
  LODWORD(qword_4B016E8) = qword_4B016E8 + 1;
  qword_4B01720 = 0;
  qword_4B016A0 = (__int64)&off_4A6DF88;
  xmmword_4B01738 = (__int128)_mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)&off_49D9118,
                                (__m128i)(unsigned __int64)&byte_4B01750);
  xmmword_4B01770 = 0;
  qword_4B01768 = (__int64)off_49D92E8;
  byte_4B01728 = 0;
  byte_4B01750 = 0;
  xmmword_4B01780 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EB4F8),
                                (__m128i)(unsigned __int64)nullsub_294);
  qword_4B01748 = 0;
  byte_4B01760 = 0;
  sub_259F400(&qword_4B016A0, "regalloc-priority-interactive-channel-base", 42);
  qword_4B016C8 = 215;
  BYTE2(qword_4B016A8) = BYTE2(qword_4B016A8) & 0x9F | 0x20;
  qword_4B016C0 = (__int64)"Base file path for the interactive mode. The incoming filename should have the name <regalloc"
                           "-priority-interactive-channel-base>.in, while the outgoing name should be <regalloc-priority-"
                           "interactive-channel-base>.out";
  sub_259EC40(&qword_4B016A0);
  __cxa_atexit(sub_2283FB0, &qword_4B016A0, &off_47CFE00);
  qword_4B01680 = 0;
  xmmword_4B01670 = 0;
  v5 = (_QWORD *)operator new(8u);
  *v5 = 1;
  qword_4B01680 = (__int64)(v5 + 1);
  *((_QWORD *)&xmmword_4B01670 + 1) = v5 + 1;
  *(_QWORD *)&xmmword_4B01670 = v5;
  __cxa_atexit(sub_34BB850, &xmmword_4B01670, &off_47CFE00);
  v35 = nullptr;
  *(_OWORD *)v34 = 0;
  v6 = (char *)operator new(8u);
  *(_QWORD *)v6 = 1;
  v35 = v6 + 8;
  v34[1] = v6 + 8;
  v34[0] = v6;
  sub_F2B460(v36, "priority", v33);
  v7 = sub_3856300();
  sub_3856360(qword_4B01620, v36, 0, v7, 4, v34);
  std::string::_M_dispose();
  if ( v34[0] )
    operator delete(v34[0], v35 - (char *)v34[0]);
  __cxa_atexit(sub_34BC190, qword_4B01620, &off_47CFE00);
  sub_F2B460(v32, "li_size", &v28);
  v8 = sub_3856310();
  sub_3856360(v36, v32, 0, v8, 8, &xmmword_4B01670);
  sub_F2B460(v33, "stage", &v29);
  v9 = sub_3856310();
  sub_3856360(v37, v33, 0, v9, 8, &xmmword_4B01670);
  sub_F2B460(v34, "weight", &v30);
  v10 = sub_3856300();
  sub_3856360(v38, v34, 0, v10, 4, &xmmword_4B01670);
  qword_4B01600 = 0;
  xmmword_4B015F0 = 0;
  *(_QWORD *)&xmmword_4B015F0 = operator new(0xF0u);
  v11 = xmmword_4B015F0;
  qword_4B01600 = xmmword_4B015F0 + 240;
  do
  {
    v17 = v4->m128i_u64[1];
    v18 = (void *)(v11 + 16);
    v19 = (_BYTE *)v4->m128i_i64[0];
    *(_QWORD *)v11 = v11 + 16;
    v31 = v17;
    if ( v17 > 0xF )
    {
      v23 = std::string::_M_create();
      *(_QWORD *)v11 = v23;
      v18 = (void *)v23;
      *(_QWORD *)(v11 + 16) = v31;
LABEL_18:
      memcpy(v18, v19, v17);
      v17 = v31;
      v18 = *(void **)v11;
      goto LABEL_13;
    }
    if ( v17 == 1 )
    {
      *(_BYTE *)(v11 + 16) = *v19;
      goto LABEL_13;
    }
    if ( v17 )
      goto LABEL_18;
LABEL_13:
    *(_QWORD *)(v11 + 8) = v17;
    *((_BYTE *)v18 + v17) = 0;
    v20 = v4[2].m128i_i64[0];
    *(_QWORD *)(v11 + 56) = 0;
    *(_QWORD *)(v11 + 32) = v20;
    v21 = v4[3].m128i_i64[0] - v4[2].m128i_i64[1];
    *(_OWORD *)(v11 + 40) = 0;
    v22 = v21;
    if ( v21 )
    {
      if ( (unsigned __int64)v21 > 0x7FFFFFFFFFFFFFF8LL )
      {
        if ( v21 < 0 )
          sub_555886();
        std::__throw_bad_alloc();
      }
      v12 = (char *)operator new(v21);
      v13 = (_QWORD *)v4[2].m128i_i64[1];
      v14 = v12;
      v15 = v4[3].m128i_i64[0] - (_QWORD)v13;
      *(_QWORD *)(v11 + 56) = &v12[v22];
      *(__m128i *)(v11 + 40) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
      if ( v15 <= 8 )
      {
        if ( v15 == 8 )
          *(_QWORD *)v12 = *v13;
      }
      else
      {
        v14 = (char *)memmove(v12, v13, v15);
      }
    }
    else
    {
      v15 = 0;
      v14 = nullptr;
    }
    si128 = _mm_load_si128(v4 + 4);
    v4 += 5;
    *(_QWORD *)(v11 + 48) = &v14[v15];
    v11 += 80;
    *(__m128i *)(v11 - 16) = si128;
  }
  while ( v4 != (const __m128i *)&v40 );
  *((_QWORD *)&xmmword_4B015F0 + 1) = v11;
  v24 = &v39;
  do
  {
    v25 = *((void **)v24 + 3);
    if ( v25 )
      operator delete(v25, *((_QWORD *)v24 + 5) - (_QWORD)v25);
    v26 = *((char **)v24 - 2);
    if ( v24 != v26 )
      operator delete(v26, *(_QWORD *)v24 + 1LL);
    v24 -= 80;
  }
  while ( v33 != v24 );
  std::string::_M_dispose();
  std::string::_M_dispose();
  std::string::_M_dispose();
  return __cxa_atexit(sub_34C0F00, &xmmword_4B015F0, &off_47CFE00);
}

