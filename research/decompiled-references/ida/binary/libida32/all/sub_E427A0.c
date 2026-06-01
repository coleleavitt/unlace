__int64 __fastcall sub_E427A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  size_t v5; // rax
  int v6; // eax
  size_t v7; // rax
  unsigned __int16 v8; // ax
  size_t v9; // rax
  char v10; // r14
  size_t v11; // rax
  __int64 result; // rax
  size_t v13; // rax
  __int64 v14; // [rsp+8h] [rbp-80h] BYREF
  __int64 v15; // [rsp+10h] [rbp-78h] BYREF
  __int64 v16; // [rsp+18h] [rbp-70h]
  int v17; // [rsp+20h] [rbp-68h]
  __m128 v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+40h] [rbp-48h]
  int v20; // [rsp+48h] [rbp-40h]

  v2 = a1 + 1048;
  sub_E374F0(a1, a2);
  sub_E3FD20((__int64)&v15, a1, *(_QWORD *)(a2 + 48), 1);
  v18.m128_i16[0] = 7;
  v3 = v15;
  v15 = 0;
  v18.m128_u64[1] = v3;
  v4 = v16;
  v16 = 0;
  v19 = v4;
  LODWORD(v4) = v17;
  v17 = 0;
  v20 = v4;
  v5 = j__strlen("type");
  sub_2206E30(a1 + 1048, "type", v5);
  sub_2208D80(a1 + 1048, &v18);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v18);
  sub_E395A0(&v15);
  v6 = *(_DWORD *)(a2 + 68);
  v18.m128_i16[0] = 3;
  v18.m128_u64[1] = v6 & 0xFFFFF;
  v7 = j__strlen("depth");
  sub_2206E30(a1 + 1048, "depth", v7);
  sub_2208D80(a1 + 1048, &v18);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v18);
  v8 = *(_WORD *)(a2 + 70);
  v18.m128_i16[0] = 3;
  v18.m128_u64[1] = v8 >> 4;
  v9 = j__strlen("index");
  sub_2206E30(a1 + 1048, "index", v9);
  sub_2208D80(a1 + 1048, &v18);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v18);
  v10 = *(_BYTE *)(a2 + 80);
  v11 = j__strlen("isParameterPack");
  result = sub_E35E50(a1, (__int64)"isParameterPack", v11, v10);
  if ( (*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v14 = a1;
    v18 = _mm_loadh_ps((const double *)&v14);
    v13 = j__strlen("defaultArg");
    sub_2206E30(v2, "defaultArg", v13);
    sub_2205CB0(v2);
    sub_E481C0(&v18);
    sub_2205E20(v2);
    return sub_2205EB0(v2);
  }
  return result;
}

