__int64 __fastcall sub_368670(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  _QWORD v5[3]; // [rsp+0h] [rbp-88h] BYREF
  __int16 v6; // [rsp+18h] [rbp-70h]
  __m128i si128; // [rsp+1Ch] [rbp-6Ch]
  __int64 v8; // [rsp+30h] [rbp-58h]
  int v9; // [rsp+38h] [rbp-50h]
  __int64 v10; // [rsp+40h] [rbp-48h]
  int v11; // [rsp+48h] [rbp-40h]
  __int64 v12; // [rsp+50h] [rbp-38h]
  int v13; // [rsp+58h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  __int64 v16; // [rsp+70h] [rbp-18h]
  unsigned __int64 v17; // [rsp+78h] [rbp-10h]

  v2 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8));
  v3 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 40));
  v17 = __readfsqword(0x28u);
  v5[1] = 512;
  v8 = 0;
  v5[0] = _mm_unpacklo_epi32(v2, v3).m128i_u64[0];
  v5[2] = 0xFFFFFFFFLL;
  v6 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23836A0);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)add_func_ex((int)v5);
  return 0;
}

