/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805FED0
// Address: 0x0805FED0

//----- (0805FED0) --------------------------------------------------------
unsigned int __cdecl sub_805FED0(int a1, unsigned int a2, char a3)
{
  _DWORD *v3; // ebp
  int v4; // ecx
  unsigned int v5; // esi
  unsigned int v6; // esi
  _DWORD *v7; // esi
  signed int v8; // eax
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  unsigned int *v11; // esi
  unsigned int result; // eax
  unsigned int v13; // eax
  unsigned int v14; // ebp
  int v15; // eax
  _DWORD *v16; // ecx
  unsigned int v17; // esi
  int v18; // eax
  int v19; // [esp+4h] [ebp-2Ch]
  int v20; // [esp+8h] [ebp-28h]

  v3 = *(_DWORD **)(a1 + 20);
  v19 = *(_DWORD *)(a1 + 36) - (_DWORD)v3;
  v4 = a2 + (v19 >> 2) + 1;
  v5 = *(_DWORD *)(a1 + 4);
  if ( 2 * v4 >= v5 )
  {
    v13 = *(_DWORD *)(a1 + 4);
    if ( v5 < a2 )
      v13 = a2;
    v14 = v5 + v13 + 2;
    if ( v14 > 0x1FFFFFFF )
    {
      if ( v14 > 0x3FFFFFFF )
        sub_8052751();
      std::__throw_bad_alloc();
    }
    v15 = operator new(4 * v14);
    v20 = v15;
    v16 = *(_DWORD **)(a1 + 20);
    v17 = 4 * ((v14 - (a2 + (v19 >> 2) + 1)) >> 1);
    if ( a3 )
      v17 += 4 * a2;
    v7 = (_DWORD *)(v15 + v17);
    v18 = *(_DWORD *)(a1 + 36) + 4 - (_DWORD)v16;
    if ( v18 <= 4 )
    {
      if ( v18 == 4 )
        *v7 = *v16;
    }
    else
    {
      memmove(v7, v16, *(_DWORD *)(a1 + 36) + 4 - (_DWORD)v16);
    }
    operator delete(*(void **)a1, 4 * *(_DWORD *)(a1 + 4));
    *(_DWORD *)(a1 + 4) = v14;
    *(_DWORD *)a1 = v20;
  }
  else
  {
    v6 = 4 * ((v5 - v4) >> 1);
    if ( a3 )
      v6 += 4 * a2;
    v7 = (_DWORD *)(*(_DWORD *)a1 + v6);
    v8 = *(_DWORD *)(a1 + 36) + 4 - (_DWORD)v3;
    if ( v7 < v3 )
    {
      if ( v8 <= 4 )
      {
        if ( v8 == 4 )
          *v7 = *v3;
      }
      else
      {
        memmove(v7, v3, v8);
      }
    }
    else if ( v8 <= 4 )
    {
      if ( v8 == 4 )
        *(_DWORD *)((char *)v7 + v19) = *v3;
    }
    else
    {
      memmove(v7, v3, *(_DWORD *)(a1 + 36) + 4 - (_DWORD)v3);
    }
  }
  *(_DWORD *)(a1 + 20) = v7;
  v9 = _mm_cvtsi32_si128(*v7);
  v10 = _mm_cvtsi32_si128((unsigned int)&off_811D1D8 + *v7 - 135385076);
  v11 = (_DWORD *)((char *)v7 + v19);
  *(_QWORD *)(a1 + 12) = _mm_unpacklo_epi32(v9, v10).m128i_u64[0];
  *(_DWORD *)(a1 + 36) = v11;
  result = *v11;
  *(_QWORD *)(a1 + 28) = _mm_unpacklo_epi32(
                           _mm_cvtsi32_si128(*v11),
                           _mm_cvtsi32_si128((unsigned int)&off_811D1D8 + *v11 - 135385076)).m128i_u64[0];
  return result;
}
// 811D1D8: using guessed type _UNKNOWN *off_811D1D8;
