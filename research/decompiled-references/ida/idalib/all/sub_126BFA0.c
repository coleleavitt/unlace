__m128i **__fastcall sub_126BFA0(__m128i **a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __m128i *v4; // rax
  __m128i si128; // xmm0
  __int64 v7; // rdx
  __m128i *v8; // rax
  __m128i v9; // xmm0
  _QWORD v10[4]; // [rsp+0h] [rbp-68h] BYREF
  __int16 v11; // [rsp+20h] [rbp-48h]
  _QWORD v12[4]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v13; // [rsp+50h] [rbp-18h]

  v3 = *(_DWORD *)(a2 + 48);
  switch ( v3 )
  {
    case 28:
      goto LABEL_5;
    case 38:
      *a1 = (__m128i *)(a1 + 2);
      v4 = (__m128i *)operator new(0x1Bu);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9E00);
      *a1 = v4;
      *v4 = si128;
      strcpy(v4[1].m128i_i8, "garm/ld.so");
      a1[2] = (__m128i *)(&qword_18 + 2);
      a1[1] = (__m128i *)(&qword_18 + 2);
      return a1;
    case 3:
      *a1 = (__m128i *)(a1 + 2);
      v8 = (__m128i *)operator new(0x1Cu);
      v9 = _mm_load_si128((const __m128i *)&xmmword_23A9DF0);
      *a1 = v8;
      *v8 = v9;
      strcpy(v8[1].m128i_i8, "agarm/ld.so");
      a1[2] = (__m128i *)(&qword_18 + 3);
      a1[1] = (__m128i *)(&qword_18 + 3);
      return a1;
    default:
LABEL_5:
      v10[2] = sub_115A2B0(a3, (_DWORD *)(a2 + 16));
      v11 = 1283;
      v12[0] = v10;
      v13 = 770;
      v12[2] = ".so";
      v10[0] = "/lib/riscv64-managarm/ld-riscv64-";
      v10[3] = v7;
      sub_2253560(a1, v12);
      return a1;
  }
}
