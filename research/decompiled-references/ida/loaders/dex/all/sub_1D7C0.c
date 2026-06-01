__int64 __fastcall sub_1D7C0(__int64 *a1)
{
  __int64 *v1; // rbx
  __m128i v2; // xmm2
  __int64 v3; // r14
  __m128i v4; // xmm3
  __int64 v5; // r13
  unsigned int v6; // ebp
  __int64 v7; // r12
  __int128 v8; // xmm1
  __int64 v9; // rdi
  __int64 v10; // r15
  __m128i si128; // xmm0
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rdi
  __m128i v15; // xmm4
  __m128i v16; // xmm5
  __m128i v17; // [rsp+0h] [rbp-68h] BYREF
  __m128i v18; // [rsp+10h] [rbp-58h] BYREF
  __m128i v19[4]; // [rsp+20h] [rbp-48h] BYREF

  v1 = a1;
  v2 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  v3 = *a1;
  *(_OWORD *)(a1 + 1) = 0;
  v4 = _mm_loadu_si128((const __m128i *)a1 + 2);
  v5 = a1[3];
  *a1 = 0;
  v6 = *((_DWORD *)a1 + 13);
  v7 = a1[6];
  v18 = v2;
  v17 = v4;
  if ( v6 < *((_DWORD *)a1 - 1) )
  {
    v1 = a1 - 7;
    v8 = 0;
    while ( 1 )
    {
      v9 = v1[7];
      v10 = *v1;
      *v1 = 0;
      si128 = _mm_loadu_si128((const __m128i *)(v1 + 1));
      *(_OWORD *)(v1 + 1) = v8;
      if ( v9 )
      {
        v1[8] = 0;
        v19[0] = si128;
        qfree(v9);
        si128 = _mm_load_si128(v19);
        v8 = 0;
      }
      v12 = v1[3];
      v1[7] = v10;
      *((__m128i *)v1 + 4) = si128;
      v1[10] = v12;
      v1[11] = v1[4];
      v1[12] = v1[5];
      *((_DWORD *)v1 + 26) = *((_DWORD *)v1 + 12);
      *((_DWORD *)v1 + 27) = *((_DWORD *)v1 + 13);
      result = (__int64)(v1 - 7);
      if ( v6 >= *((_DWORD *)v1 - 1) )
        break;
      v1 -= 7;
    }
    v14 = *v1;
    if ( *v1 )
    {
      v1[1] = 0;
      result = qfree(v14);
    }
  }
  v15 = _mm_load_si128(&v18);
  v16 = _mm_load_si128(&v17);
  *v1 = v3;
  v1[3] = v5;
  v1[6] = v7;
  *(__m128i *)(v1 + 1) = v15;
  *((__m128i *)v1 + 2) = v16;
  return result;
}

