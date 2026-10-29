__int64 __fastcall sub_1509090(const __m128i *a1, __int64 a2, __m128i a3, __int64 a4, _DWORD *a5, unsigned __int8 a6)
{
  __int8 v8; // al
  __int64 result; // rax
  unsigned __int32 v10; // r14d
  __int64 v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128i *v18; // [rsp+0h] [rbp-68h] BYREF
  __int8 v19; // [rsp+8h] [rbp-60h]
  const __m128i *v20; // [rsp+10h] [rbp-58h]
  int v21; // [rsp+18h] [rbp-50h]
  __int16 v22; // [rsp+1Ch] [rbp-4Ch]
  __int64 (__fastcall *v23)(__int64); // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+30h] [rbp-38h]

  v18 = (__m128i *)&a1[122];
  v8 = a1[122].m128i_i8[0];
  a1[122].m128i_i8[0] = 1;
  v19 = v8;
  v20 = a1;
  v22 = 449;
  v21 = 1507350;
  v23 = sub_146A990;
  v24 = 0;
  v25 = 0;
  if ( (unsigned __int8)sub_156A040(&v18, 1625, a2, 0) )
  {
    result = 1;
  }
  else
  {
    v10 = a1[1].m128i_u32[0];
    v11 = sub_14BDA20((__int64)a1, 0, a6, 0, 0, nullptr, a3);
    v12 = (__int64 *)(sub_14BE680(a1, v11, 3, a3) & 0xFFFFFFFFFFFFFFFELL);
    v13 = sub_19B4A30(a1[6].m128i_i64[0], v12, v10, 0, 0, 0);
    *a5 = a1[1].m128i_i32[0];
    if ( !(unsigned __int8)sub_14808E0((__int64)&v18, v12, v14, v15, v16, v17) )
      *a5 = HIDWORD(v25);
    result = v13;
  }
  v18->m128i_i8[0] = v19;
  return result;
}
