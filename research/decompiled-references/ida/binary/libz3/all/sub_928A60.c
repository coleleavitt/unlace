__int64 __fastcall sub_928A60(_QWORD *a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  __int64 result; // rax
  int v6; // edx
  unsigned int v7; // edx
  unsigned int *v8; // rcx
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  unsigned int *v11; // rbp
  unsigned int v12; // eax
  unsigned int v13; // eax
  __m128i v14; // xmm0
  _QWORD *v15; // r13
  _QWORD v16[8]; // [rsp+8h] [rbp-40h] BYREF

  result = a1[33];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  if ( a2 != a3 )
  {
    v16[0] = __PAIR64__(a3, a2);
    sub_91D850(a1 + 33, v16);
    result = a1[33];
  }
  for ( ; result; result = a1[33] )
  {
    v6 = *(_DWORD *)(result - 4);
    if ( !v6 )
      return result;
    v7 = v6 - 1;
    v8 = (unsigned int *)(result + 8LL * v7);
    v9 = v8[1];
    v10 = *v8;
    *(_DWORD *)(result - 4) = v7;
    v11 = (unsigned int *)(a1[23] + 16LL * *(unsigned int *)(*(_QWORD *)(a1[24] + 8LL * v10) + 16LL * v9));
    if ( v11[3] == -2 )
    {
      v12 = *v11;
      if ( v10 != *v11 )
        goto LABEL_12;
    }
    else
    {
      sub_91D6F0(a4, v11 + 3);
      v12 = *v11;
      if ( v10 != *v11 )
      {
LABEL_12:
        v14 = _mm_cvtsi32_si128(v10);
        v15 = a1 + 33;
        v16[0] = _mm_unpacklo_epi32(v14, _mm_cvtsi32_si128(v12)).m128i_u64[0];
        sub_91D850(a1 + 33, v16);
        v13 = v11[1];
        if ( v9 != v13 )
          goto LABEL_13;
        continue;
      }
    }
    v13 = v11[1];
    if ( v9 != v13 )
    {
      v15 = a1 + 33;
LABEL_13:
      v16[0] = __PAIR64__(v9, v13);
      sub_91D850(v15, v16);
    }
  }
  return result;
}

