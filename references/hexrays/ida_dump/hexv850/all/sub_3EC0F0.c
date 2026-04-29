unsigned __int64 __fastcall sub_3EC0F0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  int v5; // ecx
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 v9[24]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 832);
  v10 = __readfsqword(0x28u);
  v8[0] = -4294967290LL;
  v5 = 8 * *(_DWORD *)(v3 + 84);
  if ( (unsigned __int64)v5 <= 0x3F )
    a2 &= ~(-1LL << v5);
  v8[1] = a2;
  sub_117D90((char *)v8, v3);
  v6 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v9 = 1;
  *(_QWORD *)&v9[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v6 + 80)), _mm_cvtsi32_si128(a3)).m128i_u64[0];
  sub_1D1610(a1, 4, (unsigned __int8 *)v8, nullptr, v9);
  sub_1181E0((__int64)v9);
  sub_1181E0((__int64)v8);
  return v10 - __readfsqword(0x28u);
}
