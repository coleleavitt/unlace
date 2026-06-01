__int64 __fastcall sub_2CABB0(__int64 a1, __int128 *a2, __int64 a3, int a4, char a5, char a6, double a7)
{
  __int128 *v7; // rbx
  __int64 v9; // r15
  unsigned int v13; // eax
  unsigned int v14; // edx
  __m128i v15; // xmm0
  _DWORD *v16; // rdi
  __int64 (*v17)(void); // rax
  int v18; // eax
  int v20; // eax
  __m128i v21; // xmm0
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // [rsp+8h] [rbp-70h]
  unsigned int v26; // [rsp+14h] [rbp-64h] BYREF
  unsigned int v27; // [rsp+18h] [rbp-60h] BYREF
  unsigned int v28; // [rsp+1Ch] [rbp-5Ch] BYREF
  _DWORD v29[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( !a3 )
    return -1;
  v7 = a2;
  if ( !a2 )
    v7 = &xmmword_8CCB50;
  v9 = *(_QWORD *)(a3 + 24);
  v13 = sub_2CA480((_DWORD *)(*(_QWORD *)(a1 + 728) + 16LL), v9, a4, (int *)&v26, (int *)&v27, &v28, a7);
  v14 = v26;
  v15 = _mm_cvtsi32_si128(v13);
  *(_QWORD *)v7 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), v15).m128i_u64[0];
  v16 = *(_DWORD **)(a1 + 728);
  v17 = *(__int64 (**)(void))(*(_QWORD *)v16 + 104LL);
  if ( (char *)v17 == (char *)hv_hexplace_gen_t__::vfunc_13 )
  {
    v18 = v16[9];
  }
  else
  {
    v25 = v14;
    v18 = v17();
    v15 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v15));
    v14 = v25;
  }
  if ( (unsigned int)(v18 - 2) > 2 )
  {
    if ( v14 == 1 )
    {
      v9 += (int)(v27 * *(_DWORD *)(*(_QWORD *)(a1 + 728) + 24LL));
      if ( (unsigned __int8)is_mapped(v9) )
        goto LABEL_12;
    }
    else
    {
      if ( v14 != 2 )
      {
        if ( a5 )
        {
          sub_2CA3D0(*(_QWORD *)(a1 + 728) + 16LL, v29, v9, *(double *)v15.m128i_i64);
          if ( v29[2] < a4 )
          {
            v24 = *(_QWORD *)(a1 + 728);
            v26 = 2;
            v9 += *(_DWORD *)(v24 + 24) * *(_DWORD *)(v24 + 28) - 1;
          }
        }
        goto LABEL_10;
      }
      v20 = nbits(v9);
      v21 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v15));
      v22 = v20 + 14;
      v23 = v20 + 7;
      if ( v23 >= 0 )
        v22 = v23;
      v9 += _mm_cvtsi128_si32(v21) / (v22 >> 3);
      if ( (unsigned __int8)is_mapped(v9) )
        goto LABEL_12;
    }
LABEL_11:
    if ( a6 )
      goto LABEL_12;
    return -1;
  }
LABEL_10:
  if ( !(unsigned __int8)is_mapped(v9) )
    goto LABEL_11;
LABEL_12:
  *((_QWORD *)v7 + 1) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), _mm_cvtsi32_si128(v28)).m128i_u64[0];
  return v9;
}
