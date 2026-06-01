void __fastcall sub_1055420(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  bool v6; // zf
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // r13
  unsigned __int64 v10; // rdx
  char *v11; // rax
  __m128i si128; // xmm0
  __int32 v13; // eax
  __int32 v14; // edx
  signed __int64 v15; // rdi
  _QWORD *v16; // rdi
  size_t v17; // r12
  unsigned __int64 v18; // rdx
  __m128i *v19; // rdi
  __m128i v20; // xmm0
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  __int32 v24; // eax
  size_t v25; // rax
  __int64 v26; // rax
  int v27; // rdx^4
  int v28; // edx
  void *v29; // [rsp+0h] [rbp-48h] BYREF
  size_t v30; // [rsp+8h] [rbp-40h]
  _QWORD v31[7]; // [rsp+10h] [rbp-38h] BYREF

  sub_102D220(a1, a2, a3);
  *(_QWORD *)(a1 + 520) = a1 + 536;
  *(_DWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_BYTE *)(a1 + 536) = 0;
  *(_DWORD *)(a1 + 556) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_WORD *)(a1 + 568) = 0;
  *(_BYTE *)(a1 + 570) = 0;
  *(_QWORD *)(a1 + 576) = a1 + 592;
  *(_QWORD *)(a1 + 584) = 0;
  *(_BYTE *)(a1 + 592) = 0;
  *(_WORD *)(a1 + 62) = 128;
  *(_WORD *)(a1 + 24) = -32640;
  v5 = sub_21F90D0(a1, a2, v4);
  *(_WORD *)(a1 + 30) = 16448;
  *(_QWORD *)(a1 + 112) = v5;
  *(_BYTE *)(a1 + 393) |= 0x10u;
  *(_QWORD *)a1 = &off_2C061D0;
  *(_WORD *)(a1 + 8) = 16448;
  v6 = a2[2].m128i_i32[3] == 20;
  *(_BYTE *)(a1 + 285) = 1;
  *(_BYTE *)(a1 + 282) = 1;
  *(_DWORD *)(a1 + 140) = 7;
  *(_DWORD *)(a1 + 168) = 7;
  v29 = v31;
  v30 = 0;
  LOBYTE(v31[0]) = 0;
  if ( v6 )
  {
    v23 = j__strlen("E-m:a-Fi64-i64:64-i128:128-n32:64");
    sub_99BDC0(&v29, 0, 0, "E-m:a-Fi64-i64:64-i128:128-n32:64", v23);
    *(_BYTE *)(a1 + 23) = 32;
    *(_WORD *)(a1 + 24) = 8256;
    *(_QWORD *)(a1 + 112) = sub_21F90B0();
    goto LABEL_11;
  }
  if ( a2[2].m128i_i32[0] == 24 )
  {
    v21 = j__strlen("e-m:e-Fn32-i64:64-i128:128-n32:64");
    sub_99BDC0(&v29, 0, 0, "e-m:e-Fn32-i64:64-i128:128-n32:64", v21);
    v22 = j__strlen("elfv2");
    sub_99BDC0((_QWORD *)(a1 + 576), 0, *(_QWORD *)(a1 + 584), "elfv2", v22);
    goto LABEL_11;
  }
  v7 = j__strlen("E-m:e");
  sub_99BDC0(&v29, 0, 0, "E-m:e", v7);
  if ( a2[2].m128i_i32[0] != 23 )
    goto LABEL_4;
  v24 = a2[2].m128i_i32[3];
  if ( v24 == 3 )
  {
    if ( (unsigned int)sub_22B7B00(a2) > 0xC )
      goto LABEL_33;
    v26 = sub_22B7B00(a2);
    if ( !((v28 | HIDWORD(v26)) & 0x7FFFFFFF | (unsigned int)v26 | v27 & 0x7FFFFFFF) )
      goto LABEL_33;
    v24 = a2[2].m128i_i32[3];
  }
  if ( v24 == 12 || a2[3].m128i_i32[0] == 49 || (unsigned int)(a2[3].m128i_i32[0] - 18) <= 7 || v24 == 39 )
  {
LABEL_33:
    v25 = j__strlen("elfv2");
    sub_99BDC0((_QWORD *)(a1 + 576), 0, *(_QWORD *)(a1 + 584), "elfv2", v25);
    sub_9EE7C0(&v29, "-Fn32");
    goto LABEL_5;
  }
LABEL_4:
  v8 = j__strlen("elfv1");
  sub_99BDC0((_QWORD *)(a1 + 576), 0, *(_QWORD *)(a1 + 584), "elfv1", v8);
  sub_9EE7C0(&v29, "-Fi64");
LABEL_5:
  v9 = v30;
  if ( 0x7FFFFFFFFFFFFFFFLL - v30 <= 0x16 )
    goto LABEL_41;
  if ( v29 == v31 )
    v10 = 15;
  else
    v10 = v31[0];
  if ( v30 + 23 > v10 )
  {
    sub_998B30((__int64)&v29, v30, 0, "-i64:64-i128:128-n32:64", 0x17u);
  }
  else
  {
    v11 = (char *)v29 + v30;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A95E0);
    *((_DWORD *)v11 + 4) = 842231341;
    *((_WORD *)v11 + 10) = 13882;
    v11[22] = 52;
    *(__m128i *)v11 = si128;
  }
  v30 = v9 + 23;
  *((_BYTE *)v29 + v9 + 23) = 0;
LABEL_11:
  v13 = a2[2].m128i_i32[3];
  if ( v13 == 3 || v13 == 12 || (v14 = a2[3].m128i_i32[0], v14 == 49 || v13 == 39) || (unsigned int)(v14 - 18) <= 7 )
  {
    *(_WORD *)(a1 + 24) = 16448;
    *(_QWORD *)(a1 + 112) = sub_21F90B0();
    v13 = a2[2].m128i_i32[3];
  }
  v15 = v30;
  if ( v13 == 7 || v13 == 20 )
  {
    if ( 0x7FFFFFFFFFFFFFFFLL - v30 > 0x1E )
    {
      v17 = v30 + 31;
      if ( v29 == v31 )
        v18 = 15;
      else
        v18 = v31[0];
      if ( v17 > v18 )
      {
        sub_998B30((__int64)&v29, v30, 0, "-S128-v256:256:256-v512:512:512", 0x1Fu);
      }
      else
      {
        v19 = (__m128i *)((char *)v29 + v30);
        v20 = _mm_load_si128((const __m128i *)&xmmword_23A95F0);
        qmemcpy((char *)v29 + v30 + 16, "56-v512:512:512", 15);
        *v19 = v20;
      }
      v30 = v17;
      *((_BYTE *)v29 + v17) = 0;
      v15 = v30;
      goto LABEL_18;
    }
LABEL_41:
    std::__throw_length_error("basic_string::append");
  }
LABEL_18:
  sub_102D780((_QWORD *)a1, v29, v15, (__int64)&byte_22F0C30);
  v16 = v29;
  *(_WORD *)(a1 + 286) = 16512;
  if ( v16 != v31 )
    operator delete(v16);
}
