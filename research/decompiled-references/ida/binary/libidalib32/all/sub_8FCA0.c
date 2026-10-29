__int64 __fastcall sub_8FCA0(__int64 a1)
{
  __int64 result; // rax
  signed int v2; // ebp
  int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax

  result = *(unsigned int *)(a1 + 188);
  v2 = *(_DWORD *)(a1 + 188) - *(_DWORD *)(a1 + 184);
  if ( v2 > 0 )
  {
    if ( *(_BYTE *)(a1 + 172) )
    {
      v8 = *(_QWORD *)(a1 + 64);
      v9 = *(_QWORD *)(a1 + 56);
      if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v8 + 1) )
      {
        v13 = qvector_reserve();
        v8 = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = v13;
        v9 = v13;
      }
      v10 = v9 + 16 * v8;
      *(_QWORD *)v10 = -1;
      *(_DWORD *)(v10 + 8) = -1;
      *(_BYTE *)(v10 + 12) = 0;
      v11 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 184));
      ++*(_QWORD *)(a1 + 64);
      *(_QWORD *)v10 = _mm_unpacklo_epi32(v11, _mm_cvtsi32_si128(v2)).m128i_u64[0];
      *(_DWORD *)(v10 + 8) = *(_DWORD *)(a1 + 168);
      *(_BYTE *)(v10 + 12) = *(_BYTE *)(a1 + 172);
      if ( !*(_BYTE *)(a1 + 180) )
        goto LABEL_4;
    }
    else if ( !*(_BYTE *)(a1 + 180) )
    {
LABEL_4:
      result = *(unsigned int *)(a1 + 188);
      goto LABEL_5;
    }
    v4 = *(_QWORD *)(a1 + 88);
    v5 = *(_QWORD *)(a1 + 80);
    if ( *(_QWORD *)(a1 + 96) < (unsigned __int64)(v4 + 1) )
    {
      v12 = qvector_reserve();
      v4 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 80) = v12;
      v5 = v12;
    }
    v6 = v5 + 16 * v4;
    *(_QWORD *)v6 = -1;
    *(_DWORD *)(v6 + 8) = -1;
    *(_BYTE *)(v6 + 12) = 0;
    v7 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 184));
    ++*(_QWORD *)(a1 + 88);
    *(_QWORD *)v6 = _mm_unpacklo_epi32(v7, _mm_cvtsi32_si128(v2)).m128i_u64[0];
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(a1 + 176);
    *(_BYTE *)(v6 + 12) = *(_BYTE *)(a1 + 180);
    goto LABEL_4;
  }
LABEL_5:
  v3 = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 184) = result;
  *(_DWORD *)(a1 + 168) = v3;
  *(_BYTE *)(a1 + 172) = *(_BYTE *)(a1 + 156);
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 180) = *(_BYTE *)(a1 + 164);
  return result;
}

