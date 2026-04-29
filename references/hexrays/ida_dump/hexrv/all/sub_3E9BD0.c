unsigned __int64 __fastcall sub_3E9BD0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  int v5; // ecx
  __int64 v6; // rax
  int v7; // esi
  _QWORD v9[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 v10[24]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 832);
  v11 = __readfsqword(0x28u);
  v9[0] = -4294967290LL;
  v5 = 8 * *(_DWORD *)(v3 + 84);
  if ( (unsigned __int64)v5 <= 0x3F )
    a2 &= ~(-1LL << v5);
  v9[1] = a2;
  sub_118490((char *)v9, v3);
  v6 = *(_QWORD *)(a1 + 832);
  v7 = 9;
  *(_QWORD *)v10 = 1;
  LODWORD(v6) = *(_DWORD *)(v6 + 80);
  *(_QWORD *)&v10[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(a3)).m128i_u64[0];
  if ( (_DWORD)v6 == HIDWORD(v9[0]) )
    v7 = 4;
  sub_1D1DD0(a1, v7, (unsigned __int8 *)v9, nullptr, v10);
  sub_1188E0((__int64)v10);
  sub_1188E0((__int64)v9);
  return v11 - __readfsqword(0x28u);
}
