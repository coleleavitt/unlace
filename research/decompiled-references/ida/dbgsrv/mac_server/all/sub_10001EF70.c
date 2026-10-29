/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001EF70
// Address: 0x000000010001EF70

//----- (000000010001EF70) ----------------------------------------------------
char __fastcall sub_10001EF70(__int64 a1, int a2, __int64 a3)
{
  __int128 v5; // [rsp+0h] [rbp-C0h] BYREF
  __int128 v6; // [rsp+10h] [rbp-B0h]
  __m256i v7; // [rsp+20h] [rbp-A0h]
  __int128 v8; // [rsp+40h] [rbp-80h]
  __int128 v9; // [rsp+50h] [rbp-70h]
  __int128 v10; // [rsp+60h] [rbp-60h]
  __int128 v11; // [rsp+70h] [rbp-50h]
  __int64 v12; // [rsp+80h] [rbp-40h]
  __int64 v13; // [rsp+88h] [rbp-38h]
  __int64 v14; // [rsp+90h] [rbp-30h]
  __m128i v15; // [rsp+98h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 1233) == 1 )
  {
    if ( sub_10001F0F0(a1, a2, (natural_t *)&v5) )
    {
      *(_OWORD *)a3 = v5;
      *(_OWORD *)(a3 + 16) = v6;
      *(__m256i *)(a3 + 32) = v7;
      *(_QWORD *)(a3 + 64) = v12;
      *(_OWORD *)(a3 + 72) = v8;
      *(_OWORD *)(a3 + 88) = v9;
      *(_OWORD *)(a3 + 104) = v10;
      *(_OWORD *)(a3 + 120) = v11;
      *(_QWORD *)(a3 + 136) = v13;
      *(_QWORD *)(a3 + 152) = v14;
      *(__m128i *)(a3 + 176) = _mm_loadu_si128(&v15);
      return 1;
    }
  }
  else if ( sub_10001F1B0(a1, a2, (natural_t *)&v5) )
  {
    *(__m128i *)a3 = _mm_cvtepu32_epi64(*(__m64 *)&v5);
    *(__m128i *)(a3 + 16) = _mm_cvtepu32_epi64(*(__m64 *)((char *)&v5 + 8));
    *(__m128i *)(a3 + 32) = _mm_cvtepu32_epi64(*(__m64 *)&v6);
    *(__m128i *)(a3 + 48) = _mm_cvtepu32_epi64(*(__m64 *)((char *)&v6 + 8));
    *(_QWORD *)(a3 + 64) = v7.u32[2];
    *(_QWORD *)(a3 + 136) = v7.u32[1];
    *(_QWORD *)(a3 + 144) = v7.u32[0];
    *(__m128i *)(a3 + 152) = _mm_cvtepu32_epi64(*(__m64 *)((char *)v7.u128 + 12));
    *(__m128i *)(a3 + 168) = _mm_cvtepu32_epi64(*(__m64 *)((char *)&v7.u128[1] + 4));
    *(_QWORD *)(a3 + 184) = v7.u32[7];
    return 1;
  }
  return 0;
}
