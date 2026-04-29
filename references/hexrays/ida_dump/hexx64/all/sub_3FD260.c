unsigned __int64 __fastcall sub_3FD260(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  int v3; // edx
  int v4; // r13d
  int v5; // r12d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbp
  int v9; // eax
  int v10; // edx
  signed int v11; // eax
  char v13; // al
  __int64 v14; // r14
  int dtype_size; // eax
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __m128i v20; // xmm1
  unsigned __int8 v21[16]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v22[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-30h]

  v1 = 7;
  v2 = *(_QWORD *)(a1 + 832);
  v3 = *(_DWORD *)(a1 + 52);
  v23 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(v2 + 472);
  v5 = *(_DWORD *)(v2 + 468);
  v6 = v3 & 0x1018;
  if ( v6 != 4112 )
    v1 = (unsigned __int8)((v6 == 4104 || (v3 & 0x1008) == 0) + 1);
  sub_3F8EE0(a1);
  if ( *(_WORD *)(a1 + 48) == 160 )
  {
    sub_3F8EE0(a1);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 65) || sub_CFF70(0xBC6u, *(_QWORD *)(a1 + 40), v22) != 1 )
    {
      v7 = *(_QWORD *)(a1 + 832);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50) == v22[0] )
        return v23 - __readfsqword(0x28u);
      v13 = getinf(57);
      v7 = *(_QWORD *)(a1 + 832);
      if ( (v13 & 0xF) != 1 || *(_DWORD *)(v7 + 84) != 8 )
      {
        v14 = v22[0];
        dtype_size = get_dtype_size(v1);
        sub_1D6310(a1, 3u, dtype_size, v14, 0x3BEA45E214ADDC55LL, v5, 0);
        v7 = *(_QWORD *)(a1 + 832);
      }
    }
    v8 = *(int *)(v7 + 64);
    v9 = get_dtype_size(1);
    sub_1D6310(a1, 4u, v9, v8, 0x3BEA45E214ADDC55LL, v4, 0);
  }
  if ( *(_BYTE *)(a1 + 65) == 5 )
  {
    v16 = *(_DWORD *)(a1 + 52);
    v17 = 8;
    if ( (v16 & 0x1018) != 0x1010 )
    {
      if ( (v16 & 0x1008) == 0 || (v17 = 2, (v16 & 0x1018) == 0x1008) )
        v17 = 4;
    }
    v18 = *(_QWORD *)(a1 + 72);
    v19 = *(_QWORD *)(a1 + 832);
    *(_QWORD *)v21 = 1;
    v20 = _mm_cvtsi32_si128(*(_DWORD *)(v19 + 60));
    v22[0] = 0xFFFFFFFF00000000LL;
    v22[1] = 0;
    *(_QWORD *)&v21[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), v20).m128i_u64[0];
    sub_120A10((__int64)v22, v19, v18, v17, -1, 0);
    sub_1D6450(a1, 12, (unsigned __int8 *)v22, v21, v21);
    sub_11CDA0((__int64)v22);
    sub_11CDA0((__int64)v21);
  }
  v10 = *(_DWORD *)(a1 + 52);
  v11 = 8;
  if ( (v10 & 0x1018) != 0x1010 )
  {
    if ( (v10 & 0x1008) == 0 || (v11 = 2, (v10 & 0x1018) == 0x1008) )
      v11 = 4;
  }
  sub_3F7E20(a1, 0x36u, *(_BYTE *)(a1 + 69), 0x3BEA45E214ADDC55LL, v4, v5, v11);
  return v23 - __readfsqword(0x28u);
}
