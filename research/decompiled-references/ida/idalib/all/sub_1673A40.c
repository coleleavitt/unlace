__m128i *__fastcall sub_1673A40(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  size_t v3; // rax
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 (__fastcall ***v12)(); // rax
  __m128i si128; // xmm0
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // rax
  __m128i *v18; // rbx
  __int64 v19; // rax
  size_t v20; // r14
  const void *v21; // rbx
  void *v22; // r15
  _BYTE *v24; // [rsp+0h] [rbp-5B8h] BYREF
  void *ptr; // [rsp+8h] [rbp-5B0h] BYREF
  __int64 v26; // [rsp+10h] [rbp-5A8h]
  _BYTE v27[24]; // [rsp+18h] [rbp-5A0h] BYREF
  __m128i v28[2]; // [rsp+30h] [rbp-588h] BYREF
  unsigned int v29; // [rsp+50h] [rbp-568h]
  _BYTE v30[1368]; // [rsp+60h] [rbp-558h] BYREF

  sub_15DCD40((__int64)v30);
  v24 = v30;
  v26 = 0x200000000LL;
  v1 = *a1;
  ptr = v27;
  v2 = *(_QWORD *)(*(_QWORD *)(v1 + 248) + 17504LL);
  v3 = j__strlen("swift_name");
  v4 = sub_6F3470(v2, "swift_name", v3);
  v9 = sub_15D92D0((__int64)v30, 104, v5, v6, v7, v8);
  v10 = sub_F963B0(v4, 0, 1);
  *(_BYTE *)(v9 + 35) &= 0xFCu;
  *(_WORD *)(v9 + 32) = v10;
  v11 = *(_QWORD *)(v9 + 56);
  *(_QWORD *)v9 = v4;
  *(_QWORD *)(v9 + 8) = 0;
  *(_BYTE *)(v9 + 34) = -15;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_QWORD *)(v9 + 56) = v11 & 0x7F800000 | 3;
  *(_OWORD *)(v9 + 16) = 0;
  v12 = sub_15D7D80(v9);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8A0);
  v14 = HIDWORD(v26);
  *(_QWORD *)(v9 + 96) = 2;
  *(_QWORD *)(v9 + 72) = v12;
  v15 = (unsigned int)v26;
  *(__m128i *)(v9 + 80) = si128;
  if ( v15 + 1 > v14 )
  {
    sub_2237220(&ptr, v27, v15 + 1, 8);
    v15 = (unsigned int)v26;
  }
  v16 = v9;
  *((_QWORD *)ptr + v15) = v9;
  v17 = *a1;
  v18 = nullptr;
  LODWORD(v26) = v26 + 1;
  if ( (unsigned __int8)sub_1CA3BD0(
                          *(_QWORD *)(v17 + 808),
                          *(_QWORD *)a1[1],
                          *(_QWORD *)(a1[2] + 40LL),
                          *(_QWORD *)(a1[2] + 48LL),
                          *(_DWORD *)(*(_QWORD *)a1[1] + 24LL),
                          v16,
                          0) )
  {
    memset(v28, 0, sizeof(v28));
    v29 = v29 & 0xFF000000 | 0x101A4;
    HIBYTE(v29) &= 0xFCu;
    v19 = a1[2];
    v20 = *(_QWORD *)(v19 + 48);
    v21 = *(const void **)(v19 + 40);
    v22 = (void *)sub_1673960((__int64 *)(*(_QWORD *)(*a1 + 248LL) + 2352LL), v20, 3u);
    memcpy(v22, v21, v20);
    v18 = (__m128i *)sub_1673960((__int64 *)(*(_QWORD *)(*a1 + 248LL) + 2352LL), 56, 3u);
    sub_B30080(v18, *(_QWORD *)(*a1 + 248LL), v28, v22, v20);
  }
  sub_15DCED0((__int64)v24, (__int64)&v24);
  if ( ptr != v27 )
    free(ptr);
  sub_15D7C30((__int64)v30);
  return v18;
}
