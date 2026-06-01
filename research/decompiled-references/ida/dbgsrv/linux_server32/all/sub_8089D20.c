/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8089D20
// Address: 0x08089D20

//----- (08089D20) --------------------------------------------------------
int __usercall sub_8089D20@<eax>(unsigned __int8 *a1@<eax>, signed int a2@<edx>)
{
  unsigned __int8 *v3; // eax
  unsigned __int8 v4; // dl

  v3 = sub_8089920(a1, 0);
  if ( v3 )
  {
    v4 = *v3;
    if ( *v3 == 2 )
    {
      *((_DWORD *)v3 + 1) += a2;
      return 1;
    }
    if ( v4 == 9 )
    {
      *(_QWORD *)(v3 + 4) = _mm_add_epi64(
                              _mm_loadl_epi64((const __m128i *)(v3 + 4)),
                              _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a2 >> 31))).m128i_u64[0];
      return 1;
    }
    if ( v4 == 3 )
    {
      sub_80C8F00((int)(v3 + 4), (int)dword_80F13CC, v3 + 4, a2 == -1);
      return 1;
    }
    sub_80C7880(61);
  }
  return 0;
}
// 80F13CC: using guessed type int dword_80F13CC[3];
