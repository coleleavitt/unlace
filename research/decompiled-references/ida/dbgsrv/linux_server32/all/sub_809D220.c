/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809D220
// Address: 0x0809D220

//----- (0809D220) --------------------------------------------------------
__suseconds_t __cdecl sub_809D220(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  unsigned int v6; // edi
  _DWORD *v7; // ecx
  __m128i v8; // xmm0
  int v9; // eax
  int v10; // ebx
  void *v11; // eax
  int v12; // ecx
  int v13; // ebx
  _DWORD *v14; // eax
  int v15; // ecx
  __suseconds_t result; // eax
  int v17; // edx

  v6 = 0;
  v7 = a4;
  *(_DWORD *)a1 = dword_811CAAC;
  *(_DWORD *)(a1 + 12) = a4;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 4120) = -1;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4136) = -1;
  *(_DWORD *)(a1 + 16) = a5;
  *(_DWORD *)(a1 + 4140) = 0;
  *(_DWORD *)(a1 + 20) = a6;
  v8 = _mm_cvtsi32_si128(a1 + 4124);
  *(_DWORD *)(a1 + 4132) = 0;
  *(_DWORD *)(a1 + 4144) = 0;
  *(_DWORD *)(a1 + 4148) = 0;
  *(_DWORD *)(a1 + 4152) = 0;
  *(_QWORD *)(a1 + 4124) = _mm_unpacklo_epi32(v8, v8).m128i_u64[0];
  *(_DWORD *)(a1 + 4156) = 0;
  for ( *(_DWORD *)(a1 + 4160) = 0; v6 < v7[1]; v14[v13] = v6++ )
  {
    while ( 1 )
    {
      v9 = *v7 + 40 * v6;
      if ( *(_DWORD *)(v9 + 4) )
        break;
LABEL_4:
      v7 = *(_DWORD **)(a1 + 12);
      if ( ++v6 >= v7[1] )
        goto LABEL_13;
    }
    if ( (*(_BYTE *)(a1 + 16) & 1) == 0 || *(_DWORD *)(v9 + 16) )
    {
      v10 = *(_DWORD *)(a1 + 4156);
      v11 = *(void **)(a1 + 4152);
      v12 = v10 + 1;
      if ( *(_DWORD *)(a1 + 4160) < (unsigned int)(v10 + 1) )
      {
        v11 = sub_80CF920(a1 + 4152, v11, v10 + 1, 4u);
        v10 = *(_DWORD *)(a1 + 4156);
        *(_DWORD *)(a1 + 4152) = v11;
        v12 = v10 + 1;
      }
      *((_DWORD *)v11 + v10) = v6;
      *(_DWORD *)(a1 + 4156) = v12;
      goto LABEL_4;
    }
    v13 = *(_DWORD *)(a1 + 4144);
    v14 = *(_DWORD **)(a1 + 4140);
    v15 = v13 + 1;
    if ( *(_DWORD *)(a1 + 4148) < (unsigned int)(v13 + 1) )
    {
      v14 = sub_80CF920(a1 + 4140, v14, v13 + 1, 4u);
      v13 = *(_DWORD *)(a1 + 4144);
      *(_DWORD *)(a1 + 4140) = v14;
      v15 = v13 + 1;
    }
    *(_DWORD *)(a1 + 4144) = v15;
    v7 = *(_DWORD **)(a1 + 12);
  }
LABEL_13:
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 4116) = 0;
  memset((void *)((a1 + 28) & 0xFFFFFFFC), 0, 4 * ((a1 + 24 - ((a1 + 28) & 0xFFFFFFFC) + 4096) >> 2));
  result = sub_80D0330();
  *(_DWORD *)(a1 + 4164) = v17;
  return result;
}
// 809D3C1: variable 'v17' is possibly undefined
// 811CAAC: using guessed type int dword_811CAAC[2];
