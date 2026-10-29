__int64 __fastcall sub_B9C860(__int64 a1)
{
  char **exception; // r13
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __m128 v6; // xmm0
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  unsigned int v9; // r14d
  unsigned int v10; // ecx
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  __m128i v13; // xmm0
  _OWORD *v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *i; // rax
  _QWORD *v19; // rdx
  char *v21[11]; // [rsp+0h] [rbp-58h] BYREF

  v2 = sub_186B270(0x182A0u);
  *(_QWORD *)(v2 + 8) = a1;
  *(_QWORD *)v2 = &off_1C57B70;
  v3 = *(_QWORD *)(a1 + 104);
  *(_BYTE *)(v2 + 24) = 1;
  *(_QWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 80) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  *(_OWORD *)(v2 + 48) = 0;
  *(_OWORD *)(v2 + 64) = 0;
  sub_180C0A0(v2 + 48);
  v4 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(v2 + 112) = v2 + 48;
  *(_QWORD *)(v2 + 88) = 0;
  *(_QWORD *)(v2 + 128) = v4;
  *(_QWORD *)(v2 + 96) = v2 + 88;
  *(_QWORD *)(v2 + 104) = v2 + 32;
  *(_QWORD *)(v2 + 120) = a1;
  *(_QWORD *)(v2 + 136) = v2 + 96;
  *(_QWORD *)(v2 + 144) = v2 + 88;
  *(_BYTE *)(v2 + 152) = 1;
  *(_QWORD *)(v2 + 224) = 0;
  *(_OWORD *)(v2 + 160) = 0;
  *(_OWORD *)(v2 + 176) = 0;
  v5 = sub_186B270(0x80u);
  v6 = _mm_loadh_ps((const double *)(a1 + 104));
  *(_QWORD *)v5 = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = 0;
  *(_DWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 80) = 0;
  *(_DWORD *)(v5 + 88) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_DWORD *)(v5 + 104) = 0;
  *(_QWORD *)(v5 + 112) = 0;
  *(_DWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v2 + 232) = v5;
  *(_QWORD *)(v2 + 240) = 8;
  *(_DWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 288) = 0;
  *(_QWORD *)(v2 + 312) = v2;
  *(_BYTE *)(v2 + 320) = 1;
  *(_DWORD *)(v2 + 360) = 0;
  *(_QWORD *)(v2 + 424) = 0;
  *(_OWORD *)(v2 + 256) = 0;
  *(_OWORD *)(v2 + 272) = 0;
  *(__m128 *)(v2 + 296) = v6;
  *(_OWORD *)(v2 + 328) = 0;
  *(_OWORD *)(v2 + 344) = 0;
  *(_OWORD *)(v2 + 440) = 0;
  *(_OWORD *)(v2 + 456) = 0;
  v7 = (_QWORD *)sub_186B270(0x18u);
  *v7 = 2;
  v8 = v7 + 1;
  *(_QWORD *)(v2 + 344) = v8;
  while ( 1 )
  {
    v12 = *((_DWORD *)v8 - 2);
    if ( v12 > 0xF )
      break;
    v9 = (3 * v12 + 1) >> 1;
    v10 = 8 * v9 + 8;
    if ( 8 * v12 + 8 >= v10 || v12 >= v9 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_151CF2(v21);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v21);
      sub_233E40((__int64)v21);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v11 = (unsigned int *)sub_186B300(v8 - 1, v10);
    v8 = v11 + 2;
    *(_QWORD *)(v2 + 344) = v11 + 2;
    *v11 = v9;
  }
  *v8 = 0;
  v8[15] = 0;
  *((_DWORD *)v8 - 1) = 16;
  memset(
    (void *)((unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v8 - (((_DWORD)v8 + 8) & 0xFFFFFFF8) + 128) >> 3));
  *(_QWORD *)(v2 + 496) = v2 + 32;
  *(_QWORD *)(v2 + 488) = 0;
  v13 = _mm_loadl_epi64((const __m128i *)(v2 + 16));
  *(_QWORD *)(v2 + 504) = 0;
  *(_QWORD *)(v2 + 512) = 0;
  *(_QWORD *)(v2 + 520) = 0;
  *(_QWORD *)(v2 + 528) = 0;
  *(_QWORD *)(v2 + 536) = 0;
  *(_QWORD *)(v2 + 544) = 0;
  *(_QWORD *)(v2 + 552) = 0;
  *(_QWORD *)(v2 + 560) = v2 + 48;
  *(__m128i *)(v2 + 472) = _mm_unpacklo_epi64(v13, (__m128i)(unsigned __int64)(v2 + 120));
  sub_180C0A0(v2 + 568);
  memset((void *)(v2 + 608), 0, 0x10000u);
  *(_QWORD *)(v2 + 98928) = 0;
  *(_OWORD *)((char *)&stru_18260.r_offset + v2) = 0;
  v14 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(v2 + 98944) = 8;
  v15 = (_QWORD *)(v2 + 66144);
  *(_DWORD *)(v2 + 98952) = 0;
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  *(unsigned __int64 *)((char *)&stru_18278.r_offset + v2) = (unsigned __int64)v14;
  v16 = (_QWORD *)(v2 + 608);
  *(_OWORD *)((char *)&stru_18290.r_offset + v2) = 0;
  while ( 1 )
  {
    v17 = v16 + 128;
    do
    {
      *v16 = 0;
      v16 += 4;
      *(v16 - 2) = 0;
    }
    while ( v17 != v16 );
    if ( v17 == v15 )
      break;
    v16 = v17;
  }
  for ( i = (_QWORD *)(v2 + 616); ; i = v19 )
  {
    v19 = i + 128;
    do
    {
      *i = 0;
      i += 4;
      *(i - 2) = 0;
    }
    while ( v19 != i );
    if ( v19 == (_QWORD *)(v2 + 66152) )
      break;
  }
  memset(v15, 0, 0x8000u);
  return v2;
}

