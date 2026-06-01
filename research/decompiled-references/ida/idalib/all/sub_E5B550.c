__int64 __fastcall sub_E5B550(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  size_t v4; // rax
  unsigned __int16 v5; // ax
  size_t v6; // rax
  char v7; // r12
  size_t v8; // rax
  __int64 result; // rax
  size_t v10; // rax
  __int64 v11; // [rsp+8h] [rbp-60h] BYREF
  __m128 v12; // [rsp+10h] [rbp-58h] BYREF

  v2 = a1 + 1048;
  sub_E5B230(a1, a2);
  v3 = *(_DWORD *)(a2 + 64);
  v12.m128_i16[0] = 3;
  v12.m128_u64[1] = v3 & 0xFFFFF;
  v4 = j__strlen("depth");
  sub_222AB70(a1 + 1048, "depth", v4);
  sub_222CAC0(a1 + 1048, &v12);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v12);
  v5 = *(_WORD *)(a2 + 66);
  v12.m128_i16[0] = 3;
  v12.m128_u64[1] = v5 >> 4;
  v6 = j__strlen("index");
  sub_222AB70(a1 + 1048, "index", v6);
  sub_222CAC0(a1 + 1048, &v12);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v12);
  v7 = *(_BYTE *)(a2 + 80);
  v8 = j__strlen("isParameterPack");
  result = sub_E59B90(a1, (__int64)"isParameterPack", v8, (v7 & 2) != 0);
  if ( (*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v11 = a1;
    v12 = _mm_loadh_ps((const double *)&v11);
    v10 = j__strlen("defaultArg");
    sub_222AB70(v2, "defaultArg", v10);
    sub_22299F0(v2);
    sub_E6BC30(&v12);
    sub_2229B60(v2);
    return sub_2229BF0(v2);
  }
  return result;
}
