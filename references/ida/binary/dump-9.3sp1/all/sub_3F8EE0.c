unsigned __int64 __fastcall sub_3F8EE0(__int64 a1)
{
  int v1; // r13d
  __int64 v3; // rdi
  int v4; // eax
  int v5; // edx
  unsigned __int8 v6; // r10
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // r9
  __int64 v12; // rsi
  unsigned __int8 v14[16]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v15[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v1 = 8;
  v3 = a1 + 24;
  v4 = *(_DWORD *)(a1 + 52);
  v16 = __readfsqword(0x28u);
  v5 = v4 & 0x1018;
  if ( v5 != 4112 )
  {
    if ( (v4 & 0x1008) == 0 || (v1 = 2, v5 == 4104) )
      v1 = 4;
  }
  v7 = sub_3ECD50(v3);
  v8 = *(_QWORD *)(a1 + 832);
  v9 = *(int *)(v8 + 60);
  v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v1), _mm_cvtsi32_si128(v9)).m128i_u64[0];
  sub_3F7E20(a1, 2u, v6, *(int *)(v8 + 56), v9, v11, v1);
  v12 = *(_QWORD *)(a1 + 832);
  *(_DWORD *)v14 = 1;
  *(_QWORD *)&v14[4] = v10;
  v15[0] = 0xFFFFFFFF00000000LL;
  v15[1] = 0;
  sub_120A10((__int64)v15, v12, v7, v1, -1, 0);
  sub_1D6450(a1, 12, (unsigned __int8 *)v15, v14, v14);
  sub_11CDA0((__int64)v15);
  sub_11CDA0((__int64)v14);
  return v16 - __readfsqword(0x28u);
}
