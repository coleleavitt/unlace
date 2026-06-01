__int64 __fastcall sub_21085E0(__int64 a1, const __m128i *a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v9; // rdx
  __m128i v10[3]; // [rsp+0h] [rbp-78h] BYREF
  __m128i v11; // [rsp+30h] [rbp-48h] BYREF
  __int16 v12; // [rsp+50h] [rbp-28h]

  if ( !*(_BYTE *)(a1 + 1884) )
    return sub_21080E0((_DWORD *)a1, nullptr, 1);
  v7 = *(_QWORD *)(a1 + 152);
  v12 = 261;
  v9 = *(_QWORD *)(v7 + 88);
  v11.m128i_i64[1] = *(_QWORD *)(v7 + 96);
  v11.m128i_i64[0] = v9;
  sub_A41580(v10, &v11, a2, 261, a5, a6);
  return sub_21083D0((_DWORD *)a1, (__int64)v10, a3, 1);
}
