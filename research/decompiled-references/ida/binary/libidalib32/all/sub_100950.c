__int64 __fastcall sub_100950(__int64 a1, __int128 *a2, __int64 a3, int a4, char a5, char a6)
{
  __int128 *v6; // rbx
  unsigned int v8; // r15d
  unsigned int v12; // eax
  int v13; // r8d
  int v14; // r9d
  unsigned int v15; // edx
  __int64 (__fastcall *v16)(__int64); // rcx
  __m128i v17; // xmm0
  _DWORD *v18; // rdi
  __int64 (*v19)(void); // rax
  int v20; // eax
  int v22; // eax
  __m128i v23; // xmm0
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // [rsp+8h] [rbp-70h]
  unsigned int v28; // [rsp+14h] [rbp-64h] BYREF
  unsigned int v29; // [rsp+18h] [rbp-60h] BYREF
  unsigned int v30; // [rsp+1Ch] [rbp-5Ch] BYREF
  _DWORD v31[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( !a3 )
    return (unsigned int)-1;
  v6 = a2;
  if ( !a2 )
    v6 = &xmmword_251720;
  v8 = *(_DWORD *)(a3 + 16);
  v12 = sub_FFE50((_DWORD *)(*(_QWORD *)(a1 + 752) + 16LL), v8, a4, (int *)&v28, (int *)&v29, &v30);
  v15 = v28;
  v16 = sub_FDF70;
  v17 = _mm_cvtsi32_si128(v12);
  *(_QWORD *)v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), v17).m128i_u64[0];
  v18 = *(_DWORD **)(a1 + 752);
  v19 = *(__int64 (**)(void))(*(_QWORD *)v18 + 104LL);
  if ( (char *)v19 == (char *)sub_FDF70 )
  {
    v20 = v18[9];
  }
  else
  {
    v27 = v15;
    v20 = v19();
    v17 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v17));
    v15 = v27;
  }
  if ( (unsigned int)(v20 - 2) > 2 )
  {
    if ( v15 == 1 )
    {
      v8 += v29 * *(_DWORD *)(*(_QWORD *)(a1 + 752) + 24LL);
      if ( (unsigned __int8)is_mapped() )
        goto LABEL_12;
    }
    else
    {
      if ( v15 != 2 )
      {
        if ( a5 )
        {
          sub_FFDA0(*(_QWORD *)(a1 + 752) + 16LL, v31, v8, (int)v16, v13, v14);
          if ( v31[2] < a4 )
          {
            v26 = *(_QWORD *)(a1 + 752);
            v28 = 2;
            v8 = v8 + *(_DWORD *)(v26 + 24) * *(_DWORD *)(v26 + 28) - 1;
          }
        }
        goto LABEL_10;
      }
      v22 = nbits();
      v23 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v17));
      v24 = v22 + 14;
      v25 = v22 + 7;
      if ( v25 >= 0 )
        v24 = v25;
      v8 += _mm_cvtsi128_si32(v23) / (v24 >> 3);
      if ( (unsigned __int8)is_mapped() )
        goto LABEL_12;
    }
LABEL_11:
    if ( a6 )
      goto LABEL_12;
    return (unsigned int)-1;
  }
LABEL_10:
  if ( !(unsigned __int8)is_mapped() )
    goto LABEL_11;
LABEL_12:
  *((_QWORD *)v6 + 1) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), _mm_cvtsi32_si128(v30)).m128i_u64[0];
  return v8;
}

