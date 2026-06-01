unsigned __int64 __fastcall sub_4110C0(__int64 a1, __int64 a2, __int64 a3, char a4, __int8 a5, double a6, __m128 a7)
{
  __int64 *v9; // rdi
  int v10; // ecx
  __int8 v12[4]; // [rsp+Ch] [rbp-4Ch] BYREF
  __m128i v13; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v12[0] = a5;
  v14 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 2321) )
  {
    v13.m128i_i64[0] = a2;
    v13.m128i_i64[1] = a3;
    if ( a4 )
    {
      sub_40D3B0((__int64 *)(a1 + 1792), &v13, v12, 25, a6, a7);
      v9 = (__int64 *)(a1 + 1896);
      v10 = 27;
    }
    else
    {
      sub_40D3B0((__int64 *)(a1 + 2000), &v13, v12, 29, a6, a7);
      v9 = (__int64 *)(a1 + 2104);
      v10 = 31;
    }
    v13.m128i_i64[0] = a3;
    v13.m128i_i64[1] = a2;
    sub_40D3B0(v9, &v13, v12, v10, a6, a7);
    sub_411050(a1);
  }
  return v14 - __readfsqword(0x28u);
}
