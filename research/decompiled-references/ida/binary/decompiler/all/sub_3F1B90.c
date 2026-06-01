unsigned __int64 __fastcall sub_3F1B90(__int64 a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // edx
  __int64 v4; // rax
  int v5; // r9d
  _QWORD v7[2]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v8[24]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v1 = 8;
  v9 = __readfsqword(0x28u);
  v7[0] = 0xFFFFFFFF00000000LL;
  v2 = *(_DWORD *)(a1 + 52);
  v7[1] = 0;
  v3 = v2 & 0x1018;
  if ( v3 != 4112 )
  {
    if ( (v2 & 0x1008) == 0 || (v1 = 2, v3 == 4104) )
      v1 = 4;
  }
  sub_11E5D0((__int64)v7, *(_QWORD *)(a1 + 832), 1, v1, -1, 0);
  v4 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)v8 = 1;
  *(_QWORD *)&v8[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v7[0])), _mm_cvtsi32_si128(*(_DWORD *)(v4 + 388))).m128i_u64[0];
  sub_1D38D0(a1, 13, (unsigned int)v8, (unsigned int)v7, (unsigned int)v8, v5);
  sub_11A960((__int64)v8);
  sub_11A960((__int64)v7);
  return v9 - __readfsqword(0x28u);
}
