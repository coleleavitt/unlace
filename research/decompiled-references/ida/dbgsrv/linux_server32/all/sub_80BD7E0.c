/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD7E0
// Address: 0x080BD7E0

//----- (080BD7E0) --------------------------------------------------------
char *__usercall sub_80BD7E0@<eax>(__m128i a1@<xmm0>, _DWORD *a2, char a3, int a4)
{
  int v4; // edx
  char *v5; // eax
  unsigned __int64 v6; // xmm0_8
  unsigned int v7; // ecx
  char *result; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  unsigned __int64 v13; // [esp+0h] [ebp-24h]

  if ( a2[1] && (int)a2[3] >= 0 )
  {
    sub_80D0330();
    v9 = sub_80BBE00(a1);
    v11 = _mm_cvtsi32_si128(v10);
    v4 = a2[5];
    v12 = _mm_cvtsi32_si128(v9);
    v5 = (char *)a2[4];
    v6 = _mm_unpacklo_epi32(v12, v11).m128i_u64[0];
    v7 = v4 + 1;
    if ( a2[6] >= (unsigned int)(v4 + 1) )
      goto LABEL_4;
LABEL_6:
    v13 = v6;
    v5 = (char *)sub_80CF920((int)(a2 + 4), v5, v7, 0x14u);
    v4 = a2[5];
    a2[4] = v5;
    goto LABEL_4;
  }
  v4 = a2[5];
  v5 = (char *)a2[4];
  v6 = 0;
  v7 = v4 + 1;
  if ( a2[6] < (unsigned int)(v4 + 1) )
    goto LABEL_6;
LABEL_4:
  result = &v5[20 * v4];
  *((_DWORD *)result + 1) = 0;
  *(_DWORD *)result = a4;
  result[16] = a3;
  *((_QWORD *)result + 1) = v6;
  ++a2[5];
  return result;
}
// 80BD85B: variable 'v10' is possibly undefined
