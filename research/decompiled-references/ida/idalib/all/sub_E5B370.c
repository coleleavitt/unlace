__int64 __fastcall sub_E5B370(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // al
  const char *v5; // rsi
  size_t v6; // rax
  unsigned int v7; // eax
  size_t v8; // rax
  unsigned int v9; // eax
  size_t v10; // rax
  char v11; // r14
  size_t v12; // rax
  __int64 result; // rax
  size_t v14; // rax
  __int64 v15; // [rsp+8h] [rbp-60h] BYREF
  __m128 v16; // [rsp+10h] [rbp-58h] BYREF

  v3 = a1 + 1048;
  sub_E5B230(a1, a2);
  v4 = *(_BYTE *)(a2 + 60);
  v5 = "class";
  if ( (v4 & 1) != 0 && (v4 & 2) == 0 )
    v5 = "typename";
  sub_E598C0((__int64)&v16, v5);
  v6 = j__strlen("tagUsed");
  sub_222AB70(v3, "tagUsed", v6);
  sub_222CAC0(v3, &v16);
  sub_2229BF0(v3);
  sub_222B2A0(&v16);
  v7 = sub_BBE590(a2);
  v16.m128_i16[0] = 3;
  v16.m128_u64[1] = v7;
  v8 = j__strlen("depth");
  sub_222AB70(v3, "depth", v8);
  sub_222CAC0(v3, &v16);
  sub_2229BF0(v3);
  sub_222B2A0(&v16);
  v9 = sub_BBE5B0(a2);
  v16.m128_i16[0] = 3;
  v16.m128_u64[1] = v9;
  v10 = j__strlen("index");
  sub_222AB70(v3, "index", v10);
  sub_222CAC0(v3, &v16);
  sub_2229BF0(v3);
  sub_222B2A0(&v16);
  v11 = sub_BBE5D0(a2);
  v12 = j__strlen("isParameterPack");
  result = sub_E59B90(a1, (__int64)"isParameterPack", v12, v11);
  if ( (*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v15 = a1;
    v16 = _mm_loadh_ps((const double *)&v15);
    v14 = j__strlen("defaultArg");
    sub_222AB70(v3, "defaultArg", v14);
    sub_22299F0(v3);
    sub_E6C080(&v16);
    sub_2229B60(v3);
    return sub_2229BF0(v3);
  }
  return result;
}
