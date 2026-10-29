__int64 __fastcall sub_398820(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  __m128i v6; // xmm0
  char v7; // r13
  void *v8; // rdi
  __int64 v9; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 1336);
  v13 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_6633F0() )
  {
    if ( !under_debugger )
      interr(1390);
LABEL_19:
    BUG();
  }
  if ( !*(_DWORD *)(a1 + 152) )
  {
    if ( !under_debugger )
      interr(1391);
    goto LABEL_19;
  }
  sub_397B30(a1);
  sub_506B70(a1, 1);
  *(_QWORD *)(a1 + 904) = 0;
  *(_QWORD *)(a1 + 1312) = 0;
  memset(
    (void *)((a1 + 912) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 912) & 0xFFFFFFF8) + 1320) >> 3));
  if ( *(_BYTE *)(a1 + 328) )
  {
    if ( a3 == 3 )
    {
      *(__m128i *)(a1 + 552) = _mm_loadu_si128((const __m128i *)(a1 + 332));
      *(__m128i *)(a1 + 568) = _mm_loadu_si128((const __m128i *)(a1 + 348));
      *(__m128i *)(a1 + 584) = _mm_loadu_si128((const __m128i *)(a1 + 364));
      *(__m128i *)(a1 + 600) = _mm_loadu_si128((const __m128i *)(a1 + 380));
      *(__m128i *)(a1 + 616) = _mm_loadu_si128((const __m128i *)(a1 + 396));
      *(__m128i *)(a1 + 632) = _mm_loadu_si128((const __m128i *)(a1 + 412));
      *(__m128i *)(a1 + 648) = _mm_loadu_si128((const __m128i *)(a1 + 428));
      *(__m128i *)(a1 + 664) = _mm_loadu_si128((const __m128i *)(a1 + 444));
      *(__m128i *)(a1 + 680) = _mm_loadu_si128((const __m128i *)(a1 + 460));
      *(__m128i *)(a1 + 696) = _mm_loadu_si128((const __m128i *)(a1 + 476));
      *(__m128i *)(a1 + 712) = _mm_loadu_si128((const __m128i *)(a1 + 492));
      *(__m128i *)(a1 + 728) = _mm_loadu_si128((const __m128i *)(a1 + 508));
      *(__m128i *)(a1 + 740) = _mm_loadu_si128((const __m128i *)(a1 + 520));
      v9 = sub_5E3230();
      sub_5E7CE0(*(_QWORD *)(a1 + 1480) + 40LL, v9);
    }
    if ( !byte_2CA15CB )
LABEL_7:
      sub_397E30(a1, a2);
  }
  else
  {
    v6 = _mm_loadu_si128((const __m128i *)(a1 + 552));
    *(_BYTE *)(a1 + 328) = 1;
    *(__m128i *)(a1 + 332) = v6;
    v7 = byte_2CA15CB;
    *(__m128i *)(a1 + 348) = _mm_loadu_si128((const __m128i *)(a1 + 568));
    *(__m128i *)(a1 + 364) = _mm_loadu_si128((const __m128i *)(a1 + 584));
    *(__m128i *)(a1 + 380) = _mm_loadu_si128((const __m128i *)(a1 + 600));
    *(__m128i *)(a1 + 396) = _mm_loadu_si128((const __m128i *)(a1 + 616));
    *(__m128i *)(a1 + 412) = _mm_loadu_si128((const __m128i *)(a1 + 632));
    *(__m128i *)(a1 + 428) = _mm_loadu_si128((const __m128i *)(a1 + 648));
    *(__m128i *)(a1 + 444) = _mm_loadu_si128((const __m128i *)(a1 + 664));
    *(__m128i *)(a1 + 460) = _mm_loadu_si128((const __m128i *)(a1 + 680));
    *(__m128i *)(a1 + 476) = _mm_loadu_si128((const __m128i *)(a1 + 696));
    *(__m128i *)(a1 + 492) = _mm_loadu_si128((const __m128i *)(a1 + 712));
    *(__m128i *)(a1 + 508) = _mm_loadu_si128((const __m128i *)(a1 + 728));
    *(__m128i *)(a1 + 520) = _mm_loadu_si128((const __m128i *)(a1 + 740));
    if ( !v7 )
      goto LABEL_7;
  }
  sub_6B2DA0(&ptr, a1, a2);
  v8 = ptr;
  if ( v11 < v12 )
  {
    if ( v11 )
    {
      if ( ptr )
      {
        v8 = (void *)qrealloc(ptr);
        if ( !v8 )
          v8 = ptr;
      }
    }
  }
  *(_QWORD *)(v4 + 40) = v8;
  return 1;
}

