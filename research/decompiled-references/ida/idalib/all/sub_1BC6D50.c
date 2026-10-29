char __fastcall sub_1BC6D50(_BYTE *a1)
{
  char result; // al
  _BYTE *v2; // rbx
  __m128 v3; // xmm1
  __int64 v4; // rax
  __m128i si128; // xmm0
  __int64 v6; // r8
  __int64 v7; // r9
  __m128 v8; // [rsp+0h] [rbp-68h] BYREF
  __m128i v9; // [rsp+10h] [rbp-58h] BYREF
  _BYTE *v10; // [rsp+28h] [rbp-40h]
  char v11; // [rsp+37h] [rbp-31h] BYREF
  _DWORD v12[2]; // [rsp+38h] [rbp-30h] BYREF
  _OWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF

  v10 = a1;
  if ( sub_B75670(a1) )
    return 0;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(sub_B8C330((__int64)v10) + 17448) + 248LL) - 3) > 2 )
    return sub_B75550(v10);
  if ( *(char *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v10 + 32LL))(v10) + 84) >= 0 )
    return 0;
  v2 = v10;
  v12[0] = 0;
  v8.m128_u64[0] = (unsigned __int64)v12;
  v12[1] = 0;
  v11 = 0;
  v3 = _mm_loadh_ps((const double *)v8.m128_u64);
  v8.m128_u64[0] = (unsigned __int64)&v11;
  v9 = (__m128i)v3;
  v8 = _mm_loadh_ps((const double *)v8.m128_u64);
  v4 = sub_B8C330((__int64)v10);
  si128 = _mm_load_si128((const __m128i *)&v8);
  v13[0] = _mm_load_si128(&v9);
  v13[1] = si128;
  sub_AB8C30(v4, (__int64)v2, (void (__fastcall *)(__int64, __int64))sub_1BC6D00, (__int64)v13, v6, v7);
  result = v11;
  if ( !v11 )
    return v12[0] != 0;
  return result;
}
