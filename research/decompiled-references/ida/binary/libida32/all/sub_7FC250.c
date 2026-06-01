__int64 __fastcall sub_7FC250(__m128i *a1, _BYTE *a2)
{
  __int64 v3; // rax
  Elf64_Rela *v4; // rdi
  __int64 v5; // rax
  void *(__fastcall *v6)(__int64, __int64, __int64); // rax
  void (__fastcall *v7)(__int64, void *); // rax
  unsigned __int32 v8; // r8d
  unsigned int v9; // eax
  __m128i v10; // xmm0
  int v11; // ecx
  __int64 v12; // rax
  bool v13; // zf
  const char *v14; // rax
  __int64 result; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  unsigned int v18; // r8d
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __m128i si128; // xmm0
  __m128i v27; // xmm0
  bool v28; // cc
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  _BYTE v36[248]; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v37; // [rsp+F8h] [rbp-10h]

  v37 = __readfsqword(0x28u);
  if ( !a2 )
  {
    a2 = v36;
    memset(v36, 0, 0xF0u);
  }
  a1->m128i_i64[0] = 0;
  a1[95].m128i_i64[1] = 0;
  memset(
    (void *)((unsigned __int64)&a1->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 8) & 0xFFFFFFF8) + 1536) >> 3));
  v3 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    v3 = 0x800000;
  a1[5].m128i_i64[0] = v3;
  v4 = *((Elf64_Rela **)a2 + 1);
  if ( !v4 )
    v4 = &stru_40000;
  a1[5].m128i_i64[1] = (__int64)v4;
  v5 = *((_QWORD *)a2 + 2);
  if ( !v5 )
  {
    a1[7].m128i_i64[0] = 1;
    v5 = 341;
  }
  a1[6].m128i_i64[1] = v5;
  a1[7].m128i_i64[1] = *((_QWORD *)a2 + 3);
  v6 = *((void *(__fastcall **)(__int64, __int64, __int64))a2 + 4);
  if ( !v6 )
    v6 = sub_7F4AC0;
  a1[8].m128i_i64[0] = (__int64)v6;
  v7 = *((void (__fastcall **)(__int64, void *))a2 + 5);
  if ( !v7 )
    v7 = sub_7F4AB0;
  a1[8].m128i_i64[1] = (__int64)v7;
  a1[9].m128i_i64[0] = *((_QWORD *)a2 + 6);
  v8 = *((_DWORD *)a2 + 14);
  a1[9].m128i_i32[2] = v8;
  v9 = v8 & 0x1000060;
  a1[10] = _mm_loadu_si128((const __m128i *)a2 + 4);
  a1[11] = _mm_loadu_si128((const __m128i *)a2 + 5);
  a1[12] = _mm_loadu_si128((const __m128i *)a2 + 6);
  a1[13] = _mm_loadu_si128((const __m128i *)a2 + 7);
  a1[14] = _mm_loadu_si128((const __m128i *)a2 + 8);
  v10 = _mm_loadu_si128((const __m128i *)a2 + 9);
  a1[10].m128i_i32[0] = 0;
  a1[12].m128i_i32[0] = 1;
  a1[14].m128i_i32[0] = 2;
  a1[15] = v10;
  if ( (v8 & 0x1000060) == 0x40 )
  {
    a1[84].m128i_i64[1] = (__int64)&unk_2B129E0;
  }
  else
  {
    if ( v9 > 0x40 )
    {
      v13 = v9 == 0x1000000;
      v14 = "unavailable secondary compressor: LZMA";
      if ( !v13 )
        v14 = "too many secondary compressor types set";
LABEL_23:
      a1[4].m128i_i64[0] = (__int64)v14;
      return 4294949586LL;
    }
    if ( v9 )
    {
      a1[84].m128i_i64[1] = (__int64)&unk_2B129A0;
    }
    else if ( (v8 & 0x380) != 0 )
    {
      v14 = "XD3_SEC flags require a secondary compressor type";
      goto LABEL_23;
    }
  }
  v11 = 64;
  a1[83].m128i_i64[1] = (__int64)&unk_2396E00;
  a1[82].m128i_i64[1] = (__int64)sub_7F5C30;
  v12 = 1;
  while ( v4 != (Elf64_Rela *)v12 )
  {
    v12 *= 2;
    if ( !--v11 )
    {
      v14 = "sprevsz is required to be a power of two";
      goto LABEL_23;
    }
  }
  a1[6].m128i_i64[0] = (__int64)&v4[-1].r_addend + 7;
  switch ( *((_DWORD *)a2 + 40) )
  {
    case 0:
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384780);
      a1[20].m128i_i64[0] = 70;
      a1[16].m128i_i64[0] = (__int64)"default";
      a1[17] = si128;
      v27 = _mm_load_si128((const __m128i *)&xmmword_2384790);
      a1[16].m128i_i64[1] = (__int64)sub_7FF7E0;
      a1[18] = v27;
      a1[19] = _mm_load_si128((const __m128i *)&xmmword_23847A0);
      goto LABEL_27;
    case 1:
      v24 = _mm_load_si128((const __m128i *)&xmmword_23847B0);
      a1[20].m128i_i64[0] = 70;
      a1[16].m128i_i64[0] = (__int64)"slow";
      a1[17] = v24;
      v25 = _mm_load_si128((const __m128i *)&xmmword_23847C0);
      a1[16].m128i_i64[1] = (__int64)sub_7FF180;
      a1[18] = v25;
      a1[19] = _mm_load_si128((const __m128i *)&xmmword_23847D0);
      goto LABEL_27;
    case 2:
      v23 = _mm_load_si128((const __m128i *)&xmmword_2384830);
      a1[20].m128i_i64[0] = 35;
      a1[16].m128i_i64[0] = (__int64)"fast";
      a1[16].m128i_i64[1] = (__int64)sub_7FEB90;
      a1[17] = v23;
      a1[18] = _mm_unpacklo_epi64((__m128i)4uLL, (__m128i)4uLL);
      a1[19] = _mm_load_si128((const __m128i *)&xmmword_2384820);
      goto LABEL_27;
    case 3:
      v21 = _mm_load_si128((const __m128i *)&xmmword_2384810);
      a1[20].m128i_i64[0] = 18;
      a1[16].m128i_i64[0] = (__int64)"faster";
      a1[17] = v21;
      v22 = _mm_load_si128((const __m128i *)&xmmword_23847F0);
      a1[16].m128i_i64[1] = (__int64)sub_7FE540;
      a1[18] = v22;
      a1[19] = _mm_load_si128((const __m128i *)&xmmword_2384820);
      goto LABEL_27;
    case 4:
      v16 = _mm_load_si128((const __m128i *)&xmmword_23847E0);
      a1[20].m128i_i64[0] = 6;
      a1[16].m128i_i64[0] = (__int64)"fastest";
      a1[17] = v16;
      v17 = _mm_load_si128((const __m128i *)&xmmword_23847F0);
      a1[16].m128i_i64[1] = (__int64)sub_7FEBA0;
      a1[18] = v17;
      a1[19] = _mm_load_si128((const __m128i *)&xmmword_2384800);
      goto LABEL_27;
    case 5:
      a1[16] = _mm_loadu_si128((const __m128i *)(a2 + 168));
      a1[17] = _mm_loadu_si128((const __m128i *)(a2 + 184));
      v28 = a1[17].m128i_i64[0] <= 3uLL;
      a1[18] = _mm_loadu_si128((const __m128i *)(a2 + 200));
      a1[19] = _mm_loadu_si128((const __m128i *)(a2 + 216));
      a1[20].m128i_i64[0] = *((_QWORD *)a2 + 29);
      a1[16].m128i_i64[1] = (__int64)sub_7FFE40;
      a1[16].m128i_i64[0] = (__int64)"soft";
      if ( v28 || !a1[17].m128i_i64[1] || a1[18].m128i_i64[0] <= 3uLL )
      {
        a1[4].m128i_i64[0] = (__int64)"invalid soft string-match config";
        return 4294949585LL;
      }
