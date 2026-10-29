char __fastcall sub_196810(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 *v5; // r14
  int v6; // ebp
  unsigned int v7; // r15d
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // xmm0_8
  int v12; // eax
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]

  v4 = a3;
  if ( (unsigned __int64)a3 < *(_QWORD *)(a2 + 8) )
  {
    v5 = (__int64 *)a2;
    v6 = a3;
    v7 = a4;
    do
    {
      v8 = *v5;
      v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(*(_DWORD *)(*v5 + 4 * v4))).m128i_u64[0];
      v9 = (_QWORD *)j__qalloc_or_throw(80, a2, v8, a4);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
      v9[4] = 0xFFFFFFFF00000000LL;
      v9[5] = 0;
      v9[6] = 0xFFFFFFFF00000000LL;
      v9[7] = 0;
      v9[8] = 0xFFFFFFFF00000000LL;
      v9[9] = 0;
      sub_330970(v9, v10);
      v11 = v14;
      *((_BYTE *)v9 + 64) = 1;
      a2 = (__int64)v9;
      *(_DWORD *)v9 = 61;
      ++v6;
      *(_QWORD *)((char *)v9 + 68) = v11;
      sub_A3160(a1, v9, 0);
      v4 = v6;
    }
    while ( v6 < (unsigned __int64)v5[1] );
  }
  v12 = *(_DWORD *)(a1 + 24);
  BYTE1(v12) &= ~2u;
  LOBYTE(v12) = v12 | 0x80;
  *(_DWORD *)(a1 + 24) = v12;
  return v12;
}
