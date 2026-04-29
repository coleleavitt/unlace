unsigned __int64 __fastcall sub_3FD260(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r13d
  int v3; // r12d
  __int64 v4; // rdx
  __int64 v5; // rbp
  int v6; // eax
  int v7; // edx
  signed int v8; // eax
  char v10; // al
  int dtype_size; // eax
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __m128i v16; // xmm1
  unsigned __int8 v17[16]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 832);
  v19 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(v1 + 472);
  v3 = *(_DWORD *)(v1 + 468);
  sub_3F8EE0(a1);
  if ( *(_WORD *)(a1 + 48) == 160 )
  {
    sub_3F8EE0(a1);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 65) || sub_CFF70() != 1 )
    {
      v4 = *(_QWORD *)(a1 + 832);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50) == v18[0] )
        return v19 - __readfsqword(0x28u);
      v10 = getinf();
      v4 = *(_QWORD *)(a1 + 832);
      if ( (v10 & 0xF) != 1 || *(_DWORD *)(v4 + 84) != 8 )
      {
        dtype_size = get_dtype_size();
        sub_1D6310(a1, 3u, dtype_size, v18[0], 0x3BEA45E214ADDC55LL, v3, 0);
        v4 = *(_QWORD *)(a1 + 832);
      }
    }
    v5 = *(int *)(v4 + 64);
    v6 = get_dtype_size();
    sub_1D6310(a1, 4u, v6, v5, 0x3BEA45E214ADDC55LL, v2, 0);
  }
  if ( *(_BYTE *)(a1 + 65) == 5 )
  {
    v12 = *(_DWORD *)(a1 + 52);
    v13 = 8;
    if ( (v12 & 0x1018) != 0x1010 )
    {
      if ( (v12 & 0x1008) == 0 || (v13 = 2, (v12 & 0x1018) == 0x1008) )
        v13 = 4;
    }
    v14 = *(_QWORD *)(a1 + 72);
    v15 = *(_QWORD *)(a1 + 832);
    *(_QWORD *)v17 = 1;
    v16 = _mm_cvtsi32_si128(*(_DWORD *)(v15 + 60));
    v18[0] = 0xFFFFFFFF00000000LL;
    v18[1] = 0;
    *(_QWORD *)&v17[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), v16).m128i_u64[0];
    sub_120A10((__int64)v18, v15, v14, v13, -1, 0);
    sub_1D6450(a1, 12, (unsigned __int8 *)v18, v17, v17);
    sub_11CDA0((__int64)v18);
    sub_11CDA0((__int64)v17);
  }
  v7 = *(_DWORD *)(a1 + 52);
  v8 = 8;
  if ( (v7 & 0x1018) != 0x1010 )
  {
    if ( (v7 & 0x1008) == 0 || (v8 = 2, (v7 & 0x1018) == 0x1008) )
      v8 = 4;
  }
  sub_3F7E20(a1, 0x36u, *(unsigned __int8 *)(a1 + 69), 0x3BEA45E214ADDC55LL, v2, v3, v8);
  return v19 - __readfsqword(0x28u);
}
