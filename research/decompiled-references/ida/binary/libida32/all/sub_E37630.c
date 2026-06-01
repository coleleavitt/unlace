__int64 __fastcall sub_E37630(__int64 a1, __int64 a2)
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
  sub_E374F0(a1, a2);
  v4 = *(_BYTE *)(a2 + 60);
  v5 = "class";
  if ( (v4 & 1) != 0 && (v4 & 2) == 0 )
    v5 = "typename";
  sub_E35B80((__int64)&v16, v5);
  v6 = j__strlen("tagUsed");
  sub_2206E30(v3, "tagUsed", v6);
  sub_2208D80(v3, &v16);
  sub_2205EB0(v3);
  sub_2207560(&v16);
  v7 = sub_B9A850(a2);
  v16.m128_i16[0] = 3;
  v16.m128_u64[1] = v7;
  v8 = j__strlen("depth");
  sub_2206E30(v3, "depth", v8);
  sub_2208D80(v3, &v16);
  sub_2205EB0(v3);
  sub_2207560(&v16);
  v9 = sub_B9A870(a2);
  v16.m128_i16[0] = 3;
  v16.m128_u64[1] = v9;
  v10 = j__strlen("index");
  sub_2206E30(v3, "index", v10);
  sub_2208D80(v3, &v16);
  sub_2205EB0(v3);
  sub_2207560(&v16);
  v11 = sub_B9A890(a2);
  v12 = j__strlen("isParameterPack");
  result = sub_E35E50(a1, (__int64)"isParameterPack", v12, v11);
  if ( (*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v15 = a1;
    v16 = _mm_loadh_ps((const double *)&v15);
    v14 = j__strlen("defaultArg");
    sub_2206E30(v3, "defaultArg", v14);
    sub_2205CB0(v3);
    sub_E48340(&v16);
    sub_2205E20(v3);
    return sub_2205EB0(v3);
  }
  return result;
}

