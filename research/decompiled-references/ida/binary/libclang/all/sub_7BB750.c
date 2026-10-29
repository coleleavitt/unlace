unsigned __int64 __fastcall sub_7BB750(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        int a10)
{
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 *v18; // rbx
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  void (*v25)(); // rax
  bool v27; // al
  unsigned __int64 v29; // [rsp+0h] [rbp-58h]
  __int64 v32; // [rsp+18h] [rbp-40h]

  v12 = sub_79A610(152, a1, a2, 0);
  v29 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5), _mm_cvtsi32_si128(a9)).m128i_u64[0];
  *(_QWORD *)v12 = off_49F5208;
  if ( !a2
    || (v13 = sub_79A2E0(a2), v14 = *(_QWORD *)(v13 + 8) & 7LL, (*(_QWORD *)(v13 + 8) & 7) == 0)
    || *(char *)(v13 + 29) < 0 && (v32 = *(_QWORD *)(v13 + 8) & 7LL, v27 = sub_7946A0(v13), v14 = v32, !v27) )
  {
    v14 = 0;
  }
  *(_QWORD *)(v12 + 8) = v14;
  *(_DWORD *)(v12 + 24) = a4;
  *(_QWORD *)(v12 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v12 + 28) = 24597;
  v15 = sub_799DF0(0x15u);
  *(_BYTE *)(v12 + 32) &= 0xF8u;
  *(_WORD *)(v12 + 30) = v15 & 0x3FFF | *(_WORD *)(v12 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(21);
  *(_QWORD *)(v12 + 40) = a6;
  *(_QWORD *)v12 = &off_47D9B58;
  sub_79B760(v12 + 48, 21);
  *(_QWORD *)(v12 + 80) = 0;
  *(_QWORD *)(v12 + 88) = a7;
  *(_DWORD *)(v12 + 60) = a3;
  *(_QWORD *)(v12 + 104) = 0;
  *(_DWORD *)(v12 + 112) = 0;
  *(_QWORD *)v12 = &off_49F6260;
  *(_QWORD *)(v12 + 96) = a8;
  *(_QWORD *)(v12 + 136) = v29;
  *(_OWORD *)(v12 + 120) = 0;
  *(_DWORD *)(v12 + 144) = a10;
  if ( a8 )
  {
    v16 = 8LL * *(unsigned int *)(a8 + 8);
    v17 = a8 + v16 + 16;
    if ( v16 )
    {
      v18 = (__int64 *)(a8 + 16);
      do
      {
        v19 = *v18++;
        sub_798630(v19, v12 + 48);
      }
      while ( (__int64 *)v17 != v18 );
    }
  }
  if ( a7 )
  {
    v20 = *(_QWORD *)(a7 + 120);
    if ( v20 )
    {
      if ( v20 > 7 )
      {
LABEL_13:
        v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v21 + 72) & 1) != 0 )
        {
          sub_7B7DB0(a7);
          v21 = *(_QWORD *)(a7 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v22 = *(_QWORD *)(v21 + 56);
        goto LABEL_16;
      }
    }
    else
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a7 + 96) + 88LL), *(_QWORD *)(a7 + 96));
      v20 = *(_QWORD *)(a7 + 120);
      if ( v20 > 7 )
        goto LABEL_13;
    }
    v22 = 0;
LABEL_16:
    *(_QWORD *)(v12 + 128) = v22;
    v23 = *(_QWORD *)(a7 + 120);
    if ( !v23 )
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a7 + 96) + 88LL), *(_QWORD *)(a7 + 96));
      v23 = *(_QWORD *)(a7 + 120);
    }
    if ( v23 > 7 )
    {
      *(_QWORD *)((v23 & 0xFFFFFFFFFFFFFFF8LL) + 56) = v12;
      v24 = a1[2276];
      if ( v24 )
      {
        v25 = *(void (**)())(*(_QWORD *)v24 + 136LL);
        if ( v25 != nullsub_78 )
          ((void (__fastcall *)(__int64, unsigned __int64, __int64))v25)(v24, v12, a7);
      }
    }
  }
  return v12;
}

