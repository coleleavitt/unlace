void __fastcall sub_1675E00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        unsigned int a8)
{
  __int64 v10; // r9
  const void *v11; // rsi
  __int128 v12; // xmm0
  unsigned int v13; // eax
  unsigned __int8 v14; // dl
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // [rsp+30h] [rbp-38h]

  v10 = *(_QWORD *)(a3 + 88);
  v11 = *(const void **)(a3 + 80);
  v12 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
  v13 = a8;
  v21 = a8;
  if ( v10 )
  {
    if ( *(_BYTE *)(a1 + 289) )
    {
      v15 = sub_B364E0(*(_QWORD *)(a1 + 248), v11, v10, 0);
      v16 = sub_B35EA0(*(_QWORD *)(a1 + 248), v12, *((__int64 *)&v12 + 1), v15, (v21 & 2) != 0, 0);
      sub_B8CC60(a2, v16, v17, v18, v19, v20);
      v14 = *(_BYTE *)(a3 + 72);
      v12 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
      v13 = a8;
      if ( (v14 & 1) == 0 )
        goto LABEL_7;
      goto LABEL_6;
    }
    if ( (a8 & 1) != 0 )
    {
      sub_1675C80(a1, a2, (__int64)v11, v10);
      v12 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
      v13 = a8;
    }
  }
  v14 = *(_BYTE *)(a3 + 72);
  if ( (v14 & 1) != 0 )
  {
LABEL_6:
    sub_16724A0(a1, a2, (v14 >> 1) & 3, a4, a5, v10, v12, *((__int64 *)&v12 + 1), v13);
    v13 = a8;
    v12 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
  }
LABEL_7:
  sub_1673CA0(a1, a2, a3, a4, a5, v10, v12, v13);
}
