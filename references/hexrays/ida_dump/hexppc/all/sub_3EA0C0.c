unsigned __int64 __fastcall sub_3EA0C0(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __m128i v5; // xmm1
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int8 v9[16]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v10[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 52) & 8) != 0 )
  {
    if ( *(_BYTE *)(a1 + 65) != 7 )
      goto LABEL_3;
    v7 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
    if ( v7 != v8 )
    {
      v8 &= v7;
      if ( v7 == -1 )
        v8 = -1;
    }
    if ( sub_CC530(0xBC1u, v8) != 1 )
    {
LABEL_3:
      v1 = *(_QWORD *)(a1 + 40);
      v2 = *(_QWORD *)(a1 + 832);
      v3 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 50);
      *(_QWORD *)v9 = 1;
      v4 = *(_DWORD *)(v2 + 84);
      v10[0] = 0xFFFFFFFF00000000LL;
      v5 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 452));
      v10[1] = 0;
      *(_QWORD *)&v9[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), v5).m128i_u64[0];
      sub_11CFD0((__int64)v10, v2, v3, v4, v1, 0);
      sub_1D2850(a1, 3, (unsigned __int8 *)v10, nullptr, v9);
      sub_119360((__int64)v10);
      sub_119360((__int64)v9);
    }
  }
  return v11 - __readfsqword(0x28u);
}
