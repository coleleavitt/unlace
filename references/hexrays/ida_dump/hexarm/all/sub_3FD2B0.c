__int64 __fastcall sub_3FD2B0(__int64 a1, int a2, __int64 a3, __int64 a4, char a5, __int64 *a6, double a7)
{
  _DWORD *v9; // rax
  unsigned int v10; // edx
  int v11; // ecx
  unsigned int v13; // eax
  unsigned int v14; // r8d
  double v15; // xmm0_8
  unsigned __int8 v16; // al
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rax
  int v24; // [rsp+10h] [rbp-68h]
  int v25; // [rsp+14h] [rbp-64h]
  __int64 v26; // [rsp+18h] [rbp-60h]
  _BYTE v27[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v9 = *(_DWORD **)(a1 + 832);
  v10 = v9[156];
  v11 = v9[157];
  if ( !a2 )
    v10 = v9[155];
  v28 = __readfsqword(0x28u);
  v24 = v11;
  v13 = sub_3FB520(a1, a2, v10, a7);
  if ( v13 == -1 )
    return 0;
  *(_QWORD *)v27 = 1;
  v14 = v13;
  *(_QWORD *)&v15 = _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 84LL)),
                      _mm_cvtsi32_si128(v13)).m128i_u64[0];
  v16 = *(_BYTE *)(a1 + 40LL * a2 + 65) - 2;
  *(double *)&v27[4] = v15;
  if ( v16 <= 2u )
  {
    v25 = v14;
    v18 = sub_3FA2F0(a1, a3, (__int64)v27, a5, v15);
    v19 = v25;
    v26 = v18;
    if ( a4
      && (sub_3F68B0(a1, v25, *(_DWORD *)(a3 + 4), v24),
          v20 = sub_3FA2F0(a1, a4, (__int64)v27, a5, v15),
          v19 = v25,
          (v21 = v20) != 0) )
    {
      if ( v26 )
      {
        *(_DWORD *)(v26 + 4) |= 0x10000u;
        *(_DWORD *)(v20 + 4) |= 0x10000u;
      }
    }
    else
    {
      v21 = v26;
    }
    v22 = sub_3F9F40(a1, a1 + 40LL * a2 + 64, v19, v15);
    if ( a6 )
    {
      if ( !v22 )
        v22 = v21;
      *a6 = v22;
    }
  }
  else if ( *(_BYTE *)a3 != 1 || v14 != *(_DWORD *)(a3 + 8) )
  {
    *(_DWORD *)&v27[4] = *(_DWORD *)(a3 + 4);
    sub_3F8E00(a1, 4u, a3, 0, (__int64)v27, v15);
  }
  sub_11C7E0((__int64)v27);
  return 1;
}
