/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807F680
// Address: 0x0807F680

//----- (0807F680) --------------------------------------------------------
int __cdecl sub_807F680(int a1)
{
  pthread_mutex_t *v1; // edi
  __m128i si128; // xmm1
  __m128i v3; // xmm2
  __m128i v4; // xmm3
  int v6; // [esp-18h] [ebp-34h]
  int v7; // [esp-14h] [ebp-30h]
  int v8; // [esp-10h] [ebp-2Ch]
  int v9; // [esp+0h] [ebp-1Ch]

  v1 = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_80DE200);
  v9 = 0;
  v3 = _mm_loadl_epi64((const __m128i *)(a1 + 28));
  while ( 1 )
  {
    v4 = _mm_and_si128(v3, si128);
    if ( !(_mm_cvtsi128_si32(_mm_srli_epi64(v4, 0x20u)) | _mm_cvtsi128_si32(v4)) )
      break;
    ++v9;
    si128 = _mm_slli_epi64(si128, 1u);
    if ( v9 == 64 )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(1443, v6, v7, v8);
      BUG();
    }
  }
  *(_QWORD *)(a1 + 28) = _mm_or_si128(v3, si128).m128i_u64[0];
  sub_80D1600(v1);
  return v9;
}
// 807F731: variable 'v6' is possibly undefined
// 807F731: variable 'v7' is possibly undefined
// 807F731: variable 'v8' is possibly undefined
// 80DE200: using guessed type __int128 xmmword_80DE200;
// 811E6F8: using guessed type int dword_811E6F8;
// 811F8A1: using guessed type char byte_811F8A1;
