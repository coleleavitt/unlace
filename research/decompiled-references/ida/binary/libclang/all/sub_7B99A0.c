unsigned __int64 __fastcall sub_7B99A0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int16 v17; // ax
  bool v19; // al
  unsigned __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+18h] [rbp-40h]

  v11 = a3;
  v20 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a7), _mm_cvtsi32_si128(a8)).m128i_u64[0];
  if ( !a3 )
  {
    v14 = 0;
    v13 = sub_79A610(136, a1, a2, 0);
    goto LABEL_7;
  }
  v12 = *(_QWORD *)(a3 + 120);
  if ( v12 )
  {
    if ( v12 <= 7 )
    {
LABEL_4:
      v13 = sub_79A610(136, a1, a2, 0);
      goto LABEL_5;
    }
  }
  else
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a3 + 96) + 88LL), *(_QWORD *)(a3 + 96));
    v12 = *(_QWORD *)(v11 + 120);
    if ( v12 <= 7 )
      goto LABEL_4;
  }
  v11 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  v13 = sub_79A610(136, a1, a2, 0);
  if ( !v11 )
  {
    v14 = 0;
    goto LABEL_7;
  }
LABEL_5:
  v14 = *(_QWORD *)(v11 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v11 + 40) & 7) != 0 )
    v14 = 0;
LABEL_7:
  *(_QWORD *)v13 = off_49F5208;
  if ( !a2
    || (v15 = sub_79A2E0(a2), v16 = *(_QWORD *)(v15 + 8) & 7LL, (*(_QWORD *)(v15 + 8) & 7) == 0)
    || *(char *)(v15 + 29) < 0 && (v22 = *(_QWORD *)(v15 + 8) & 7LL, v19 = sub_7946A0(v15), v16 = v22, !v19) )
  {
    v16 = 0;
  }
  *(_QWORD *)(v13 + 8) = v16;
  *(_DWORD *)(v13 + 24) = a5;
  *(_QWORD *)(v13 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v13 + 28) = 24595;
  v17 = sub_799DF0(0x13u);
  *(_BYTE *)(v13 + 32) &= 0xF8u;
  *(_WORD *)(v13 + 30) = v17 & 0x3FFF | *(_WORD *)(v13 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(19);
  *(_QWORD *)(v13 + 40) = v14;
  *(_QWORD *)v13 = &off_47D9B58;
  sub_79B760(v13 + 48, 19);
  *(_DWORD *)(v13 + 60) = a6;
  *(_BYTE *)(v13 + 132) &= 0xFCu;
  *(_QWORD *)(v13 + 80) = 0;
  *(_QWORD *)v13 = &off_49F6360;
  *(_QWORD *)(v13 + 88) = v11;
  *(_QWORD *)(v13 + 96) = a4;
  *(_QWORD *)(v13 + 120) = 0;
  *(_QWORD *)(v13 + 104) = v20;
  *(_DWORD *)(v13 + 128) = 0;
  *(_DWORD *)(v13 + 112) = a9;
  return v13;
}

