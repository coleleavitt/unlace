__int64 __fastcall sub_3EC520(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 *a5, double a6)
{
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(_DWORD *, unsigned int); // rdx
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v19; // edx
  __int64 v20; // rbx
  int v21; // r14d
  unsigned int v22; // r15d
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rax
  __m128i v26; // xmm0
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  char v31; // [rsp+Bh] [rbp-5Dh] BYREF
  int v32; // [rsp+Ch] [rbp-5Ch] BYREF
  _BYTE v33[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v32 = 0;
  if ( a2 != 1 || !(unsigned __int8)sub_3E5AC0(&v32, &v31, *(unsigned __int16 *)(a1 + 48)) )
  {
    v11 = a1 + 40LL * (int)a2;
    if ( *(_BYTE *)(v11 + 65) == 1 )
    {
      v12 = *(_QWORD *)(a1 + 832);
      v13 = *(unsigned __int16 *)(v11 + 70);
      v14 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v12 + 168LL);
      if ( v14 == sub_3E59C0 )
      {
        v15 = sub_3E59C0((_DWORD *)v12, v13);
      }
      else
      {
        v15 = v14((_DWORD *)v12, v13);
        v12 = *(_QWORD *)(a1 + 832);
      }
      v16 = *(_DWORD *)(v12 + 416);
      v17 = *(_DWORD *)(v12 + 448);
      if ( *(_BYTE *)(*(_QWORD *)(v12 + 96) + 145LL) )
      {
        if ( v15 < v17 || v15 > v16 )
          return sub_1D29B0((_QWORD *)a1, a2, a3, a4, a5);
      }
      else if ( v15 < v16 || v15 > v17 )
      {
        return sub_1D29B0((_QWORD *)a1, a2, a3, a4, a5);
      }
      if ( *(_BYTE *)a3 == 1 && *(_DWORD *)(a3 + 8) == v15 )
      {
        v20 = 0;
      }
      else
      {
        v19 = *(_DWORD *)(a3 + 4);
        *(_DWORD *)&v33[8] = v15;
        *(_QWORD *)v33 = 1;
        if ( v19 < 8 )
          v19 = 8;
        *(_DWORD *)&v33[4] = v19;
        v20 = sub_1D2850(a1, 67, (unsigned __int8 *)a3, nullptr, v33);
        sub_119360((__int64)v33);
      }
      if ( a5 )
        *a5 = v20;
      return 1;
    }
    return sub_1D29B0((_QWORD *)a1, a2, a3, a4, a5);
  }
  v21 = v32;
  if ( v32 == -1 )
    return 0;
  if ( *(_BYTE *)a3 == 1 )
  {
    v22 = *(_DWORD *)(a3 + 8);
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 832);
    v25 = *(_QWORD *)(v24 + 4464);
    if ( !v25 )
      sub_3E6800(a6, (__int64)&v32, (__int64)&v31);
    v22 = *(_DWORD *)(*(_QWORD *)(v24 + 4456) + 4 * v25 - 4);
    *(_QWORD *)(v24 + 4464) = v25 - 1;
    v26 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
    *(_DWORD *)v33 = 1;
    *(_QWORD *)&a6 = _mm_unpacklo_epi32(v26, _mm_cvtsi32_si128(v22)).m128i_u64[0];
    *(double *)&v33[4] = a6;
    sub_1D2850(a1, 4, (unsigned __int8 *)a3, nullptr, v33);
    sub_119360((__int64)v33);
  }
  v23 = v21;
  BYTE1(v23) = BYTE1(v21) & 0xEF;
  if ( (unsigned __int8)sub_3EC4B0(a1, v31, v23, v22, 1u, a6) )
  {
    if ( a5 )
      *a5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL);
    return 1;
  }
  if ( *(_BYTE *)a3 != 1 || v22 != *(_DWORD *)(a3 + 8) )
  {
    v27 = *(_QWORD **)(a1 + 832);
    v28 = v27[558];
    v29 = v27[557];
    if ( v27[559] < (unsigned __int64)(v28 + 1) )
    {
      v30 = qvector_reserve(v27 + 557, v29, v28 + 1, 4);
      v27[557] = v30;
      v29 = v30;
      v28 = v27[558];
    }
    *(_DWORD *)(v29 + 4 * v28) = v22;
    ++v27[558];
    return 0;
  }
  return 0;
}
