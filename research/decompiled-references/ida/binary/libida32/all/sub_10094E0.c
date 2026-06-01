char *__fastcall sub_10094E0(__int64 a1, const __m128i *a2, __int64 a3)
{
  void *v3; // rax
  const __m128i *v4; // r15
  signed __int64 v5; // r12
  signed __int64 v6; // rcx
  char v7; // r13
  const __m128i *v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rdi
  __int32 v12; // eax
  char v13; // al
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  char v16; // al
  __int16 v17; // dx
  __m128i si128; // xmm0
  char v19; // al
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  bool v25; // zf
  char *result; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  char *v29; // [rsp+8h] [rbp-40h] BYREF

  *(_BYTE *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_QWORD *)a1 = &unk_2BDB230;
  v3 = (void *)(a1 + 232);
  *(_QWORD *)(a1 + 216) = a1 + 232;
  v4 = (const __m128i *)a2->m128i_i64[0];
  v5 = a2->m128i_i64[1];
  v6 = v5 + a2->m128i_i64[0];
  LOBYTE(a3) = a2->m128i_i64[0] == 0;
  v7 = a3 & (v6 != 0);
  if ( v7 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v9 = a2;
  v10 = a1 + 216;
  if ( (unsigned __int64)v5 > 0xF )
  {
    if ( v5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v3 = (void *)operator new(v5 + 1);
    *(_QWORD *)(a1 + 232) = v5;
    *(_QWORD *)(a1 + 216) = v3;
LABEL_23:
    a2 = v4;
    memcpy(v3, v4, v5);
    v3 = *(void **)(a1 + 216);
    goto LABEL_5;
  }
  if ( v5 == 1 )
  {
    a3 = v4->m128i_u8[0];
    *(_BYTE *)(a1 + 232) = a3;
    goto LABEL_5;
  }
  if ( v5 )
    goto LABEL_23;
LABEL_5:
  *(_QWORD *)(a1 + 224) = v5;
  v11 = (__int64)v9;
  *((_BYTE *)v3 + v5) = 0;
  *(__m128i *)(a1 + 248) = _mm_loadu_si128(v9 + 2);
  *(_DWORD *)(a1 + 264) = v9[3].m128i_i32[0];
  v12 = v9[3].m128i_i32[1];
  *(_BYTE *)(a1 + 504) &= 0xF8u;
  *(_DWORD *)(a1 + 268) = v12;
  *(_QWORD *)(a1 + 288) = a1 + 304;
  *(_QWORD *)(a1 + 296) = 0;
  *(_BYTE *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 340) = 0;
  *(_BYTE *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  *(_BYTE *)(a1 + 404) = 0;
  *(_BYTE *)(a1 + 464) = 0;
  *(_BYTE *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 496) = 0x800000000LL;
  v13 = sub_22941C0(v9, a2, a3, v6);
  *(_DWORD *)(a1 + 30) = 1077944352;
  *(_BYTE *)(a1 + 34) = 0x80;
  *(_BYTE *)(a1 + 272) = v13 ^ 1;
  *(_QWORD *)(a1 + 8) = 0x2020101008082020LL;
  *(_QWORD *)(a1 + 48) = 0x2020101008084040LL;
  *(_DWORD *)(a1 + 44) = 538972176;
  *(_QWORD *)(a1 + 56) = 0x4000801F0F0700LL;
  v14 = v9[3].m128i_u32[0];
  *(_QWORD *)(a1 + 273) = 257;
  *(_BYTE *)(a1 + 285) = 0;
  *(_DWORD *)(a1 + 281) = (_DWORD)sub_1010000;
  if ( (unsigned int)(v14 - 1) > 0xB )
  {
    v15 = v9[2].m128i_u32[3];
    if ( (_DWORD)v15 == 15 )
    {
      if ( (unsigned int)v14 <= 0x31 )
      {
        v27 = 0x2000008020001LL;
        if ( _bittest64(&v27, v14) )
          goto LABEL_9;
      }
    }
    else
    {
      if ( (v14 & 0xFFFFFFDF) == 0x11 || (_DWORD)v15 == 39 )
        goto LABEL_9;
      if ( (unsigned int)v15 <= 0x1F )
      {
        v28 = 4160754210LL;
        if ( _bittest64(&v28, v15) )
        {
          v11 = 128;
          *(_WORD *)(a1 + 64) = 128;
          goto LABEL_12;
        }
      }
    }
    *(_WORD *)(a1 + 64) = 0;
    goto LABEL_12;
  }
LABEL_9:
  v11 = v10;
  v16 = sub_2294160(v10);
  v17 = 128;
  if ( !v16 )
  {
    v11 = v10;
    v17 = ((unsigned __int8)sub_2294180(v10) != 0) << 6;
  }
  *(_WORD *)(a1 + 64) = v17;
LABEL_12:
  si128 = _mm_load_si128((const __m128i *)&xmmword_2385520);
  *(_WORD *)(a1 + 16) = 4112;
  *(_QWORD *)(a1 + 20) = 0x8080404040402020LL;
  v19 = *(_BYTE *)(a1 + 184);
  *(__m128i *)(a1 + 136) = si128;
  v20 = _mm_load_si128((const __m128i *)&xmmword_2385530);
  *(_WORD *)(a1 + 28) = 0;
  *(_WORD *)(a1 + 286) = 0;
  *(__m128i *)(a1 + 152) = v20;
  v21 = _mm_load_si128((const __m128i *)&xmmword_2385540);
  *(_QWORD *)(a1 + 68) = 0;
  *(_BYTE *)(a1 + 184) = v19 & 0xE0 | 0x1B;
  *(_DWORD *)(a1 + 188) = 0;
  *(_QWORD *)(a1 + 192) = 64;
  *(__m128i *)(a1 + 168) = v21;
  *(_QWORD *)(a1 + 80) = sub_21D5340();
  *(_QWORD *)(a1 + 96) = sub_21D5360();
  v22 = sub_21D5370();
  *(_QWORD *)(a1 + 104) = v22;
  *(_QWORD *)(a1 + 112) = v22;
  *(_QWORD *)(a1 + 120) = sub_21D5380();
  v24 = sub_21D5390(v11, a2, v23);
  *(_DWORD *)(a1 + 392) &= 0xFFE00000;
  v25 = *(_DWORD *)(a1 + 260) == 15;
  *(_QWORD *)(a1 + 128) = v24;
  *(_QWORD *)(a1 + 328) = "mcount";
  *(_QWORD *)(a1 + 320) = "_";
  *(_WORD *)(a1 + 336) = 0;
  if ( v25 && *(_DWORD *)(a1 + 264) == 27 )
  {
    *(_DWORD *)(a1 + 340) = 10;
    v7 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 340) = 0;
  }
  result = "unknown";
  v25 = *(_BYTE *)(a1 + 404) == 0;
  *(_BYTE *)(a1 + 472) = v7;
  v29 = "unknown";
  *(_BYTE *)(a1 + 508) = 0;
  *(_QWORD *)(a1 + 368) = 7;
  *(_QWORD *)(a1 + 376) = 0;
  *(__m128 *)(a1 + 352) = _mm_loadh_ps((const double *)&v29);
  *(_QWORD *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 396) = 1024;
  if ( !v25 )
    *(_BYTE *)(a1 + 404) = 0;
  return result;
}

