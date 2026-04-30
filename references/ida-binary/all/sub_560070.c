unsigned __int64 __fastcall sub_560070(char **a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v5; // r12d
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  char *v11; // rdi
  __m128i v12; // xmm0
  unsigned int v13; // r13d
  char *v14; // rax
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v16[12]; // [rsp+10h] [rbp-48h]
  __int64 v17; // [rsp+20h] [rbp-38h]
  unsigned int v18; // [rsp+28h] [rbp-30h]

  v5 = a4;
  result = *((unsigned int *)a1 + 2);
  v17 = a2;
  v18 = a3;
  *(_QWORD *)v16 = a4;
  *(_DWORD *)&v16[8] = a5;
  if ( (_DWORD)result
    && (v8 = (__int64)&(*a1)[24 * (unsigned int)(result - 1)], *(_DWORD *)(v8 + 20) >= (unsigned int)a2) )
  {
    result = *(_QWORD *)&v16[4];
    *(_DWORD *)(v8 + 20) = a4;
    *(_QWORD *)(v8 + 8) = result;
  }
  else if ( (unsigned int)a2 < (unsigned int)a4 )
  {
    v9 = result + 1;
    v10 = *((_DWORD *)a1 + 3);
    v11 = *a1;
    v12 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v17)), _mm_cvtsi32_si128(v18)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(unsigned int *)&v16[4]), _mm_cvtsi32_si128(*(unsigned int *)&v16[8])));
    if ( v10 < (int)result + 1 )
    {
      v13 = 2 * v10;
      if ( 2 * v10 < v9 )
        v13 = result + 1;
      if ( v13 < 8 )
        v13 = 8;
      if ( v10 < v13 )
      {
        v15 = v12;
        if ( v11 )
          v14 = (char *)off_8C52A8(v11, 24LL * v13);
        else
          v14 = (char *)off_8C52B8(24LL * v13);
        v12 = _mm_load_si128(&v15);
        v11 = v14;
        result = *((unsigned int *)a1 + 2);
        *a1 = v11;
        *((_DWORD *)a1 + 3) = v13;
        v9 = result + 1;
      }
    }
    *((_DWORD *)a1 + 2) = v9;
    result = (unsigned __int64)&v11[24 * result];
    *(__m128i *)result = v12;
    *(_QWORD *)(result + 16) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(v5)).m128i_u64[0];
  }
  return result;
}
