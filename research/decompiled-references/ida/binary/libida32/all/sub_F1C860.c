void __fastcall sub_F1C860(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // rax
  __m128i si128; // xmm0
  size_t v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __m128 v9; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+10h] [rbp-38h]
  __int128 v11; // [rsp+20h] [rbp-28h]

  sub_F07020(a1, a2);
  v2 = *(_QWORD *)(a2 + 56);
  if ( (v2 & 0x2000) != 0 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " inline");
    v2 = *(_QWORD *)(a2 + 56);
  }
  if ( (v2 & 0x4000) != 0 )
    sub_971800(*(_QWORD *)(a1 + 1096), " nested");
  if ( ((*(_BYTE *)(a2 + 80) | (unsigned __int8)(*(__int64 *)(a2 + 80) >> 1)) & 1) == 0 )
  {
    if ( *(_QWORD *)(a2 + 88) )
    {
      v9.m128_u64[0] = *(_QWORD *)(a2 + 88);
      v9 = _mm_loadh_ps((const double *)v9.m128_u64);
      v3 = j__strlen("original");
      si128 = _mm_load_si128((const __m128i *)&v9);
      *(_QWORD *)&v10 = "original";
      v11 = (__int128)si128;
      *((_QWORD *)&v10 + 1) = v3;
      v5 = j__strlen(&byte_22CD811);
      sub_F1B570(a1, (__int64)&byte_22CD811, v5, v6, v7, v8, v10, v11);
    }
  }
}