LABEL_27:
      if ( *((_DWORD *)a2 + 40) || (v8 & 0xF00000) == 0 )
        return 0;
      v18 = (v8 >> 20) & 0xF;
      if ( v18 > 5 )
      {
        if ( v18 == 6 )
        {
          v31 = _mm_load_si128((const __m128i *)&xmmword_2384780);
          a1[20].m128i_i64[0] = 70;
          a1[16].m128i_i64[0] = (__int64)"default";
          a1[17] = v31;
          v32 = _mm_load_si128((const __m128i *)&xmmword_2384790);
          a1[16].m128i_i64[1] = (__int64)sub_7FF7E0;
          a1[18] = v32;
          a1[19] = _mm_load_si128((const __m128i *)&xmmword_23847A0);
          return 0;
        }
      }
      else
      {
        if ( v18 > 2 )
        {
          v33 = _mm_load_si128((const __m128i *)&xmmword_2384830);
          a1[20].m128i_i64[0] = 35;
          a1[16].m128i_i64[0] = (__int64)"fast";
          a1[16].m128i_i64[1] = (__int64)sub_7FEB90;
          a1[17] = v33;
          a1[18] = _mm_unpacklo_epi64((__m128i)4uLL, (__m128i)4uLL);
          a1[19] = _mm_load_si128((const __m128i *)&xmmword_2384820);
          return 0;
        }
        if ( v18 == 1 )
        {
          v29 = _mm_load_si128((const __m128i *)&xmmword_23847E0);
          a1[20].m128i_i64[0] = 6;
          a1[16].m128i_i64[0] = (__int64)"fastest";
          a1[17] = v29;
          v30 = _mm_load_si128((const __m128i *)&xmmword_23847F0);
          a1[16].m128i_i64[1] = (__int64)sub_7FEBA0;
          a1[18] = v30;
          a1[19] = _mm_load_si128((const __m128i *)&xmmword_2384800);
          return 0;
        }
        if ( v18 == 2 )
        {
          v19 = _mm_load_si128((const __m128i *)&xmmword_2384810);
          a1[20].m128i_i64[0] = 18;
          a1[16].m128i_i64[0] = (__int64)"faster";
          a1[17] = v19;
          v20 = _mm_load_si128((const __m128i *)&xmmword_23847F0);
          a1[16].m128i_i64[1] = (__int64)sub_7FE540;
          a1[18] = v20;
          a1[19] = _mm_load_si128((const __m128i *)&xmmword_2384820);
          return 0;
        }
      }
      v34 = _mm_load_si128((const __m128i *)&xmmword_23847B0);
      a1[20].m128i_i64[0] = 70;
      a1[16].m128i_i64[0] = (__int64)"slow";
      a1[17] = v34;
      v35 = _mm_load_si128((const __m128i *)&xmmword_23847C0);
      a1[16].m128i_i64[1] = (__int64)sub_7FF180;
      a1[18] = v35;
      a1[19] = _mm_load_si128((const __m128i *)&xmmword_23847D0);
      result = 0;
      break;
    default:
      v14 = "invalid string match config type";
      goto LABEL_23;
  }
  return result;
}

