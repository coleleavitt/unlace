unsigned __int64 __fastcall sub_3FC6F0(__int64 a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // edx
  __int64 v4; // rax
  _QWORD v6[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 v7[24]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v1 = 8;
  v8 = __readfsqword(0x28u);
  v6[0] = 0xFFFFFFFF00000000LL;
  v2 = *(_DWORD *)(a1 + 52);
  v6[1] = 0;
  v3 = v2 & 0x1018;
  if ( v3 != 4112 )
  {
    if ( (v2 & 0x1008) == 0 || (v1 = 2, v3 == 4104) )
      v1 = 4;
  }
  sub_120A10((__int64)v6, *(_QWORD *)(a1 + 832), 1, v1, -1, 0);
  v4 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v7 = 1;
  *(_QWORD *)&v7[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v6[0])), _mm_cvtsi32_si128(*(_DWORD *)(v4 + 388))).m128i_u64[0];
  sub_1D6450(a1, 13, v7, (unsigned __int8 *)v6, v7);
  sub_11CDA0((__int64)v7);
  sub_11CDA0((__int64)v6);
  return v8 - __readfsqword(0x28u);
}
