__int64 __fastcall sub_8BC970(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  unsigned int *v4; // rcx
  unsigned int v5; // ebp
  __int64 v6; // rsi
  unsigned int v7; // eax
  unsigned int v9[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v9[0] = a2;
  v4 = (unsigned int *)(v3 + 24LL * a2);
  v5 = *((unsigned __int8 *)v4 + 20);
  if ( !(_BYTE)v5 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v5 = 1;
    v7 = *(_DWORD *)(a1 + 128);
    *((_BYTE *)v4 + 20) = 1;
    v4[3] = v7;
    *(_QWORD *)(a1 + 128) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7 + 1), _mm_cvtsi32_si128(a2)).m128i_u64[0];
    if ( *(_DWORD *)(v6 + 4LL * v4[1]) - *(_DWORD *)(v6 + 4LL * *v4) > (int)v4[2] )
      v5 = sub_8BC080((unsigned int **)a1, a2);
    sub_893BD0((unsigned int **)(a1 + 136), v9);
  }
  return v5;
}

