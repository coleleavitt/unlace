unsigned __int64 __fastcall sub_3F2700(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r13d
  int v3; // r12d
  __int64 v4; // rdx
  int v5; // ebp
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
  int v17; // r9d
  _BYTE v18[12]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v19[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 832);
  v20 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(v1 + 472);
  v3 = *(_DWORD *)(v1 + 468);
  sub_3EE380(a1);
  if ( *(_WORD *)(a1 + 48) == 160 )
  {
    sub_3EE380(a1);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 65) || sub_D3E80() != 1 )
    {
      v4 = *(_QWORD *)(a1 + 832);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50) == v19[0] )
        return v20 - __readfsqword(0x28u);
      v10 = getinf();
      v4 = *(_QWORD *)(a1 + 832);
      if ( (v10 & 0xF) != 1 || *(_DWORD *)(v4 + 84) != 8 )
      {
        dtype_size = get_dtype_size();
        sub_1D3790(a1, 3, dtype_size, v19[0], 346938453, v3, 0);
        v4 = *(_QWORD *)(a1 + 832);
      }
    }
    v5 = *(_DWORD *)(v4 + 64);
    v6 = get_dtype_size();
    sub_1D3790(a1, 4, v6, v5, 346938453, v2, 0);
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
    *(_QWORD *)v18 = 1;
    v16 = _mm_cvtsi32_si128(*(_DWORD *)(v15 + 60));
    v19[0] = 0xFFFFFFFF00000000LL;
    v19[1] = 0;
    *(_QWORD *)&v18[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), v16).m128i_u64[0];
    sub_11E5D0((__int64)v19, v15, v14, v13, -1, 0);
    sub_1D38D0(a1, 12, (unsigned int)v19, (unsigned int)v18, (unsigned int)v18, v17);
    sub_11A960((__int64)v19);
    sub_11A960((__int64)v18);
  }
  v7 = *(_DWORD *)(a1 + 52);
  v8 = 8;
  if ( (v7 & 0x1018) != 0x1010 )
  {
    if ( (v7 & 0x1008) == 0 || (v8 = 2, (v7 & 0x1018) == 0x1008) )
      v8 = 4;
  }
  sub_3ED260(a1, 0x36u, *(unsigned __int8 *)(a1 + 69), 346938453, v2, v3, v8);
  return v20 - __readfsqword(0x28u);
}
