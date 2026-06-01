__int64 __fastcall sub_8D33D0(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // rbx
  unsigned int v3; // r13d
  unsigned int v5; // eax
  __m128i v6; // xmm0
  __int64 v7; // rax
  unsigned int v8; // r13d
  unsigned int v9; // [rsp+Ch] [rbp-5Ch] BYREF
  char v10[88]; // [rsp+10h] [rbp-58h] BYREF

  v2 = (unsigned int *)(*(_QWORD *)(a1 + 40) + ((unsigned __int64)a2 << 6));
  v3 = *((unsigned __int8 *)v2 + 56);
  v9 = a2;
  if ( (_BYTE)v3 )
    return v3;
  v5 = *(_DWORD *)(a1 + 128);
  *((_BYTE *)v2 + 56) = 1;
  v2[12] = v5;
  v6 = _mm_cvtsi32_si128(v5 + 1);
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 128) = _mm_unpacklo_epi32(v6, _mm_cvtsi32_si128(a2)).m128i_u64[0];
  sub_89AC50((__int64)v10, v7 + 40LL * v2[1], v7 + 40LL * *v2);
  if ( (unsigned __int8)sub_89B840((__int64)(v2 + 2), (__int64)v10) )
  {
    sub_25A130(v10);
    v8 = sub_8D21C0(a1, a2);
  }
  else
  {
    sub_25A130(v10);
    v8 = 1;
  }
  sub_893BD0((unsigned int **)(a1 + 136), &v9);
  return v8;
}

