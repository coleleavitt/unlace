unsigned __int64 __fastcall sub_3F19D0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(_DWORD *, unsigned int); // rax
  __int64 v4; // rsi
  __int64 v5; // rbx
  __m128i v6; // xmm0
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned __int8 v9; // al
  bool v10; // zf
  __int64 v11; // rdi
  int dtype_size; // eax
  __int64 v13; // rsi
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // rsi
  __int64 v17; // r8
  int v18; // eax
  int v20; // eax
  __int64 v21; // [rsp+8h] [rbp-B8h]
  _DWORD v22[4]; // [rsp+20h] [rbp-A0h] BYREF
  _BYTE v23[12]; // [rsp+30h] [rbp-90h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-80h] BYREF
  __int64 v25; // [rsp+50h] [rbp-70h] BYREF
  int v26; // [rsp+58h] [rbp-68h]
  __int64 v27; // [rsp+60h] [rbp-60h] BYREF
  int v28; // [rsp+68h] [rbp-58h]
  __int64 v29; // [rsp+70h] [rbp-50h] BYREF
  int v30; // [rsp+78h] [rbp-48h]
  unsigned __int64 v31; // [rsp+88h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 832);
  v3 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v2 + 168LL);
  v4 = *(unsigned __int16 *)(a1 + 70);
  if ( v3 == sub_3E59C0 )
  {
    v5 = (int)sub_3E59C0((_DWORD *)v2, v4);
  }
  else
  {
    v20 = v3((_DWORD *)v2, v4);
    v2 = *(_QWORD *)(a1 + 832);
    v5 = v20;
  }
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 80));
  v7 = *(_QWORD *)(v2 + 4464);
  v22[0] = 1;
  *(_QWORD *)&v22[1] = _mm_unpacklo_epi32(v6, _mm_cvtsi32_si128(v5)).m128i_u64[0];
  if ( !v7 )
    sub_3E6800(*(double *)v6.m128i_i64, v2, v4);
  v8 = *(_DWORD *)(*(_QWORD *)(v2 + 4456) + 4 * v7 - 4);
  *(_QWORD *)v23 = 1;
  *(_QWORD *)(v2 + 4464) = v7 - 1;
  v9 = 2;
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8;
  *(_QWORD *)&v23[4] = _mm_unpacklo_epi32(v6, _mm_cvtsi32_si128(v8)).m128i_u64[0];
  if ( v10 )
    v9 = 7;
  sub_3E9CF0(a1, 1LL << (~(unsigned __int8)*(_DWORD *)(a1 + 112) & 0x1F), v9, v8);
  v11 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    v11 = 7;
  dtype_size = get_dtype_size(v11);
  sub_1D2710(a1, 0x14u, dtype_size, v5, *(int *)&v23[8], *(int *)&v23[8], 0);
  v13 = *(_QWORD *)(a1 + 832);
  v14 = *(_QWORD *)(a1 + 40);
  v24[1] = 0;
  v24[0] = 0xFFFFFFFF00000000LL;
  sub_11CFD0((__int64)v24, v13, 0, v22[1], v14, 0);
  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL);
  v25 = 0x100000001LL;
  v26 = v15 + 2;
  sub_1D2850(a1, 33, v23, (unsigned __int8 *)v24, (unsigned __int8 *)&v25);
  v27 = 0x100000001LL;
  v28 = v15 + 1;
  sub_1D2850(a1, 32, v23, (unsigned __int8 *)v24, (unsigned __int8 *)&v27);
  v16 = *(_QWORD *)(a1 + 832);
  v17 = *(_QWORD *)(a1 + 40);
  v30 = v15;
  v29 = 0x100000001LL;
  sub_11CFD0((__int64)v24, v16, 0, 1, v17, 0);
  sub_1D2850(a1, 4, (unsigned __int8 *)v24, nullptr, (unsigned __int8 *)&v29);
  v21 = *(int *)(*(_QWORD *)(a1 + 832) + 480LL);
  v18 = get_dtype_size(0);
  sub_1D2710(a1, 4u, v18, v21, 0x3BEA45E214ADDC55LL, v15 + 3, 0);
  sub_119360((__int64)&v29);
  sub_119360((__int64)&v27);
  sub_119360((__int64)&v25);
  sub_119360((__int64)v24);
  sub_119360((__int64)v23);
  sub_119360((__int64)v22);
  return v31 - __readfsqword(0x28u);
}
